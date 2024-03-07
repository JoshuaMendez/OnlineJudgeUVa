#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<char>> mat;
    vector<char> inMat;
    int num;
    cin >> num;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4*num; j++) {
            char temp;
            cin >> temp;
            inMat.push_back(temp);
        }
        mat.push_back(inMat);
        inMat.clear();
    }
    int it = 0;
    string temp;
    while (it < mat[3].size()) {
        temp += mat[3][it];
        if (temp == "*..") { cout << "2"; temp = ""; it++; }
        if (temp == ".*.") { cout << "1"; temp = ""; it++; }
        if (temp == "..*") { cout << "3"; temp = ""; it++; }
        it++;
        }
    cout << endl;

    return 0;
}