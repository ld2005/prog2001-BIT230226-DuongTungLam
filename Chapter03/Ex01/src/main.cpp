    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <time.h>
    #include <ctype.h>
    int globalVar = 100;
    void display() {
        printf("Glabal Variable = %d\n", globalVar);
    }

    void increment() {
        static int counter = 0;
        counter++;
        printf("Counter = %d\n", counter);
    }
    // Không có static
    void increment_normal() {
        int counter = 0;   // mỗi lần gọi lại = 0
        counter++;
        printf("Normal counter: %d\n", counter);
    }

    // Có static
    void increment_static() {
        static int counter = 0;  // giữ giá trị giữa các lần gọi
        counter++;
        printf("Static counter: %d\n", counter);
    }

    int main() {
         char str1[] ="Hello";
        char str2[] ="World";
        strcat(str1, str2);
        printf("Concatenated String: %s\n", str1);

        time_t current_time;
        time(&current_time);
        printf("Current Time: %s\n", ctime(&current_time));

        char c = 'a';
        if (isalpha(c)) {
            printf("'%c' is a letter. \n",c);
        }
        int x=10;
         {
             int y = 20;
             printf("Inside outer block: x = %d, y = %d\n", x, y);
             {
                 int z = 30;
                 printf("Inside inner block: x = %d, y = %d, z = %d\n", x, y, z);
             }
         }
        printf("Outside all blocks: x = %d\n",x);
     printf("Global Variable = %d\n", globalVar);
        display();
        increment();
        increment();
        increment();


        printf("=== Bai 3 ===\n");
        int z = 10;
        {
             int z = 20;  // biến mới, che biến ngoài
             printf("Gia tri x trong block: %d\n", z);
        }
        printf("Gia tri x ngoai block: %d\n\n", z);


        /* ===================== Bài 4 ===================== */
        printf("=== Bai 4 ===\n");
        int outer = 100;
        {
             printf("Truy cap bien outer tu inner block: %d\n\n", outer);
        }


        /* ===================== Bài 5 ===================== */
        printf("=== Bai 5 ===\n");
        printf("Goi increment_normal 3 lan:\n");
        increment_normal();
        increment_normal();
        increment_normal();

        printf("\nGoi increment_static 3 lan:\n");
        increment_static();
        increment_static();
        increment_static();
        printf("\n");


        /* ===================== Bài 6 ===================== */
        printf("=== Bai 6 ===\n");
        int a = 5, b = 7, d = 9;

        // 3 if lồng nhau (cách cũ)
        if (a > 0) {
            if (b > 0) {
                if (d > 0) {
                    printf("Ca 3 so duong (if long nhau)\n");
                }
            }
        }

        // Viết gọn bằng toán tử logic
        if (a > 0 && b > 0 && d > 0) {
            printf("Ca 3 so duong (if toi uu)\n\n");
        }


        /* ===================== Bài 7 ===================== */
        printf("=== Bai 7 ===\n");
        int num1, num2;

        printf("Nhap a va b: ");
        scanf("%d %d", &num1, &num2);

        if (num2 == 0) {
            printf("Loi: Khong the chia cho 0!\n");
        } else {
            printf("Ket qua a / b = %.2f\n", (float)num1 / num2);
        }

return 0;
    }