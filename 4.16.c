#include "apue.h"
#include <fcntl.h>

int main(void)
{
	if (open("tmpfile", O_RDWR) < 0)
	  err_sys("open error");
	if (unlink("tmpfile") < 0)
	  err_sys("unlink error");

	printf("file unlink successful\n");
	sleep(5);
	printf("done\n");
	exit(0);
}
