#include <stdio.h>
int main(){
    //first is the first number of fibonacci series start
    //second is the second number of fibonacci series start
    //sum12 is the sum of previous last and 2nd last digit of series
    //fibonacci series is the series whwere third number is the sum of previous two number in series
    //e.g. 0 1 1 2 3 5 8..... 
    int first, second, sum12, num;
    first=0;
    second=1;
    printf("Enter the number upto fibbonacci series you want: ");
    scanf("%d", &num);
    printf("%d  %d  ", first, second);
    for(int i = 3; i<=num; i++){
        sum12=first + second;
        printf("%d  ", sum12);
        first = second;
        second = sum12;
    }
}