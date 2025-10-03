// preprocess directive
#include <stdio.h>
#include <math.h>
#define ShowSenPa printf("------------------------------\n");
#define Smile "-,-"

// global declaration
int number = 555;
void showHi();

void showHey()
{ // function declaration
    printf("Hey\n");
}

int main()
{ // main function
    ShowSenPa
        printf("Welcome to SAU\n%s\n", Smile);
    ShowSenPa
    showHey();
    showHi();
    ShowSenPa

        return 0;
}

void showHi()
{ // user-defined function
    printf("Hi\n");
}