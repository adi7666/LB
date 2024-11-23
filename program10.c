/*
Step 1 : Understand the problem Statement 

Step 2 : Write the ALgorithm

Step 3 Decide The Programming Language
Step 4 : Write the Programming 

step 5 : Test the program
*/

/*
    Problem Statement
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
//////////////////////////////////////////////////////////////////
// Function Name : Addition  
// Description : It is used to perfrom addition of 2 float values
// Input : float , float
// Output :float
// Author : Aditya Jagtap
//  Date  : 06-09-2024

//////////////////////////////////////////////////////////////////

float Addtion(float fValue1, float fValue2){
    float fAdd = 0.0f;
    if(fValue1 < 0.0f){
        fValue1 = -fValue1;
    }if (fValue2 < 0.0f){
        fValue2 = -fValue2;
    }
    fAdd = fValue1 + fValue2;
    return fAdd;                                    //Buisness Logic
}
//////////////////////////////////////////////////////////////////
// 
// this Application is used to perform Addtion of 2 number
// 
//////////////////////////////////////////////////////////////////
int main(){
    float fNo1 = 0.0f , fNo2 = 0.0f, fAns =0.0f;

    printf("enter First Number : \n");
    scanf("%f", &fNo1);

    printf("Enter scond Number :  \n");
    scanf("%f", &fNo2);

    fAns = Addtion(fNo1, fNo2);

    printf("Addition is :  %f",fAns);
    return 0;
}
/*
    Step 5 : test the code
    C:\Users\jagta\Desktop\LB>gcc program10.c -o me
    
    Testcase 1:
    C:\Users\jagta\Desktop\LB>me
    enter First Number :
    10.0
    Enter scond Number :
    -10.0
    Addition is :  20.000000
    
    TEstcase 2:
    C:\Users\jagta\Desktop\LB>me
    enter First Number :
    10.0    
    Enter scond Number :
    -20.0
    Addition is :  30.000000

    TestCase 3:    C:\Users\jagta\Desktop\LB>me
    enter First Number :
    -10.0
    Enter scond Number :
    -20.0
    Addition is :  30.000000
*/