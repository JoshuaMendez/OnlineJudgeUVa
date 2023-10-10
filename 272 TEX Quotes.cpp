#include <iostream>

using namespace std;

int main()
{
    string input;
    bool com = true;

    while (getline(cin, input))
    {
        string temp;

        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == '"' && com == true)
            {
                temp += "``";
                com = false;
            }
            else if (input[i] == '"' && com == false)
            {
                temp += "''";
                com = true;
            }
            if (input[i] != '"')
                temp += input[i];
        }
        cout << temp << endl;
    }
    return 0;
}