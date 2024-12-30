#include <stdio.h>
#include <stdlib.h>
void tao_matran(int rows,int cols,int arr[rows][cols])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
}
void in_giatri(int rows,int cols,int arr[rows][cols])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
        printf("Nhap gia tri tai vi tri [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
int main()
{
    int rows,cols;
    printf("Nhap so hang: ");
    scanf("%d",&rows);
    printf("Nhap so cot: ");
    scanf("%d",&cols);
    int arr[rows][cols];
    in_giatri(rows,cols,arr);
    tao_matran(rows,cols,arr);
    return 0;
}