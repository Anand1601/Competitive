#include<iostream>
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;   //----for_getting_execution_time
#define ll long long
#define fi first
#define se second
#define pri pair<ll,ll>
#define M 1000000007
#define pb(x) push_back(x)
#define mpr(x,y) make_pair(x,y)
#define wl(t) int t;cin>>t;while(t--)
#define krish ios::sync_with_stdio(0),cout.tie(0),cin.tie(0)
#define vec vector<ll> 
#define inf 3e18
#define ld long double

//sort by second a pair
bool bysec(pri a,pri b)  {return (a.se<b.se);}

//sort by second in reverse order
bool bysecriv(pri a,pri b){return (a.se>b.se);}

//sort by first in reverse
bool byrev(pri a , pri b){return (a.fi>a.fi);}
//sort in reverse order
bool rev(int a ,int b){ return (a>b);}

void print(vec a)
{
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
long long power(long long x, long long  y)
{
    int res = 1;  
    x = x % M; 
    if (x == 0) return 0;  
    while (y > 0)
    {
               if (y & 1)
            res = (res*x) % M;
              y = y>>1;       
                x = (x*x) % M;
    }
    return res;
}


void chal(){cout<<"chal rha hun"<<endl;}
//-------------------------------------------solve here---------------------------------//
//auto stt=high_resolution_clock::now();




int main() {
    krish;

wl(t)
{
    ll n;
    cin>>n;
vec v(n);

for(ll &i:v)
    cin>>i;
sort(v.begin(),v.end());
ll x=n+1;
ll y=inf;
for(ll i=0;i<n-1;i++)
if(abs(v[i]-v[i+1])<y)
{
    x=i;
    y=abs(v[i]-v[i+1]);
}

cout<<v[x]<<" ";
for(int i=x+2;i<n;i++)
    cout<<v[i]<<" ";
for(int i=0;i<x;i++)
    cout<<v[i]<<" ";
cout<<v[x+1]<<endl;

}

// auto en=high_resolution_clock::now();
// auto diff=duration_cast<microseconds>(en-stt);
// cout<<diff.count()<<endl;
    return 0;
}


//some points to remember
/*
-simple mod not work for -ve numbers;
*/