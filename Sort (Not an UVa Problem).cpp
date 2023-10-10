#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string palabraFuente;

bool menorQue(string &palabra1, string &palabra2)
{
    bool ans, flag = false;
    int tamanio = min(palabra1.size(), palabra2.size()), seRepiten = 0, i = 0;

    while (i < tamanio && flag == false)
    {
        if (palabraFuente.find(palabra1[i]) == palabraFuente.find(palabra2[i]))
        {
            seRepiten++;
        }
        else
        {
            ans = palabraFuente.find(palabra1[i]) < palabraFuente.find(palabra2[i]);
            flag = true;
        }
        i++;
    }

    if (seRepiten == tamanio)
    {
        ans = palabra1.size() < palabra2.size();
    }

    return ans;
}

int main()
{
    int n, N;
    vector<string> vecPalabras;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin >> palabraFuente;

        cin >> N;
        cin.ignore();

        for (int j = 0; j < N; j++)
        {
            string word;
            cin >> word;
            vecPalabras.push_back(word);
        }

        sort(vecPalabras.begin(), vecPalabras.end(), menorQue);

        if (i != 0)
            cout << endl;
        for (int u = 0; u < vecPalabras.size(); u++)
        {
            cout << vecPalabras[u] << endl;
        }
        cin.ignore();
        vecPalabras.clear();
    }
    return 0;
}