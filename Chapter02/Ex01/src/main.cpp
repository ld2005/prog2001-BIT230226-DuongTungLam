#include <stdio.h>
#include <stdbool.h>

int main() {

    // ===== Bài 1 =====
    // printf() dùng để in nội dung ra màn hình console
    printf("Bai 1:\n");
    printf("Chao mung ban den voi lap trinh C!\n");
    printf("Bat dau hanh trinh cua ban ngay hom nay.\n\n");


    // ===== Bài 2 =====
    printf("Bai 2:");
    float pi = 3.14159;
    printf("%f\n", pi);      // mặc định 6 chữ số thập phân
    printf("%.1f\n", pi);    // 1 chữ số thập phân
    printf("%.4f", pi);  // 4 chữ số thập phân


    // ===== Bài 3 =====
    printf("Bai 3:");
    int a = 10;
    float b = 5.5;
    char c = 'A';
    bool d = true;
    printf("%d, %.2f, %c, %d\n\n", a, b, c, d);


    // ===== Bài 4 =====
    printf("Bai 4:");
    // Tên hợp lệ
    int age = 20;
    float student_score = 8.5;
    char grade1 = 'A';

    // Tên không hợp lệ (xem comment)
    // int 1number = 5;     // Không được bắt đầu bằng số
    // float my-score = 7;  // Không chứa ký tự '-'
    // char my name = 'B';  // Không có khoảng trắng

       printf("Xem comment trong code de biet quy tac dat ten bien.\n");


    // ===== Bài 5 =====
    printf("Bai 5:");
    const int x = 100;
    const float y = 9.99;
    const char str[] = "Hello C";
    printf("%d, %.2f, %s\n", x, y, str);


    // ===== Bài 6 =====
    printf("Bai 6:\n");
    int i_input;
    float f_input;
    char c_input;
    bool b_input;

    printf("Nhap int: ");
    scanf("%d", &i_input);

    printf("Nhap float: ");
    scanf("%f", &f_input);

    printf("Nhap char: ");
    scanf(" %c", &c_input);  // bỏ qua Enter

    printf("Nhap bool (0 hoac 1): ");
    scanf("%d", &b_input);

    printf("%d, %.2f, %c, %d\n", i_input, f_input, c_input, b_input);

    return 0;
}