// exercício nikita: https://codeforces.com/contest/1977/problem/A
// página relacionados&gabarito: https://codeforces.com/blog/entry/129858
#include <stdio.h>

int main(void) {
  int n, m, t;

  scanf("%d%*c", &t);

  for (int i = 0; i < t; i++) {

    scanf("%d%*c", &n);
    scanf("%d%*c", &m);

    if (((n % 2) == (m % 2)) && (n >= m)) { // paridade && qual é o maior?
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }
  return 0;
}

/* para que seja sim as seguintes condições devem acontecer:

1) n e m devem ter a mesma paridade, ou seja, ambos pares ou ambos ímpares,
2) m deve estar contemplado entre os valores de máximo e mínimo que n
proporciona,

*/
