#include <iostream>

using namespace std;

int main()
{
    int cases;
    while (cases != 0)
    {
        cin >> cases;
        int x, y;
        cin >> x >> y;
        for (int i = 1; i <= cases; i++)
        {
            int xv, yv;
            cin >> xv >> yv;
            if (x == xv || y == yv)
            {
                cout << "divisa" << endl;
            }
            else
            {
                if (xv > x && yv > y)
                {
                    cout << "NE" << endl;
                }
                else if (xv < x && yv < y)
                {
                    cout << "SO" << endl;
                }
                else if (xv < x && yv > y)
                {
                    cout << "NO" << endl;
                }
                else if (xv > x && yv < y)
                {
                    cout << "SE" << endl;
                }
            }
        }
    }
}