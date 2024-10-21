# Basic Networking Commands (OKCN)

## Ping
**Command:** `ping <hostname or IP>`  
**Example:** `ping google.com`  
**Description:**  
Tests connectivity to a host by sending packets and measuring response time.

---

## Traceroute
**Command:** `traceroute <hostname or IP>`  
**Installation:** `sudo apt install traceroute` (if needed)  
**Description:**  
Shows the path packets take to reach a destination and details each hop.

---

## NSLookup
**Command:** `nslookup <hostname>`  
**Example:** `nslookup google.com`  
**Description:**  
Queries DNS to find the IP address associated with a domain name.

---

## Netstat
**Command:** `netstat -a` (for all connections)  
- `netstat -at`: all TCP connections  
- `netstat -au`: all UDP connections  
**Description:**  
Shows active network connections and their status.

---

## ARP (Address Resolution Protocol)
**Command:** `arp -a`  
**Description:**  
Displays IP-to-MAC address mapping.

---

## RARP (Reverse Address Resolution Protocol)
**Command:** `rarp -a`  
**Note:**  
Less common; ARP is typically used for most tasks.  
**Description:**  
Maps a MAC address to an IP address.

---

## IP
**Command:**  
- `ip addr`: Shows IP addresses associated with network interfaces  
- `ip route`: Shows the routing table  

---

## Ifconfig
**Command:** `ifconfig`  
**Installation:** `sudo apt install net-tools` (if not available)  
**Description:**  
Configures network interface parameters.

---

## Dig (Domain Information Groper)
**Command:** `dig <hostname>`  
**Example:** `dig google.com`  
**Installation:** `sudo apt install dnsutils`  
**Description:**  
Queries DNS and provides detailed information.

---

## Route
**Command:** `route -n`  
**Description:**  
Displays and manipulates the routing table.
