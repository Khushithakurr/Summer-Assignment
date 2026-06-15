#include<stdio.h>
void gcd(int n1,int n2);
int main(){
int n1,n2;
printf("enter two integers:");
scanf("%d %d",&n1,&n2);
gcd(n1,n2);
    return 0;
}
void gcd(int n1,int n2){
    int i,gcd_val=1;
    for ( i = 1; i<=n1 && i<=n2; i++)
    {
      if (n1%i==0 && n2%i==0)
      {
        gcd_val=i;
      }
      
    }
    printf("GCD of %d and %d is %d",n1,n2,gcd_val);
}