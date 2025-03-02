#include<bits/stdc++.h>
#define MOD 100000007
using namespace std;
int add(int a, int b)
{
    return (a % MOD + b % MOD) % MOD;
}
int mul(int a, int b)
{
    return ((a % MOD) * 1LL *  (b % MOD)) % MOD;
}
int solve(int n, int k)
{
    if(n == 1)
        return k;
    
    if(n == 2)
        return add(k, mul(k, k-1));

    int ans = add(mul(solve(n-2, k), k-1), mul(solve(n-1, k),k-1));

    return ans;
}

int solveMem(int n, int k, vector<int> &dp)
{
    if(n == 1)
        return k;
    
    if(n == 2)
        return add(k, mul(k, k-1));

    if(dp[n]!= -1 )
        return dp[n];

    dp[n] = add(mul(solveMem(n-2, k, dp), k-1), mul(solveMem(n-1, k, dp),k-1));

    return dp[n];
}

int solveTab(int n, int k)
{
    vector<int> dp(n+1, 0);
    dp[1] = k;
    dp[2] = add(k, mul(k, k-1));

    for(int i = 3; i <= n; i++)
    {
        dp[i] = add(mul(dp[i-2], k-1), mul(dp[i-1], k-1));
    }
    return dp[n];
}

int main()
{
    int n, k;
    cin >> n >>  k;
    vector<int> dp(n+1, -1);

    // cout << solve(n, k);

    // cout << solveMem(n, k, dp);

    cout << solveTab(n, k);
}