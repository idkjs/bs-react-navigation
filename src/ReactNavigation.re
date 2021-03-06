module Core = {
  [@bs.module "@react-navigation/core"]
  external stackRouter: ('a, 'b) => ReasonReact.reactElement = "StackRouter";

  [@bs.module "@react-navigation/core"]
  external switchRouter: ('a, 'b) => ReasonReact.reactElement = "SwitchRouter";

  [@bs.module "@react-navigation/core"]
  external createNavigator: ('a, 'b, 'c) => ReasonReact.reactElement = "";

  [@bs.module "@react-navigation/core"]
  external createSwitchNavigator: ('a, 'b, 'c) => ReasonReact.reactElement = "";
};

module Native = {
  [@bs.module "@react-navigation/native"]
  external createAppContainer: 'a => ReasonReact.reactElement = "";
};

module Web = {
  [@bs.module "@react-navigation/web"]
  external createBrowserApp: 'a => ReasonReact.reactElement = "";
};

module Stack = {
  [@bs.module "react-navigation-stack"]
  external stackView: ReasonReact.reactElement = "StackView";
};

module Tab = {
  [@bs.module "react-navigation-tabs"]
  external createBottomTabNavigator: ('a, 'b) => ReasonReact.reactElement = "";

  [@bs.module "react-navigation-tabs"]
  external createMaterialTopTabNavigator: 'a => ReasonReact.reactElement = ""
};

module Switch = {
  [@bs.module "@react-navigation/core"]
  external switchView: ReasonReact.reactElement = "SwitchView";
};

module Drawer = {
  [@bs.module "react-navigation-drawer"]
  external create: ('a, 'b) => ReasonReact.reactElement =
    "createDrawerNavigator";
};
