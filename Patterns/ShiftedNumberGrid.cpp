// Pattern: Shifted Number Grid
// For n = 7
// 1 2 3 4 5 6 7
// 2 3 4 5 6 7 1
// 3 4 5 6 7 1 2
// 4 5 6 7 1 2 3
// 5 6 7 1 2 3 4
// 6 7 1 2 3 4 5
// 7 1 2 3 4 5 6

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num = i;

        for (int j = 1; j <= n; j++) {
            cout << num << " ";

            num++;
            if (num > n) {
                num = 1;
            }
        }

        cout << endl;
    }

    return 0;
}
