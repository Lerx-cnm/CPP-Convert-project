#include <cmath>
#include <iostream>
using namespace std;

int main(){
  double temp = 0;
  string input;
  cout << "Would you like to enter a temperature in Farenheit(f) or Celsius(c)? ";
  cin >> input;
  if (input == "f")
    {
      cout << "Please enter a temperature to convert to celsius: ";
      cin >> temp;
      double temp1;
      temp1 = (temp - 32)/1.8;
      cout << "The temperature is " << round(temp1) << " degrees\n";
    }
  else if (input == "c")
    {
      cout << "Please enter a temperature to convert co farenheit: ";
      cin >> temp;
      double temp1;
      
    }
  else
    {
    }
}
