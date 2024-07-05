/* Design a program that takes a student's percentage score as input and
assigns a letter grade based on the following scale:

90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F
*/
#include<iostream>
using namespace std;

int main() {

    int score;

    cout << "Please enter the Student's Percentage: ";
    cin >> score;

    if (score >= 90 && score <= 100) {
        cout << "The Grade is: A" << endl;
    }
    else if (score >= 80 && score < 90) {
        cout << "The Grade is: B" << endl;
    }
    else if (score >= 70 && score < 80) {
        cout << "The Grade is: C" << endl;
    }
    else if (score >= 60 && score < 70) {
        cout << "The Grade is: D" << endl;
    }
    else if (score < 60) {
        cout << "The Grade is: F" << endl << "Better Luck Next Time!" << endl;
    }
    else {
        cout << "You've entered a wrong value." << endl;
    }

    return 0;
}
