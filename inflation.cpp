#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  double cost;
  int years;
  double rate;
  double fractionRate;
  int i;

  cout << "What is the cost of the item? : $";
  cin >> cost;
  cout << "How many years from now will the item be purchased?: ";
  cin >> years;
  cout << "What is the rate of inflation? (enter as percentage!): ";
  cin >> rate;

  //convert inflation percentage to fraction
  fractionRate = rate / 100;

  // inflation calculation
  for (i = 0; i < years; ++i){
    cost += (cost * fractionRate);
  }

  cout << "The price after " << years << " years will be: $" << cost << endl;

  return 0;
}
