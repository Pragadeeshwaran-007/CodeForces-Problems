#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n;
  cin >> n;
  int mx = 0;
  int a[100];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mx = max(mx, a[i]);
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += mx - a[i];
  }
  cout << sum << endl;
  return 0;
}
