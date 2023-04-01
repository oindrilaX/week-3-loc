#include<stdio.h>
 
void fact(int,int *);
int main(){
  int i,f,n;
 
  printf("Enter  number: ");
  scanf("%d",&n);
 
  fact(n,&f);
  printf("Factorial of %d is: %d"(n, *f));
 
  return 0;
}
 
void findFactorial(int num,int *factorial){
    int i;
 
    *factorial =1;
 
    for(i=1;i<=num;i++)
      *factorial=*factorial*i;
}
