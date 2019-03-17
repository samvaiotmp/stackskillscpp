#include<iostream>
using namespace std;

int a = 10;

namespace space {
    int a = 20;
}

int main(int argc, char const *argv[])
{
    cout << "Hello World !!!"<<"\n";
    cout << "global a: " << a << "\n";
    cout << "space a: " << space::a << "\n";
    return 0;
}
