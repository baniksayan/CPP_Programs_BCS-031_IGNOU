// Print all the odd numbers from 1 to 100.
#include<iostream>
using namespace std;

int main() {
    cout<<"The Odd Numbers from, 1 to 100 are:"<<endl;
    for(int i=1; i<=100; i++){

        if(i%2==1){
            cout<<" " << i << endl;
        }
    }
    return 0;
}
