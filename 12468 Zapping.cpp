#include <iostream>

using namespace std;

int positiveSteps(int &from, int &until)
{
    int i = from, cont = 0;
    while (i != until)
    {
        i = (i + 1) % 100;
        cont++;
    }
    return cont;
}

int negativeSteps(int &from, int &until)
{
    int i = from, cont = 0;
    while (i != until)
    {
        i = (i - 1 + 100) % 100;
        cont++;
    }
    return cont;
}

int main()
{
    int from, until;
    while (cin >> from >> until && (from != -1 && until != -1))
    {
        int minSteps = min(positiveSteps(from, until), negativeSteps(from, until));
        cout << minSteps << endl;
    }

    return 0;
}