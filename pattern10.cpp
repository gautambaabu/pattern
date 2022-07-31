#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int i=1;
  while (i<=n) {
    int j=1;
    while (j<=i)
      std::cout << i-j+1<< "  " ;
      j++;
    }std::cout<< '\n';
  i++;
  }
  return 0;
}
