/* 41.c
Programmas autors: Sandis Brēķis 121REB474
Programma veidota 2020. gada 16. janvārī
Versija: 1.0
Masīva kārtošana */

#include <stdio.h>
#include <stdlib.h>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
int main()
{
 int i, j, k; // ciklu mainigie
 int Temp; // islaicigais mainigais
 int mas3[]= {2, 5, 3, 7, 0}; // kartojamo skaitlu masivs
 printf("Masīva izmers = %ld\n", sizeof(mas3)/sizeof(int));

 for (i=0; i<5; i++){ // cikliska masiva kartosana
 for (j=0; j<(5-1); j++){ // nakosais cikls par vienu mazaks
 if (mas3[j] > mas3[j+1]){
 Temp = mas3[j];
 mas3[j] = mas3[j+1];
 mas3[j+1] = Temp;
}
}
}
// sakartota masiva izvade uz ekrana
 int minn = 10;
 int maxx = -10;
 float average = 0;

 for(k=0; k<5; k++){

 printf("%d,\n",mas3[k]);
 average += mas3[k];
 minn = min(minn, mas3[k]);
 maxx = max(maxx, mas3[k]);
}

 average /= (sizeof(mas3)/sizeof(int));

 printf("Kopas elementu skaits: %ld\n", (sizeof(mas3)/sizeof(int)));
 printf("Maksimala elementa vērtiba: %d\n", maxx);
 printf("Minimala elementa vērtiba: %d\n", minn);
 printf("Videja elementa vērtiba: %.1f\n", average);
 printf("Mediana: %d\n", mas3[(sizeof(mas3)/sizeof(int)) / 2]);
 printf("Moda: \n");
}

