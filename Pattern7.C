#include<stdio.h>
#include<conio.h>
/*
    INPUT: 5
    OUTPUT: 
    A   B   C   D   E
    
*/
void DisplayPattern(int iNo)
{
    register int iCnt=0;
     char ch='\0';
    for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
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