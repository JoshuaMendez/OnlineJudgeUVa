#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N;
    int j = 0;
    while (cin >> N)
    {
        j++;
        int i;
        string tempAbb;
        string tempWord;
        int r = 0;

        vector<string> deck(N, "Empty");

        for (i = 0; i < N; ++i)
        {
            cin >> tempAbb;
            cin >> tempWord;
            int e = 0;

            while (e < tempWord.length())
            {
                if (deck[r] == "Empty")
                {
                    if (e == (tempWord.length() - 1))
                    {
                        deck[r] = tempAbb;
                    }
                    e++;
                }
                r = ((r + 1) % N);
            }
        }
        if (!(j == 1))
            cout << endl;
        for (int z = 0; z < N; ++z)
        {
            cout << deck[z];
            if (z != (N - 1))
            {
                cout << " ";
            }
        }
    }
    return 0;
}