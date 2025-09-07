// https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_minmax_boss
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    sort(a.rbegin(), a.rend());

    cout << a[0] << " " << a[n-1] << endl;
}