/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 30/03/2023
/************* HEADER FILES ***************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/************* GLOBAL VARIABLES ************/
// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;
/************* MAIN FUNCTION**************/
int main(){
    int max;
    int i;

    printf("please into the max number to print increment all natural to : ");

   START: scanf("%d",&max);

   if (max > 0){
        printf("asscending\n");
        for (int i=0; i<max; i++){
            printf("%d\n",i+1);
        }
        printf("decending\n");
        for (int i=max-1; i>=0; i--){
            printf("%d\n",i+1);
        }
    } else {
        printf("please input a positive number :");
        goto START;
    }
    printf("End\n");

    
return 0;}