//โปรแกรมแสดงชื่อ Sombat และคะแนน 99 ทางจอ
#include <stdio.h>
 
int main(){
 
    char fullname[10] = "Sombat";
    int score;
 
    score = 99;
 
    //ใน "" ของ printf() เขียนอย่างไรแสดงอย่างนั้น
    //ยกเว้น % format spec., \ escape sequence
    printf("name is : fullname\n");
    printf("Name is : %s\n" , fullname);
    printf("score is : %d\n" , score);
 
    return 0;
}