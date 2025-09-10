#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //これは改行を除外するのに必要
    vector<string> input(N);

    for(int i = 0; i < N; i++){
        getline(cin, input.at(i));
    }

    for(int i = 0; i < N; i++){
        cout << input.at(i) << endl;
    }
}