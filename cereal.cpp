#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  float metricTon = 35273.92;
  float userOz;
  cout << "Enter weight in ounces: ";
  cin >> userOz;

  float newWeight = userOz / metricTon;
  float amtBoxes = metricTon / userOz;

  cout << "1 box is: " << newWeight << " metric tons." << endl;
  cout << "You need " << amtBoxes << " boxes to have one metric ton." << endl;

}
