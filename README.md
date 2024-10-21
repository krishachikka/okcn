# okcn
• Ping: ping <hostname or IP>  - 
(e.g., ping google.com) - 
Tests connectivity to a host by sending packets and measuring 
response time 
• Traceroute: traceroute <hostname or IP>  - 
(install with sudo apt install traceroute if needed) - 
the path packets take to reach a destination, also each hop 
• NSLookup: nslookup <hostname>  - 
(e.g., nslookup google.com) - 
Queries DNS to find the IP address associated with a domain name 
• Netstat: netstat -a (all) - 
at – all tcp - - 
au – all udp 
Shows active network connections and their status 
• ARP: arp -a - 
IP-to-MAC address mapping - 
Address Resolution Protocol 
• RARP: rarp -a - 
(Less common; use arp for most tasks) - 
MAC address to an IP address 
• IP: ip addr or ip route 
• Ifconfig: ifconfig - 
(Install net-tools with sudo apt install net-tools if not available)  - 
configures network interface parameters/ interface configurator 
• Dig: dig <hostname>  - 
Sudo apt install dnsutils - - 
(e.g., dig google.com) 
Queries DNS and provides detailed information 
• Route: route -n - 
Displays and manipulates the routing table 
