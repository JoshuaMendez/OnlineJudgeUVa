#include <iostream>
#include <vector>

using namespace std;

int vecMax(vector<int> &relevance)
{
    int ans = relevance[0];
    for (int i = 1; i < relevance.size(); i++)
    {
        if (relevance[i] > ans)
            ans = relevance[i];
    }
    return ans;
}

int main()
{
    int cases;
    cin >> cases;
    cin.ignore();

    for (int i = 1; i <= cases; i++)
    {
        vector<string> websites;
        vector<int> relevance;
        vector<int> pos;

        for (int o = 1; o <= 10; o++)
        {
            string web;
            cin >> web;
            websites.push_back(web);

            int rel;
            cin >> rel;
            relevance.push_back(rel);
        }

        int max = vecMax(relevance);

        for (int j = 0; j < relevance.size(); j++)
        {
            if (relevance[j] == max)
                pos.push_back(j);
        }
        cout << "Case #" << i << ":" << endl;
        for (int h = 0; h < pos.size(); h++)
        {
            cout << websites[pos[h]] << endl;
        }
    }
    return 0;
}