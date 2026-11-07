#include <iostream>
#include <limits>

using namespace std;

int main() {
    int year = 0;
    string tr = "Leap year!", fs = "Not a leap year! :(";
    while (true) {
        cin >> year;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid year value." << endl;
            continue;
        }
        if (year == -1) break;
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    cout << tr << endl;
                }
                else {
                    cout << fs << endl;
                }
            }
            else {
                cout << tr << endl;
            }
        }
        else cout << fs << endl;
    }
    return 0;
}