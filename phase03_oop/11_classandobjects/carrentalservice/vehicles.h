#include <iostream>
#include <string>
using namespace std;

class Vehicles {
public:
  string maker;
  string model;
  string year;
  double priceperday;

  void displayDetails() {
    cout << "Vehicles details: \n"
         << "Maker: " << maker << "\n"
         << "Model: " << model << "\n"
         << "Year: " << year << "\n"
         << "Price per day: $" << priceperday << "\n\n";
  }
};