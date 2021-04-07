#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, Count;
    int notb, notl;
    int nt[101];
    int mt[101];
    cin>>t;
    while(t--)
    {
        Count = 0;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>nt[i];
            //nt.push_back(notb);
            //cout<<"notb "<<nt[i]<<endl;
        }
        for(int i=0; i<m; i++)
        {
            cin>>mt[i];
            //mt.push_back(notl);
            //cout<<"notl "<<mt[i]<<endl;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(nt[i]==mt[j])
                {
                    Count++;
                }
                //cout<<"Count: "<<Count<<endl;
            }
        }
        cout<<Count<<endl;
        //nt.clear();
        //mt.clear();
    }
    return 0;
}
