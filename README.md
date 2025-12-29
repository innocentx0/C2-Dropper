## C-Dropper for Havoc C2 (Educational)
A lightweight staged loader designed for Red Teaming simulations. It automates the retrieval and execution of a Havoc C2 Demon on a target machine, with the objective of evading AV/SIEM.

### Evasion-Focused:
- String Hex-Encoding: The C2 server IP is obfuscated in hex format to bypass static string analysis.
- Variable Renaming: Minimalist code structure with shortened variable names to complicate basic reverse engineering.
- Staged Delivery: Performs a connectivity check (ping) before attempting the payload download.
- Stealth Tactics: Targets public writeable directories and uses system-native binaries for a "Living off the Land" (LotL) approach.

<img width="910" height="424" alt="image" src="https://github.com/user-attachments/assets/0146e4d1-10af-45cf-97a0-63b78d139687" />

Ecco una versione del README.md professionale, asciutta e con le istruzioni tecniche corrette per la configurazione della versione offuscata.

C-Dropper for Havoc C2 (Staged Loader)
This repository contains a lightweight, staged dropper written in C, designed for Red Teaming operations and security research. The loader is specifically optimized to deploy a Havoc C2 Demon while maintaining a low profile during static analysis.

## Evasion Features
Static String Obfuscation: The C2 server's IP address is not stored as a plaintext string. This prevents simple detection via strings or basic signature-based scanners.

Hex-Encoded Transport: The IP is reconstructed at runtime from a hex-encoded array.

Living off the Land (LotL): Utilizes native Windows binaries (certutil) for payload retrieval to minimize the introduction of suspicious new tools on the system.

## Configuration (Obfuscated Version)
To use the obfuscated version, you must manually encode your C2 server IP address into hexadecimal.
1. Convert your IP
Convert each character of your IP (including dots) to its hex equivalent.
Example: `127.0.0.1` becomes `31 32 37 2E 30 2E 30 2E 31`
2. Update the Source
Locate the hs[] variable in the code and replace the hex string with your encoded IP:
#### Example for IP 127.0.0.1
`char hs[] = "31 32 37 2E 30 2E 30 2E 31"; `
3. Build
Compile using any Windows-compatible C compiler (e.g., MinGW/GCC):
`gcc main.c -o loader.exe`

# Disclaimer
This project is for authorized security testing and educational purposes only. Using this tool against systems without prior consent is illegal.
