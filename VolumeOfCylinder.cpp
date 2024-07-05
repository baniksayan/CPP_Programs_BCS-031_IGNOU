/* WAP for finding the volume of the cylinder by taking radius and height as input. */

#include <iostream>
using namespace std;

int main() {
  // Declare variables
  float radius, height, volume;

  // Get radius and height from user
  cout << "Enter the radius of the cylinder: ";
  cin >> radius;
  cout << "Enter the height of the cylinder: ";
  cin >> height;

  //Formula: V = π r^2 h
          // V for 'Volume', R for 'Radius' & H for 'Height'. PI stands for, 3.142857

  // Calculate the volume of the cylinder
  volume = 3.142857 * radius * radius * height; 
  
  // Display the volume
  cout << "The volume of the cylinder is: " << volume << endl;

  return 0;
}
