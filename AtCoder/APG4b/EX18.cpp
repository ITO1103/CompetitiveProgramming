#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; //人数
  int M; //試合数
  cin >> N >> M;
  vector<vector<int>> data(M, vector<int>(2));
  vector<vector<char>> ans(N, vector<char>(N, '-'));

  for(int i = 0; i < M; i++){
    for(int j = 0; j < 2; j++){
      cin >> data.at(i).at(j);
    }
  }

  // for(int i = 0; i < N; i++){
  //   for(int j = 0; j < N; j++){
  //     // cout << data.at(i).at(j);
  //     //一旦全部埋める
  //     ans.at(i).at(j) = '-';
  //     // ans.at(i,j)にo，(j,i)にxを入れれば良いのだが
  //     // ans.at(a).at(b) = 'o';
  //   }
  // }

  for(int i = 0; i < M; i++){
    ans.at(data.at(i).at(0)-1).at(data.at(i).at(1)-1) = 'o';
    ans.at(data.at(i).at(1)-1).at(data.at(i).at(0)-1) = 'x';
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(j == N -1){
        cout << ans.at(i).at(j);
      }else{
        cout << ans.at(i).at(j) << " ";
      }
      
    }
    cout << endl;
  }
}