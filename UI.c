#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>


void delay(int number_of_seconds){
    // Converting time into milli_seconds
    int milli_seconds = number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
void loading_animation(){
    system("cls");
    printf("\n\n\n\n\n\n\n                                              Loading\n");
    for(int i=0;i<100;i++){
        delay(10);
        printf("|");
        int r=rand()%1000;
        if(r%24==0)
            delay(150);
    }
}
void main_menu(){
   // textcolor(14);
   // textbackground(0);
    int menu_entry;
    system("cls");
    printf("\n                                     MAIN MENU");
    printf("\n                              -----------------------");
    printf("\n                               1.Create New Map");
    printf("\n                               2.Modify Map");
    printf("\n                               3.Find Route");
    printf("\n                               4.How to use");
    printf("\n                               5.About Creators");
    printf("\n                               6.Exit");
    printf("\n                              -----------------------");
    printf("\n                              Your Choice:");
    scanf("%d",menu_entry);
}
void intro_animation(){
  //  textcolor(YELLOW);
   // textbackground(BLACK);
    system("cls");
    printf("\n                                     MAIN MENU");
    delay(1000);
    printf("\n                              -----------------------");
    printf("\n                              -----------------------");
    delay(1000);
    system("cls");
    printf("\n                                     MAIN MENU");
    printf("\n                              -----------------------");
    printf("\n                               1.Create New Map");
    printf("\n                              -----------------------");
    delay(1000);
    system("cls");
    printf("\n                                     MAIN MENU");
    printf("\n                              -----------------------");
    printf("\n                               1.Create New Map");
    printf("\n                               2.Modify Map");
    printf("\n                              -----------------------");
    delay(1000);
    system("cls");
    printf("\n                                     MAIN MENU");
    printf("\n                              -----------------------");
    printf("\n                               1.Create New Map");
    printf("\n                               2.Modify Map");
    printf("\n                               3.Find Route");
    printf("\n                              -----------------------");
    delay(1000);
    system("cls");
    printf("\n                                     MAIN MENU");
    printf("\n                              -----------------------");
    printf("\n                               1.Create New Map");
    printf("\n                               2.Modify Map");
    printf("\n                               3.Find Route");
    printf("\n                               4.How to use");
    printf("\n                              -----------------------");
    delay(1000);
    system("cls");
    printf("\n                                     MAIN MENU");
    printf("\n                              -----------------------");
    printf("\n                               1.Create New Map");
    printf("\n                               2.Modify Map");
    printf("\n                               3.Find Route");
    printf("\n                               4.How to use");
    printf("\n                               5.About Creators");
    printf("\n                              -----------------------");
    delay(1000);
    system("cls");
    printf("\n                                     MAIN MENU");
    printf("\n                              -----------------------");
    printf("\n                               1.Create New Map");
    printf("\n                               2.Modify Map");
    printf("\n                               3.Find Route");
    printf("\n                               4.How to use");
    printf("\n                               5.About Creators");
    printf("\n                               6.Exit");
    printf("\n                              -----------------------");
    delay(1000);
    printf("\n                              Your Choice:");
    main_menu();
}

