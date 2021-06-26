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
              // ignore: unnecessary_null_comparison
              (CatalogueModel.items != null && CatalogueModel.items.isNotEmpty)
                  ? GridView.builder(
                      gridDelegate: SliverGridDelegateWithFixedCrossAxisCount(
                        crossAxisCount: 2,
                        mainAxisSpacing: 20,
                        crossAxisSpacing: 16,
                      ),
                      itemBuilder: (context, index) {
                        final item = CatalogueModel.items[index];
                        return Card(
                          clipBehavior: Clip.antiAlias,
                          shape: RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(10)),
                          child: GridTile(
                            header: Container(
                              child: Text(
                                item.name,
                                style: TextStyle(color: Colors.white),
                              ),
                              padding: const EdgeInsets.all(12),
                              decoration: BoxDecoration(
                                color: Colors.deepPurple,
                              ),
                            ),
                            child: Image.network(item.image),
                            footer: Container(
                              child: Text(
                                item.price.toString(),
                                style: TextStyle(color: Colors.white),
                              ),
                              padding: const EdgeInsets.all(12),
                              decoration: BoxDecoration(
                                color: Colors.black,
                              ),
                            ),
                          ),
                        );
                      },
                      itemCount: CatalogueModel.items.length,
                    )
                  : Center(
                      child: CircularProgressIndicator(),
                    )),
      drawer: MyDrawer(),
    );
  }
}
