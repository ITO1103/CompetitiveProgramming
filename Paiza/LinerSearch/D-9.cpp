// https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_search_condition_step3
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int k;
    cin >> k;
    
    int ans = 0;

    for(int i=0; i<n; i++){
        if(a[i] > k){
            ans = a[i-1];
            break;
        }
    }
    cout << ans << endl;
}