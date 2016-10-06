#include <stdio.h>
#include <stdlib.h>

int main()
{	

int x,i;

// Début du code

scanf("%d",&x);
i = 0;

while(x != 1) {
	if(x % 2 == 0) {
		x = x / 2;
	}
	else {
		x = (3 * x) + 1;
	}
	i++;
}

printf("on obtient %d au bout de %d calculs",x,i);

// Fin du code

}
