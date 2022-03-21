#include<stdio.h>

int inputarraysize(){
  int n;
  printf("enter size\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n,int a[n])
{
  printf("enter the array values\n");
  for(int i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
}

int comp(int n){
  for(int i = 2; i <= n/2; i++){
    if(n%i==0)
       return 1;
  }
  return 0;
  }

int sum_composite(int n,int a[n]){
  int sum=0;
  for(int i=0; i<n; i++){
    if (comp(a[i]))
    {
      sum=sum + a[i];
    }
  }
  return sum;
}


void output(int s){
  printf("sum of composite number is%d",sum)
}

int main(){
 int n,a[n],sum;
 n=inputarraysize();
 input_array(n,a[n]);
 comp(n);
 sum_composite(n,a[n]);
 output(int sum);
 return 0;
}
