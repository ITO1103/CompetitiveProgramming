#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> data(N, vector<int>(N));
  vector<vector<string>> ans(M, vector<string>(M));

  for(int i = 0; i < M; i++){
    for(int j = 0; j < M; j++){
      cin >> data.at(i).at(j);
    }
  }

  for(int i = 0; i < M; i++){
    for(int j = 0; j < M; j++){
      // cout << data.at(i).at(j);
      ans.at(i).at(j) = "-";
    }
  }
}