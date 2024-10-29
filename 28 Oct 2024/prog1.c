#include<stdio.h>
int main(){
	int item,product=1;
	printf("Enter the value of item");
	scanf("%d",&item);
	if(item!=0){
		product*=item;
	}
	printf("The value of product %d\n:",product);
}
