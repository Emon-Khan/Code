#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t1, t2, ar[2001], count;
    cin>>t1;
    while(t1--)
    {
        cin>>t2;
        count=0;
        for(int i=0; i<t2; i++)
        {
            cin>>ar[i];
            count+=ar[i];
        }
        if(count%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        /*for(int j=0; j<t2; j++)
        {
            cout<<ar[j]<<" ";
        }*/
    }
    return 0;
}
