#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S[101];
    int c=0, flag=0, k=0;
    while(getline(cin, S[c++]))
    {

    }
    for(int i=0; i<3 && flag == 0; i++)
    {
        int count = 0;
        for(int j=0; j<S[i].size(); j++)
        {
            if(S[i][j] == 'a'||S[i][j] == 'e' || S[i][j] == 'i' || S[i][j] == 'o' || S[i][j] == 'u')
            {
                count++;
            }
        }
        k++;
        //cout<<count<<endl;
        if(k==1 || k==3)
        {
            if(count == 5)
            {
                flag=0;
            }
            else
            {
                flag=1;
            }
        }
        else if(k==2)
        {
            if(count == 7)
            {
                flag=0;
            }
            else
            {
                flag = 1;
            }
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
