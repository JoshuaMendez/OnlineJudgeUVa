#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++)
    {
        int num;
        cin >> num;

        int calc = floor(((((((((num * 567) / 9) + 7492) * 235) / 47) - 498) % 100) / 10));
        if (calc < 0)
            calc *= -1;
        cout << calc << endl;
    }
    return 0;
}