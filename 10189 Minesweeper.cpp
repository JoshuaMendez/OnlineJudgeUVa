#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int nFilas, nColumnas;
    vector<vector<char>> mines;
    while (nFilas != 0 && nColumnas != 0)
    {
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

        vector<vector<char>> result;

        for (int i = 0; i < nFilas; i++)
        {
            for (int j = 0; j < nColumnas; j++)
            {
                int add;
                if (i == 0 && j == 0)
                {
                    if (i + 1 == '*')
                        add++;
                    else if (j + 1 == '*')
                        add++;
                    else if (i + 1 == '*' && j + 1 == '*')
                        add++;
                }
                cout << add << endl;
            }
        }

        cout << "Matriz de Minas:" << endl;
        for (int i = 0; i < nFilas; i++)
        {
            for (int j = 0; j < nColumnas; j++)
            {
                cout << mines[i][j];
            }
            cout << endl;
        }
    }
}
