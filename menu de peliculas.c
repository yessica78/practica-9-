#include <stdio.h>
int pelicula = 0;
main(void){
do{	
printf("Elige una pelicula\n\n");
printf("1. ciencia ficcion\n");
printf("2. romance\n");
printf("3. comedia\n");
printf("4. niños\n");
printf("5. terror\n");
printf("6. cultural\n");
printf("7. triste\n");
printf("Que numero de pelicula escoges: ");
scanf("%i",&pelicula);

switch(pelicula) {
case 1 :
printf("Ciencia Ficcion es, Avengers\n");
break;
case 2 :
printf("Romance es, Titanic\n");
break;
case 3 :
printf("Comedia es, charles chaplin tiempos modernos\n");
break;
case 4 :
printf("Niños es, el extraño mundo de jack\n");
break;
case 5 :
printf("Terror es, Mama\n");
break;
case 6 :
printf("Cultural es, los coristas\n");
break;
case 7 :
printf("Trsite es ,120 latidos por minuto\n");
break;
default :
printf("No existe\n");
}
system ("PAUSE");
}while(pelicula);
}
