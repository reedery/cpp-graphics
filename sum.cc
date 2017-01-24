#include <iostream>
#include <string>
using namespace std;

int main()
{
    double sum = 1.0;
    int i = 1;
    double eps = 10.1;
    
    while(eps > 0.00001)
    {
        i = i+1;
        eps = 1.0/(i*i);
        sum = sum + eps;
        auto str = std::to_string(sum);
        cout << str;    
    }
}




