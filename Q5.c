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
    int input, output=1;

    printf("please input your number to perform factorial operation to : ");
    scanf("%d",&input);

    if (input>=0){
        for (int i=1; i<=input ; i++){
            output = output * i;
            //output *= i;
        }
    };

    printf("%d! is %d\n", input, output);
return 0;}