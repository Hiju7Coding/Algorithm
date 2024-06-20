#include <iostream>
/*
           (-1,2)        (1,2)
    (-2,1)                    (2,1)
                    Mã
    (-2,-1)                   (2,-1)
           (-1,-2)      (1,-2)


*/
using namespace std;

#define MAX 10

int dx[8] = {2,1,-1,-2,-2,-1,1,2}; 
int dy[8] = {1,2,2,1,-1,-2,-2,-1};

int a[MAX][MAX] = {0};
int count = 0;
int n;

void print_path(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%5d", a[i][j]);
        }
        cout<<endl;
    }
    cout<<endl;
}

int knight_tour(int x,int y,int count){
    if(count == n*n) return 1;
    for(int k = 0; k < 8; k++){
        // next move
        int x_next = x + dx[k];
        int y_next = y + dy[k];
        if(x_next >= 0 && x_next < n && y_next >= 0 && y_next < n && a[x_next][y_next] == 0){ // check valid move
            a[x_next][y_next] = count; 
            if(knight_tour(x_next,y_next,count+1) == 1) return 1;
            else a[x_next][y_next] = 0; // back tracking
        }
    }
    return 0;
}

int main(){
    n = 6;
    int num = 0;
    for(int x = 0;x < n; x++){
        for(int y = 0;y < n;y++){
            a[x][y] = -1;
            if(knight_tour(x,y,count+1) == 1){
                num++;
                cout<<"\nSolution "<<num<<": "<<endl;
                print_path();
            }
            for(int i = 0; i<n;i++)
            for(int j = 0; j<n;j++)
            a[i][j] = 0;
            count = 0;
        }
    }
}