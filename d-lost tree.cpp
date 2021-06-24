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

void chal(){cout<<"chal rha hun"<<endl;}
//-------------------------------------------solve here---------------------------------//
//auto stt=high_resolution_clock::now();
 

int main() {
    krish;
//wl(t)
{
ll n,x;
cin>>n;

cout<<"? 1"<<endl;
vec ve;
vec vo;
vector<vec> v(n+1);

for(ll i=0;i<n;i++)
{
cin>>x;
if(x==1)
v[1].push_back(i+1);
if(x%2==0&&x!=0)
ve.push_back(i+1);
else if(x%2)
vo.push_back(i+1);
}

cout.flush();

vec vx;
if(ve.size()<vo.size())
vx=ve;
else
vx=vo;
int nd=(n+1)/2;
nd--;

for(auto i:vx)
{
    cout<<"? "<<i<<endl;
    for(ll j=0;j<n;j++)
    {
    cin>>x;
    if(x==1)
        v[i].push_back(j+1);
    }
cout.flush();

}



    set<pri> s;
    for(ll i=1;i<=n;i++)
{
    for(auto j:v[i]){
        int mi=min(i,j);
        int ma=max(i,j);
        s.insert({mi,ma});
    }
}

cout<<"!"<<endl;
for(auto i:s)
{
    cout<<i.fi<<" "<<i.se<<endl;
}


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