#include <stdio.h>
#include<math.h>

int main(){
	float Pi = 3.14;
	float R;
	scanf("%f", &R);
	float perimeter = 2 * Pi * R;
	float area = Pi * pow(R,2);
	printf("%f %f", perimeter, area);
	return 0;
}
