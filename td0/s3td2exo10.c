#include <stdio.h>
#include <stdlib.h>

int main()
{	

int a;
float e1,e2,c;

// Début du code

scanf("%d",&a);
scanf("%f",&e1);
c = 1.0;
e2 = 1.0;

while((c*c < a)&&(e2 > e1)) {
	if((c+e2)*(c+e2) > a) {
		e2 = e2/10;
	}
	c = c + (1*e2); 
}

printf("Le carré de %d est %f",a,c);

// Fin du code

}
