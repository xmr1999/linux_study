#include"2-4.h"
int main()
{
	int fd;
	fd  = open("./text.txt",O_RDONLY);
	printf("fd = %d\n",fd)
	return 0;

}
