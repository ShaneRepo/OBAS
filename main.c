// A program taking in offensive baseball stats and calculating on base average, total bases, and slugging %.

#include <stdio.h>

 int main()
{

float atbat;
float walks;
float singles;
float doubles;
float triples;
float homeruns;
float hitbypitch;
float sacflies;
float totalhits;
float totalbases;
float obas;
float oba;
float slugging;
float oba2;
float obareal;

printf("How many at bats? - ");
scanf("%f", &atbat);

printf("How many walks? - ");
scanf("%f", &walks);

printf("How many singles? - ");
scanf("%f", &singles);

printf("How many doubles? - ");
scanf("%f", &doubles);

printf("How many triples? - ");
scanf("%f", &triples);

printf("How many home runs? - ");
scanf("%f", &homeruns);

printf("How many times hit by pitch? - ");
scanf("%f", &hitbypitch);

printf("How many sac flies? - ");
scanf("%f", &sacflies);

totalhits = singles + doubles + triples + homeruns;

totalbases = singles * 1 + doubles * 2 + triples * 3 + homeruns * 4;

slugging = totalbases / atbat;

oba = totalhits + walks + hitbypitch;
oba2 = atbat + walks + sacflies + hitbypitch;
obareal = oba / oba2;

obas = obareal + slugging;

printf("\n The total bases are %.0f.", totalbases);

printf("\n The total hits are %.0f.", totalhits);

printf("\n The ops is %.3f.", obas);

    return 0;
}
