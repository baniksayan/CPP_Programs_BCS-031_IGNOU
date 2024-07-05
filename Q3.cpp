// Predict the output, using 2 3 inputs
#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;

    x+=y;
    x-=y;
    x%=y;
    
    cout<<x;
}
// The output would be:
// 2