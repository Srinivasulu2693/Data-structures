#include<stdio.h>
int factorial(int n){
if(n==0){
return 1;
}
else{
return factorial(n-1)*n;
}
}
int main(){
int a;
printf("Enter A Number : ");
scanf("%d", &a);
int fac = factorial(a);
printf("Factorial : %d", fac);
}
