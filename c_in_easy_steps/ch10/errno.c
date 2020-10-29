#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
	FILE *f_ptr;
	int i;
	f_ptr = fopen("nosuch.file", "r");
	if (f_ptr != NULL){printf("File opened\n");}
	else {
		perror("Error");
		for(i = 0; i<44; i++)
		{
			printf("Error %d: %s\n", i, strerror(i));
		}
	}
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./errno 
Error: No such file or directory
Error 0: Success
Error 1: Operation not permitted
Error 2: No such file or directory
Error 3: No such process
Error 4: Interrupted system call
Error 5: Input/output error
Error 6: No such device or address
Error 7: Argument list too long
Error 8: Exec format error
Error 9: Bad file descriptor
Error 10: No child processes
Error 11: Resource temporarily unavailable
Error 12: Cannot allocate memory
Error 13: Permission denied
Error 14: Bad address
Error 15: Block device required
Error 16: Device or resource busy
Error 17: File exists
Error 18: Invalid cross-device link
Error 19: No such device
Error 20: Not a directory
Error 21: Is a directory
Error 22: Invalid argument
Error 23: Too many open files in system
Error 24: Too many open files
Error 25: Inappropriate ioctl for device
Error 26: Text file busy
Error 27: File too large
Error 28: No space left on device
Error 29: Illegal seek
Error 30: Read-only file system
Error 31: Too many links
Error 32: Broken pipe
Error 33: Numerical argument out of domain
Error 34: Numerical result out of range
Error 35: Resource deadlock avoided
Error 36: File name too long
Error 37: No locks available
Error 38: Function not implemented
Error 39: Directory not empty
Error 40: Too many levels of symbolic links
Error 41: Unknown error 41
Error 42: No message of desired type
Error 43: Identifier removed
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ 
*/
