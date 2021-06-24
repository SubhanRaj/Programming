import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';

class MyDrawer extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Drawer(
      child: Container(
        color: Colors.deepPurple,
        child: ListView(
          padding: EdgeInsets.zero,
          children: [
            DrawerHeader(
              padding: EdgeInsets.zero,
              child: UserAccountsDrawerHeader(
                margin: EdgeInsets.zero,
                accountName: Text("Subhan"),
                accountEmail: Text("shubhanraj2002@gmail.com"),
                currentAccountPicture: CircleAvatar(
                    backgroundImage:
                        AssetImage("assets/images/MyPortrait.JPG")),
              ),
            ),
            ListTile(
              leading: Icon(
                CupertinoIcons.home,
                color: Colors.white,
              ),
              title: Text(
                "Home",
                textScaleFactor: 1.5,
                style: (TextStyle(
                  color: Colors.white,
                )),
              ),
            ),
            ListTile(
              leading: Icon(
                CupertinoIcons.profile_circled,
                color: Colors.white,
              ),
              title: Text(
                "About Me",
                textScaleFactor: 1.5,
                style: (TextStyle(
                  color: Colors.white,
                )),
              ),
            ),
            ListTile(
              leading: Icon(
                CupertinoIcons.mail,
                color: Colors.white,
              ),
              title: Text(
                "Connect With Me",
                textScaleFactor: 1.5,
                style: (TextStyle(
                  color: Colors.white,
                )),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
