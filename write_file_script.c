#include <stdio.h>

void main (void)
{
  FILE *fp;

  fp = fopen("test_file2.txt", "wb");
  
  if (fp)
  {
    fprintf (fp, 
    "router ospf 1\n"
    "network 0.0.0.0 0.0.0.0 area 0\n"
    "no auto-summary\n"
    "line console 0\n"
    "  password test\n"
    "line vty 0 15\n"
     " password test\n");
    }
    fclose (fp);
}

