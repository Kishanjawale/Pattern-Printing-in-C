#include<stdio.h>
#include<conio.h>
/*
    INPUT: 8
    OUTPUT: 
    2   4   6   8   10  14  16
    
*/
void DisplayPattern(int iNo)
{
    register int iCnt=0;
     
    for(iCnt=1;iCnt<=(iNo*2);iCnt++)
    {
        if(iCnt %2 ==0)
        {
            printf(" %d \t ",iCnt);
        }
    }    
}
int main()
{ 
    int iValue=0;
    printf("Enter the number of element:\n");
    scanf("%d",&iValue);
    DisplayPattern(iValue);
    return 0;
}