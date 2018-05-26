#include <stdio.h>
int main() {
 long int n, m,o;
  scanf("%ld%ld", &n, &m);
  o=n <= m ? 2 * n - 2 : 2 * m - 1;
  printf("%u",o);
}
