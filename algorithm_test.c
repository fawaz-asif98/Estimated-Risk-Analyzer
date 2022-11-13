#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	float savings = 0.00;
	float treasury_bonds = 0.00; 
	float interest_rate = 0.00;
	float gvt_spending = 0.00;
	float total = 0.00;
	float goal = 0.00;
	float years = 0;
	int count = 0;
	
	printf("Enter your savings balance: $");
	scanf("%f", &savings);
	if(savings >= 0)
	{
		printf("Enter your bank's current interest rate (0.00-1.00): ");
		scanf("%f", &interest_rate);
		
		if(interest_rate > 1 || interest_rate < 0)
		{
			exit(0);
		}
		
		printf("How many year(s) is this interest rate over?: ");
		scanf("%f", &years);
		total = (savings*(interest_rate)) + savings;
		
		for(int i = 0; i < years-1; i++)
		{
			total = (total*interest_rate) + total;
		}
		
		printf("What is your goal balance?: $");
		scanf("%f", &goal);
		printf("Future balance will be $%.2f in %.0f year(s).\n", total, years);
		
		if(total < goal)
		{
			printf("Your goal of $%.2f will not be met in %.0f year(s).\n", goal, years);
			while(total < goal)
			{
				total = (total*interest_rate) + total;
				count++;
			}
			printf("To reach your goal, you must save for another %d year(s).\n", count);
		}
		else
		{
			printf("Your goal will be met in %.0f years (or less) with the current balance and interest rate.\n", years);
		}
	}
}
