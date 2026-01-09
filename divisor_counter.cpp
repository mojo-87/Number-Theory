#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define no cout<<"NO"<<"\n";
#define yes cout<<"YES"<<"\n";
#define fast() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

ll const N=1e6;
ll Maxdiv[N+1];
void seive()
{
    for(ll i=2; i<=N; i++)
    {
        for(ll j=i; j<=N; j+=i)
            if(Maxdiv[j]==0)
            {
                Maxdiv[j]=i;
            }
    }

}                                       //Initially all value of this array is zero
void solve()
{

    ll n;
    cin>>n;
    ll div=1;
    while(n!=1)
    {
        ll prime=Maxdiv[n];
        ll cnt=0;
        while(n%prime==0)
        {
            cnt++;
            n/=prime;
        }
        div*=cnt+1;
    }
    cout<<div<<"\n";


}
int main()
{
    fast()
    ll tc;
    cin>>tc;
    seive();
    while(tc--)
    {
        solve();

    }
    return 0;
}

