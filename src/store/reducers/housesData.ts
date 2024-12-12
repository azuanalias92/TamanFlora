import { createSlice, PayloadAction } from '@reduxjs/toolkit';

import { HousesResult } from '@src/services';

type HousesData = {
  houses: HousesResult[];
};

const initialState: HousesData = {
  houses: [],
};

export const housesDataSlice = createSlice({
  initialState,
  name: 'housesData',
  reducers: {
    resetHousesData: () => initialState,
    setHouses: (state, { payload }: PayloadAction<HousesResult[] | []>) => {
      state.houses = payload;
    },
  },
});

export const {
  actions: { resetHousesData, setHouses },
  name: housesDataName,
  reducer: housesData,
} = housesDataSlice;
