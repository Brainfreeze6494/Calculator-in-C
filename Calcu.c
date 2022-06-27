#include<stdio.h>


void check(int answer);
void adder(int answer);
void multiplyer();
void subtracter();
void divider();
void askNumber(int *ini1, int *ini2);
void main()
{

    int answer, num1, num2;
    char question;

    bruh:
    printf("CALCULATOR GANG\n");
    printf("a=add, s=subtract, m=multiply, d=divide: ");
    scanf("%c",&question);
    switch(question) {
        case 'a':
            askNumber(&num1, &num2);
            answer = num1+num2;
            break;
        case 's':
            askNumber(&num1, &num2);
            answer = num1-num2;
            break;
        case 'm':
            askNumber(&num1, &num2);
            answer = num1*num2;
            break;
        case 'd':
            askNumber(&num1, &num2);
            answer = num1/num2;
            break;
        default:
            printf("wigga choose\n\n");
            goto bruh;
    }
    printf("The total is = %d",answer);
    check(answer);


}




void askNumber(int *ini1, int *ini2) 
{
    printf("Type 2 numbers\n");
    printf("Numba 1: ");
    scanf(" %d",ini1);
    printf("Numba 2: ");
    scanf(" %d",ini2);
}

void check(int answer)   //checks if they need to do more of something
{
    char more;
    scanf(" %c",&more);
    if (more=='+')
    {
        adder(answer);
    }
    else if (more=='-')
    {
        subtracter(answer);
    }
    else if (more=='*')
    {
        multiplyer(answer); 
    }
    else if (more=='/')
    {
        divider(answer);
    }
}

void adder(int answer)
{
    int var,new;
    printf("Aditional number: ");
    scanf(" %d",&var);
    new=answer+var;
    printf("the total is = %d\n",new);
    check(new);
}

void multiplyer(int answer)
{
    int var,new;
    printf("Aditional number: ");
    scanf(" %d",&var);
    new=answer*var;
    printf("the total is = %d\n",new);
    check(new);
}

void divider(int answer)
{
    int var,new;
    printf("Aditional number: ");
    scanf(" %d",&var);
    new=answer/var;
    printf("the total is = %d\n",new);
    check(new);
}

void subtracter(int answer)
{
    int var,new;
    printf("Aditional number: ");
    scanf(" %d",&var);
    new=answer-var;
    printf("the total is = %d\n",new);
    check(new);   
}