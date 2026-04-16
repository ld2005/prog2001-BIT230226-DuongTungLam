#include <stdio.h>

int main() {

    // ===== Bài 1 =====
    int a, b, c;
    printf("Bai 1 - Nhap a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("Gia tri nho nhat: %d\n\n", min);


    // ===== Bài 2 =====
    float A, B;
    printf("Bai 2 - Giai pt ax + b = 0\nNhap a, b: ");
    scanf("%f %f", &A, &B);

    if (A == 0) {
        if (B == 0)
            printf("Phuong trinh vo so nghiem\n\n");
        else
            printf("Phuong trinh vo nghiem\n\n");
    } else {
        printf("Nghiem x = %.2f\n\n", -B / A);
    }


    // ===== Bài 3 =====
    int day;
    printf("Bai 3 - Nhap so (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1: printf("Chu Nhat\n\n"); break;
        case 2: printf("Thu Hai\n\n"); break;
        case 3: printf("Thu Ba\n\n"); break;
        case 4: printf("Thu Tu\n\n"); break;
        case 5: printf("Thu Nam\n\n"); break;
        case 6: printf("Thu Sau\n\n"); break;
        case 7: printf("Thu Bay\n\n"); break;
        default: printf("Khong hop le\n\n");
    }


    // ===== Bài 4 =====
    int n;
    printf("Bai 4 - Nhap n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Tong S = %d\n\n", sum);


    // ===== Bài 5 =====
    int num, rev = 0;
    printf("Bai 5 - Nhap so: ");
    scanf("%d", &num);

    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    printf("So dao nguoc: %d\n\n", rev);


    // ===== Bài 6 =====
    int x = 1;
    do {
        x++;
    } while (x % 3 != 0 || x % 7 != 0);

    printf("Bai 6 - So dau tien chia het cho 3 va 7: %d\n\n", x);


    // ===== Bài 7 =====
    int input;
    do {
        printf("Bai 7 - Nhap so trong khoang 1-100: ");
        scanf("%d", &input);
    } while (input < 1 || input > 100);

    printf("Ban da nhap dung: %d\n", input);

    return 0;
}