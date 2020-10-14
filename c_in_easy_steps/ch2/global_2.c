/* If I would add 'static int num = 100' it would only be accessible via this file.
   
   static int num = 100;

   $ gcc global_1.c global_2.c -o global
   /usr/bin/ld: /tmp/cc2LjGb7.o: in function `main':
   global_1.c:(.text+0x44): undefined reference to `num'
   collect2: error: ld returned 1 exit status
*/

int num = 200;
