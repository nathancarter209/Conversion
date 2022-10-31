#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,r,i,bi,rbi,flag = 0, k = 0;
    printf("\n Enter the Decimal number : ");
    scanf("%d", &n);
    q = n;
    rbi = 0;
    //loop to gt binary digits which are in reverse order
    while (q > 0)
    {
        r = q % 2;
        if (r == 0 && flag == 0)
        {
            k++;
        }
        else
        {
            flag = 1;
        }
        rbi = rbi*10 + r;
        q = q/2;
    }
    //loop to get the binary digits in the correct order
    q = rbi;
    bi = 0;
    while (q > 0)
    {
        r = q % 10;
        bi = bi*10 + r;
        q = q/10;
        if (q == 0) //loop to add 0s at end
        {
            for (i = 1;i <= k; i++)
            {
                bi = bi*10;
            }
        }
    }
    printf("\n The Binary number is %d", bi);
    return 0;
}