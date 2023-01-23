#include <stdio.h>
#include <stdlib.h>

/* run this program Enter the customer no.,enter customer name,number of units calculate:
Enter per unit rate calculate total,calculate cgst,sgst,print final bill.

*/

int main() {
	
	int cno;
	char cnm[10];
	int unit;
	float rate,total,cgst,sgst,finaltotal;
	
	printf("Enter customer no.\t\t:");
	scanf("%d",&cno);
	printf("Enter customer name\t\t:");
	scanf("%s",&cnm);
	printf("Enter number of unit\t\t:");
	scanf("%d",&unit);
	printf("Enter per unit rate\t\t:");
	scanf("%f",&rate);
	
	total=unit*rate;
	cgst=total*0.06;
	sgst=total*0.06;
	finaltotal=total+cgst+sgst;

    
	
    printf("\n\t************Electric Bill************");
	printf("\n\tcno\t\t:%d",cno);
	printf("\n\tcnm\t\t:%s",cnm);
	printf("\n\tunit\t\t:%d",unit);
	printf("\n\trate\t\t:%f",rate);
	printf("\n\ttotal\t\t:%f",total);
	printf("\n\tcgst\t\t:%f",cgst);
	printf("\n\tsgst\t\t:%f",sgst);
	printf("\n\tfinaltotal:%f",finaltotal);
	

	return 0;
}
