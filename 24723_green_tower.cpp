#include <iostream>

using namespace std;

int main(int, char**) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;
  cout << (1 << N);

  return 0;
}
