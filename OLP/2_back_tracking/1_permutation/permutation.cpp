#include <iostream>
using namespace std;


#define MAX 10
int count = 0;
int n;
int a[MAX]; // Luu hoan vi
int Bool[MAX] = {0}; // Mang check phan tu da su dung

void out(){
    count++;
    for(int i = 1;i <= n; i++){
        printf("%5d", a[i]);
    }
    cout<<endl;
}
void permutation(int k){
    for(int i = 1; i <= n; i++){
        if(!Bool[i]){
            a[k] = i;
            Bool[i] = 1;
            if(k == n){
                out();
            }
            else{
                permutation(k+1);
            }
            Bool[i] = 0;
        }
    }
}

int main(){
    n = 3;
    permutation(1);
    cout<<"\n So luong hoan vi: "<<count<<endl;
    return 0;
}