#include <iostream>
using namespace std;
void Display_Pascal_Triangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        int num = 1;
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter n: ";// n is the number of rows
    cin >> n;

    Display_Pascal_Triangle(n);

    return 0;
}
