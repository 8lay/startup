#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double pi = 3.14;
  float age = 17;
  
  cout << (int) pi << endl;

  cout << fixed << showpoint << setprecision(2);
  cout << age;
  
  return 0;
}
