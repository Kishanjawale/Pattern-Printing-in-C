#include<stdio.h>
/*
    Pattern:
        *   *   *   *   *
*/
void DisplayPattern(int iNo)
{
    register int iCnt=0;
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*\t");
    }
}
int main()
{ 
    int iValue=0;
    printf("Enter the number of Stars:\n");
    scanf("%d",&iValue);
    DisplayPattern(iValue);
    return 0;

}