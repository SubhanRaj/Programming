void main() {
  int a = 10;
  int b = 20;
  int c = a + b;

  double x = 70.00;
  double y = x + c;

  num d = y + (a * b - c);
  num e = d + (a * b - c);

  String name = "My First Dart Code";
  String check = "10";

  print(a);
  print(a.runtimeType); /* Runtime type gives the type of the variable. */
  print(b);
  print(b.runtimeType);
  print(c);
  print(c.runtimeType);
  print(x);
  print(x.runtimeType);
  print(y);
  print(y.runtimeType);
  print(d);
  print(d.runtimeType);
  print(e);
  print(e.runtimeType);

  print(name);
  print(name.runtimeType);
  print(check == a); /* Compares two objects. */
  print(check == a.toString());
  /* toString() returns a string representation of the object. */

  bool b1 = true;
  bool b2 = false;

  if (c == a + b) {
    print((b1));
  }
  ; /* Prints the value of the variable b1. */
}
