#include<stdio.h>
int main(){
	 int num, modified = 0;
    int place = 1;

    
    printf("Enter a number: ");
    scanf("%d", &num);


    while (num > 0) {
        int digit = num % 10;

        if (digit == 0) {
            modified += 1 * place;
        } else if (digit == 1) {
            modified += 0 * place;
        } else {
            modified += digit * place;
        }

        num /= 10;
        place *= 10;
    }

    
    printf("Modified number: %d\n", modified);

    return 0;
    }


