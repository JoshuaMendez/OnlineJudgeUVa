#include <iostream>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    cout << "Lumberjacks:" << endl;
    for (int k = 1; k <= cases; k++)
    {
        int a, b, c, d, e, f, g, h, i, j;
        cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
        if ((a > b && b > c && c > d && d > e && e > f && f > g && g > h && h > i && i > j) || (a < b && b < c && c < d && d < e && e < f && f < g && g < h && h < i && i < j))
            cout << "Ordered" << endl;
        else
        {
            cout << "Unordered" << endl;
        }
    }
    return 0;
}