#include <stdio.h>   // khai bao thu vien

int main() {
    int classroom= 12; // khai bao so nguyen
    float score = 9.9; // khai bao so thuc
    char grade = 'A';  // khai bao ki tu
    short temperature = -10; // khai bao bien kieu so nguyen,chua gia tri tu -32768 den 32767
    long population = 789934592; // khai bao bien kieu so nguyen,chua gia tri lon hon hoac nho hon kieu int
 //  in dau ra tren man hinh
	printf("Class: %d\n", classroom);
    printf("Score: %.1f\n", score);
    printf("Grade: %c\n", grade);
    printf("Temperature: %d\n", temperature);
    printf("Population: %dl\n", population);

    return 0;
}
