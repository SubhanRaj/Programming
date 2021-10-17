import 'package:flutter/material.dart';

void main() {
  // We create a main function that will run our app
  runApp(const MyApp()); // We call the runApp function and pass in our app
}

class MyApp extends StatelessWidget {
  // We create a class that extends the StatelessWidget
  const MyApp({Key? key}) : super(key: key);

  @override // We override the build method
  Widget build(BuildContext context) {
    // We create a build method that will return a widget
    return MaterialApp(
        // We create a MaterialApp widget
        title: "Learning Flutter: My App", // We set the title of the app
        home: Scaffold(
          // We create a Scaffold widget
          appBar: AppBar(
            // We create an AppBar widget
            title: const Text(
                "Learning Flutter: My App"), // We set the title of the app bar
          ),
          body: const Center(
              child: Text(
                  "Hello World")), // We create a Center widget that contains a Text widget
        ));
  }
}
