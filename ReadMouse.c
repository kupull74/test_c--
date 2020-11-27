#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
//#include <iostream>
//using namespace std;
#include <dirent.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
    int fd, bytes;
    unsigned char data[3];
    fd = open("/dev/input/mice", O_RDWR); // Open Mouse
    if (fd == -1)
    {
        return -1;
    }
    signed char x, y;
    while (1)
    {
        bytes = read(fd, data, sizeof(data)); // Read Mouse
        if (bytes > 0)
        {
            x = data[1];
            y = data[2];
            printf("x=%d, y=%d \n", x, y);
        }
    }
    return 0;
}
