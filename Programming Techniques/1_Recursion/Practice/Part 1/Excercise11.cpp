#include<iostream>
#include <math.h>
using namespace std;
long long Dec2Bin(int decimalNumber,int p,long long binaryNumber);
int main(){
	int n,p=0;
	long long binaryNumber = 0;
	cout<<"Enter number: ";cin>>n;
	long long t=Dec2Bin(n,p,binaryNumber);
	cout<<"BinaryNumber of "<<n<<" is: "<<t;
}
long long Dec2Bin(int decimalNumber,int p,long long binaryNumber){
    if(decimalNumber > 0){
        binaryNumber += (decimalNumber%2) * pow(10, p);
        return Dec2Bin(decimalNumber/2,p+1,binaryNumber);
    }
    if(decimalNumber == 0){
    	 return binaryNumber += (decimalNumber%2) * pow(10, p);
    }
}
