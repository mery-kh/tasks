#include <iostream>
int fibonacci(int n){
	if(n < 0 ) return -1;
	int num = 0;
	if(n == 0) return 0;
    if(n == 1) return 1;
    num = fibonacci(n-1) + fibonacci(n-2);
    return num;
}
int main(){
	int n;
	std::cin>>n;
	std::cout<<fibonacci(n)<<std::endl;
}
