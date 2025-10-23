/*
Name:Kevin Ngujo mwagambo
Reg no:CT100/G/26118/25
Description :covert to Celsius()
*/
# include <stdio.h>
// function to convert farnheit to celsius
float converttocelsius(float farnheit){
 float celsius;
 celsius=(farnheit-32)*5/9;
 return celsius;
 }
 int main(){
 float farnheit,celsius;
 
 // input from user
 printf("enter temperature in farnheit:");
 scanf("%f",&farnheit);
 
 // call the function
 celsius=converttocelsius(farnheit);
 
 // display result
 printf("temperature in celsius:%.2f\n",celsius);
 return 0;
}