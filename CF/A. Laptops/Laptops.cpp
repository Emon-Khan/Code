#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int size = n;
    int a[size], b[size];
    int count = 0;
    while(n--)
    {
        for(int i=0; i<size; i++)
        {
            cin>>a[i]>>b[i];
            for(int j=i+1; j<size; j++)
            {
                if(a[i]<a[i] || a[i]>b[i])
                {
                    count++;
                    break;
                }
                else
                {
                    break;
                }
            }
        }
    }
    if(count == size)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
    {
        cout<<"Poor Alex"<<endl;
    }
}
