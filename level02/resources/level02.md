# level02

There is a PCAP file
```shell
level02@SnowCrash:~$ ls
level02.pcap
```

A PCAP file is a packet capture created by Wireshark. It can be open with `wireshark` software

## Install Wireshark

[Installation link](https://www.wireshark.org/#download)

---

We need to copy the file to open it with wireshark on our local machine

```shell
scp -P 4242 level02@192.168.64.4:level02.pcap .
```

On wireshark, we can open the file and see this

![file_in_wireshark](image1.png)

The 43rd package has the word 'password', but it is unreadable

Right click on the package and "Follow -> TCP Stream"

![follow_tcp_stream](image2.png)

ft_wandrNDRelL0L

It is not working like that

![follow_tcp_stream](image3.png)

In hexadecimal, we can retrieve the code for each character:
- `7f` correspond to `del` character

He deleted some character and ended up with `ft_waNDReL0L`

We can now go to level03
```shell
level02@SnowCrash:~$ su flag02
Password: 
Don't forget to launch getflag !
flag02@SnowCrash:~$ getflag
Check flag.Here is your token : kooda2puivaav1idi4f57q8iq
flag02@SnowCrash:~$ su level03
Password: 
```