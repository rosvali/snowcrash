# Snowcrash

## Setup vm with VirtualBox

### connect in ssh

first enable the host-only adapter in the vm settings

/!\ if host-only adapter not selected
you need to create a host only network https://askubuntu.com/questions/198452/no-host-only-adapter-selected

/!\ (impossible to create the VM on recent Mac because of ARM / X86 compatibility issues)

enter ssh command like in the subject

## Setup with UTM

emulate -> linux -> browse my iso -> architecture x86_64 ->Standard PC (i440FX + PIIX, 1996) (default) (pc-i440fx-9.1)

Mémoire 4 Go

## Start

ssh level00@192.168.64.4 -p 4242
password: level00