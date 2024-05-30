#include <stdio.h>

int prime(int num){
	int counter=2;
	while (counter <= 1000){
		if (num % counter == 0 && counter != num){
			return 0;
		}
		counter++;
	}
	return 1;
}

// ex: second prime number
// 2

int nth_prime(int n){
    int counter = 0;
    int number = 1;
    int store;
    int index = 0;
    while (counter <= n){
        if ( prime(number) == 1){
            counter++;
            store = number;
        }
        number++;
    }
    return store;
}


int main(){
    int num;
    int p;
    int ui_loop = 1;
    while (ui_loop){
        char an_option;
        printf("\n\n1) Check a single prime number\n");
        printf("2) Get the Nth Prime number\n");
        printf("q) Quit\n");
        printf("Pick an option: ");
        scanf("%c", &an_option);
        switch (an_option){
            case '1':
                printf("\nEnter a number: ");
                scanf("%d", &num);
                p = prime(num);
                if (p == 0){
                    printf("%d is not a prime number.\n\n", num);
                } else {
                    printf("%d is a prime number.", num);
                }
                break;
            case '2':
                printf("\nFind the nth prime (i.e. 2 for 2nd prime number): ");
                scanf("%d", &num);
                p = nth_prime(num);
                printf("Prime number in position %d: %d\n\n", num, p);
                break;
            case 'q':
                ui_loop = 0;
                break;
            default:
                if (ui_loop){
                    printf("\n\nInvalid Option.");
                }
        }
    }
	return 0;
}
