#include <stdio.h>
#include <stdlib.h>
//girilen sayý deðerini bire eþit olana kadar iþlem uygulayan program
//girilen sayý çift ise 2 ye böler tek ise 3 ile çarpýp 1 ekler bu iþlemi çýkan deðer 1 olana kadar uygular
int main()
{
    int sayi;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);

    while(sayi!=1)
    {


    if(sayi%2==0)
    {
        sayi=sayi/2;
        printf("sayi:%d\n",sayi);

    }
    else
    {
       sayi=(sayi*3)+1;
       printf("sayi:%d\n",sayi);
    }}
    return 0;
}
