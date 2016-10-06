#include <stdio.h>
#include <stdlib.h>

int main()
{	

// int x,y,z;

int a,x,y;

// Début du code

/*scanf("%d",&x);
scanf("%d",&y);
z = 0;

printf("  %d + %d\n",x,y);

while(x != 1) {
	if(x % 2 == 0) {
		x = x / 2;
		y = y + z;
		z = y + z;
	}
	else {
		x = x - 1;
		y = y * 2;
	}
	printf("= %d * %d + %d\n",x,y,z);
}

x = x * y + z;
printf("= %d",x);*/

a = 0;
scanf("%d",&x);
scanf("%d",&y);

printf("%d * %d\n",x,y);

while(x != 1) {
	if(x % 2 == 1) {
		a = a + y;
		x = x - 1;
	}
	else {
		x = x / 2;
		y = y * 2;
	}
	printf("= %d * %d + %d\n",x,y,a);
}

printf("= %d\n",y+a);

// Fin du code

}
