#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %d\n", num1 / num2);
    printf("Modulus: %d\n", num1 % num2);

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is greater than %d\n", a, b);
    else if (a < b)
        printf("%d is less than %d\n", a, b);
    else
        printf("%d is equal to %d\n", a, b);

    int num;
    printf("Enter a numbers: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 50)
        printf("The number is between 10 and 50.\n");
    else
        printf("The number is not in the range.\n");
    printf("Hello World!\n");

    int number = atoi("123");
    printf ("Converted number: %d\n", number);

    double x = 16.0;
    printf("Sqare root of %.1f is %.1f\n", x, x);

    int integerNumber;
    float floatNumber;

    printf("=== Bai 2 ===\n");
    printf("Nhap mot so nguyen: ");
    scanf("%d", &integerNumber);

    floatNumber = (float)integerNumber;   // ep kieu sang so thuc
    printf("So sau khi ep sang float: %.2f\n", floatNumber);

    integerNumber = (int)floatNumber;     // ep kieu nguoc lai
    printf("So sau khi ep lai sang int: %d\n\n", integerNumber);


    // ===== Bài 3 =====
    int num3, num4;
    printf("=== Bai 3 ===\n");
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &num3, &num4);

    printf("Cong: %d\n", num3 + num4);
    printf("Tru: %d\n", num3 - num4);
    printf("Nhan: %d\n", num3 * num4);

    if (num2 != 0) {
        printf("Chia: %d\n", num3 / num4);
        printf("Chia lay du: %d\n\n", num3 % num4);
    } else {
        printf("Khong the chia cho 0!\n\n");
    }


    // ===== Bài 4 =====
    int y;
    printf("=== Bai 4 ===\n");
    printf("Nhap gia tri y: ");
    scanf("%d", &y);

    y += 5;
    printf("Sau khi tang 5: %d\n", y);

    y -= 3;
    printf("Sau khi giam 3: %d\n", y);

    y *= 2;
    printf("Sau khi nhan 2: %d\n", y);

    y /= 4;
    printf("Sau khi chia 4: %d\n\n", y);


    // ===== Bài 5 =====
    int checkNumber;
    printf("=== Bai 5 ===\n");
    printf("Nhap mot so nguyen: ");
    scanf("%d", &checkNumber);

    if (checkNumber >= 10 && checkNumber <= 50)
        printf("So nam trong khoang 10 den 50\n\n");
    else
        printf("So khong nam trong khoang 10 den 50\n\n");


    // ===== Bài 6 =====
    int c, d;
    printf("=== Bai 6 ===\n");
    printf("Nhap c va so lan dich d: ");
    scanf("%d %d", &c, &d);

    printf("Dich trai: %d\n", a << b);
    printf("Dich phai: %d\n\n", a >> b);


    // ===== Bài 7 =====
    int n1, n2, n3, max;
    printf("=== Bai 7 ===\n");
    printf("Nhap 3 so: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;

    printf("Gia tri lon nhat la: %d\n", max);

}