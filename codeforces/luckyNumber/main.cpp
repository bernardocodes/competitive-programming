// https://codeforces.com/problemset/problem/110/A
#include <iostream>

int main() {

  unsigned long n;
  int cont = 0;

  std::cin >> n;

  while(n>0){
    if(n%10==4||n%10==7){
      cont++;
    }
    n/=10;
  }

  if (cont == 4 || cont == 7) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
}
