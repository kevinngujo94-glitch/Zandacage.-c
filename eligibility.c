/*
name;Kevin ngujo mwagambo 
Reg no;CT100/G/26118/25
Description ;To check whether the student is eligible for exams
*/

#include<stdio.h>
int main(){

float attendance,averagemarks;
//input attendance percentage and average marks
  printf("enter attendance percentage");
  scanf("%f,&attendance");
  
  printf("enter average marks");
  scanf("%f, &average marks");
 if (attendance<=75&&averagemarks>=40)
 {
 
  printf("eligible");
  }
  else
  {
  printf("not eligible");
  }
  return 0;
  }