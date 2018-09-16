#include<stdio.h>
int main()
{
int M,N;
printf("ENTER TWO INTEGERS\n");
scanf("%d%d",&M,&N);
if(M%N!=0)
printf("0\n");
else
printf("M/N\n");
return 0;
}
