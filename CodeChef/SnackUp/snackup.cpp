#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, n;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        int r, k, j, x, y;
        k=n;
        r=n;
        printf("%d\n", r);
        for(int i=0; i<k; i++)
        {
            printf("%d\n", k);
            for(int j=0; j<n; j++)
            {
                printf("%d %d %d\n", j+1, (i+j)%n+1, (i+j+1)%n+1);
            }

        }
    }
    return 0;

}
