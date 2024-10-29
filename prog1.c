#include<stdio.h>
int main(){
	int item,product=1;//intializing variable as int
	printf("Enter the value of item");//asking user to enter the value
	scanf("%d",&item);//the value is entered
	if(item!=0){//condition of if 
		product*=item;
	}
	printf("The value of product %d\n:",product);
}
