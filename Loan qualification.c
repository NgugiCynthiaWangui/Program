#include <stdio.h>
int main() {

int age;
float annual_income;

printf("Enter age:");
scanf("%d",&age);

printf("Enter annual_income");
scanf("%f",&annual_income);

if(age >=21 &annual_income>=21000){
printf("congratulations you qualify for the loan");
 }
 else {

printf("unfortunately, you don't qualify for the loan");
}
return 0;
}
