#include <iostream>
#include <cstring>
#include <fstream>

#define MAX 10
using namespace std;

string s1;
string s2;

int n;
int m;
int p = 0;
int d[MAX];
int b[MAX];

int main(){
    freopen("TEFI.inp","r",stdin);
    cin>>n>>m;
    
    while(p < n){
        char a;
        if(p < 1){
            s1 = '0' + s1;
            for(int i = 1; i <= m; i++){
                cin>>a;
                s1 = s1 + a;
            }
            s1 = s1 + '0';
            p++;

            s2 = '0' + s2;
            for(int i = 1; i <= m; i++){
                cin>>a;
                s2 = s2 + a;
            }
            s2 = s2 + '0';
        }
        else if(p == n){
            s1 = s2;
            p++;

            s2 = "";
            s2 = '0' + s2;
            for(int i = 1; i <= m; i++){
                s2 = s2 + '0';
            }
            s2 = s2 + '0';
        }
        else{
            s1 = s2;
            p++;

            s2 = "";
            s2 = '0' + s2;
            for(int i = 1; i <= m; i++){
                cin>>a;
                s2 = s2 + a;
            }
            s2 = s2 + '0';
        }

        for(int i = 0; i <= m + 1; i++){
            cout<<s1[i]<<" ";
            if(s1[i] == '1'){
                /*
                1 x
                x
                */
                if(s2[i] == '1'){
                    /*
                    1 x
                    1
                    */
                    if(s1[i+1] =='1'){
                        /*
                        1 1
                        1
                        */
                        // BD E F T
                        if(p == 1){
                            d[i] = 2;
                        }
                        else{
                            if(d[i] >= 2) d[i] = d[i] + 1;
                            else d[i] = 2;
                        }
                    }
                    else{
                        /*
                        1 0
                        1
                        */
                        // BD I hoac noi tiep
                        if(p == 1){
                            d[i] = 1;
                        }
                        else{
                            if(d[i] == 0) d[i] = 1;
                        }
                    }
                }
                else{
                    if(s1[i+1] =='1'){
                        /*
                        1 1
                        0
                        */
                        // KT E
                        if(d[i] >= 3){
                            b[4]++;
                            d[i] = 0;
                        }
                    }
                    else{
                        /*
                        1 0
                        0
                        */
                        // KT F T I
                        if(d[i] > 0){
                            b[d[i]]++;
                            d[i] = 0;
                        }
                    }
                }
            }
        }
        cout<<endl;
        for(int i = 0; i <= m + 1; i++) cout<<d[i]<<" ";
        cout<<endl;   

        for(int i = 1; i <= 4; i++){
            cout<<b[i]<<" ";
        }  
        cout<<endl;   

    }
    for(int i = 1; i <= 4; i++){
        cout<<b[i]<<" ";
    }
}