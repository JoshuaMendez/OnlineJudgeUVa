#include <iostream>
#include <vector>
#include <stack>
#include <cmath>

using namespace std;

int prime(int num)
{
    int isPrime = 1;
    if (num == 2)
    {
        return 1;
    }
    if (num % 2 == 0)
    {
        return 0;
    }
    int root = sqrt(num);
    for (int i = 3; i <= root && isPrime == 1; i += 2)
    {
        if (num % i == 0)
        {
            isPrime = 0;
        }
    }
    return isPrime;
}

int timesStack(stack<int> stc)
{
    // Se pasa por dato
    int times = 1;
    while (stc.size() != 0)
    {
        times *= stc.top();
        stc.pop();
    }

    return times;
}

int main()
{
    int num;
    while (num != 0)
    {
        vector<vector<int>> matNum;
        vector<stack<int>> vecStc;
        vector<int> toPush;
        stack<int> st;
        cin >> num;
        if (prime(num))
        {
            cout << "0" << endl;
        }
        else
        {
            // una division es exacta si su modulo es == 0
            for (int i = 2; i <= num; i++)
            {
                if (prime(i))
                {
                    if (num % i == 0)
                    {
                        st.push(i);
                        num = num / i;
                        i--;
                    }
                }
            }
            int n = st.size();

            vecStc.push_back(st);
            for (int i = 0; i < n - 1; i++)
            {
                stack<int> empty;
                vecStc.push_back(empty);
            }

            for (int i = 0; i < n - 1; i++)
            {
                while (vecStc[i].size() != 1)
                {
                    vecStc[(i + 1) % n].push(vecStc[i].top());
                    vecStc[i].pop();

                    for (int j = 0; j < n - 1; j++)
                    {
                        toPush.push_back(timesStack(vecStc[(i + j) % n]));
                        cout << "vecStc[(i + j) n]) " << timesStack(vecStc[(i + j) % n]) << endl;
                    }
                    matNum.push_back(toPush);
                }
            }
        }
        for (int i = 0; i < matNum.size(); i++)
        {
            for (int j = 0; j < matNum[i].size(); j++)
            {
                cout << matNum[i][j] << " ";
            }
            cout << endl;
        }
        matNum.clear();
    }
    return 0;
}