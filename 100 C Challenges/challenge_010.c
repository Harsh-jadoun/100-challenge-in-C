#include<stdio.h>
#include<limit.h>
#include<float.h>
int main() {
  printf("Range of int: %d to %d",INT_MIN,INT_MAX);
  printf("Range of unsigned is: 0 to %u\n",UINT_MAX);
  printf("Range of short: %d to %d\n",SHRT_MIN,SHRT_MAX);
  printf("Range of the float is %e to %e",FLT_MIN,FLT_MAX);
  printf("Range of the double is %e to %e",DBL_MIN,DBL_MAX);
return 0;
}
