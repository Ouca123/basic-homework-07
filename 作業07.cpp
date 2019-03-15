#include <stdio.h>
#include <stdlib.h>


int main ()
{
 int n,i,sum;   	
 printf("請輸入一個整數:");
 scanf("%d",&n);
 sum=(n*(n+1)/2);
 printf("答案");
  for(i =1; i<=n; i++)
  {
    if(i!=n)
     printf("%d+",i);
	else  
     printf("%d=%d",i,sum);
  }
 return 0;
    

}



