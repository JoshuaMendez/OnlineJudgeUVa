#include <iostream>

using namespace std;

int main()
{
    string input;
    while (getline(cin, input))
    {
        string temp;
        for (int i = 0; i < input.length(); i++)
        {
            temp += (input[i] - 7);
        }
        cout << temp << endl;
    }
    return 0;
}