#include <stdio.h>

int main(){
    int balance;
    int withdrawal;

    printf("Enter the initial account balance:\t");
    scanf("%d",&balance);

    while (balance>0) {
          printf("Enter amount to withdraw:");
          scanf("%if",&withdrawal);

           balance-=withdrawal;

           printf("current balance: %.2d\n\n",balance);
           }

    printf("transaction stopped.Final balance: %.2d\n",balance);

    return 0;
}
