#include <stdio.h>

int main(int argc, char const *argv[])
{
  float  fuelUsed,consumption,fuelPrice, tripCost;
  int distance;

  printf("What is the distance of the trip: \n");
  scanf("%d", &distance);

  printf("What is the fuel price: \n");
  scanf("%f", &fuelPrice);

  printf("What is the consumption of the vehicle: (in Km/L\n");
  scanf("%f", &consumption);

  fuelUsed = distance*consumption;

  tripCost = (fuelUsed*fuelPrice);

  printf("The cost of the trip is: %.1f\n",fuelUsed);

  printf("The total fuel used is: %.1f\n",tripCost);

  return 0;
}
