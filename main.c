#include <stdio.h>
 
 #include corversion 1936.36

 #define lire_euro(x) x/1936.36
 #define euro_lire(x) x*1936.36

 int main(void){
   int scelta;
	double input_value;

    float lire=1000;
    float euro=lire_euro(lire);
    float euro2= 0.52;
    float lire2= euro_lire(euro2);
    printf("%f lire -> %f euro \n", lire, euro);
    printf("%f euro -> %f lire \n", euro2, lire2);
    switch(scelta){
		case 1:
			printf("Inserisci il valore in euro da convertire:\n");
			scanf("%lf", &input_value);
			printf("%.3f (euro) -> %.3f (lire)\n", input_value, EURO_2_LIRE(input_value));
			break;
		case 2:
			printf("Inserisci il valore in lire da convertire:\n");
			scanf("%lf", &input_value);
			printf("%.3f (lire) -> %.3f (euro)\n", input_value, LIRE_2_EURO(input_value));
			break;
		default:
			printf("Operazione non riconosciuta\n");
	}
    return 0;
   }