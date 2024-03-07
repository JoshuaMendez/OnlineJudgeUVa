#include <iostream>

using namespace std;

int main() {
    int i, sum = 0;
    cin >> i;
    while (i--) {
        
        int ans = 0;
        double lenght, width, depth, weight;
        cin >> lenght >> width >> depth >> weight;
        if (weight <= 7.00) {
            if ((lenght <= 56 && width <= 45 && depth <= 25) ||lenght + width + depth <= 125) {
                ans = 1;
                sum++;
            }
        }
        cout << ans << endl;
    }
    cout << sum << endl;
    return 0;
}