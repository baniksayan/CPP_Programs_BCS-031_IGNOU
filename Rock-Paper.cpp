#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  // Declare variables for the user's choice and the computer's choice.
  char user_choice;
  char computer_choice;

  // Get the user's choice.
  cout << "Choose Rock (r), Paper (p), or Scissors (s): ";
  cin >> user_choice;

  // Generate the computer's choice.
  computer_choice = (char)rand() % 3 + 'r';

  // Display the user's and computer's choices.
  cout << "You chose: " << user_choice << endl;
  cout << "The computer chose: " << computer_choice << endl;

  // Determine the winner.
  if (user_choice == computer_choice) {
    cout << "It's a tie!" << endl;
  } else if (user_choice == 'r' && computer_choice == 's') {
    cout << "You win!" << endl;
  } else if (user_choice == 'p' && computer_choice == 'r') {
    cout << "You win!" << endl;
  } else if (user_choice == 's' && computer_choice == 'p') {
    cout << "You win!" << endl;
  } else {
    cout << "The computer wins!" << endl;
  }

  return 0;
}
