I wanted to try and recreate some of the automation scripts I've done in other languages in C. 
- ssh_script_v2.c tested on arista ceos devies whoes authentication mode is keyboard interactive
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

---

ssh_script_v1.c
---
twr14152@DESKTOP-S55FNN9:~/code_folder/c_folder$ ./ssh_script "sbx-nxos-mgmt.cisco.com" "show ip int brief"

Command: show ip int brief

IP Interface Status for VRF "default"(1)
Interface            IP Address      Interface Status
Vlan11               192.168.11.1    protocol-down/link-down/admin-down
Vlan12               192.168.12.1    protocol-down/link-down/admin-down
Vlan13               192.168.14.1    protocol-down/link-down/admin-down
Vlan14               192.168.90.1    protocol-up/link-up/admin-up
Vlan16               192.168.89.23   protocol-down/link-down/admin-up
Vlan21               192.168.21.1    protocol-down/link-down/admin-down
Vlan25               10.222.249.25   protocol-down/link-down/admin-up
Vlan50               172.16.1.111    protocol-down/link-down/admin-down
Vlan77               172.16.1.10     protocol-down/link-down/admin-up
Vlan88               10.88.88.88     protocol-down/link-down/admin-down
Vlan89               10.100.100.89   protocol-down/link-down/admin-down
Vlan100              10.0.0.101      protocol-down/link-down/admin-down
Vlan112              10.72.240.13    protocol-down/link-down/admin-down
Vlan113              10.73.148.13    protocol-down/link-down/admin-down
Vlan121              10.0.0.1        protocol-down/link-down/admin-up
Vlan150              192.168.150.1   protocol-down/link-down/admin-down
Vlan151              192.168.151.1   protocol-down/link-down/admin-down
Vlan152              192.168.152.1   protocol-down/link-down/admin-down
Vlan153              192.168.153.1   protocol-down/link-down/admin-down
Vlan154              192.168.154.1   protocol-down/link-down/admin-down
Vlan204              10.204.204.66   protocol-down/link-down/admin-up
Vlan250              192.1.1.1       protocol-down/link-down/admin-up
Vlan3333             10.1.1.2        protocol-down/link-down/admin-down
Vlan3912             1.1.1.1         protocol-down/link-down/admin-down
Lo0                  4.4.4.2         protocol-down/link-down/admin-down
Lo2                  2.2.2.2         protocol-up/link-up/admin-up
Lo4                  4.4.4.4         protocol-up/link-up/admin-up
Lo11                 10.0.0.11       protocol-down/link-down/admin-down
Lo32                 32.32.32.32     protocol-up/link-up/admin-up
Lo35                 35.35.35.35     protocol-up/link-up/admin-up
Lo55                 10.10.10.5      protocol-up/link-up/admin-up
Lo56                 56.56.56.56     protocol-up/link-up/admin-up
Lo60                 6.6.6.6         protocol-up/link-up/admin-up
Lo98                 10.98.98.1      protocol-up/link-up/admin-up
Lo99                 10.99.99.1      protocol-up/link-up/admin-up
Lo200                10.10.10.10     protocol-up/link-up/admin-up
Lo300                20.20.20.20     protocol-up/link-up/admin-up
Lo618                159.99.89.99    protocol-up/link-up/admin-up
Lo648                159.99.99.99    protocol-up/link-up/admin-up
Lo976                3.3.3.3         protocol-up/link-up/admin-up
Lo998                9.9.9.8         protocol-up/link-up/admin-up
Lo1001               1.1.1.1         protocol-up/link-up/admin-up
Eth1/9               1.1.1.1         protocol-down/link-down/admin-down


twr14152@DESKTOP-S55FNN9:~/code_folder/c_folder$ ./ssh_script "sbx-nxos-mgmt.cisco.com" "config t ; interface loopback 555 ; ip address 10.55.55.5 255.255.255.255 ; description ssh script using c libssh"

Command: config t ; interface loopback 555 ; ip address 10.55.55.5 255.255.255.255 ; description ssh script using c libssh


twr14152@DESKTOP-S55FNN9:~/code_folder/c_folder$ ./ssh_script "sbx-nxos-mgmt.cisco.com" "show ip int brief ; show run interface loopback 555 ; show interface loopback 555"

Command: show ip int brief ; show run interface loopback 555 ; show interface loopback 555

IP Interface Status for VRF "default"(1)
Interface            IP Address      Interface Status
Vlan11               192.168.11.1    protocol-down/link-down/admin-down
Vlan12               192.168.12.1    protocol-down/link-down/admin-down
Vlan13               192.168.14.1    protocol-down/link-down/admin-down
Vlan14               192.168.90.1    protocol-up/link-up/admin-up
Vlan16               192.168.89.23   protocol-down/link-down/admin-up
Vlan21               192.168.21.1    protocol-down/link-down/admin-down
Vlan25               10.222.249.25   protocol-down/link-down/admin-up
Vlan50               172.16.1.111    protocol-down/link-down/admin-down
Vlan77               172.16.1.10     protocol-down/link-down/admin-up
Vlan88               10.88.88.88     protocol-down/link-down/admin-down
Vlan89               10.100.100.89   protocol-down/link-down/admin-down
Vlan100              10.0.0.101      protocol-down/link-down/admin-down
Vlan112              10.72.240.13    protocol-down/link-down/admin-down
Vlan113              10.73.148.13    protocol-down/link-down/admin-down
Vlan121              10.0.0.1        protocol-down/link-down/admin-up
Vlan150              192.168.150.1   protocol-down/link-down/admin-down
Vlan151              192.168.151.1   protocol-down/link-down/admin-down
Vlan152              192.168.152.1   protocol-down/link-down/admin-down
Vlan153              192.168.153.1   protocol-down/link-down/admin-down
Vlan154              192.168.154.1   protocol-down/link-down/admin-down
Vlan204              10.204.204.66   protocol-down/link-down/admin-up
Vlan250              192.1.1.1       protocol-down/link-down/admin-up
Vlan3333             10.1.1.2        protocol-down/link-down/admin-down
Vlan3912             1.1.1.1         protocol-down/link-down/admin-down
Lo0                  4.4.4.2         protocol-down/link-down/admin-down
Lo2                  2.2.2.2         protocol-up/link-up/admin-up
Lo4                  4.4.4.4         protocol-up/link-up/admin-up
Lo11                 10.0.0.11       protocol-down/link-down/admin-down
Lo32                 32.32.32.32     protocol-up/link-up/admin-up
Lo35                 35.35.35.35     protocol-up/link-up/admin-up
Lo55                 10.10.10.5      protocol-up/link-up/admin-up
Lo56                 56.56.56.56     protocol-up/link-up/admin-up
Lo60                 6.6.6.6         protocol-up/link-up/admin-up
Lo98                 10.98.98.1      protocol-up/link-up/admin-up
Lo99                 10.99.99.1      protocol-up/link-up/admin-up
Lo200                10.10.10.10     protocol-up/link-up/admin-up
Lo300                20.20.20.20     protocol-up/link-up/admin-up
Lo555                10.55.55.5      protocol-up/link-up/admin-up
Lo618                159.99.89.99    protocol-up/link-up/admin-up
Lo648                159.99.99.99    protocol-up/link-up/admin-up
Lo976                3.3.3.3         protocol-up/link-up/admin-up
Lo998                9.9.9.8         protocol-up/link-up/admin-up
Lo1001               1.1.1.1         protocol-up/link-up/admin-up
Eth1/9               1.1.1.1         protocol-down/link-down/admin-down

!Command: show running-config interface loopback555
!Running configuration last done at: Wed Apr 17 18:53:45 2024
!Time: Wed Apr 17 18:54:52 2024

version 10.3(3) Bios:version

interface loopback555
  description ssh script using c libssh
  ip address 10.55.55.5/32

loopback555 is up
admin state is up,
  Hardware: Loopback
  Description: ssh script using c libssh
  Internet Address is 10.55.55.5/32
  MTU 1500 bytes, BW 8000000 Kbit , DLY 5000 usec
  reliability 255/255, txload 1/255, rxload 1/255
  Encapsulation LOOPBACK, medium is broadcast
  Auto-mdix is turned off
    0 packets input 0 bytes
    0 multicast frames 0 compressed
    0 input errors 0 frame 0 overrun 0 fifo
    0 packets output 0 bytes 0 underruns
    0 output errors 0 collisions 0 fifo
    0 out_carrier_errors



twr14152@DESKTOP-S55FNN9:~/code_folder/c_folder$
```


