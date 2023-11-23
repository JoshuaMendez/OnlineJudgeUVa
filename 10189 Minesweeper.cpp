#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> mines;

char esquinaSupIzq(int i, int j)
{
    char ans;
    if (mines[i][j] != '*')
    {
        int intAns = 0;
        if (mines[i + 1][j] == '*')
            intAns++;
        if (mines[i][j + 1] == '*')
            intAns++;
        if (mines[i + 1][j + 1] == '*')
            intAns++;
        ans = '0' + intAns;
    }
    else
        ans = '*';
    return ans;
}

char esquinaSupDer(int i, int j)
{
    char ans;
    if (mines[i][j] != '*')
    {
        int intAns = 0;
        if (mines[i][j - 1] == '*')
            intAns++;
        if (mines[i + 1][j - 1] == '*')
            intAns++;
        if (mines[i + 1][j] == '*')
            intAns++;
        ans = '0' + intAns;
    }
    else
        ans = '*';
    return ans;
}

char esquinaInfIzq(int i, int j)
{
    char ans;
    if (mines[i][j] != '*')
    {
        int intAns = 0;
        if (mines[i - 1][j] == '*')
            intAns++;
        if (mines[i][j + 1] == '*')
            intAns++;
        if (mines[i - 1][j + 1] == '*')
            intAns++;
        ans = '0' + intAns;
    }
    else
        ans = '*';
    return ans;
}

char esquinaInfDer(int i, int j)
{
    char ans;
    if (mines[i][j] != '*')
    {
        int intAns = 0;
        if (mines[i][j - 1] == '*')
            intAns++;
        if (mines[i - 1][j] == '*')
            intAns++;
        if (mines[i - 1][j - 1] == '*')
            intAns++;
        ans = '0' + intAns;
    }
    else
        ans = '*';
    return ans;
}

char bordeSup(int i, int j)
{
    char ans;
    if (mines[i][j] != '*')
    {
        int intAns = 0;
        if (mines[i][j - 1] == '*')
            intAns++;
        if (mines[i + 1][j - 1] == '*')
            intAns++;
        if (mines[i + 1][j] == '*')
            intAns++;
        if (mines[i + 1][j + 1] == '*')
            intAns++;
        if (mines[i][j + 1] == '*')
            intAns++;
        ans = '0' + intAns;
    }
    else
        ans = '*';
    return ans;
}

char bordeIzq(int i, int j)
{
    char ans;
    if (mines[i][j] != '*')
    {
        int intAns = 0;
        if (mines[i - 1][j] == '*')
            intAns++;
        if (mines[i - 1][j + 1] == '*')
            intAns++;
        if (mines[i][j + 1] == '*')
            intAns++;
        if (mines[i + 1][j + 1] == '*')
            intAns++;
        if (mines[i + 1][j] == '*')
            intAns++;
        ans = '0' + intAns;
    }
    else
        ans = '*';
    return ans;
}

char bordeInf(int i, int j)
{
    char ans;
    if (mines[i][j] != '*')
    {
        int intAns = 0;
        if (mines[i][j - 1] == '*')
            intAns++;
        if (mines[i - 1][j - 1] == '*')
            intAns++;
        if (mines[i - 1][j] == '*')
            intAns++;
        if (mines[i - 1][j + 1] == '*')
            intAns++;
        if (mines[i][j + 1] == '*')
            intAns++;
        ans = '0' + intAns;
    }
    else
        ans = '*';
    return ans;
}

char bordeDer(int i, int j)
{
    char ans;
    if (mines[i][j] != '*')
    {
        int intAns = 0;
        if (mines[i - 1][j] == '*')
            intAns++;
        if (mines[i - 1][j - 1] == '*')
            intAns++;
        if (mines[i][j - 1] == '*')
            intAns++;
        if (mines[i + 1][j - 1] == '*')
            intAns++;
        if (mines[i + 1][j] == '*')
            intAns++;
        ans = '0' + intAns;
    }
    else
        ans = '*';
    return ans;
}

char general(int i, int j)
{
    char ans;
    if (mines[i][j] != '*')
    {
        int intAns = 0;
        if (mines[i - 1][j] == '*')
            intAns++;
        if (mines[i - 1][j - 1] == '*')
            intAns++;
        if (mines[i][j - 1] == '*')
            intAns++;
        if (mines[i + 1][j - 1] == '*')
            intAns++;
        if (mines[i + 1][j] == '*')
            intAns++;
        if (mines[i + 1][j + 1] == '*')
            intAns++;
        if (mines[i][j + 1] == '*')
            intAns++;
        if (mines[i - 1][j + 1] == '*')
            intAns++;
        ans = '0' + intAns;
    }
    else
        ans = '*';
    return ans;
}

int main()
{
    int cont = 1;
    int nFilas, nColumnas;
    while (nFilas != 0 && nColumnas != 0)
    {
        mines.clear();
        cin >> nFilas >> nColumnas;
        for (int i = 0; i < nFilas; i++)
        {
            vector<char> newLine;
            string line;
            cin >> line;
            for (int j = 0; j < line.size(); j++)
            {
                newLine.push_back(line[j]);
            }
            mines.push_back(newLine);
        }
        for (int i = 0; i < nFilas; i++)
        {
            for (int j = 0; j < nColumnas; j++)
            {
                // Esquinas
                if (i == 0 && j == 0)
                {
                    mines[i][j] = esquinaSupIzq(i, j);
                }
                else if (i == 0 && j == mines[0].size() - 1)
                {
                    mines[i][j] = esquinaSupDer(i, j);
                }
                else if (i == mines.size() - 1 && j == 0)
                {
                    mines[i][j] = esquinaInfIzq(i, j);
                }
                else if (i == mines.size() - 1 && j == mines[0].size() - 1)
                {
                    mines[i][j] = esquinaInfDer(i, j);
                }

                // Bordes
                else if (i == 0)
                {
                    mines[i][j] = bordeSup(i, j);
                }
                else if (j == 0)
                {
                    mines[i][j] = bordeIzq(i, j);
                }
                else if (i == mines.size() - 1)
                {
                    mines[i][j] = bordeInf(i, j);
                }
                else if (j == mines[0].size() - 1)
                {
                    mines[i][j] = bordeDer(i, j);
                }
                else
                {
                    mines[i][j] = general(i, j);
                }
            }
        }
        if (nFilas != 0 && nColumnas != 0)
        {
            if (cont != 1)
                cout << endl;
            cout << "Field #" << cont << ":" << endl;
            for (int i = 0; i < nFilas; i++)
            {
                for (int j = 0; j < nColumnas; j++)
                {
                    cout << mines[i][j];
                }
                cout << endl;
            }
        }
        cont++;
    }
}
