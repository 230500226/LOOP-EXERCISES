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
    int input, sum=0, i;

    printf("Please input your number to find the sum of all even numbers between 1 and your number\n");
    scanf("%d",&input);

    if (input > 0){
        for(int i=0; i<input; i+=2){
            sum += 2;
            //printf("s%d\n",sum);
        };
    } 

    printf("The sum of all even numbers between 1 to your number %d is %d\n", input, sum);
    printf("End\n");
return 0;}