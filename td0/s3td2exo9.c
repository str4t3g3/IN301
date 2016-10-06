#include <stdio.h>
#include <stdlib.h>

int diviseurs(int a, int x) {
	int i;
	i = 1;
	while(i < a) {
		if(a % i == 0) {
			x = x + i;
		}
		i++;
	}
	return x;
}

int main()
{	

int a,b,x,y;

// Début du code

scanf("%d",&a);
scanf("%d",&b);

x = 0;
y = 0;

x = diviseurs(a,x);
y = diviseurs(b,y);

if((a == y)&&(b == x)) {
	printf("%d et %d sont des nombres amis\n",a,b);
}
else {
	printf("%d et %d ne sont pas des nombres amis\n",a,b);
}

// Fin du code

}
