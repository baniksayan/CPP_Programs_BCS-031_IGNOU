/* Write a C++ program that takes an integer as input and prints "Even" if the number is even,
otherwise prints "Odd". */

#include<iostream>
using namespace std;

int main() {
int n;

cout<<"Enter your number: ";
cin>>n;

if(n % 2 == 0) {
    cout<<"Even Number."<<endl;

} else {
    cout<<"Odd Number."<<endl;
}

return 0;

}
