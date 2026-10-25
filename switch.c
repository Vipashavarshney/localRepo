#include<stdio.h>
int main(){
    int day;
    printf("enter ay no");
    scanf("%d", &day);
    switch(day){
       case 1: printf("Sunday");
        break;
        case 2: printf("mon");
        break;
        case 3: printf("tues");
        break;
        case 4: printf("wedn");
        break;
        default: printf("invalid");
     
    }return 0;
}