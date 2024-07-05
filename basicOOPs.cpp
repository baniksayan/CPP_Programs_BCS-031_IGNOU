#include <iostream>
#include <cstring>
using namespace std;

class SayanB
{
public:
    string name;
    int age;

    // constructor
    SayanB(string name, int age) : name(name), age(age) {}

    // destructor
    ~SayanB() {}

    void printInfos()
    {
        // printing person's infos
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // object creating
    SayanB sayanBanik("Sayan Banik", 20);

    // printing
    sayanBanik.printInfos();
    return 0;
}
