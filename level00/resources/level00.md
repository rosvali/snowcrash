## level 00

Use this command `find / -user flag00 2>/dev/null` to seach for a file own by flag00

```shell
level00@SnowCrash:~$ find / -user flag00 2>/dev/null
/usr/sbin/john
/rofs/usr/sbin/john
level00@SnowCrash:~$ cat /usr/sbin/john
cdiiddwpgswtgt
level00@SnowCrash:~$ cat /rofs/usr/sbin/john
cdiiddwpgswtgt
```

This password doesn't work like that; it's encrypted.

We can brute-force the decryption [here](https://www.dcode.fr/chiffre-decalages) and found `nottoohardhere` with césar code +15

```
level00@SnowCrash:~$ su flag00
Password: 
Don't forget to launch getflag !
flag00@SnowCrash:~$ getflag
Check flag.Here is your token : x24ti5gi3x0ol2eh4esiuxias
```