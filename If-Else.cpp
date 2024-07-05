#include<iostream>
using namespace std;

int x, y, z;
int main() {

cout<<"Please enter a number: ";
cin>>x;

cout<<"Please enter a 2nd number: ";
cin>>y;

cout<<"Please enter a 3rd number: ";
cin>>z;

if (x>y) {
    cout<<"Greatest of 3 numbers is "<<x<<"."<<endl;
}
if (y>z) {
    cout<<"Greatest of 3 numbers is "<<y<<"."<<endl;
}
else {
    cout<<"Greatest of 3 number is "<<z<<"."<<endl;
}

return 0;
}