import React from 'react';
import {
  BottomTabNavigationOptions,
  createBottomTabNavigator,
} from '@react-navigation/bottom-tabs';
import { SettingScreen, HomeScreen } from '@src/screens';
import { Icons } from '@src/assets';
import { Icon } from '@src/components';
import useNewsList from '@src/screens/NewsList/useNewsList';

type AppTabParamList = {
  Home: undefined;
  Settings: undefined;
};

const Tab = createBottomTabNavigator<AppTabParamList>();

const screenOptions =
  (styles: any) =>
  ({
    route,
  }: {
    route: { name: keyof AppTabParamList };
  }): BottomTabNavigationOptions => ({
    tabBarIcon: ({ focused }) => {
      let iconSource: any;

      if (route.name === 'Home') {
        iconSource = Icons.HOME_ICONS;
      } else if (route.name === 'Settings') {
        iconSource = Icons.SETTINGS_ICONS;
      } else {
        iconSource = Icons.DEBUG_ICONS; // Fallback or for custom routes
      }

      return <Icon icon={iconSource} style={styles.debugIcon} />;
    },
  });

export const AppTabs = () => {
  const { styles } = useNewsList();

  return (
    <Tab.Navigator screenOptions={screenOptions(styles)}>
      <Tab.Screen name="Home" component={HomeScreen} />
      <Tab.Screen name="Settings" component={SettingScreen} />
    </Tab.Navigator>
  );
};
