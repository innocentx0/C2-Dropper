## C-Dropper for Havoc C2 (Educational)
A lightweight staged loader designed for Red Teaming simulations. It automates the retrieval and execution of a Havoc C2 Demon on a target machine, with the objective of evading AV/SIEM.

### Evasion-Focused:
- String Hex-Encoding: The C2 server IP is obfuscated in hex format to bypass static string analysis.
- Variable Renaming: Minimalist code structure with shortened variable names to complicate basic reverse engineering.
- Staged Delivery: Performs a connectivity check (ping) before attempting the payload download.
- Stealth Tactics: Targets public writeable directories and uses system-native binaries for a "Living off the Land" (LotL) approach.

![Untitled Diagram](https://github.com/user-attachments/assets/ef8e99ec-0237-45eb-bedb-53596a94e801)


# Disclaimer
This project is for authorized security testing and educational purposes only. Using this tool against systems without prior consent is illegal.
