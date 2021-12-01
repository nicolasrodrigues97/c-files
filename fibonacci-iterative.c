#include <stdio.h>
int main()
{
  int n, first = 1, second = 1, next, i;
 
  printf("Fibonnaci series up to:  ");
  scanf("%d", &n);
  while(n < 1){
    printf("Input must be greater than 1");
    scanf("%d", &n);
  }
  printf("\n");
  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      next = i;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  } 
  return 0;
}
