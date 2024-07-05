#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Please Enter The Number: ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
                cout<<((n-j)+i)*3<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
