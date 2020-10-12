#include"2-4.h"
int main()
{
	FILE *fp = fdopen(1,"w+");
	fprintf(fp,"%s\n","hello!");
	fclose(fp);
}
