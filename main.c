#include <stdio.h>
#include <stdlib.h>
//girilen say� de�erini bire e�it olana kadar i�lem uygulayan program
//girilen say� �ift ise 2 ye b�ler tek ise 3 ile �arp�p 1 ekler bu i�lemi ��kan de�er 1 olana kadar uygular
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
