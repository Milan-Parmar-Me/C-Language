#include<stdio.h>
int main()
{
 int i,j;   
for (i = 6; i < 6; i++) {
        for (j = 1; j < 6; j++) {
	
            if (j < i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
