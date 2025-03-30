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
    if(argc >= 2)
        cout << reverse(atoi(argv[1]));
    else
    {
        cout << "Enter a number" << endl;
        int x;
        cin >> x;
        cout << reverse(x) << endl;
    }
    return 0;
}