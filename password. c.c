/*
Author;kevin Ngujo Mwagambo 
reg no;CT100/G/26118/25
Description ;prompt the user to enter correct password
*/

#include<stdio.h>
int main(){
int password;
int correct_password=1234;
  do{
  printf("enter password\n");
  scanf("%d",&password);
  }while(password!=correct_password);
  printf("Access granted");
  return 0;
  }
  