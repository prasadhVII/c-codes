#include <stdio.h>
#include <limits.h>
#include <float.h>


 int main()
 {
 //limits.h
 	printf("byte=%d\n",CHAR_BIT);
 	printf("char max =%d\n",CHAR_MAX);//UCHAR_MAX  SCHAR_MAX
 	printf("char min=%d\n",CHAR_MIN);
 	printf("max int =%d\n",INT_MAX);
 	printf("min int=%d\n",INT_MIN);
 	printf("max long =%ld\n",LONG_MAX);
 	printf("min long =%ld\n",LONG_MIN);
 	printf("schar max=%d\n",SCHAR_MAX);
 	printf("min schar =%d\n",SCHAR_MIN);
 	printf("max short=%d\n",SHRT_MAX);
 	printf("min short=%d\n",SHRT_MIN);
 	printf("max uchar =%u\n",UCHAR_MAX);
 	printf("max uint=%u\n",UINT_MAX);
 	printf("max ulong =%lu\n",ULONG_MAX);
 	printf("max ushrt =%u\n",USHRT_MAX);

 	//FLOAT.H
 
 	printf("flt rounds=%d\n",FLT_ROUNDS);
 	printf("flt dig=%d\n",FLT_DIG);
 	printf("flt epsilon=%e\n",FLT_EPSILON);
 	printf("flt mant dig = %d\n",FLT_MANT_DIG);
 	printf("flt max=%e\n",FLT_MAX);
 	printf("flt max exp=%d\n",FLT_MAX_EXP);
 	printf("flt min=%e\n",FLT_MIN);
 	printf("flt min exp=%d\n",FLT_MIN_EXP);
 	printf("flt radix=%d\n",FLT_RADIX);
 	printf("dbl dig=%d\n",DBL_DIG);
 	printf("dbl epsilon = %e\n",DBL_EPSILON);
 	printf("dbl max =%e\n",DBL_MAX);
 	printf("dbl min = %e\n",DBL_MIN);
 	printf("dbl mant dig =%d\n",DBL_MANT_DIG);
 	printf("dbl max exp=%d\n",DBL_MAX_EXP);
 	printf("dbl min exp=%d\n",DBL_MIN_EXP);


 	return 0;
 }

