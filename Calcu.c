#include<stdio.h>


void check(int answer);
void adder(int answer);
void multiplyer();
void subtracter();
void divider();
void askNumber(int *ini1, int *ini2);
void main()
{
    int answer,a,s,m,d,ini1,ini2;
    char question;

    printf("CALCULATOR GANG\n");
    printf("a=add, s=subtract, m=multiply, d=divide: ");
    scanf("%c",&question);
    if (question=='a')
    {
        askNumber(&ini1, &ini2);
        answer=ini1+ini2;
        printf("The total is = %d",answer);
        check(answer);
    }
    else if (question=='s')
    {
        askNumber(&ini1, &ini2);
        answer=ini1-ini2;
        printf("The total is = %d",answer);
        check(answer);
    }
    else if (question=='m')
    {
        askNumber(&ini1, &ini2);
        answer=ini1*ini2;
        printf("The total is = %d",answer);
        check(answer);
    }
    else if (question=='d') 
    {
        askNumber(&ini1, &ini2);
        answer=ini1/ini2;
        printf("The total is = %d",answer);
        check(answer);
    }   
    else
        printf("Nigga choose one\n");

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
    new=answer-var;
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