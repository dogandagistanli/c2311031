#include <stdio.h>
int main(){
	int grade;
	printf("Please enter your grade: ");
	scanf("%d",&grade);
	
if(grade>=0 && grade<=100){
	if(grade>=90 && grade<=100){
		printf("A");
	if(grade>=75 && grade<=89){
		printf("B");}
	}
	if(grade>=55 && grade<=74){
		printf("C");}
	}
	if(grade>=45 && grade<=54){
		printf("D");}
	}
	if(grade>=0 && grade<=44){
		printf("F");}
	}
}else{
	printf("Wrong input")
}
	
	
	
	
	
	
	
	return 0;
}
