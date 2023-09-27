#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> uglyNumbers;
    uglyNumbers.push_back(1);

    for (int i = 1; i < 3; i++){
        
    }

    for (int i = 1; i < 2000; i++)
    {
        if (i % 2 == 0)
            uglyNumbers.push_back(i);

        else if (i % 3 == 0)
            uglyNumbers.push_back(i);

        else if (i % 5 == 0)
            uglyNumbers.push_back(i);
    }

    for (int i = 0; i < 20; i++)
    {
        cout << uglyNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}