#include <iostream>

using namespace std;

int sum(int begin, int end)
{
    int summ = 0;
    for (int i = begin; i <= end; i++)
    {
        if (i % 2 != 0)
            summ += i;
    }

    return summ;
}

int main()
{
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++)
    {
        int begin, end;
        cin >> begin;
        cin >> end;
        cout << "Case " << i << ": " << sum(begin, end) << endl;
    }
    return 0;
}