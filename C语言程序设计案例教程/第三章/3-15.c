/* 编写 C 语言程序，从键盘读入一个整数 n，然后计算 n 的阶乘 n!，并输出结果到屏幕。如果整数n 小于 0，则输出“非法数据”
。运行过程如图 3- 15 所示。
要求：
(1) 只能使用 int 类型，不允许使用 long long 类型；
(2) 使用 Microsoft Windows 系统自带的“计算器”程序来验证输出结果，回答以下问题：只
允许使用 int 类型的情况下，本程序可以计算出正确阶乘结果的最大 n 值是多少？ */
// 最大的值为2^31-1
#include <stdio.h>

int Factorial(int n)
{
  if (n < 0)
  {
    printf("非法数据!\n");
  }
  else
  {
   /*  int i = 1;
    int ret = 1;
    for (i=1; i<=n; i++)
    {
      ret *= i;
    }
    return ret; */
  
    if (n == 1)
    {
      return 1;
    }
    else
    {
      return Factorial(n-1) * n;
    }
  }
}

int main()
{
  int n = 0;
  int ret = 0;
  printf("请输入一个整数:>");
  scanf("%d", &n);
  ret = Factorial(n);
  printf("%d! = %d\n", n, ret);
  return 0;
}