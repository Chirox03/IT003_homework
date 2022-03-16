#include <bits/stdc++.h>
#define ll long long
 #define inf (ll)1e17
#define maxn 1000000
#define mod (ll)(1e9+7)
#define pi pair<ll,ll>
#define mp make_pair
#define fi first
#define se second
#include "mergesort.h"
#include "heapsort.h"
#include "csort.h"
#include "quicksort.h"
using namespace std;
int ra[maxn+1],arr[maxn+1];
void Boost()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
string tostring(int x)
{
    stringstream ss;
    ss<<x;
    string res;
    ss>>res;
    return res;
}
void test_input(int iTest)
{
    string name = "input" + tostring(iTest) + ".inp";
    ifstream input(name);
    for(int i=0; i<maxn; i++)
    {
        input>>ra[i];
    }
    input.close();
}
double sofamark(void (*func)(int array[], int n))
{
    for (int i = 0; i < maxn; i++)
        arr[i] = ra[i];
    clock_t time_begin = clock();
    func(arr,maxn);
    clock_t time_end = clock();
    return double(time_end - time_begin) / CLOCKS_PER_SEC * 1000;
}
int main()
{
    Boost();
    ofstream output("result.txt");
    output<<"Test"<<'\t'<<"Quicksort"<<'\t'<<"Heapsort"<<'\t'<<"Mergesort"<<'\t'<<"csort"<<'\n';
    for(int iTest = 1; iTest <=10; iTest++)
    {
        test_input(iTest);
        output<<iTest<<'\t'<<setw(8);
        output<<sofamark(quickSort)<<"\t"<<setw(8);
        output<<sofamark(heapSort)<<"\t"<<setw(8);
        output<<sofamark(mergesort)<<"\t"<<setw(6);
        output<<sofamark(csort)<<'\n';

    }
    return 0;
}
/*
Read the code again
Check the limit
Check IO
*/
