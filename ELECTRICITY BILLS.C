#include <stdio.h>
int main()
{	
int Customer_ID;
char Customer_Name;
float Unit_Consumed,Charges,Total_Bill,Total_Amount;

printf("Enter Customer_ID:");
scanf("%d",&Customer_ID);

printf("Enter Customer_Name:");
scanf("%s",&Customer_Name);

printf("Enter Unit_Consumed:");
scanf("%f",&Unit_Consumed);

if (Unit_Consumed<=199){
	Charges=1.20;
	printf("Charges is %f\n",Charges);
	Total_Bill=Charges*Unit_Consumed;
	printf("Total_Bill is %f\n",Total_Bill);
}
else if(Unit_Consumed<=399){
	Charges=1.50;
	printf("Charges is %f\n",Charges);
	Total_Bill=Charges*Unit_Consumed;
	printf("Total_Bill is %f\n",Total_Bill);
}
else if (Unit_Consumed<=599){
	Charges=1.80;
	printf("Charges is %f\n",Charges);
	Total_Bill=Charges*Unit_Consumed;
	printf("Total_Bill is %f\n",Total_Bill);
}
else{
	Charges=2.00;
	printf("Charges is %f\n",Charges);
	Total_Bill=Charges*Unit_Consumed;
	printf("Total_Bill is %f\n",Total_Bill);
}	
if(Total_Bill>400){
	Total_Amount=0.15*Total_Bill+Total_Bill;
	printf("Total_Amount is %f\n",Total_Amount);
}
if(Total_Bill<100){
	printf("Minimum Bill should be 100");
}	


return 0;
}