#include<stdio.h>
#include<conio.h>
/*
    INPUT: 5
    OUTPUT: 
    5   #   4   #   3   #   2   #   1   #
    
*/
void DisplayPattern(int iNo)
{
    register int iCnt=0;
     
    for(iCnt=iNo ; iCnt > 0;iCnt--)
    {
        printf(" %d \t # \t",iCnt);
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