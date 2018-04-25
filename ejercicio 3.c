#include <stdio.h>
#include <conio.h>

main ()
{
	int num,fact=1,n, salir;
	printf("Introducir el número a calcular en factorial");
	scanf ("%d",&n);
	for (num=1;num<=n;num++)
	fact=fact*num;
	printf("\n El factorial del numero %d es %d",n,fact);
	printf("\n Si desea salir presione 1 o de lo contrario presione otro numero: ");
scanf("%d",&salir);
if(salir==1)
salir=1;
	getch();
}

