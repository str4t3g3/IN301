#include <stdio.h>
#include <stdlib.h>

int main()
{	

int x,i,p;

// Début du code

scanf("%d",&x);
i = 2;
p = 0;

while((i < x)&&(p == 0)) {
	p = x % i;
	if(p != 0) {
		i++;
		p = 0;
	}
	else {
		i = x;
		printf("%d n'est pas un nombre premier.",x); 
	}
	if((p == 0)&&(i == x - 1)) {
		printf("%d est un nombre premier.",x);
	}
}

// Fin du code

}
