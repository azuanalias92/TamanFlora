import React from 'react';
import { Dimensions, FlatList, View } from 'react-native';

import { Text } from '@app/blueprints';

import useHome from './useHome';
import { Icons } from '@src/assets';
import { Icon } from '@src/components';

const HomeScreen = () => {
  const { styles, data } = useHome();

  console.log('data', data);

  // Render each house item in a row
  const renderHouse = ({ item }: any) => (
    <View style={styles.house}>
      <View style={styles.iconContainer}>
        <Icon icon={Icons.ROOF_LEFT_ICONS} style={styles.icon} />
      </View>
      <Text style={styles.houseText}>{item.no}</Text>
    </View>
  );

  return (
    <View style={styles.container}>
      <FlatList
        data={data}
        renderItem={renderHouse}
        //keyExtractor={item => item.id}
        numColumns={2} // Number of houses per row
        contentContainerStyle={styles.floorPlan}
      />
    </View>
  );
};

export default React.memo(HomeScreen);
