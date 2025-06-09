#include "vehicles.h"

int main() {
  Vehicles vehicle;
  vehicle.maker = "Toyota";
  vehicle.model = "Camry";
  vehicle.year = "2022";
  vehicle.priceperday = 60;
  vehicle.displayDetails();

  Vehicles vehicle2;
  vehicle.maker = "Honda";
  vehicle.model = "Civic";
  vehicle.year = "2023";
  vehicle.priceperday = 55;
  vehicle.displayDetails();
  return 0;
}
