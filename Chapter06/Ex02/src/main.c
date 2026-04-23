#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
};
struct Product {
    char name[50];
    float price;
};
int main() {
    // Bai 1
    struct Student s1 = {"Lam",20};
    struct Student s2;
    FILE *f = fopen("Student.dat","wb");
    fwrite(&s1,sizeof(struct Student),1,f);
    fclose(f);
    f = fopen("Student.dat","rb");
    fread(&s2,sizeof(struct Student),1,f);
    fclose(f);
    printf("Name: %s | Age: %d\n",s2.name,s2.age);

    // Bai 2
    int arr1[5] = {1,2,3,4,5};
    int arr2[5];
    FILE *f1 = fopen("array.dat","rb");
    fwrite(&arr1,sizeof(int),1,f1);
    fclose(f1);
    f1 = fopen("array.dat","wb");
    fread(&arr2,sizeof(int),1,f1);
    fclose(f1);
    for(int i=0;i<5;i++) {
        printf("%d\n",arr2[i]);
    }

    // Bai 3
    struct Product p1[3] = {
        {"Pen", 1.5},
        {"Book", 3.0},
        {"Bah", 10.0}
    };
    struct Product p2[3];
    FILE *f2 = fopen("product.dat","wb");
    fwrite(&p1,sizeof(p1),3,f2);
    fclose(f2);
    f2 = fopen("product.dat","rb");
    fread(&p2,sizeof(p2),3,f2);
    fclose(f2);
    for(int i=0;i<3;i++) {
        printf("Name: %s | Price: %.2f\n", p2[i].name, p2[i].price);
    }
    return 0;
}
