#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll* arr, ll N)
{
    ll ans = 0;
    for (ll i = 1; i < N; i++) {
        if (arr[i - 1] > arr[i]) {
            ans += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    return ans;
}
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];
    cout << solve(arr, n) << "\n";
    return 0;
}
