#include <queue>
#include <vector>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;
int n,m;
vector<vector<int>> height;
int x[4]={-1,0,1,0},y[4]={0,1,0,-1};
int Bool[100][100] = {0};
int QueueB(){

}
int main(){
    freopen("PLANET.inp","r",stdin);
    cin>>n>>m;
    for(int i =1;i <=n;i++){
        vector<int> row;
        for(int j =1;j <=m;j++){
            int a;
            cin>>a;
            row.push_back(a);
        }
        height.push_back(row);
    }

    for (const auto& row : height) {
        for (int elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

}