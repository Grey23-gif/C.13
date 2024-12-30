#include <stdio.h>
int tim_ucln(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main()
{
    int so1,so2;
    printf("Nhap so 1: ");
    scanf("%d",&so1);
    printf("Nhap so 2: ");
    scanf("%d",&so2);
    int ucln = tim_ucln(so1,so2);
    printf("Uoc chung lon nhat cua %d va %d la: %d",so1,so2,ucln);
    return 0;
}
