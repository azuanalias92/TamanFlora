import { StyleSheet } from 'react-native';

import { Palette } from '@src/utils';

export const homeStyles = ({ backgroundColor }: Palette) =>
  StyleSheet.create({
    container: {
      backgroundColor,
      alignItems: 'center',
      flex: 1,
      justifyContent: 'center',
    },
  });
