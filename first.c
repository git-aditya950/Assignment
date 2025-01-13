#include <stdio.h>
	void Binary(int num){
int binary[32],i=0;
   		while (num > 0){
 		binary[i++] = num % 2;
        		num /= 2;
    	}
    	for (int j = i - 1; j >= 0; j--) {
        		printf("%d", binary[j]);
    	}
    printf("\n");
}
int main() {
    int num;
    printf("Enter a no: ");
    scanf("%d", &num);
    printf("Binary representation: ");
    Binary(num);
    return 0;
}