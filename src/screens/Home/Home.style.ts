import { Dimensions, StyleSheet } from 'react-native';

import {
  Palette,
  scaled,
  scaledSize,
  scaleHeight,
  scaleWidth,
  screenWidth,
} from '@src/utils';

export const homeStyles = ({ backgroundColor, primaryColor }: Palette) =>
  StyleSheet.create({
    container: {
      backgroundColor: backgroundColor,
      alignItems: 'center',
      flex: 1,
      justifyContent: 'center',
    },
    floorPlan: {
      backgroundColor: backgroundColor,
      flexDirection: 'column',
      flexWrap: 'wrap',
      justifyContent: 'space-around',
      width: screenWidth - scaleWidth(20),
    },
    house: {
      flexDirection: 'row',
      flexWrap: 'wrap',
      justifyContent: 'space-around',
      borderWidth: 1,
      borderColor: 'orange',
    },
    iconContainer: {
      height: scaleHeight(100),
      width: scaleWidth(100),
      alignItems: 'center',
      borderRadius: 8,
      shadowColor: '#000',
      shadowOpacity: 0.2,
      shadowRadius: 8,
      elevation: 5, // For Android shadow effect
    },
    houseText: {
      color: 'white',
      fontSize: 18,
      fontWeight: 'bold',
      transform: [{ rotate: '270deg' }],
      margin: scaledSize(10),
    },
    icon: {
      ...scaled(100),
      tintColor: primaryColor,
    },
  });
