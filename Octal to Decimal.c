#include <stdio.h>
#include <math.h>
long octalToBinary(int octalnum)
{
    int decimalnum = 0, i = 0;

    // This loop converts octal number "octalnum" to the decimal number "decimalnum"
    while(octalnum != 0)
    {
	decimalnum = decimalnum + (octalnum%10) * pow(8,i);
	i++;
	octalnum = octalnum / 10;
    }
    return decimalnum;
}

int main()
{
    int oct;
    long int dec;
    printf("Enter octal Number");
    scanf("%d",&oct);
    dec=octalToBinary(oct);
    printf("%ld",dec);
}
