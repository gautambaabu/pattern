#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int i=1;
  while (i<=n) {
    int j=1;
    while (j<=i) {
      std::cout << " * " ;
      j++;
    }std::cout<< '\n';
    /* code */i++;
  }
  return 0;
}
