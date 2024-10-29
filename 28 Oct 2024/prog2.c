#include<stdio.h>
int main(){
   int x,y,s;
   printf("Enter the value of x ");
   scanf("%d",&x);
   printf("Enter the value of y");
   scanf("%d,&y");
   if (x>y){
   	s=x-y;
   }
   else{
   	s=y-x;
   }
   printf("The diff is %d",s) ;
    
}
