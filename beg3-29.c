#include <stdio.h>
int main() {
	int min, h, m, s;
	printf("Input minute: ");
	scanf("%d", &min);
	
	h = (min/60); 
	
	m = (min -(60*h))/1;
	printf("H:M- %d:%d\n",h,m);
	
	return 0;
}
