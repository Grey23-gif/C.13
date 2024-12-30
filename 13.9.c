#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void nhap_giatri(int m,int n,int arr[m][n]);
void tao_matran(int m,int n,int arr[m][n]);
void in_goc(int m,int n,int arr[m][n]);
void in_bien(int m,int n,int arr[m][n]);
void in_cheo(int m,int n,int arr[m][n]);
void so_nt(int m,int n,int arr[m][n]);
int main()
{
    int m,n;
    int choice;
    printf("Nhap so hang: ");
    scanf("%d",&m);
    printf("Nhap so cot: ");
    scanf("%d",&n);
    int arr[n][m];
    do 
    {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");

        
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhap_giatri(n, m, arr);
                break;
            case 2:
                tao_matran(n, m, arr);
                break;
            case 3:
                in_goc(n, m, arr);
                break;
            case 4:
                in_bien(n, m, arr);
                break;
            case 5:
                in_cheo(n, m, arr);
                break;
            case 6:
                so_nt(n, m, arr);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                exit(0);
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    }
    while(choice!=7);
    return 0;
}
void nhap_giatri(int m,int n,int arr[m][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Nhap phan tu tai vi tri [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void tao_matran(int m,int n,int arr[m][n])
{
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
}
void in_goc(int m,int n,int arr[m][n])
{
    printf("\n%d",arr[0][0]);
    printf("\n%d",arr[0][n-1]);
    printf("\n%d",arr[m-1][0]);
    printf("\n%d",arr[m-1][n-1]);
}
void in_bien(int m,int n,int arr[m][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
            printf("\t%d",arr[i][j]);
            }
            else 
            {
                printf("\t");
                
            }
        }
        printf("\n");
    }
}
void in_cheo(int m,int n,int arr[m][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (i == j || i + j == m - 1)
            {
            printf("\t%d",arr[i][j]);
            }
        }
    }
}
bool isPrime(int num) 
{
    if (num < 2) 
    return false;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        return false;
    }
    return true;
}

void so_nt(int m,int n,int arr[m][n])
{
    printf("Cac phan tu la so nguyen to:\n");
   for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             if (isPrime(arr[i][j])) 
             {
                printf("%d ", arr[i][j]);
             } 
        }
    }
        
}
