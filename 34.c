/* 34.c
Programmas autors: Sandis Brēķis 121REB474
Programma veidota 2020. gada 16. janvārī
Versija: 1.0
Masīva izveidošana, aizpildīšana un nolasīšana */

#include <stdio.h>

int main()
{
 int mas[100]; // Tiek izveidots masivs ar 10 elementiem
 int i;

 for(i=0; i<100; i++) // masiva inicializacija
{
 mas[i] = i*i; // tekoshais elements tiek noteikts kaa x*x
}
 /* paraadit "masiiva" saturu */
 for (i=0; i<100; i++)
 printf ("%d %d\n", i, mas[i]);
}

