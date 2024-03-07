#include <iostream>
#include <vector>

using namespace std;

int main() {
    int out;
    cin >> out;
    while (out--) {
        vector<int> instructions;
        int in, pos = 0;
        cin >> in;
        while (in--) {
            int tempI;
            string tempS, tempIgnore;
            cin >> tempS;
            if (tempS == "SAME") {
                cin >> tempIgnore; cin >> tempI;
                pos += instructions[tempI - 1];
                instructions.push_back(instructions[tempI - 1]);
            }
            if (tempS == "LEFT") {pos--; instructions.push_back(-1);}
            if (tempS == "RIGHT") {pos++; instructions.push_back(1);}
        }
        cout << pos << endl;
    }
    return 0;
}