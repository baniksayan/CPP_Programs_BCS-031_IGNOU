/*Write a C++ program to create a matrix class.
Define constructor and destructor for this class.
Also define a method to find the sum of two matrices.*/

#include<iostream>
using namespace std;
class matrix{
    int m,n;
    int **p;
public:
    matrix(int x,int y){
        m=x;n=y;
        p=new int*[m];
        for(int i=0;i<m;i++)
            p[i]=new int[n];
    }
    ~matrix(){
        for(int i=0;i<m;i++)
            delete []p[i];
        delete []p;
    }
    void read(){
        cout<<"Enter the elements of the matrix:\n";
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>p[i][j];
    }
    void display(){
        cout<<"The matrix is:\n";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                cout<<p[i][j]<<" ";
            cout<<endl;
        }
    }
    void add(matrix m1,matrix m2){
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                p[i][j]=m1.p[i][j]+m2.p[i][j];
    }
};
int main(){
    int m,n;
    cout<<"Enter the number of rows and columns of the matrix:\n";
    cin>>m>>n;
    matrix m1(m,n),m2(m,n),m3(m,n);
    cout<<"Enter the first matrix:\n";
    m1.read();
    cout<<"Enter the second matrix:\n";
    m2.read();
    m3.add(m1,m2);
    m3.display();
}
