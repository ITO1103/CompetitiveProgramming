// https://paiza.jp/works/mondai/sequence_search_problems/sequence_search_problems_minmax_step1
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(10);
    for(int i=0; i<10; i++){
        cin >> a[i];
    }
    
    sort(a.rbegin(), a.rend());

    cout << a[0] << " " << a[9] << endl;
}