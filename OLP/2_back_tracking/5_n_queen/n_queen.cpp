#include <iostream>
using namespace std;
#define MAX 10

int n;
int a[MAX][MAX];

void print_board(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%5d", a[i][j]);
        }
        cout<<endl;
    }
    cout<<endl;
}
int check(int x,int y){
    for(int i = 0; i < n;i++){
        if(a[x][i] != 0) return 0;
        if(a[i][y] != 0) return 0;
        if((x + i) < n && (y + i) < n && a[x+i][y+i] != 0) return 0;
        if((x - i) >= 0 && (y + i) < n && a[x-i][y+i] != 0) return 0;
        if((x + i) < n && (y - i) >= 0 && a[x+i][y-i] != 0) return 0;
        if((x - i) >= 0 && (y - i) >= 0 && a[x-i][y-i] != 0) return 0;
    }
    return 1;
}
int n_queen(int y){
    if(y == n) return 1;
    for(int i = 0; i < n;i++){
        if(check(i,y) == 1){
            a[i][y] = 1;
            if(n_queen(y+1) == 1){
                return 1;
            }
            a[i][y] = 0;
        }
    }
    return 0;
}

int main(){
    n = 8;
    for(int i = 0; i < n;i++)
    for(int j = 0; j < n;j++)
    a[i][j] = 0;

    if(n_queen(0) == 1){
        print_board();
    }
    else{
        cout<<"\nNo solution!"<<endl;
    }
}