#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

int main()
{

    int num1;
    int num2;
    int resultado;
    int resultadoresta;
    int resultadomultiplicar;
    int resultadodividir;
    int i;
    int fac = 1;
    char seguir='s';
    int opcion=0;

    printf("1- Ingresar 1er operando : ");
        scanf("%d", &num1);

        printf("2- Ingresar 2do operando : ");
        scanf("%d",&num2);

while(num1 == 0 && num2== 0){

                 printf("ingrese un numero distinto a 0: ");
     scanf("%d", &num1);
     printf("ingrese numero distinto a 0: ");
     scanf("%d", &num2);

     }



    while(seguir=='s')
    {

        printf("\n1- Calcular la suma (%d+%d)\n", num1, num2);

        printf("2- Calcular la resta (%d-%d)\n", num1, num2);

        printf("3- Calcular la division (%d/%d)\n", num1, num2);

        printf("4- Calcular la multiplicacion (%d*%d)\n", num1, num2);

        printf("5- Calcular el factorial (%d!)\n", num1);

        printf("6- Calcular todas las operacione\n");

        printf("7- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {



            case 1: resultado = sumar(num1, num2);
            printf("\nla suma es %d\n", resultado);
                break;
            case 2: resultadoresta = restar(num1, num2);
             printf("\nla resta da %d\n", resultadoresta);
                break;
            case 3:

                 while(num2== 0){

                    printf("ingrese un numero que no sea cero: ");
                    scanf("%d", &num2);

                 }

resultadodividir = dividir(num1, num2);
                    printf("\nLa division es %d\n", resultadodividir);

                break;
            case 4: resultadomultiplicar = multiplicar(num1,num2);
            printf("\nLa multiplicacion da %d\n", resultadomultiplicar);
                break;
            case 5: for(i= 1; i<= num1; i++){

      fac= fac * i;

    }
     printf("\nEl factorial de %d es %d \n", num1, fac);
                break;
            case 6:resultado = sumar(num1, num2);
            printf("\nla suma es %d\n", resultado);
                 resultadoresta = restar(num1, num2);
             printf("\nla resta da %d\n", resultadoresta);
             while(num2== 0){
                printf("ingrese un numero distinto a cero: ");
                scanf("%d", &num2); }
                resultadodividir = dividir(num1, num2);
            printf("\nLa division es %d\n", resultadodividir);

            resultadomultiplicar = multiplicar(num1,num2);
            printf("\nLa multiplicacion da %d\n", resultadomultiplicar);
for(i= 1; i<= num1; i++){

      fac= fac * i;

    }
     printf("\nEl factorial de %d es %d \n", num1, fac);
                break;
            case 7:
                seguir = 'n';
                break;
        }

system("\npause\n");

}

}


