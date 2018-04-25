
#include <conio.h>
#include <stdio.h>

int main()
{
    int numero;
    do{
    printf( "\n   Listado de signos del zod%caco:", 161 );
    printf( "\n\n   1. Aries" );
    printf( "\n   2. Tauro" );
    printf( "\n   3. Geminis", 130 );
    printf( "\n   4. Cancer", 160 );
    printf( "\n   5. Leo" );
    printf( "\n   6. Virgo" );
    printf( "\n   7. Libra" );
    printf( "\n   8. Escorpio" );
    printf( "\n   9. Sagitario" );
    printf( "\n   10. Capricornio" );
    printf( "\n   11. Acuario" );
    printf( "\n   12. Piscis" );
    printf( "\n\n   Introduzca nucmero de signo: ", 163 );

    scanf( "%d", &numero );

    switch ( numero )
    {
        case  1 :
        case  5 :
        case  9 : printf( "\n   Es un signo de Fuego." );
                  break;
        case  2 :
        case  6 :
        case 10 : printf( "\n   Es un signo de Tierra." );
                  break;
        case  3 :
        case  7 :
        case 11 : printf( "\n   Es un signo de Aire." );
                  break;
        case  4 :
        case  8 :
        case 12 : printf( "\n   Es un signo de Agua." );
                  break;
        default : printf( "\n   ERROR: %d no est%c asociado a ning%cn signo.", numero, 160, 163 );
    }

    getch(); /* Pausa */
    
    }while(numero);
}

