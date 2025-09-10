#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    int num = 0;
    int time = 0;
    int tmp;
    

    for(int i = 0; i < N; i++){
        cin >> A.at(i);
        // cin >> tmp;
        // if(num < tmp){
        //     num = tmp;
        //     time = 1;
        // }else if(num == tmp){
        //     time++;
        // }
    }


    map<int, int> cnt;
    for(int x : A){
        if(cnt.count(x)){
            cnt.at(x)++;
        }else{
            cnt[x] = 1;
        }
    }

    int max_count = 0;
    int ans = -1;
    for(int x : A){
        if(max_count < cnt.at(x)){
            max_count = cnt.at(x);
            ans = x;
        }
    }

    cout << ans << " " << max_count << endl;
}