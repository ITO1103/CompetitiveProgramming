#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<pair<int, int>> data(N);

    for(int i = 0; i < N; i++){
        int a,b;
        cin >> a >> b;
        data.at(i) = make_pair(b, a);
    }

    sort(data.begin(), data.end());

    for(int i = 0; i < N; i++){
        int a, b;
        tie(b, a) = data.at(i); // pairを分解するのに必要
        cout << a << " " << b << endl;
    }
}