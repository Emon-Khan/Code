#include<stdio.h>

int main()
{
    int t, n, c0, c1, h, ans, other;
    int count0, count1;
    int c0count, c1count;
    char s[1001];
    scanf("%d", &t);
    while(t--)
    {
        count0 = 0;
        count1 = 0;
        other=0;
        scanf("%d %d %d %d", &n, &c0, &c1, &h);
        scanf("%s", s);
        if(c0<c1)
        {
            ans = n*c0;
            count0++;
        }
        else if(c1<c0)
        {
            ans = n*c1;
            count1++;
        }
        else
        {
            ans = n*c0;
        }

        if(c0!=c1)
        {
            if(count0!=0)
            {
                c1count=0;
                for(int i=0; i<n+1; i++)
                {
                    if(s[i]=='1')
                    {
                        c1count++;
                    }
                    //printf("Count 1 = %d\n", c1count);
                }
                other+=(ans-c1count*c0)+(c1count*c1);
                ans+=c1count*h;
                //printf("Other = %d\n", other);
                //printf("Ans = %d\n", ans);
            }
            else if(count1!=0)
            {
                c0count=0;
                for(int i=0; i<n+1; i++)
                {
                    if(s[i]=='0')
                    {
                        c0count++;
                    }
                }
                other+=(ans-c0count*c1)+(c0count*c0);
                ans+=c0count*h;
                //printf("Other = %d\n", other);
                //printf("Ans = %d\n", ans);
            }
            if(other<ans)
            {
                printf("%d\n", other);
            }
            else if(ans<other)
            {
                printf("%d\n", ans);
            }
            else
            {
                printf("%d\n", ans);
            }
        }
        else
        {
            printf("%d\n", ans);
        }
    }
    return 0;
}
