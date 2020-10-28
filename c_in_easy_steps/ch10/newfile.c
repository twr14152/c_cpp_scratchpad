#include <stdio.h>

int main()
{
        FILE *file_ptr;
        file_ptr = fopen("data.txt", "w");
        if( file_ptr != NULL )
        {
                printf("File created\n");
                fclose(file_ptr);
                return 0;
        }
        else
        {
                printf("Unable to create file\n");
                return 1;
        }
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ gcc newfile.c -o newfile   
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./newfile 
File created
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ls -l
total 12
-rw-r--r-- 1 pi pi    0 Oct 27 21:47 data.txt
-rwxr-xr-x 1 pi pi 8056 Oct 27 21:47 newfile
-rw-r--r-- 1 pi pi  239 Oct 27 21:47 newfile.c
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $
*/
