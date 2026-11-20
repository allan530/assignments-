#include <stdio.h>

int main(){
    float Attendancepercentage;
    float Averagemarks;

    //prompt user for input
    printf("Enter attendance percentage\t:");
    scanf("%f",&Attendancepercentage);
    printf("Enter marks scored\t:");
    scanf("%f",&Averagemarks);

    //check if the student attendance percentage is >=75 and average marks >=40
    if(Attendancepercentage >=75 && Averagemarks >=40){
       printf ("Eligible");

    }
    else {
        printf("Not Eligible");
    }
        return 0;


}
