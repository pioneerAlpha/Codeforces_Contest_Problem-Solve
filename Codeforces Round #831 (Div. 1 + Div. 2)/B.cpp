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
        mx=s=0;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            if(x<y)swap(x,y);
            mx=max(mx,x);
            s+=y;
        }
        cout<<(mx+s)*2<<endl;
    }
}
