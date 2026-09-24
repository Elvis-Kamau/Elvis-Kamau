#include <stdio.h>

int main() {

float principalAmount;
float time;
float rate;
float simple_interest;

printf("Enter the principalAmount: ");
scanf("%f", &principalAmount);

printf("Enter time: ");
scanf("%d", &time);

printf("Enter  rate: ");
scanf("%f", &rate);

simple_interest = (principalAmount * time * rate)/100;

printf("\nsimple_interest = %.2f\n", simple_interest);

return 0;
}
