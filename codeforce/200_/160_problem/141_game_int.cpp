#include <iostream>
main(){
	int a,x;
	std::cin>>a;
	while(std::cin>>x){
		std::cout <<(x % 3?"First\n":"Second\n");
	}
}
//1899A