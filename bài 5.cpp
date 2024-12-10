#include <stdio.h>

int main(){
	int lengt,width;
	scanf("%d %d", &lengt, &width);
	int chuperimeter = 2 * (lengt + width);
	int area = lengt * width;
	printf("%d %d", chuperimeter, area);
	return 0;
}
