#include <stdio.h>
#include <stdbool.h>

double calcy() {
    int c;

    double a,b,ans;
    bool d = true;
    printf("enter a number");
    scanf("%lf",&a);

     while (d == 1){
    //while (d == true){
        printf("enter:  1 for sum \n \t\t2 for subtract \n \t\t3 for product \n \t\t4 for division\n \t\t5 for answer\n");
        printf("your input: ");
        scanf("%d",&c);

        if(c!=5){
            printf("enter another numbers ");
            scanf("%lf",&b);
        }
        else{
             printf("the answer is %lf",a);
             break;
        }

        switch(c){

            case 1:
            ans=a+b;
            a=ans;
            break;

            case 2:
            ans=a-b;
            a=ans;
            break;

            case 3:
            ans=a*b;
            a=ans;
            break;

            case 4:
            ans=a/b;
            a=ans;
            break;

            case 5:
            printf("the answer is %lf\n",a);
            d = 0;
            break;

            default:
            printf("read the instructions again \n");
            d=0;
            break;

        }
        /*printf("enter another numbers ");
        scanf("%lf",&b);
       */

    }
    return a;
}


int main(){
    int a;
    printf("do you want to use calc (1/0) ");
    scanf("%d",&a);
    if(a==1){
        calcy();
        //printf("\nthe valuee of b is %d",b);
    }
    else if(a==0){
    printf("y the fuk u here ");
    }
    else {
        printf("read english nigga ");
    }
}
