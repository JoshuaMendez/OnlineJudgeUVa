#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void organizeProblems(vector<vector<int>> &friendsProblems)
{
    for (int numFriend = 0; numFriend < 3; numFriend++)
    {
        sort(friendsProblems[numFriend].begin(), friendsProblems[numFriend].end());
    }
}

int main()
{
    int T;
    int i, z, e, S, Sp, yesOrNot;
    cin >> T;

    for (i = 1; i <= T; ++i)
    {
        vector<vector<int>> friendsProblems(3);
        vector<vector<int>> friendsChecker(3, vector<int>(10001));
        for (z = 0; z < 3; ++z)
        {
            cin >> S;
            for (e = 0; e < S; ++e)
            {
                cin >> Sp;
                yesOrNot = 0;
                if (friendsChecker[z][Sp] == 1)
                {
                    yesOrNot = 1;
                }
                if (yesOrNot == 0)
                {
                    friendsProblems[z].push_back(Sp);
                }
                friendsChecker[z][Sp] = 1;
            }
        }
        organizeProblems(friendsProblems);

        vector<vector<int>> newFriends(3);
        int problemNumber, problemNumberChecker1, problemNumberChecker2, problemNumberChecker3, each = 0;
        yesOrNot = 0;
        z = 0;
        while (z < 3)
        {
            each = 0;
            newFriends[z].push_back(z + 1);
            newFriends[z].push_back(each);
            for (e = 0; e < friendsProblems[z].size(); e++)
            {
                yesOrNot = 0;
                problemNumber = friendsProblems[z][e];
                problemNumberChecker1 = friendsChecker[0][problemNumber];
                problemNumberChecker2 = friendsChecker[1][problemNumber];
                problemNumberChecker3 = friendsChecker[2][problemNumber];
                if ((problemNumberChecker1 == 1 && problemNumberChecker2 == 1) || (problemNumberChecker1 == 1 && problemNumberChecker3 == 1) || (problemNumberChecker2 == 1 && problemNumberChecker3 == 1))
                {
                    yesOrNot = 1;
                }
                if (yesOrNot == 0)
                {
                    newFriends[z].push_back(friendsProblems[z][e]);
                    each++;
                }
            }
            newFriends[z][1] = each;
            z++;
        }
        cout << "Case #" << i << ":" << endl;
        // 1mer Caso - Gana Amigo 1
        if (newFriends[0][1] >= newFriends[1][1] && newFriends[0][1] >= newFriends[2][1])
        {
            for (z = 0; z < newFriends[0].size(); z++)
            {
                if (z != 0)
                    cout << " ";
                cout << newFriends[0][z];
            }
            cout << endl;
        }
        // 2do Caso - Gana Amigo 2
        if (newFriends[1][1] >= newFriends[0][1] && newFriends[1][1] >= newFriends[2][1])
        {
            for (z = 0; z < newFriends[1].size(); z++)
            {
                if (z != 0)
                    cout << " ";
                cout << newFriends[1][z];
            }
            cout << endl;
        }
        // 3cer Caso - Gana Amigo 3
        if (newFriends[2][1] >= newFriends[0][1] && newFriends[2][1] >= newFriends[1][1])
        {
            for (z = 0; z < newFriends[2].size(); z++)
            {
                if (z != 0)
                    cout << " ";
                cout << newFriends[2][z];
            }
            cout << endl;
        }
    }
    return 0;
}