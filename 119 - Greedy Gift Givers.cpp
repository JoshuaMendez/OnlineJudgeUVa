#include <iostream>
#include <vector>
#include <string>
using namespace std;

int findPplPos(vector<string> &people, string name)
{
    int pos;
    int endPos;
    for (pos = 0; pos < people.size(); pos++)
    {
        if (name == people[pos])
            endPos = pos;
    }

    return endPos;
}

int negative(int number)
{
    if (number > 0)
        number = (-1 * number);
    return number;
}

int main()
{
    int lim;
    int i;
    int counter = 0;

    while (cin >> lim)
    {
        counter++;

        vector<string> people(lim);
        vector<int> money(lim);

        // Agregar personas
        for (i = 0; i < lim; ++i)
        {
            cin >> people[i];
        }

        // buscar el nombre y por el índice del nombre modificar cuenta bancaria
        for (i = 0; i < lim; ++i)
        {
            string name;
            int e;
            int gives;
            int distributes;
            int calc;

            cin >> name;
            cin >> gives;
            cin >> distributes;

            vector<string> tempReceivers(distributes);
            for (e = 0; e < distributes; ++e)
            {
                string tempName;
                cin >> tempName;
                tempReceivers[e] = tempName;
            }
            if (distributes != 0)
            {
                money[findPplPos(people, name)] += (negative(gives) + (gives % distributes));

                // cout << name << " " << money[findPplPos(people, name)] << endl;

                calc = (gives - (gives % distributes)) / distributes;

                for (e = 0; e < distributes; ++e)
                {
                    money[findPplPos(people, tempReceivers[e])] += calc;
                    // cout << tempReceivers[e] << " recibio " << calc << endl;
                }
            }
        }
        if (!(counter == 1))
            std::cout << endl;
        for (i = 0; i < lim; ++i)
        {
            std::cout << people[i] << " " << money[i] << endl;
        }
    }
    return 0;
}