#include <stdio.h>

int add(int a,int b){return a+b;}
int subtract(int a, int b){return a-b;}
int multiply(int a,int b) {return a*b; }
float divide(int a,int b) { return b!= 0 ? (float)a/b:0;}

int main(){
    int choice,a,b;
    do{
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice>=1 && choice<=4){
            printf("Enter two no: ");
            scanf("%d %d",&a,&b);
        }
        switch (choice) {
            case 1: printf("Result: %d\n",add(a,b)); break;
            case 2: printf("Result: %d\n",subtract(a,b)); break;
            case 3: printf("Result: %d\n",multiply(a,b)); break;
            case 4: 
                if(b!=0){
                    printf("Result: %.2f\n",divide(a,b));
                }else{
                    printf("Error: Division by zero\n");
                }
                break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while(choice!=5);
    return 0;
}
