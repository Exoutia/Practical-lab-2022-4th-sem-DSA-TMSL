#include<stdio.h>
void factorial(int a){
    int i;
    long long int fac=1;
    for(i=1;i<=a;i++){
        fac*=i;
    }
    printf("factorial of %d: %lld", a, fac);
}
int main(){
    int num;
    printf("Enter the number you factorial of: ");
    scanf("%d", &num);
    factorial(num);
    return 0;
}