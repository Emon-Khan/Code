#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    long long int ans;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        ans=n;

        for(int j=1; j<n; j++)
        {
            ans*=j;
        }
        printf("%lld\n", ans);
    }
    return 0;
}
