#include<stdio.h>

int input(){
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}

int find_gcd(int a,int b)
{
  int gcd,t;
  if(a>b)
    t=a;
    a=b;
    b=t;


 for(int i=1; i<a/2; i++){
     if(a%i==0 && b%i==0)
        gcd=a;
  }
  return gcd;
}

void output(int a, int b, int gcd){
  printf("the gcd of %d and %d is %d",a,b,gcd)
}

int main(){
  int a,b,gcd;
  a=input();
  b=input();
  gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}