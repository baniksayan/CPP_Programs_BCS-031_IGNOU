#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Please enter any keywords: ";
    getline(cin, s);

    //sorting
    sort(s.begin(), s.end());
    cout<<"The correct order is: "<<s;

    return 0;
}
