#include<stdio.h>
int main(){
	int s;
	printf("Enter the value of s");
	scanf("%d",&s);
	int zero_count=0;
	int minus_count=0;
	int plus_count=0;
	if(s==0){
		zero_count++;
	}
	else if(s<0){
		minus_count+=s;
	}
	else{
		plus_count=s;
	}
	printf("zero count %d\n",zero_count);
	printf("minus count %d\n",minus_count);
	printf("plus count %d\n",plus_count);
}
