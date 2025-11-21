//Global-local variable
#include <stdio.h> //หรือ <stdio.h>
 
int dataA = 100;
 
void showdata(){
    int dataB = 555; //local variable
    printf("dataA in func1 = %d\n" , dataA);
    printf("dataB in func1 = %d\n" , dataB);
    //printf("dataC in func1 = %d\n" , dataC); //error
}
 
int main(){
 
    int dataC = 999; //local variable
    showdata();
    printf("dataA = %d\n" , dataA);
    printf("dataC = %d\n" , dataC);
    //printf("dataB = %d\n" , dataB); //error
 
    return 0;
}