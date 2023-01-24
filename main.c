#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "mylib/mylib.h"

void close_0(){
    printf(" ______________\n");
    printf("|  __________  |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |__________| |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |  ______  | |\n");
    printf("| | |  ||  | | |\n");
    printf("| | |  ||  | | |\n");
    printf("|_|_|__||__|_|_|\n");
    printf("  Door is closed   \n");
}


void open_0(){
    printf(" ______________\n");
    printf("|  __________  |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("|_|__________|_|\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |  ______  | |\n");
    printf("| | |      | | |\n");
    printf("| | |      | | |\n");
    printf("|_|_|______|_|_|\n");
    printf("  Door is opened   \n");
}

void open_1(){
    printf(" ______________\n");
    printf("|  __________  |\n");
    printf("| |  ______  | |\n");
    printf("| | |      | | |\n");
    printf("| | |      | | |\n");
    printf("|_|_|______|_|_|\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("|_|__________|_|\n");
    printf("  Elevator is moving   \n");
}


void timer_1(){
    printf(" ______________ \n");
    printf("|  __________  |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |  ______  | |\n");
    printf("|_|_|  ||  |_|_|\n");
    printf("| | |  ||  | | |\n");
    printf("| | |__||__| | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("|_|__________|_|\n");
    printf("  Elevator is moving   \n");
}

void timer_2(){
    printf(" ______________ \n");
    printf("|  __________  |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("|_|__________|_|\n");
    printf("| |  ______  | |\n");
    printf("| | |  ||  | | |\n");
    printf("| | |  ||  | | |\n");
    printf("| | |__||__| | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("|_|__________|_|\n");
    printf("  Elevator is moving   \n");
}


void timer_3(){
    printf(" ______________ \n");
    printf("|  __________  |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("|_|__________|_|\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |  ______  | |\n");
    printf("| | |  ||  | | |\n");
    printf("| | |  ||  | | |\n");
    printf("| | |__||__| | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("|_|__________|_|\n");
    printf("  Elevator is moving   \n");
}

void timer_4(){
    printf(" ______________ \n");
    printf("|  __________  |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("|_|__________|_|\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |          | |\n");
    printf("| |  ______  | |\n");
    printf("| | |  ||  | | |\n");
    printf("| | |  ||  | | |\n");
    printf("|_|_|__||__|_|_|\n");
    printf("  Elevator is moving   \n");
}


          


int main(void) {
    int s0 = 0, s1 = 0, B, F, O = 0;
    while (true) {
        printf("\033[2J");
        printf("\033[1;1H");
        if (s0 == 0 && s1 == 0) {
            close_0();
        } else if ( s0 == 0 && s1 ==  1){
            int i;
            for (i = 5; i > 0; i--) {
                if (i == 4){
                    timer_3();
                }
                else if (i == 3){
                    timer_2();
                }
                else if (i == 2){
                    timer_1();
                }
                else if (i == 1){
                    open_1();
                }
                sleep(1);
                printf("\033[2J");
                printf("\033[1;1H"); 
            }
        } else if ( s0 == 1 && s1 == 0){
            open_0();
        }
        printf("Enter input (0 to open the door // 1 to close the door): ");
        scanf("%d", &B);
        printf("Enter input (0 stop moving // 1 to start moving): ");   
        scanf("%d", &F);


        if (B == 0 || B == 1 && F == 0 || F == 1) {
            states(s0, s1, B, F, &s0, &s1, &O);
        } else {
            printf("Please enter a proper input (0 or 1)\n");
        }
    }
    return 0;
}

