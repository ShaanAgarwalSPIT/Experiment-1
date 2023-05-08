#include<stdio.h>  
  
long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
int main()  
{  
  int number;  
  long long fact;  
  
  for(int i = 0; i <= 20; i++)
  {
      fact = factorial(i);
      printf("%lld\n", fact);
  }
  
  fact = factorial(number);  
  return 0;  
}  