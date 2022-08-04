//make a metro system which reads the stop name or stop number of the person and after each stop has passed after the entry stop add price of 10.
#include<stdio.h>
#include<string.h>

int main()
{
    char *stop_NAME,*start_NAME;
    char *stops[5] = {"Belgium","Rila","Russia","Brazil","Yomum"};
    printf("Welcom to Metro!\n");
    printf("Belgium - Rila - Russia - Brazil - Yomum\n");
    printf("Please enter the staring and ending stop\n");
    printf("Start Name: ");
    scanf("%ms",&start_NAME);
    printf("Stop Name: ");
    scanf("%ms",&stop_NAME);
    printf("So you would like to stop at %s eh. Very well then\n",stop_NAME);

    int x,y,total,price;
    for(int i=0;i<5;i++)
    {
        if (strcmp(start_NAME, stops[i])==0)
        {
            x=i+1;
            break;
        }
        
    }
    for(int i=0;i<5;i++)
    {
        if (strcmp(stop_NAME, stops[i])==0)
        {
            y=i+1;
            break;
        }
        
    }

    total=x-y;
    if (total==0)
    {
        printf("You are already in your destination");
        return(0);
    }
    else
    {
        for (int j = -5; j < 5; j++)      //should count the difference of x and y and should multiply how many times incrimented by 10
        {
            if(total==j)    
            {
                price=total*10;
                break;
            }
        }
    }
    
    printf("first %d",price);
    if (price<0)
    {
        price*=-1;
    }
    
    printf("second %d",price);
}

