#include <stdio.h>
#include <string.h>

int main() {
    // ==========================================
    // Bài 1: Tính tổng mảng
    // ==========================================
    int n1, sum = 0;
    printf("\n--- Bai 1 ---\nNhap so phan tu: ");
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum = %d\n", sum);

    // ==========================================
    // Bài 2: Tìm Max
    // ==========================================
    int y, max, index = 0;
    printf("\n--- Bai 2 ---\nNhap so phan tu: ");
    scanf("%d", &y);
    int b[y]; // Đã sửa từ b[n] thành b[y]
    for (int i = 0; i < y; i++) {
        scanf("%d", &b[i]);
    }
    max = b[0];
    for (int i = 1; i < y; i++) {
        if (b[i] > max) {
            max = b[i];
            index = i;
        }
    }
    printf("Max = %d\n", max);

    // ==========================================
    // Bài 3: Đảo mảng
    // ==========================================
    int x, temp;
    printf("\n--- Bai 3 ---\nNhap so phan tu: ");
    scanf("%d", &x);
    int c[x]; // Đã sửa từ c[n] thành c[x]
    for (int i = 0; i < x; i++) {
        scanf("%d", &c[i]);
    }
    for (int i = 0; i < x / 2; i++) {
        temp = c[i];
        c[i] = c[x - i - 1];
        c[x - i - 1] = temp;
    }
    printf("Mang sau khi dao: ");
    for (int i = 0; i < x; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    // ==========================================
    // Bài 4: Tìm kiếm
    // ==========================================
    int v, z, found = -1;
    printf("\n--- Bai 4 ---\nNhap so phan tu: ");
    scanf("%d", &v);
    int d[v]; // Đã sửa từ d[n] thành d[v]
    for (int i = 0; i < v; i++) {
        scanf("%d", &d[i]);
    }
    printf("Nhap gia tri can tim: ");
    scanf("%d", &z);
    for (int i = 0; i < v; i++) {
        if (z == d[i]) {
            found = i;
            break;
        }
    }
    printf("Index = %d\n", found);

    // ==========================================
    // Bài 5: In Ma trận
    // ==========================================
    int m, k;
    printf("\n--- Bai 5 ---\nNhap so hang va cot (m k): ");
    scanf("%d %d", &m, &k);
    int q[m][k];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &q[i][j]);
        }
    }
    printf("Ma tran:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", q[i][j]);
        }
        printf("\n");
    }

    // ==========================================
    // Bài 6: Cộng hai Ma trận
    // ==========================================
    int g, h;
    printf("\n--- Bai 6 ---\nNhap so hang va cot (g h): ");
    scanf("%d %d", &g, &h);
    int w[g][h], e[g][h], r[g][h];

    printf("Nhap ma tran A:\n");
    for (int i = 0; i < g; i++)
        for (int j = 0; j < h; j++)
            scanf("%d", &w[i][j]);

    printf("Nhap ma tran B:\n");
    for (int i = 0; i < g; i++)
        for (int j = 0; j < h; j++)
            scanf("%d", &e[i][j]);

    printf("Ma tran tong:\n");
    for (int i = 0; i < g; i++) {
        for (int j = 0; j < h; j++) {
            r[i][j] = w[i][j] + e[i][j];
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }

    // ==========================================
    // Bài 7: In Ma trận (t, u)
    // ==========================================
    int t, u;
    printf("\n--- Bai 7 ---\nNhap so hang va cot (t u): ");
    scanf("%d %d", &t, &u);
    int o[t][u];
    for (int i = 0; i < t; i++)
        for (int j = 0; j < u; j++)
            scanf("%d", &o[i][j]);

    printf("Ma tran:\n");
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < u; j++) {
            printf("%d ", o[i][j]);
        }
        printf("\n");
    }

    // LƯU Ý QUAN TRỌNG: Dọn sạch phím Enter còn kẹt lại sau Bài 7
    while (getchar() != '\n');

    // ==========================================
    // Bài 8: Độ dài chuỗi
    // ==========================================
    char s[100];
    printf("\n--- Bai 8 ---\nNhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; // Xóa ký tự Enter thừa ở cuối chuỗi
    printf("Do dai = %d\n", (int)strlen(s)); // Đã sửa %lf thành %d

    // ==========================================
    // Bài 9: Đếm ký tự
    // ==========================================
    char s1[100], l;
    int count = 0;
    printf("\n--- Bai 9 ---\nNhap chuoi: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0;

    printf("Nhap ky tu can dem: ");
    scanf("%c", &l);
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == l)
            count++;
    }
    printf("So lan xuat hien = %d\n", count);

    // LƯU Ý QUAN TRỌNG: Dọn sạch phím Enter còn kẹt lại sau scanf của Bài 9
    while (getchar() != '\n');

    // ==========================================
    // Bài 10: Đảo chuỗi
    // ==========================================
    char s2[100], temp1;
    printf("\n--- Bai 10 ---\nNhap chuoi: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0;

    int n10 = strlen(s2);
    for (int i = 0; i < n10 / 2; i++) {
        temp1 = s2[i];
        s2[i] = s2[n10 - i - 1];
        s2[n10 - i - 1] = temp1;
    }
    printf("Chuoi dao: %s\n", s2);

    printf("\n=== HOAN THANH ===\n");
    return 0;
}