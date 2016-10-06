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

int a,x,y,b,c;

// Début du code

scanf("%d",&a);

b = 0;
c = 0;

while((x < a)&&(y < a)) {
	for(x = 1; x <= a; x++) {
		for(y = x; y <= a; y++) {
			b = diviseurs(x,b);
			c = diviseurs(y,c);
			if((c == x)&&(b == y)&&(x != y)) {
				printf("%d %d\n",x,y);
			}
			b = 0;
			c = 0;
		}
	}
}

// Fin du code

}
