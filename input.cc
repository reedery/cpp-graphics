#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Please enter your name: " << endl;
    getline(cin, name);

    cout << "please enter your age: " << endl;
    cin >> age;
    std::string age_str  = std::to_string(age);
    cout << name + " is " + age_str  << endl;
    //cout << age << endl;

    return 0;

}
