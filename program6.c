/*
Step 1 : Understand the problem Statement 

Step 2 : Write the ALgorithm

Step 3 Decide The Programming Language
Step 4 : Write the Programming 

step 5 : Test the program
*/

/*
    Write the problem which is used to perform ADDITION of two Number
*/

/*
Step 1 : Understand the problem Statement 
user is going to enter the data in decimal format 
if entered data is negative we have to covert it to positive value. 
 */


//  step 2 : Write the Algorithm

//     Start 
//         Accept First input
//         Accept Second Input 
//         If ANy of the Addition is negative then convert it into positive
//         Perform the addition of that accepted Value 
//         Display the Addition

/* 
Step 3: Decide the Programming Language 
According to the problem Statement we Select C programming 
*/

/*  
    write the program
*/

#include<stdio.h>

int main(){
    float fNo1 = 0.0f , fNo2 = 0.0f, fAns =0.0f;

    printf("enter First Number : \n");
    scanf("%f", &fNo1);

    printf("Enter scond Number :  \n");
    scanf("%f", &fNo2);

    fAns = fNo1 + fNo2;

    printf("Addition is :  %f",&fAns);
    return 0;
}

   