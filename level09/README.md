# Level09

```
level09@SnowCrash:~$ ls
level09  token
level09@SnowCrash:~$ ./level09
You need to provied only one arg.
level09@SnowCrash:~$ ./level09 token
tpmhr
level09@SnowCrash:~$ ./level09 11111
12345
```

The executable take the params and increment the ascii position for each character of 1 + index

token looks like this:
```
level09@SnowCrash:~$ cat token
f4kmm6p|=�p�n��DB�Du{��
```

we can create a decoder

> we need to cd /tmp first

```
vim decode.c
```
```
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
```

and 

```
gcc decode.c
./a.out /home/user/level09/token
f3iji1ju5yuevaus41q1afiuq�
```

We can gets the password for level10

```
level09@SnowCrash:/tmp$ su flag09
Password: 
Don't forget to launch getflag !
flag09@SnowCrash:~$ getflag
Check flag.Here is your token : s5cAJpM8ev6XHw998pRWG728z
```
