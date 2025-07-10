I wanted to try and recreate some of the automation scripts I've done in other languages in C. 
- ssh_script_v2.c tested on arista ceos devices whoes authentication mode is keyboard interactive
- ssh_script_v1.c tested on Cisco DevNet switch. The authentication mode is password

ssh_script_v2.c
```
twr14152@DESKTOP-S55FNN9:~/code_folder/c_folder/network_scripts$ ./ssh_script_v2 ceos2 arista "run enable; config t; interface loopback 16; description testscript ; show run interface loopback16; no interface loopback 16"
You are running c version 201710
Entering Authentication Phase...
Password:

Command: run enable; config t; interface loopback 16; description testscript ; show run interface loopback16; no interface loopback 16
>enable
#config t
(config)#interface loopback 16
(config-if)#description testscript
(config-if)#show run interface loopback16
interface Loopback16
   description testscript
(config-if)#no interface loopback 16


twr14152@DESKTOP-S55FNN9:~/code_folder/c_folder/network_scripts$

```

ssh_script_v1.c
```
07/11/2025

toddriemenschneider@Todds-MacBook-Pro-2 misc % ./ssh_script_v1 "sbx-nxos-mgmt.cisco.com" "show run | include loopback" "config t ; interface loopback64 ; ip address 10.64.64.64 255.255.255.255 ; description test_interface"  "sh run interface loopback64"  

Command: show run | include loopback
interface loopback0
interface loopback1
interface loopback2
interface loopback3
interface loopback4
interface loopback8
interface loopback9
interface loopback10
interface loopback16
interface loopback17
interface loopback18
interface loopback30
interface loopback66
interface loopback68
interface loopback75
interface loopback80
interface loopback99
interface loopback101
interface loopback123
    update-source loopback0
event manager applet loopback_down
  event syslog pattern "interface loopback 75, changed state to administratively down"
  action 3.0 cli command "interface loopback 75"

Command: config t ; interface loopback64 ; ip address 10.64.64.64 255.255.255.255 ; description test_interface

Command: sh run interface loopback64

!Command: show running-config interface loopback64
!Running configuration last done at: Thu Jul 10 07:07:57 2025
!Time: Thu Jul 10 07:08:00 2025

version 10.3(3) Bios:version  

interface loopback64
  description test_interface
  ip address 10.64.64.64/32



toddriemenschneider@Todds-MacBook-Pro-2 misc % 



twr14152@DESKTOP-S55FNN9:~/code_folder/c_folder$
```


