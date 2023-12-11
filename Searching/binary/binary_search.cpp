#include<bits/stdc++.h>

int binary(int arr[],int left,int right,int target){
	while ( left <= right){
		int mid = (left + right)/2;
		if(arr[mid] == target){
			return mid;
		}
		if(arr[mid] < target){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	return -1;	
}
int main(){
	int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = binary(arr, 0,n-1, x);
    std::cout<<result;
}