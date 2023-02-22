#include<bits/stdc++.h>
using namespace std;

void solve(long long int n, long long int k)
{
    long long int div = k / (n-1) ;//3
    long long int ex = k % (n-1) ;//1
    long long int ans = n * div + ex ;//10
    if(ex == 0)
        ans -- ;
    cout << ans << endl ;


}

int main()
{

    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++)
    {

        long long int n, k ;
        cin >> n >> k;
        solve(n,k);
    }

    return 0;
}
