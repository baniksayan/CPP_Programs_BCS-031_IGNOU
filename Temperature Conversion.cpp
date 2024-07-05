/* Write a program that converts temperatures between Fahrenheit and Celsius.
Prompt the user to select the conversion direction and perform the appropriate conversion. */

//C++ program for converting degree Celsius into Fahrenheit and vice versa
#include<iostream>
using namespace std;
int main ()
{
  float fahr, cel;
  char option;
  cout << "Choose from following option:" << endl;
  cout << "1. Celsius to Fahrenheit." << endl;
  cout << "2. Fahrenheit to Celsius." << endl;
  cout << "Enter your choice: ";
  cin >> option;

  switch(option)
  {
    case '1':
      cout << "Enter temperature in Celsius: ";
      cin >> cel;
      fahr = (1.8 * cel) + 32; //conversion formula
      cout << "Temperature in Fahrenheit: " << fahr << endl;
      break;

    case '2':
      cout << "Enter temperature in Fahrenheit: ";
      cin >> fahr;
      cel = (fahr - 32) / 1.8; //conversion formula
      cout << "Temperature in Celsius: " << cel << endl;
      break;

    default:
      cout << "Invalid choice." << endl;
  }

  return 0;
}
