#include<bits/stdc++.h>
using namespace std;

struct Node{
    int stt;
    struct Node* lk;
    Node(int stt = 0){
        this->stt = stt;
        lk = NULL;
    }
};
typedef struct Node* node;
struct List{
    node head, tail;
    List() { head = NULL; tail = NULL; }
    void add(int x){
        node tmp = new Node(x);
        if (head == NULL) head = tail = tmp;
        else{
            tail->lk = tmp;
            tail = tmp;
        }
    }
    void clear(){ head = tail = NULL;}
    bool not_empty(){ return head != NULL;}
};

int parent[300005];
List powup[300005];
int Find(int a){
    if (parent[a] > 300000) return a;
    return Find(parent[a]);
}
void Union(int a, int b){
    a = Find(a);
    b = Find(b);
    if (a != b){
        parent[a] = b;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q, rq, x, v;
    int M = 1;
    cin >> q;
    for (int z = 0; z < q; z++){
        cin >> rq >> x;
        if (rq == 1){
            if (powup[x].not_empty()) parent[M] = Find(powup[x].head->stt);
            else parent[M] = x + 300000;
            powup[x].add(M);
            M++;
        }
        else{
            if (rq == 2){
                cin >> v;
                int uppow = x + v;
                if (powup[x].not_empty()){
                    if (powup[uppow].not_empty()){
                        powup[uppow].tail->lk = powup[x].head;
                        Union(powup[x].head->stt, powup[uppow].head->stt);
                    }
                    else{
                        powup[uppow] = powup[x];
                        parent[Find(powup[x].head->stt)] = uppow + 300000;
                    }
                }
                powup[x].clear();
            }
            else cout << parent[Find(x)] - 300000 <<endl;
        }
    }
    return 0;
}