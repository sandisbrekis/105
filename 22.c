#include <stdio.h>
#include <math.h>

int main()
{
 int k;
 double lim;

 for (k=1; k<=50; k++ )
 {
  lim = pow((1+1./k),k);
  printf("k=%d lim=%f\n", k, lim);
 }
}
