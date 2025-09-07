// https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_search_condition_step4
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }
    int k;
    cin >> k;
    int ans = 0;
    for(int i=0; i<n-1; i++){
        if((abs(x[i] - x[i])+ abs(y[i+1] - y[i+1])) >= k){
            ans++;
        }
    }
    cout << ans << endl;
}