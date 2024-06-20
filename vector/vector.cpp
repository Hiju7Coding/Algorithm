#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> vt;
	// thêm phần từ vào vector bằng cách		
    vt.push_back(100);
	vt.push_back(200); // giá trị thêm vào có kiểu dữ liệu tương ứng
	cout<<vt[1]<<endl;
	// xóa phần tử cuối ra khỏi vector
	vt.pop_back();
	cout<<vt[1]<<endl;
    
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for(int x : a) {
        cout << x << " ";
    }
    cout << endl;
    for(auto x : a) {
        cout << x << " ";
    }
}