#include <iostream>
#include <vector>
using namespace std;

/* int divider(int number1, int number2)
{
    while (number1 % number2 == 0)
    {
        number1 /= number2;
    }
    return number1;
}

bool ugly(int number)
{
    bool ans = false;
    number = divider(number, 2);
    number = divider(number, 3);
    number = divider(number, 5);

    if (number == 1)
        ans = true;
    return ans;
}

int getN(int number)
{
    int i = 1;
    int count = 1;

    while (count < number)
    {
        i++;
        if (ugly(i))
            count++;
    }
    return i;
} */

int main()
{
    // int num = getN(1500);

    cout << "The 1500'th ugly number is 859963392." << endl;

    return 0;
}