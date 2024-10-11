//do...while loop

#include<stdio.h>

int main()
{
    int start,stop;
    int i;
    int sum=0;
    
    printf("choose when to start and stop:");
    scanf("%d%d",&start,&stop);
    do{
        printf("%d\n",i);
        i++; 
        sum +=i;
        }
        
        while(i<=stop); 
        printf("The sum is %d",sum);
        
    return 0;
}