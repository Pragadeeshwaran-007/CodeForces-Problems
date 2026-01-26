#include <iostream>
using namespace std;
int main() {
long long x;
cin >> x;
int cnt = 0;
while (x > 0) {
cnt += x & 1;
x >>= 1;
}
cout << cnt << endl;
return 0;
}
