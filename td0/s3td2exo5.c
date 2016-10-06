#include <stdio.h>
#include <stdlib.h>

int main()
{	

int x,y,h,m,s;

// Début du code

scanf("%d",&x);
y = x;
h = 0;
m = 0;
s = 0;

while(x > 0) {
	s++;
	if(s == 60) {
		s = 0;
		m++;
	}
	if(m == 60) {
		m = 0;
		h++;
	} 
	x--;
}

printf("il y a %d h, %d m et %d s dans %d secondes\n",h,m,s,y);

// Fin du code

}
