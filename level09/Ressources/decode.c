#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
    char buffer[1];
    int fd = open(argv[1], O_RDONLY);
    int i = 0;
    while (read(fd, buffer, 1) > 0)
    {
        printf("%c", ((int)buffer[0]) - i);
        i++;
    }
    close(fd);
    printf("\n");
    return 0;
}