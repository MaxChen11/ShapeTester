#include <iostream>
using namespace std;

class Box {
public:
  double bl, bb, bh;
};

class Pyramid {
public:
  double pl, ph, ps;
};

class Sphere {
public:
  double sr;
};

void box() {
  Box Box1;
  cout << "Type in length of Cube. Numbers only. Decimals can be used" << endl;
  cin >> Box1.bl;
  cout << "Type in breadth of Cube. Numbers only. Decimals can be used" << endl;
  cin >> Box1.bb;
  cout << "Type in height of Cube. Numbers only. Decimals can be used" << endl;
  cin >> Box1.bh;
  double boxSurfaceArea;
  double boxVolume;
  boxSurfaceArea = (Box1.bl * Box1.bb * 2) + (Box1.bb * Box1.bh * 2) + (Box1.bh * Box1.bl * 2);
  boxVolume = Box1.bl * Box1.bb * Box1.bh;
  cout << boxSurfaceArea << " cm²" << endl;
  cout << boxVolume << " cm³"<< endl;
}

void pyramid() {
  Pyramid Py1;
  cout << "Type in the base edge length of Pyramid. Numbers only. Decimals can be used" << endl;
  cin >> Py1.pl;
  cout << "Type in the apex height of Pyramid. Numbers only. Decimals can be used" << endl;
  cin >> Py1.ph;
  cout << "Type in slope height of Pyramid. Numbers only. Decimals can be used" << endl;
  cin >> Py1.ps;
  double pyraSurfaceArea;
  double pyraVolume;
  pyraVolume = (Py1.pl * Py1.pl * Py1.ph) * 1/3;
  pyraSurfaceArea = ((Py1.ps * Py1.pl / 2) * 4) + (Py1.pl * Py1.pl);
  cout << pyraSurfaceArea << " cm²" << endl;
  cout << pyraVolume << " cm³"<< endl;
}

void sphere() {
  Sphere Sp1;
  cout << "Type in radius of sphere. Numbers only. Decimals can be used" << endl;
  cin >> Sp1.sr;
  double spVolume;
  double spSurfaceArea;
  spSurfaceArea = (Sp1.sr * Sp1.sr) * 3.14 * 4;
  spVolume = (Sp1.sr * Sp1.sr * Sp1.sr) * 3.14 * 4 / 3;
  cout << spSurfaceArea << " cm²" << endl;
  cout << spVolume << " cm³"<< endl;
}

int main() {
  char choice;
  cout << "Type 'b' to calculate the volume and surface area of a box" << endl;
  cout << "Type 'p' to calculate the volume and surface area of a rectangular pyramid" << endl;
  cout << "Type 's' to calculate the volume and surface area of a sphere" << endl;
  cin >> choice;
  if (choice == 'b') {
    box();
  } else if (choice == 'p') {
    pyramid();
  } else if (choice == 's') {
    sphere();
  }
}
