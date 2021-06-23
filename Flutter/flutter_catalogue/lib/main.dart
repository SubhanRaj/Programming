import 'package:flutter/material.dart';
import 'package:flutter_catalogue/pages/home_page.dart';
import 'package:flutter_catalogue/pages/login_page.dart';
import 'package:google_fonts/google_fonts.dart';
import 'package:flutter_catalogue/utils/routes.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    // double pi = 3.14;
    // num sum = 65+89.09-2.5;
    // const pi = 3.14;

    return MaterialApp(
        themeMode: ThemeMode.system,
        theme: ThemeData(
          primarySwatch: Colors.deepPurple,
          fontFamily: GoogleFonts.lato().fontFamily,
        ),
        darkTheme: ThemeData(
          brightness: Brightness.dark,
        ),
         initialRoute: "/",
        routes: {
          "/": (context) => LoginPage(),
          MyRoutes.homeRoute: (context) => HomePage(),
          MyRoutes.loginRoute: (context) => LoginPage(),
        });
  }
}
