/*
Input
Row: 6
Columnns:6

Output:
    $   *   *   *   *
    *   $   *   *   *   
    *   *   $   *   *
    *   *   *   $   *
    *   *   *   *   $

*/
#include<stdio.h>
#include<conio.h>

void DisplayPattern(int iRow,int iCol)
{
    register int iCnt=0;
    register int jCnt=0;
    if( iRow!=iCol )
    {
        printf("Number of Rows and columns are not same..\n");
        printf("Enter same Number of rows and Columns..");
        return;
    }
    for(iCnt=0;iCnt<iRow;iCnt++)
    {
        for(jCnt=0;jCnt<iCol;jCnt++)
        {
           if(iCnt==jCnt)
           {
                printf("$\t");
           }
           else
           {
            printf("*\t");
           }
        }
        printf("\n");
    }
}
int main()
{ 
    int Row=0;
    int Col=0;
    printf("Enter the number of Rows\n");
    scanf("%d",&Row);
   
    printf("Enter the number of Columns:\n");
    scanf("%d",&Col);
   
    DisplayPattern(Row,Col);
    return 0;
}