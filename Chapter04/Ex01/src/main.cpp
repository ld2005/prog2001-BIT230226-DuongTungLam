#include <stdio.h>
#define PI 3.14159
int add(int a, int b) {
    return a + b;
}
void swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void modifyArray (int *arr, int siza) {
    for (int i = 0; i < siza; i++) {
        arr[i] *= 2;
    }
}
int findMaxx(int c, int d , int e) {
    if (c > d && c > e) {
        return c;
    }
    else if (d > e) {
        return d;
    }
    else {
        return e;
    }
}
void printMessage() {
    printf("Hello, this is a message from a void function");
}
int add1 (int c, int d) {
    return c + d;
}
float caculateArena  (float radius) {
    return PI * radius * radius;
}
int sumTon(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int maxofThree(int f, int g, int h) {
    int max = f;
    if (g > max) max = g;
    if (h > max) max = h;
    return max;
}
void averageOfThree(int *j, int *k, int *l, float *avg) {
    *avg = (*j + *k + *l) / 3.0;
}int main() {
    int num1 = 5;
    int num2 = 10;
    int sum = add(num1, num2);
 printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    int a = 5;
    int b = 10;
    printf ("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf ("After swapping: a = %d, b = %d\n", a, b);
    int numbers[] = {1, 2, 3, 4, 5 };
    int size = sizeof(numbers)/sizeof(numbers[0]);
    printf("Original array:");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    modifyArray(numbers, size);
    printf("Modified array:");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    int num3 = 12;
    int num4 = 25;
    int num5 = 18;
    int max = findMaxx(num3, num4 , num5);
    printf("The largest number among %d, %d, and %d is: %d\n", num3, num4, num5, max);

    printMessage();
    int num6 = 3;
    int num7 = 7;
   int result = add1(num6, num7);
    printf("The sum of %d and %d is: %d\n", num6, num7, result);
    float radius = 5.5;
    float area = caculateArena(radius);
    printf("The arena of the circle with radius %.2f is: %.2f\n", radius, area);
   //Bai 2
    int n;
    printf ("Bai 2 - Nhap n: ");
    scanf ("%d", &n);
    int resullt = sumTon(n);
    printf("Tong 1 + 2 +  ... + %d = %d\n", n, resullt);
   //Bai 3
    int f,g,h;
    printf ("Bai 3 - Nhap f,g,h:  ");
    scanf ("%d %d %d", &f, &g, &h);
    int resultMax = findMaxx(f,g,h);
    printf("Gia tri lon nhat: %d\n", resultMax);
    // Bai 4
    int j, k, l;
    float avg;

    printf("Bai 4 - Nhap j, k, l: ");
    scanf("%d %d %d", &j, &k, &l);   // KHÔNG có dấu cách cuối, KHÔNG có &avg

    averageOfThree(&j, &k, &l, &avg);

    printf("Gia tri trung binh: %.2f\n", avg);
    return 0;
}