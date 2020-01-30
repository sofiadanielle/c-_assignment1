#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int hours;
  //double grossPay;
  double grossPay;
  double payRate = 16.00;
  double netPay;
  double overtime;
  double overtimeNet;

  cout << "How many hours did you work this week?: " << endl;
  cin >> hours;

  if (hours <= 40){
    double grossPay = hours * payRate;
    double netPay = grossPay - (grossPay * .25) - 10;

    cout << "Your gross pay is: $" << grossPay << "." << endl;
    cout << "Your net pay, after tax and insurance, is: $" << netPay << "." << endl;
  } else if (hours > 40){
    double grossPay = hours * payRate;
    double overtime = ((hours - 40) * 24);
    double overtimeNet = grossPay + overtime - ((grossPay + overtime) * .25) - 10;

    cout << "Your gross pay is: $ " << grossPay + overtime << "." << endl;
    cout << "Your net pay, after tax and insurance, is: $" << overtimeNet << "." << endl;
  }
}
