import 'package:flutter/material.dart';
import 'package:flutter_catalogue/pages/home_page.dart';
import 'package:flutter_catalogue/pages/login_page.dart';
import 'package:flutter_catalogue/widgets/themes.dart';
import 'package:flutter_catalogue/utils/routes.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
        themeMode: ThemeMode.system,
        theme: MyTheme.lightTheme(context),
        darkTheme: MyTheme.darkTheme(context),
        initialRoute: "/",
        routes: {
          "/": (context) => HomePage(),
          MyRoutes.homeRoute: (context) => HomePage(),
          MyRoutes.loginRoute: (context) => LoginPage(),
        });
  }
}
