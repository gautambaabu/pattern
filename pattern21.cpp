#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int i=1;
  while (i<=n) {
    int j=n;
    int space=1;
    while (space<=i+1) {
      std::cout  << " ";
      space++;
    }
    while (j>=i) {
      std::cout << "*" ;
      j--;
    }std::cout  << '\n';
    i++;
  }
  return 0;
}
