#include<stdio.h>

int main()
{
    int t, a, b, count=0, c;
    scanf("%d", &t);
    while(t--)
    {
        count=0;
        scanf("%d %d", &a, &b);
        if(a==b)
        {
            printf("%d\n", count);
        }
        while(a>b)
        {
            c=abs(a-b);
            if(c%2==0)
            {
                a-=c;
                count++;
                if(a==b)
                {
                    printf("%d\n", count);
                }
            }
            else
            {
                c+=1;
                a-=c;
                count++;
                if(a==b)
                {
                    printf("%d\n", count);
                }
            }
        }
        while(a<b)
        {
            c=abs(a-b);
            if(c%2!=0)
            {
                a+=c;
                count++;
                if(a==b)
                {
                    printf("%d\n", count);
                }
            }
            else
            {
                c-=1;
                a+=c;
                count++;
                if(a==b)
                {
                    printf("%d\n", count);
                }
            }
        }
    }
}
