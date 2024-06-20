#include <iostream>

#define MAX 10
using namespace std;

int n;
int k;
int a[MAX];
int Bool[MAX] = {0};

void out(){
    for(int i = 1; i <= k; i++)
    printf("%5d", a[i]);
    cout<<endl;
}
void combination(int i){
    for(int j = 1; j <= n; j++){
        if(!Bool[j]){
            a[i] = j;
            Bool[j] = 1;
            if(i == k) out();
            else combination(i+1);
            Bool[j] = 0;
        }
    }
}
int main(){
    n = 5;
    k = 3;
    combination(1);
}