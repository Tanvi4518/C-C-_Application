#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int eid,basicsal;
	char enm[10];
	int pf,hra,ta,grosssal;
	
	 
	printf("\nEnter Employee ID :");
	scanf("%d",&eid);
	printf("\nEnter Employee Name :");
	scanf("%s",&enm);
	printf("\nEnter Basic Salary :");
	scanf("%d",&basicsal);
	
	pf=basicsal*0.06;
	hra=basicsal*0.07;
	ta=basicsal*0.08;
	grosssal=basicsal+hra+ta-pf;
	
	printf("-----------------------------Employee Salary Slip--------------------------------------");
	printf("\nEmp.ID\tEmp.nm\tBasic salary\tPF\tHRA\tTA\tGross salary");
	printf("\n======================================================================================");
	printf("\n%d\t%s\t%d\t\t%d\t%d\t%d\t%d",eid,enm,basicsal,pf,hra,ta,grosssal);
	printf("\n----------------------------THANK YOU-------------------------------------------------");
	
	
	
	return 0;
}
