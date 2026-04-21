#include <stdio.h>
#include <string.h>
// Bài 1
struct student {
    char name[50];
    char mssv[20];
};
// Bài 2
struct Employee {
    int id;
    char name[50];
    float salary;
};
// Bài 3
struct Owner {
    char name[50];
    int age;
};
struct Car {
    char model[50];
    int year;
    struct Owner owner;
};
int main() {
    // Bài 1
    struct student s1;
    strcpy(s1.mssv,"SV001");
    strcpy(s1.name,"Duong Tung Lam");
    printf("MSSV: %s\n", s1.mssv);
    printf("Ten: %s\n", s1.name);

    // Bài 2
    struct Employee emp[3] = {
        {1,"Anh",5000},
        {2,"An",5000},
        {3,"Cuong",5000},
    };
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i+1);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("ID: %d\n", emp[i].id);
    }
    struct Car car1;
    strcpy(car1.model,"YSL");
    car1.year = 2022;
    strcpy(car1.owner.name,"Duong Tung Lam");
    car1.owner.age = 20;
    printf("Model: %s\n", car1.model);
    printf("Year: %d\n", car1.year);
    printf("Owner Name: %s\n", car1.owner.name);
    printf("Owner Age: %d\n", car1.owner.age);

    return 0;
}
