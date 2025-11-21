// รับค่าชื่อ-สกุล อายึ เงินเดือน แล้วแสดงผลออกมา
#include <stdio.h>
#define showLine printf("-------------------------\n"); 

int main(){
    char fullname[50];      //%s, %[^\n]
    int age;                //%d
    float salary;           //%f

    showLine
    printf(" Profile Information \n");
    showLine
    printf("Enter your fullname : ");
    scanf("%[^\n]", fullname);
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your salary : ");
    scanf("%f", &salary);
    showLine
    printf("Hello %s\n", fullname);
    printf("You are %d years old.\n", age);
    printf("Your salary is %.2f\n", salary);
    showLine

    return 0;
}
