#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

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
}

void close_1(){
    printf(" ______________\n");
    printf("|  __________  |\n");
    printf("| |  ______  | |\n");
    printf("| | |  ||  | | |\n");
    printf("| | |  ||  | | |\n");
    printf("|_|_|__||__|_|_|\n");
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
}


          


int main() {
  // Declare variables to represent the current state and input
  int current_state = 0;
  int current_input = 0;
  int current_floor = 0;
  int input;
  while (true){
  if (current_state == 0) {
    if (current_input == 1) {
      current_state = 1;
      int i;
      for (i = 5; i > 0; i--) {
        if (current_floor == 0) {
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
        }
        if (current_floor == 1) {
          if (i == 4){
            timer_1();
          }
          else if (i == 3){
            timer_2();
          }
          else if (i == 2){
            timer_3();
          }
          else if (i == 1){
            timer_4();
          }
          sleep(1);
        }
      }
      current_state = 2;
      current_input = 2;
    }else if (current_input == 2) {
      current_state = 2;
      open_0();
    }
  } 
  else if (current_state == 2) {
    if (current_input == 0) {
      current_state = 0;
      close_0();
    }
    
  } 
  


  // Read the input from the user
  printf("Current state: %d\n", current_state);
  printf("Enter input (0 = Move, 1= Door): ");
  scanf("%d", &input);
  if (current_input==0){
    if (input == 0){
      current_input = 1;
    }
    else if (input == 1){
      current_input = 2;
    }
  } else if (current_input == 2){
    if (input == 1){
      current_input = 0;
    }
  }


  }
  return 0;
}
