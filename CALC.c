#include<stdio.h>
#include<conio.h>
void main()
{
 while(1)
{

int a,b,c,choice;
clrscr();
printf("CALCULATOR ! ! !\n");
printf("Press 1 for ADDITION. . .\n");
printf("Press 2 for SUBTRACTION. . .\n");
printf("Press 3 for MULTIPLICATION. . .\n");
printf("Press 4 for DIVISION. . .\n");
printf("Press 5 to exit the program. . .\n");
printf("Enter your choice to execute the program:");
scanf("%d",&choice);
if (choice==5)
break;
switch (choice)
{
case 1:
clrscr();
printf("\t\t\t\tADDITION\n");
printf("Enter the two numbers to add them:");
scanf("%d%d",&a,&b);
c=a+b;
printf("The sum is %d + %d = %d",
a,b,c);
break;
case 2:
clrscr();
printf("\t\t\t\tSUBTRACTION\n");
printf("Enter the two numbers to subract them");
scanf("%d\n%d",&a,&b);
c=a-b;
printf("The difference is : %d - %d = %d",a,b,c);
break;
case 3:
clrscr();
printf("\t\t\t\tMULTIPLICATION\n");
printf("Enter the two numbers to multiply them");
scanf("%d\n%d",&a,&b);
c=a*b;
printf("The product is : %d * %d = %d",a,b,c);
break;
case 4:
clrscr();
printf("\t\t\t\tDIVISION\n");
printf("Enter the two numbers to divide them");
scanf("%d\n%d",&a,&b);
c=a/b;
printf("The quotient is : %d / %d = %d",a,b,c);
break;
case 5:
printf("The program is finished. . .");
break;
default:
printf("The choice is invalid\nReenter your choice!");
break;
}
getch();
}

}