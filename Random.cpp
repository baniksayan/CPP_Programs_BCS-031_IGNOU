#include<iostream>
using namespace std;
int main(){
    int x ;
    for(int i = 0 ; i < 8 ; i++){
        x = 18;
        x+=(3*i);
        for(int j = 0 ; j < i ; j++){
            cout<<(x)<<" ";
            x-= 3;
        }
        x+=3;
        
        cout<<endl;
    }
}
