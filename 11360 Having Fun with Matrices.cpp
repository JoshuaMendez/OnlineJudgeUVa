#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int iteration = 1;
    while (iteration <= cases)
    {
        int sizeMat;
        cin >> sizeMat;
        vector<vector<int>> mat;

        for (int i = 0; i < sizeMat; i++)
        {
            string line;
            cin >> line;
            vector<int> newLine;
            for (int j = 0; j < sizeMat; j++)
            {
                newLine.push_back(line[j] - 48);
            }
            mat.push_back(newLine);
        }

        int trCases;
        cin >> trCases;
        while (trCases--)
        {
            string tr;
            cin >> tr;

            if (tr == "row")
            {
                int a, b;
                cin >> a >> b;
                a--, b--;
                vector<int> rowA, rowB;
                rowA = mat[a];
                rowB = mat[b];

                mat[a] = rowB;
                mat[b] = rowA;
            }
            else if (tr == "col")
            {
                int a, b;
                cin >> a >> b;
                a--, b--;
                vector<int> colA, colB;

                for (int i = 0; i < mat.size(); i++)
                {
                    for (int j = 0; j < mat[0].size(); j++)
                    {
                        if (j == a)
                        {
                            colA.push_back(mat[i][j]);
                        }
                        else if (j == b)
                        {
                            colB.push_back(mat[i][j]);
                        }
                    }
                }
                for (int i = 0; i < mat.size(); i++)
                {
                    for (int j = 0; j < mat[0].size(); j++)
                    {
                        if (j == a)
                        {
                            mat[i][j] = colB[i];
                        }
                        else if (j == b)
                        {
                            mat[i][j] = colA[i];
                        }
                    }
                }
            }
            else if (tr == "inc")
            {
                for (int i = 0; i < sizeMat; i++)
                {
                    for (int j = 0; j < sizeMat; j++)
                    {
                        if (mat[i][j] == 9)
                            mat[i][j] = 0;
                        else
                        {
                            int valor = mat[i][j];
                            valor = ((valor + 1) % 10);
                            mat[i][j] = valor;
                        }
                    }
                }
            }
            else if (tr == "dec")
            {
                for (int i = 0; i < sizeMat; i++)
                {
                    for (int j = 0; j < sizeMat; j++)
                    {
                        if (mat[i][j] == 0)
                            mat[i][j] = 9;
                        else
                        {
                            int valor = mat[i][j];
                            valor = ((valor - 1) % 10);
                            mat[i][j] = valor;
                        }
                    }
                }
            }
            else if (tr == "transpose")
            {
                vector<vector<int>> copyMat;

                for (int k = 0; k < mat.size(); k++)
                {
                    vector<int> aux;
                    for (int i = 0; i < mat.size(); i++)
                    {
                        for (int j = 0; j < mat[0].size(); j++)
                        {
                            if (j == k)
                            {
                                aux.push_back(mat[i][j]);
                            }
                        }
                    }
                    copyMat.push_back(aux);
                }

                mat = copyMat;
            }
        }
        cout << "Case #" << iteration << endl;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
        cout << endl;
        iteration++;
    }
    return 0;
}