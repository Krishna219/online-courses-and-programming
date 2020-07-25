#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int add(int x, int y) {
    int z;
    z=x+y;
  return z;
}
int main() {
  int a,b;
  scanf("%d %d",&a,&b); 
  printf("%d",add(a,b));
  return 0;
}
