## C-Dropper for Havoc C2 (Educational)
This repository contains a lightweight, staged dropper written in C, designed for Red Teaming operations and security research. The loader is specifically optimized to deploy a Havoc C2 Demon while maintaining a low profile during static analysis.

<img width="910" height="424" alt="image" src="https://github.com/user-attachments/assets/0146e4d1-10af-45cf-97a0-63b78d139687" />

## Evasion Features
- Static String Obfuscation: The C2 server's IP address is not stored as a plaintext string. This prevents simple detection via strings or basic signature-based scanners.
- Hex-Encoded Transport: The IP is reconstructed at runtime from a hex-encoded array.
- Living off the Land (LotL): Utilizes native binaries for payload retrieval to minimize the introduction of suspicious new tools on the system.
- Stealth Tactics: Targets public writeable directories and uses system-native binaries for a "Living off the Land" (LotL) approach.

## Configuration (Obfuscated Version: obf3.c)
To use the obfuscated version, you must manually encode your C2 server IP address into hexadecimal.
1. Convert your IP
Convert each character of your IP (including dots) to its hex equivalent.
Example: `127.0.0.1` becomes `31 32 37 2E 30 2E 30 2E 31`
2. Update the Source
Locate the hs[] variable in the code and replace the hex string with your encoded IP:
Example for IP 127.0.0.1
`char hs[] = "31 32 37 2E 30 2E 30 2E 31"; ` <br>
3. Build <br>
Compile using any Windows-compatible C compiler (e.g., MinGW/GCC):
`gcc main.c -o loader.exe`

# Disclaimer
This project is for authorized security testing and educational purposes only. Using this tool against systems without prior consent is illegal.
