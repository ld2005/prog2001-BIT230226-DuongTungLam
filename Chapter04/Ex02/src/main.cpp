#include <stdio.h>
// Bài 1
int factorial(int n) {
    if (n == 0)   // base case
        return 1;
    else
        return n * factorial(n - 1); // recursive call
}
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int calculate(int a, int b, int (*operation)(int,int)) {
    return operation(a, b);
}
static void hello() {
    printf("Hello World!\n");
}
// Bài 2
int Sum (int c) {
    if (c == 1)
        return 1;
    return c + Sum(c-1);
}
int main() {
    printf("5! = %d", factorial(5));
    int result1 = calculate(5,3,add);
    int result2 = calculate(5,3,sub);
    printf("Add: %d\n\n",result1);
    printf("Sub: %d\n\n",result2);
    hello();
    int c;
    printf("Nhap c:");
    scanf("%d" , &c );
    if (c < 1) {
        printf("c phai >= 1\n");
    } else {
        printf("Tong tu 1 den %d la: %d\n", c , Sum(c));
    }
    return 0;
}