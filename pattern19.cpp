#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int i=1;
  while (i<=n) {
    int space=n-i;
    while (space) {
      std::cout  << " ";
      space--;
    }
    int j=1;
    while (j<=i) {
      std::cout << "*" ;
      j++;
    }std::cout  << '\n';
    i++;
  }
  return 0;
}
