#include <iostream>

using namespace std;

bool estaEnElDiccionario(char &letra)
{
    bool ans = false;
    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z'))
        ans = true;
    return ans;
}

int main()
{
    string word;
    while (getline(cin, word))
    {
        int flag = 0, cont = 0;
        for (int i = 0; i < word.length(); i++)
        {
            if (estaEnElDiccionario(word[i]))
                flag = 1;
            else
            {
                cont += flag;
                flag = 0;
            }
        }
        cont += flag;
        cout << cont << endl;
    }
    return 0;
}