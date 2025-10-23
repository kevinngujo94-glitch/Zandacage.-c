/*
Name:Kevin Ngujo mwagambo
Reg no: CT1000/G/26118/25
Description :function to calculate electric bill that takes the number of units consumed as input and returns the total bill amount based for
the first 100units:Ksh.10 per unit
for the next 100 units:Ksh.15 per unit
Above 200 units:Ksh.20 per unit
*/
# include <stdio.h>//printf and scanf

 void electricBills(int  units,float bill)
{

if (units <=100)
     bill=units*10;
  else if ( units <=200)
     bill= 100*10+( units-100)*15;
   else{
       bill= (100*10 )+ ( units- 100)*15 + (( units - 200) * 20 );}
       printf("Total bill = Ksh.%2f\n",bill);

}
 int main()
 {
    int units;
    float bill;
    printf("enter units consumed");
    scanf("%d",&units);
    electricBills(units,bill);
    
     
    return 0;
 }