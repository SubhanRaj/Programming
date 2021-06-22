import 'package:flutter/material.dart';
import 'package:flutter_catalogue/home_page.dart';

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
      home: HomePage()
    );
  }
}
