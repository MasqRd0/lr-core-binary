#include <stdio.h>

/*
 * conditional - same as x ? y : z
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */
int conditional(int x, int y, int z) {
return (y&(!x+(~1+1)))^(z&(!!x+(~1+1)));
}

int main(void) {
  int x, y, z;
  if (scanf("%d %d %d", &x, &y, &z) != 3)
    return 1;
  printf("%d\n", conditional(x, y, z));
  return 0;
}
