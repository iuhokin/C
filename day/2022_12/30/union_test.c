#include <stdio.h>

// 联合-联合体-共用体
union Un
{
  char c;
  int i;
};

int main()
{
  union Un u;
  printf("%ld\n", sizeof(u));
  printf("%p\n",&u);
  printf("%p\n",&(u.c));
  printf("%p\n",&(u.i));
  return 0;
}