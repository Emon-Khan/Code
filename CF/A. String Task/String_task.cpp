#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    while(cin>>p)
    {
        int Size = p.size();
        //cout<<Size<<endl;
        string str = p;
        std::string::iterator it;
        int i=0, x;
        while(i<Size)
        {
            if(isupper(p[i]))
            {
                p[i]=tolower(p[i]);
            }
            if(p[i] == 'a' || p[i] == 'o' || p[i] == 'y' || p[i] == 'e' || p[i] == 'u' || p[i] == 'i')
            {
                it = find(p.begin(), p.end(), p[i]);
                p.erase(it);
                Size--;
            }
            else
            {
                i++;
            }

        }
        cout<<p<<endl;
        for(int i=0; i<Size; i+=2)
        {
            //cout<<Size<<endl;
            it = find(p.begin(), p.end(), p[i]);
            p.insert(it, '.');
            Size++;
            //cout<<Size<<endl;
            //cout<<p[i]<<endl;
        }
        cout<<p<<endl;
        //cout<<p.size()<<endl;
    }
    return 0;
}
