#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\n#############CALCULATOR#############\n\n\nAddition [+]\nSubtraction [-]\nMultiplication [*]\nDivision [/]\nPower [^]\n\n#This is a simple calculator to find above operations of any two numbers\n");

    int x;
    char symbol;
    float num1,num2,ans;

    printf("Do you want to continue [y/n]\n");
    scanf(" %c",&x);

        switch(x)
    {
    case 'y':
        for (x=0;x<5;x++)
            {printf("\nEnter your expression as follows \n\n[Number 1] [Function] [Number 2]\n\n");
    scanf(" %f %c %f",&num1,&symbol,&num2);

    switch (symbol)
    {
    case '+':
        ans = num1 + num2;
        break;

    case '-':
        ans = num1 - num2;
        break;

    case '*':
        ans = num1 * num2;
        break;

    case '/':
        ans = num1 / num2;
        break;

    case '^':
        ans = pow(num1,num2);
        break;

    default:
        printf("\nSORRY THIS FUNCTION IS CURRENTLY NOT AVAILABLE\n");
    }

    printf("\nAnswer = %.3f\n",ans);
    }
    break;
    default:
        exit(0);
    }

    return 0;
}
