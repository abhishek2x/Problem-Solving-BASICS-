/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    vector<ll> e_id;
    vector<ll> j_id;

    ll k;
    for (ll i = 0; i < n; i++){
        cin >> k;
        e_id.push_back(k);
    }

    ll n1;
    cin >> n1;
    
    ll k1;
    for (ll i = 0; i < n; i++){
        cin >> k1;
        j_id.push_back(k1);
    }
    
    sort(e_id.begin(), e_id.end());
    sort(j_id.begin(), j_id.end());

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += abs(e_id[i] - j_id[i]);
    }
    
    cout << ans;

    return 0;
}