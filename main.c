#include <stdio.h>
int main() {
  char a[10];
  int i;
  for (i = 0; i < 5; i++) {
    scanf("%c ", &a[i]);
    getchar;
  }
  for (i = 4; i >= 0; i--) {
    printf("%c", a[i]);
  }
  return 0;
}