#include <iostream>
using namespace std;

int main() {
  int amount, notes;
  cout << "Enter the amount: ";
  cin >> amount;
  cout << "The minimum number of notes are: \n";
  notes = amount / 500; // count the number of 500 notes
  if (notes > 0) {
    cout << "notes of \"500\" = " << notes << "\n";
    amount = amount - notes * 500; // subtract the value of 500 notes
  }
  switch (amount) { // use switch statement for the remaining amount
    case 100:
      cout << "notes of \"100\" = 1\n";
      break;
    case 50:
      cout << "notes of \"50\" = 1\n";
      break;
    case 20:
      cout << "notes of \"20\" = 1\n";
      break;
    case 10:
      cout << "notes of \"10\" = 1\n";
      break;
    default:
      cout << "Invalid amount\n";
      break;
  }
  return 0;
}
