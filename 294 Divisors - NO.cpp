#include <iostream>
#include <algorithm>

using namespace std;

// Error de Tiempo

int main()
{
    int cases;
    cin >> cases;
    for (int q = 1; q <= cases; q++)
    {
        int L, U, divMayor = 0, numMayor;
        cin >> L >> U;
        cin.ignore();
        for (int i = L; i <= U; i++)
        {
            int div = 0;
            // cout << "i " << i << endl;
            int P, D = 0;
            int numMax = max(L, U);
            for (int j = 1; j <= numMax; j++)
            {
                double calc = i % j;
                if (calc == 0)
                    div++;
                // cout << "div " << div << endl;
                // cout << "calc " << calc << endl;
            }
            if (div > divMayor)
            {
                divMayor = div;
                numMayor = i;
            }
        }
        cout << "Between " << L << " and " << U << ", " << numMayor << " has a maximum of " << divMayor << " divisors." << endl;
    }
    return 0;
}