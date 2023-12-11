#include<bits/stdc++.h>
using namespace std;
/*
sum: arr L R
sum: a = a[L]+...+a[R];

arr: 1 -2 3 4 -5 2 6 -1
	 0  1 2 3  4 5 6  7  -> 8
div_conq: arr 0 7
1 # -1 
	=> mid = 3
	   lsum = (arr,0,3) = 6
	   rsum = (arr,4,7) = 2
	   csum = (arr,0,7) = 8	  
	return max(max(6,2),8) => 8

*/
int sum(vector<int>& arr,int left,int right){
	int total = 0;
	for(int i = left; i <= right; i++) total += arr[i];
	return total;
}

int div_conq(vector<int>& arr,int left,int right){
	if(left == right){
		return arr[left];
	}
	else{
		int mid = (left + right) / 2;
		int leftsum = div_conq(arr,left,mid);
		int rightsum = div_conq(arr,mid+1,right);
		int crossingsum = sum(arr,left,right);
		return max(max(leftsum,rightsum),crossingsum);
	}
}

int main(){
	vector<int> arr = {1,-2,3,4,-5,2,6,-1};
	int result = div_conq(arr,0,arr.size() - 1);
	cout<<"Max Sum: "<<result<<endl; // 8
	return 0;
}