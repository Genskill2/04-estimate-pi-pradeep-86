#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int n);
{ float pi=1.0;
 for(int i=1;i<=n;i++)
 {
   pi*=(4.0*i*i)/(float)((4.0*i*i)-1);
 }
 return 2.0*pi;
}

