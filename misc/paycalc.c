#include <stdio.h>

float wageCalc(float hours, float wage, float ot_wage);

float name1_wage = <>;
float name2_wage = <>;
float name3_wage = <>;
float name4_wage = <>;

int main() {
	float name1_hrs;
	float name2_hrs;
	float name3_hrs;
	float name4_hrs;
	printf("\n");
	printf("Number of hours for name1_hrs: ");
	scanf("%f", &name1_hrs);
	printf("\n");
	printf("Number of hours for name2_hrs: ");
	scanf("%f", &name2_hrs);
	printf("\n");
	printf("Number of hours for name3_hrs: ");
	scanf("%f", &name3_hrs);
	printf("\n");
	printf("Number of hours for name4_hrs: ");
	scanf("%f", &name4_hrs);
 	
	float name1;
	float name2;
	float name3;
	float name4;

	float name1_ot;
	float name2_ot;
	float name3_ot;
	float name4_ot;

	name1_ot = (name1_wage / 2.0) + name1_wage;
	name2_ot = (name2_wage / 2.0) + name2_wage;
	name3_ot = (name3_wage / 2.0) + name3_wage;
	name4_ot = (name4_wage / 2.0) + name4_wage;
	
	name1 = wageCalc(name1_hrs, name1_wage, name1_ot);
	name2 = wageCalc(name2_hrs, name2_wage, name2_ot);
	name3 = wageCalc(name3_hrs, name3_wage, name3_ot);
	name4 = wageCalc(name4_hrs, name4_wage, name4_ot);

	printf("Name1: %.2f\n", name1);
	printf("Name2: %.2f\n", name2);
	printf("Name3: %.2f\n", name3);
	printf("Name4: %.2f\n", name4);
	printf("\n");
	

	float totalGross = name1 + name2 + name3 + name4;
	printf("Total Gross amount: %.2f\n", totalGross);

	float FUTA_ER = .006 * totalGross;
	float MED_ER = .0145 * totalGross;
	float SOC_SEC_ER = .062 * totalGross;
	float OHIO_SUI_ER = .027 * totalGross;
	
	float grandTotal = totalGross + FUTA_ER + MED_ER + SOC_SEC_ER + OHIO_SUI_ER;
	printf("Total amount: %.2f\n", grandTotal);
        return 0;
}

float wageCalc(float hours, float wage, float ot_wage) {
	if (hours <= 40.0) {
		float wage_total = hours * wage;
	       	return wage_total;
	} else {
		float overtime = hours - 40.0;
		float ot_total = overtime * ot_wage;
		float wage_total = 40.0 * wage;
		float total_wage = wage_total + ot_total;
		return total_wage;
	}
}
