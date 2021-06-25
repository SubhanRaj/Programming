import 'package:flutter/material.dart';
import 'package:flutter_catalogue/models/catalogue.dart';
import 'package:flutter_catalogue/widgets/drawer.dart';
import 'package:flutter_catalogue/widgets/item_widget.dart';
import 'package:flutter/services.dart';
import 'dart:convert';

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
      appBar: AppBar(
        title: Text(
          "Flutter Catalogue App",
        ),
      ),
      body: Padding(
          padding: const EdgeInsets.all(16.0),
          child:
              (CatalogueModel.items != null && CatalogueModel.items.isNotEmpty)
                  ? ListView.builder(
                      itemCount: CatalogueModel.items.length,
                      itemBuilder: (context, index) => ItemWidget(
                        item: CatalogueModel.items[index],
                      ),
                    )
                  : Center(
                      child: CircularProgressIndicator(),
                    )),
      drawer: MyDrawer(),
    );
  }
}
