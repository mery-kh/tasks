#include <iostream>

char* strset(char* s, char ch){
	int i = 0;
	while(*(s + i) != '\0'){
		s[i]= ch;
		++i;
	}
	return s;
}

int main(){
	char s[] = "Hello";
	char ch = 'a';
	std::cout<<strset(s, ch)<<std::endl;
}
