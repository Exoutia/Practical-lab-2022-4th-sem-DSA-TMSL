#include <stdio.h>
void grading(int marks){
    if(marks>=0 && marks<100){
        if(marks<=100 && marks>=90){
            printf("A+\nGreat work keep it up, go have some break you deserve it.");
        }
        else if (marks<90 && marks>=80)
        {
            printf("A\nExcellent work.");
        }
        else if (marks<80 && marks>=70)
        {
            /* code */
            printf("B+\nGood work you can totally do better.");
        }
        else if (marks<70 && marks>=60)
        {
            printf("B\nGood work hard and you can do better.");
        }
        else if (marks<60 && marks>=50)
        {
            /* code */
            printf("C\nNot putting enough work.");
        }
        else if (marks<50 && marks>=40)
        {
            /* code */
            printf("D\n");
        }
        else{
            printf("F");
        }
        
    }
    else{
        printf("Invalid marks.");
        return;
    }
}
void main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    grading(marks);

}



