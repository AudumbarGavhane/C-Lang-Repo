/*4. Accept the basic salary of an employee and compute the net salary after adding earnings and subtracting
deductions.
 PF is 2 % of basic
 Tax is 3 % of basic
 HRA is 5 % basic
 DA is 8 % of basic*/

 #include <stdio.h>
 
int main()
{
	float Basic, PF, Tax, HRA, DA, Net_Salary;
  	
	printf("\n Please Enter the Basic Salary of an Employee  :  ");
  	scanf("%f", &Basic);
  
  	
  		PF = (Basic * 2) / 100; 
		Tax = (Basic * 3) / 100; 	
  		HRA = (Basic * 5) / 100;
	  	DA = (Basic * 8) / 100;  	
	
	Net_Salary = Basic + HRA + DA - PF - Tax;
	printf("\n Gross Salary of this Employee  =  %.2f", Net_Salary); 
	
  	return 0;
}