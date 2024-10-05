#include<stdio.h>
int main(){
	
//	if(-1<(unsigned int)1) //where is if ?
	printf("1 is less than 1");
	
	else
	printf("-1 is greater than 1");
	
	 
}
//how did the output came -1 is greater than 1 
//in C programming when you compare an signed integer with an unsigned integer the signed integer is converted into an unsigned integer
//as -1 is the largest possible value in the unsigned integer range hence the comparision -1<1 becomes false
