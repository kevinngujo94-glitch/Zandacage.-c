/*
Name:kevin Ngujo mwagambo
Reg no: CT100/G /26118/25
Description : a function to calculate fare based on distance travelled in kilometres as input and returns the total fare assuming the fare rate is Ksh.50 per kilometre
*/
# include <stdio.h>

int main (){
 float distance,fare;
 
 // ask the user the distance 
 printf("entertdistance traveled (in kilometers)");
 scanf("%f",&distance);
 
 
 fare= distance*50;
 
 //display the result
 printf("totalfare=%.2f kes\n,fare",fare);
 return 0;
 }