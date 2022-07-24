#include<stdio.h>
/*
    Pattern:
        Rows=3;
        Columns:3;
       1    1   1   1
       2    2   2   2
       3    3   3   3
       4    4   4   4
    
*/
void DisplayPattern(int iRows,int iCols)
{
    register int iCnt=0;
    register int jCnt=0;
    for(iCnt=1;iCnt<=iRows;iCnt++)
    {
        for(jCnt=0;jCnt<iCols;jCnt++)
        {
            printf("%d\t",iCnt);
        }
        printf("\n");
        
    }
}
int main()
{ 
    int Rows=0,Columns=0;
    printf("Enter the number Rows:\n");
    scanf("%d",&Rows);
    
    printf("Enter the number Columns\n");
    scanf("%d",&Columns);
    DisplayPattern(Rows,Columns);
    return 0;

}