#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  int i=1;
  while (i<=n) {
    int j=1;
    while (j<=i) {
      char ch='a'+i+j-2;
      cout << ch<< "  " ;
      j++;
    }std::cout<< '\n';
    i++;
  }
  return 0;
}
