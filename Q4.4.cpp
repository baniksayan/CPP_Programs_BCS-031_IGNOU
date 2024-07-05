// Predict The Output
#include<iostream>
using namespace std;
int main(){
    int test = 0;
    cout << "First character " << '1' << endl;
    cout << "Second character " << (test ? 3 : '1') << endl;
    return 0;
}

// The Output Would Be:
// .First character 1
// .Second character 49


/* Explanations->

In the second cout statement,
the ternary operator is used: (test ? 3 : '1')
Here, since test is initialized to 0, which is considered as false in C++,
the ternary operator will evaluate to the value '1'
(which has an ASCII value of 49).
So, the output will be: Second character 49.

*/
