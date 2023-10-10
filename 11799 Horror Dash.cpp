#include <iostream>
#include <vector>
using namespace std;

int maxInVec(vector<int> &numbers)
{
    int max = numbers[0];
    for (int e = 0; e < numbers.size(); e++)
    {
        if (numbers[e] > max)
            max = numbers[e];
    }
    return max;
}

int main()
{
    vector<int> numbers;
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int ite;
        cin >> ite;
        for (int j = 0; j < ite; j++)
        {
            int temp;
            cin >> temp;
            numbers.push_back(temp);
        }
        cout << "Case " << (i + 1) << ": " << maxInVec(numbers) << endl;
        numbers.clear();
    }
    return 0;
}