#include <iostream>

using namespace std;

int reverse(int x)
{
    int result = 0;
    while (x)
    {
        result*= 10;
        result += (x%10);
        x/=10;
    }
    return result;
}

int main(int argc, char* argv[])
{
    cout << reverse(512);
    return 0;
}