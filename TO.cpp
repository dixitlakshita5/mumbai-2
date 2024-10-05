#include<stdio.h>
int main(){
	static int a; //static?
	while(a<20)
	(a>5)?a++:a--; //ternary operator 
	printf("%d",a);
}

