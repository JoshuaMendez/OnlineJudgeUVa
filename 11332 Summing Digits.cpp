#include <iostream>

using namespace std;

int sacarNumero(int numero)
{
    int sumador = 0;
    while (numero > 0)
    {
        sumador += numero % 10;
        numero /= 10;
    }
    return sumador;
}

int main()
{
    int N;
    while (cin >> N)
    {
        int ans = N;
        // cout << "first " << ans << endl;
        while (ans >= 10)
        {
            ans = sacarNumero(ans);
            // cout << "dentro " << ans << endl;
        }
        if (ans != 0)
            cout << ans << endl;
    }
    return 0;
}