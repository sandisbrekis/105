/* 201.c
Programmas autors: Sandis Brēķis 121REB474
Programma veidota 2020. gada 16. janvārī
Versija: 1.0
Programma pārveido grādus radiānos pēc lietotāja ievades */

#include <stdio.h>
#include <limits.h>
int main()

{
 float degrees;
 printf("Ievadi grādus:\t");
 scanf("%f", &degrees);  // Gradu ievade

 float radians = degrees * M_PI / 180.0; // Radianu aprekins
		
 printf("%.2f grādi ir %.2f radiāni.\n", degrees, radians); //Izvade

}

