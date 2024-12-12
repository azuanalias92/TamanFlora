import { useAppContext } from '@src/context';
import { homeStyles } from './Home.style';
import { useSelector } from 'react-redux';
import {
  getHousesData as housesData,
  setHouses,
  useAppDispatch,
} from '@src/store';
import { useCallback, useEffect } from 'react';
import { logger } from '@src/utils';

const useHome = () => {
  const { color, loader, navigation, services } = useAppContext();
  const dispatch = useAppDispatch();

  const data = useSelector(housesData);

  const getHousesData = useCallback(async () => {
    loader.current?.show();
    try {
      const getHouses = await services.getHouses();
      dispatch(setHouses(getHouses));
    } catch (error) {
      logger('Error getHouses>>', error);
    } finally {
      loader.current?.hide();
    }
  }, [loader, services, dispatch]);

  useEffect(() => {
    logger('Calling Use Effect');
    getHousesData();
  }, [getHousesData]);

  return {
    navigation,
    data,
    styles: homeStyles(color),
  };
};

export default useHome;
