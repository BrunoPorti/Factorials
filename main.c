#include <stdio.h>


int main() {
    int fact = 1;   //asigno variables
    int num;


    printf("Enter a number to calculate it's factorial: "); //pido el numer al usuario
    scanf("%d", &num);

    if (num == 0) { //asigno la foctorial de 0 para que sea mas facil
        printf("The factorial of number 0 is 1");
    } else if (num < 0) { // a partir de aqui entran los numeros positivvos arriba de 0
        printf("there are no factorial for negative numbers");
    } else {
        while (0 < num) {
            fact *= num;
            num--;
        }
        //imprimo el resultado
        printf("The factorial of the number is %d", fact);
    }

    return 0;
}