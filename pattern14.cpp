#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int i=1;
  char count ='a';
  while (i<=n) {
    int j=1;
    while (j<=n) {
      std::cout << count << "  " ;
      count++;
      j++;
    }std::cout<< '\n';
    i++;
  }
  return 0;
}
