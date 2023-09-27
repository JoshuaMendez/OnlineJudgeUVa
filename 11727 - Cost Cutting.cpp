#include <iostream>
using namespace std;

int main()
{
    int i, v1, v2, v3, ans;
    cin >> i;
    for (int e = 0; e < i; e++)
    {
        cin >> v1;
        cin >> v2;
        cin >> v3;
        if (v1 == v2 && v1 == v3 && v2 == v3)
        {
            ans = v1;
        }
        else if ((v1 > v2 && v1 < v3) || (v1 > v3 && v1 < v2))
        {
            ans = v1;
        }
        else if ((v2 > v1 && v2 < v3) || (v2 > v3 && v2 < v1))
        {
            ans = v2;
        }
        else if ((v3 > v1 && v3 < v2) || (v3 > v2 && v3 < v1))
        {
            ans = v3;
        }
        cout << "Case " << (e + 1) << ": " << ans << endl;
    }

    return 0;
}