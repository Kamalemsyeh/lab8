#include<math.h>
#include<stdlib.h>
#include <stdio.h>
#include "max.h"
#include "min.h"
#include "var.h"

int main() {
	int n=7;
	int t[7] = {13, 12, 5, 1,19, 13, 17};
	int maxi,mini;
	float varr;
	max(t,n,&maxi);
	min(t,n,&mini);
	var(t,n,&varr);
	printf("La valeur maximale du tableau est :%d\n",maxi);
	printf("La valeur minimale du tableau est :%d\n",mini);
	printf("La valeur variance du tableau est :%f\n",varr);
	printf("l'arrondie sup de var = %g\n", ceil(varr));
	printf("l'arrondie inf de var = %g\n", floor(varr));
	return 0;
}