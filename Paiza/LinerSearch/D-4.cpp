// https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_search_value_boss
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;

    vector<int> ans(n);

    for(int i=0; i<n; i++){
        if(a[i] == k){
            ans[i] = i + 1;
        }
    }
    for(int i=0; i<n; i++){
        if(ans[i] != 0){
            cout << ans[i] << endl;
        }
    }
}