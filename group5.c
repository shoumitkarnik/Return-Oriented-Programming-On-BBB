#include <stdio.h>
#include <string.h>

int win()
{
       //system("/bin/sh");
       //execve("/bin/sh", 0, 0);
       system("/bin/nc -nlvp 4444 -e /bin/sh");
}


void main(int argc, char **argv)
{

       char buffer[64];

       gets(buffer);
}
