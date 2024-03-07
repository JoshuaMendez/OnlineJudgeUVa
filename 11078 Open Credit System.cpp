#include <iostream>
#include <vector>

using namespace std;

int main() {
    int st;
    cin >> st;
    while (st--) {
        vector<int> v;
        int sti;
        cin >> sti;
        while (sti--) {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        int maxi = 1e-9, mini = 1e+9;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] > maxi) maxi = v[i];
            if (v[i] < mini) mini = v[i];
        }
        int calc = (maxi - mini);
        cout << "ans " << maxi << " m " << mini << endl;
        cout << calc << " sdf " << maxi - mini << endl;
    }
    return 0;
}