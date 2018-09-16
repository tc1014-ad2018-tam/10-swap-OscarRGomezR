/*
 * Este programa permitira el usuario introducir 3 números, para despues cambiar la posición de la variable de menor
 * valor al lugar de la primera variable y ultimo cambiar la posición de la variable con mayor valor al lugar de
 * la tercera variable que el usuario introdujó.
 * Nombre: Óscar Rubén Gómez Ríos
 * Matrícula: A01411750
 * Correo:A01411750@itesm.mx
 */
#include <stdio.h>
int a,b,c;
int idek(int n,int n2,int n3);

int main() {
    printf("Give me the first number:\n");
    scanf("%i",&a);
    printf("Give me the second number:\n");
    scanf("%i",&b);
    printf("Introduce the third número:\n");
    scanf("%i",&c);
    idek(a,b,c);

    return 0;
}

int idek(int n,int n2,int n3){
if (n<n2 && n<n3 && n2>n3){
    a=a;
    b=c;
    c=b;
    printf("The lowest value variable is positioned in the place of the first variable\na=%i.\n"
           "and the highest value variable is placed in the place of the last variable b=\n%i.\n",a,c);
}
    if (n2>n && n2>n3 && n>n3){
        a=c;
        b=a;
        c=b;
        printf("The lowest value variable is placed in the place of the first variable\na=%i.\n "
               "and the highest value variable is placed in the place of the last variable b=\n%i.\n",a,c);
    }

    if (n<n2 && n<n3 && n2<n3){
        a=a;
        b=b;
        c=c;
        printf("The lowest value variable is placed in the place of the first variable\na=%i.\n "
               "and the highest value variable is placed in the place of the last variable b=\n%i.\n",a,c);
    }

    if (n3>n && n3>n2 && n2<a){
        a=b;
        b=a;
        c=c;
        printf("The lowest value variable is placed in the place of the first variable\na=%i.\n "
               "and the highest value variable is placed in the place of the last variable b=\n%i.\n",a,c);
    }

if (n>n2 && n>n3 && n2>n3){
    a=c;
    b=b;
    c=a;
    printf("The lowest value variable is placed in the place of the first variable\na=%i.\n "
           "and the highest value variable is placed in the place of the last variable b=\n%i.\n",a,c);
    }

    if (n>n2 && n>n3 && n2<n3){
        a=b;
        b=c;
        c=a;
        printf("The lowest value variable is placed in the place of the first variable\na=%i.\n "
               "and the highest value variable is placed in the place of the last variable b=\n%i.\n",a,c);
    }
}