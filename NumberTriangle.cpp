#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Please enter the number of row: ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}
