#include <stdio.h>
#include<math.h>

int main(){
	int edge ;
	scanf("%d", &edge);
	int perimeter = 4 * edge;
	int area = pow(edge,2) ;
	printf("%d %d", perimeter, area);
	return 0;
}
