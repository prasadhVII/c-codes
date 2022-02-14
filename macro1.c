#include <stdio.h>

#define min(x,y) ((x)<(y)?(x):(y))
#define line __LINE__
#define file __FILE__
#define date __DATE__
#define time __TIME__

int main(int argc,char *argv[])
{
	printf("minimum = %d\nline = %d\nFile_name =%s\ndate = %s\t %s\f\r",min(34,23),line,file,date,time);
	printf("%d-%s\n",argc,argv[1]);
	return 0;
}
