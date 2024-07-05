/* Create a program that prompts the user for their age and
then displays "You are a minor" if the age is less than 18,
or "You are an adult" if the age is 18 or older. */

#include<iostream>
using namespace std;

int main() {
    int age;

    cout<<"Please enter your age: ";
    cin>>age;

    if(age>=18) {
        cout<<"You're an adult.";
    } else {
        cout<<"You're a minor.";
    }

    return 0;
}