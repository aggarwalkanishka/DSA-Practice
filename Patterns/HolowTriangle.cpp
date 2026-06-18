// Pattern: Hollow Triangle
//    1
//   2 2
//  3   3
// 4444444

  #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print numbers
        for (int j = 1; j <= 2 * i - 1; j++) {

            if (i == n || j == 1 || j == 2 * i - 1)
                cout << i;
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
