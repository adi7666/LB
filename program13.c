/*
Start :
Accept the total Marks
Accept the obtained marks
Calculate the percentage as (obtained /Total) *100
Display the calculated percentage
*/
#include<stdio.h>
float CalculatePercentage(int iObtainedMarks, int iTotal){
    //  =0;
    float fpercentage = 0.0;
    fpercentage = ((float)iObtainedMarks/(float)iTotal) *100; 
    return fpercentage;
}
int main(){
    int OutoffMarks =0;
    int ScoredMarks =0;

    float fresult =0.0f;
    printf("Enter the Total MArks :\n");
    scanf("%d", &OutoffMarks);

    printf("Enter the scored Marks :\n" );
    scanf("%d", &ScoredMarks);

    int Result = CalculatePercentage(OutoffMarks, ScoredMarks);

    printf("yOUR Percentage is : %f\n",fresult);
    return 0;
}

