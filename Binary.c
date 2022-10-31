#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,r,s,k;
    printf("\n Enter the binary Number : ");
    scanf("%d", &n);
    q = n;
    s = 0;
    k = 0;
    while (q > 0)
    {
        r = q % 10;
        s = s + r*pow(2,k);
        q = q/10;
        k++;
    }
    printf("\n The Decimal Number is : %d", s);
    return 0;
}