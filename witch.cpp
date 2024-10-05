#include<stdio.h>
int main(){
	
int a;
scanf("%d",&a);

switch(a)
{
	case 35: //if we remove colon here we get syntax error
		printf("lucky girl");
		break;
	case 34: //if we remove 34 here we get the error of primary expression before :
		printf("try again");
		break;
		
	
	default:
		if(a<34 && a>32){
		
		printf("on verge");
		break;} //why is the output coming pay again if i am entering a character
		else if(a>65 && a<=100)
	{
		printf("performed well");
		break; 
	}
	
	else {
		printf("invalid choice");
	}
		
		
		
}
}
