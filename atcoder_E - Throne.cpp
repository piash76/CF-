




///PROBLEM DESCRIPTION:


#include<bits/stdc++.h>

#define speed() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



#define ll long long
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ff                      first
#define ss                      second

using namespace std;




const int mod = 1000000007;


const int mx =1000009;///1e6
ll a[mx];


int main()
{


    speed()

    ll t,i,j,cas=0;
    cin>>t;
    while(t--)
    {
        ll n,s,k;cin>>n>>s>>k;

        ll x=(n+1)-(1+s);

        if(x%k) cout<<-1<<endl;
        else cout<<x/k<<endl;



    }

    return 0;

}





