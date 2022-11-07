#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define memset(v,x) memset((v),x,(sizeof(v)))
using namespace std;
typedef long long int lli;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    lli t,n,i,x,mx,mn,f,j,s,r,y,c,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a,b;
        cin>>a>>b;
        c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]=='1')c++;
        }
        if(c&1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i]=='0')
                {
                    if(b[i]=='1')b[i]='0';
                    else b[i]='1';
                }
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]=='1')
                {
                    if(b[i]=='1')b[i]='0';
                    else b[i]='1';
                }
            }
        }
        s=r=0;
        for(i=0;i<n;i++)
        {
            if(b[i]=='1')s++;
            else r++;
        }
        if(s&&r)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(r)cout<<c<<endl;
            else cout<<c+3<<endl;
            for(i=0;i<n;i++)
            {
                if(a[i]=='1')cout<<i+1<<" "<<i+1<<endl;
            }
            if(s)
            {
                cout<<1<<" "<<1<<endl;
                cout<<2<<" "<<2<<endl;
                cout<<1<<" "<<2<<endl;
            }
        }
    }
}
