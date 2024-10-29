#include<stdio.h>
int main(){
   int x,y,s;//initializing x y and s as int
   printf("Enter the value of x ");// entering the value of x and y
   scanf("%d",&x);
   printf("Enter the value of y");
   scanf("%d,&y");
   if (x>y){//if condn
   	s=x-y;
   }
   else{
   	s=y-x;
   }
   printf("The diff is %d",s) ;
    return 0;
}
