#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int i=1;
  char start='A';
  while (i<=n) {
    int j=1;
    while (j<=n) {
      std::cout << start<< " ";
      start++;
      j++;
    }std::cout<< '\n';
  i++;
  }
  return 0;
}
