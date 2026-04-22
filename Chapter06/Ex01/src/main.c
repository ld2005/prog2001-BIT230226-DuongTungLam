#include <stdio.h>
#include <ctype.h>

int main() {
    // Bai 1: Tao file
    FILE *f = fopen("C:\\Users\\ACER\\CLionProjects\\test.txt", "w");
    if (f == NULL) {
        printf("Khong tao duoc file!\n");
        return 1;
    }
    printf("Da tao duoc file test.txt\n");
    fclose(f);

    // Bai 2: Ghi file
    FILE *f1 = fopen("input.txt", "w");
    char text[100];
    printf("Nhap doan text: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, f1);
    fclose(f1);
    printf("Da ghi vao file.\n");

    // Bai 3: Doc file
    FILE *f2 = fopen("input.txt", "r");
    char ch;
    printf("\nNoi dung file:\n");
    while ((ch = fgetc(f2)) != EOF) {
        putchar(ch);
    }
    fclose(f2);

    // Bai 4: Dem chu cai
    FILE *f3 = fopen("input.txt", "r");
    FILE *out = fopen("letters.txt", "w");
    char ch1;
    int count = 0;
    while ((ch1 = fgetc(f3)) != EOF) {
        if (isalpha(ch1)) {
            count++;
        }
    }
    fprintf(out, "So ky tu chu cai: %d\n", count);
    fclose(out);
    fclose(f3);

    // Bai 5: Dem chu so
    FILE *f4 = fopen("input.txt", "r");
    FILE *out1 = fopen("digits.txt", "w");
    char ch2;
    int count1 = 0;
    while ((ch2 = fgetc(f4)) != EOF) {
        if (isdigit(ch2)) {
            count1++;
        }
    }
    fprintf(out1, "So ky tu chu so: %d\n", count1);
    fclose(f4);
    fclose(out1);

    return 0;
}