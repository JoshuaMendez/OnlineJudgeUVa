#include <iostream>
#include <vector>
// #include <algorithm>

using namespace std;

int main()
{
    string word;
    int calc, cont = 0;
    bool flag = false;
    vector<string> greets = {"HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE"};
    vector<string> lang = {"ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN"};

    while (flag == false)
    {
        cont++;
        cin >> word;
        vector<string>::iterator it = find(greets.begin(), greets.end(), word);
        calc = it - greets.begin();
        if (word == "#")
            flag = true;
        else if (calc == greets.size())
            cout << "Case " << cont << ": " << "UNKNOWN" << endl;
        else if (calc < greets.size())
            cout << "Case " << cont << ": " << lang[calc] << endl;
    }
    return 0;
}