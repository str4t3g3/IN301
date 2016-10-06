#include <stdio.h>
#include <stdlib.h>

int main()
{	

float s = 0;
int i = 0;
float n;

// Début du code

scanf("%f",&n);

while((1.0 / (i*i)) > n) {
	s += 1.0 / (i*i);
	i++;
}

printf("%f\n",s);

// Fin du code

}
