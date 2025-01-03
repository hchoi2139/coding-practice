#include <iostream>

using namespace std;

int main(int, char**) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;
  cout << N * (N - 1);

  return 0;
}
