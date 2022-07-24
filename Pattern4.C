#include<stdio.h>
/*
    Pattern:
        Rows=3;
        Columns:3;
        5   4   3   2   1
        5   4   3   2   1
        5   4   3   2   1
    
*/
void DisplayPattern(int iRows,int iCols)
{
    register int iCnt=0;
    register int jCnt=0;
    for(iCnt=0;iCnt<iRows;iCnt++)
    {
        for(jCnt=iCols;jCnt>0;jCnt--)
        {
            printf("%d\t",jCnt);
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