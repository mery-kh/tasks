#include <iostream>

int strln(char* str){
	int length = 0;
	for(int i=0; ;i++){
		if(str[i] == '\0'){
			return length;
		}
		length++;
	}
}

int main(){
	char str[] = "Hello";
		std::cout<<strln(str)<<std::endl;	
}
