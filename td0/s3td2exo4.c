#include <stdio.h>
#include <stdlib.h>

int main()
{	

int i,j;

// Début du code

for(i = 0; i < 10; i++) {
	for(j = 0; j < 10 - i; j++) {
		printf(" ");
	}
	printf("*\n");
}

// Fin du code

}
