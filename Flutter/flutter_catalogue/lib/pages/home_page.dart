import 'package:flutter/material.dart';
import 'package:flutter_catalogue/models/catalogue.dart';
import 'package:flutter/services.dart';
import 'package:flutter_catalogue/widgets/home_widgets/catalogue_header.dart';
import 'package:flutter_catalogue/widgets/home_widgets/catalogue_list.dart';
import 'package:flutter_catalogue/widgets/themes.dart';
import 'dart:convert';
import 'package:velocity_x/velocity_x.dart';

class HomePage extends StatefulWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  _HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  @override
  void initState() {
    super.initState();
    loadData();
  }

  loadData() async {
    await Future.delayed(Duration(seconds: 3));
    final catalogueJson =
        await rootBundle.loadString("assets/files/catalogue.json");
    final decodedData = jsonDecode(catalogueJson);
    var productsData = decodedData["products"];
    CatalogueModel.items = List.from(productsData)
        .map<Item>((item) => Item.fromMap(item))
        .toList();
    setState(() {});
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: MyTheme.creamColor,
      body: SafeArea(
        child: Container(
          padding: Vx.m32,
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              CatalogueHeader(),
              // ignore: unnecessary_null_comparison
              if (CatalogueModel.items != null &&
                  CatalogueModel.items.isNotEmpty)
                CatalogueList().py16().expand()
              else
                CircularProgressIndicator().centered().expand(),
            ],
          ),
        ),
      ),
    );
  }
}
