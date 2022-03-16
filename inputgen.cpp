#include <bits/stdc++.h>
#define ll long long
#define mid ((l+r)/2)
#define inf (ll)1e9
#define maxn 1000000
#define mod (ll)(1e9+7)
#define pi pair<ll,ll>
#define mp make_pair
#define fi first
#define se second

#include<random>
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd

ll RAND(ll l, ll h)
{
    assert(l <= h);
    ll ret = (ll)rd() % (ll)1e9 * (ll)(rd() % (ll)1e9);
    ret = ret % (h - l + 1) + l;
    return ret;
}
vector<int> random_arr()
{
    vector<int> arr(maxn);
    for(int i=0;i<maxn;i++)
        arr[i] = RAND(-inf,inf);
    return arr;
}
string tostring(int x)
{
    stringstream ss;
    ss<<x;
    string res;
    ss>>res;
    return res;
}
int main()
{
    srand(time(NULL));
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    for(int itest = 1; itest <=10; itest++)
    {
        string name = "input" + tostring(itest) + ".inp";
        ofstream output(name);
        vector<int> cur;
        cur = random_arr();
        switch(itest){
            case 1: {sort(cur.begin(),cur.end());break;}
            case 2: {sort(cur.begin(),cur.end(),greater<int>());break;}
        }
        for(int i=0 ; i < maxn ; i++)
            output<<fixed<<cur[i]<<" ";
        output<<'\n';
        output.close();
    }
    return 0;
}
/*
Read the code again
Check the limit
Check IO
*/
