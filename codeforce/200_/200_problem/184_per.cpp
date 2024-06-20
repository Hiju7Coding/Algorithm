#include <iostream>
using namespace std;
int main(){
	int T, N;
	for(cin >> T; T; T--){
		cin >> N;
		cout << 2 << endl;
		for(int i=1; i<=N; i+=2)
			for(int j=i; j<=N; j*=2)
				cout << j << " ";
		cout << endl;
	}
}
//1701B