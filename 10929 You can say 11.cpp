#include <iostream>

using namespace std;

int main()
{
    int number = 1;
    while (number)
    {
        bool isMult = false;
        cin >> number;
        if (number % 11 == 0)
            isMult = true;
        
        if (isMult)
        {
            cout << number << " is a multiple of 11" << endl;
        }
        else
        {
            cout << number << " is not a multiple of 11" << endl;
        }
    }
    return 0;
}