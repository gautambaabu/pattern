#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int i=1;
  while (i<=n) {
    int j=1;
    while (j<=n) {
      char ch= 'A'+j-1;
      std::cout << ch << " ";
      j++;
    }std::cout<< '\n';
    /* code */i++;
  }
  return 0;
}
