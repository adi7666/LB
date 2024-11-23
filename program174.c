#include<stdio.h>
#include<stdbool.h>
 
bool ChkWtr(char *str, char ch)
{
    bool bflag = false;
    while(*str != '\0')
    {
        if(*str == ch){
        
        bflag = true;
        break;
        }
        str++;
    }
    return bflag;
}

int main ()
{
    char Arr[30];
    bool bRet = false;
    char cValue = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);       
    
    printf("Enter the Characterr you want : \n");
    scanf(" %c", &cValue);
    bRet = ChkWtr(Arr, cValue);
        if(bRet == true){
            printf("The Character is present in this \n");
        }    
        else{
            printf("The character is not present \n");
        }
    // printf("Number of Occurences in this is : %d\n", iRet);    
    
    return 0;
}