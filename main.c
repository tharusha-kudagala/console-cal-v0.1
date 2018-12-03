#include <stdio.h>
#include <stdlib.h>

int main()
{
const float no1,no2;
float ans;
const char x;
char io;
int t=1;

do
{
printf("Do you want to continue [y/n]?\n");
scanf("%c",&io);

if (io=='y')
{
printf("Enter your first value :");
scanf("%f",&no1);

printf("Enter the function :");
scanf(" %c",&x);

printf("Enter your second value :");
scanf("%f",&no2);

switch (x)
{
    case '+':
    ans=no1+no2;
    break;

    case '-':
    ans=no1-no2;
    break;

    case '*':
    ans=no1*no2;
    break;

    case '/':
    ans=no1/no2;
    break;

    case '^':
    ans=pow(no1,no2);
    break;

    default:
    printf("This function is currently not available\n");
}

printf("\n%.3f\n\n",ans);
t++;
}
else
    return(0);

}while (t>0);
return 0;
}
