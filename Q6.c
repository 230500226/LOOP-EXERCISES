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

    printf("Multiplication table from 1 to 5\n");
    
    printf("--------------------------------\n");
    printf("1\t  |\t  2\t  |\t  3\t  |\t  4\t  |\t  5\n");
    for (int i = 0; i <5+1; i++){
        printf("1*%d is %d |\t",i,1*i);
        printf("2*%d is %d |\t",i,2*i);
        printf("3*%d is %d |\t",i,3*i);
        printf("4*%d is %d |\t",i,4*i);
        printf("5*%d is %d\n",i,5*i);
    }
    printf("--------------------------------");
    
return 0;}