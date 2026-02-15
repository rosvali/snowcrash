# level01

```shell
level01@SnowCrash:~$ cat /etc/passwd | grep flag01
flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash
```

## Install of John the Ripper

### On Mac

```
brew install john-jumbo
```

### On Lunix

```
docker run --tty --interactive kalilinux/kali-rolling

apt update; apt upgrade; apt install john
```

---

We need to copy the passwd file outside the vm to use john on it

```
scp -P 4242 level01@192.168.64.4:/etc/passwd .
```

then 
```
➜  snowcrash git:(main) ✗ john passwd       
...
abcdefg          (flag01)
...
```

We have our password and can access level02
```
level01@SnowCrash:~$ su flag01
Password: abcdefg
Don't forget to launch getflag !
flag01@SnowCrash:~$ getflag
Check flag.Here is your token : f2av5il02puano7naaf6adaaf
```
