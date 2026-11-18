#include <iostream>

using namespace std;

int main() {
    int i, j;

    const int MAX_LEN = 3;

    for (i = 1; i <= MAX_LEN; i++) {
        for (j = 1; j <= (MAX_LEN - i); j++) {
            cout << " ";
        }
        for (; j <= MAX_LEN; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}