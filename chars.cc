#include <iostream>
using namespace std;

int main()
{
    int i;
    char a;

    for (i=60; i<=101; i++)
    {
        a = i;
        cout << a;
    }
    
    cout << endl;
    return 0;

    // same as the following:
    // for (i=60; i <= 101; i++) {cout << char(i) }
}
