# txt-dns (задание №5)
## Installing
You can install .deb package on your debian-based machine:
```bash
wget https://github.com/EpicStep/txt-dns-hackathon/releases/download/1.0/txt_dns-0.1.1-Linux.deb
dpkg -i txt_dns-0.1.1-Linux.deb
```
After this you can use this util:
```bash
txt_dns <host>
```
## Build
You must install git, cmake, g++, libssl-dev (```sudo apt install git cmake g++ libssl-dev```).
```bash
git clone https://github.com/EpicStep/txt-dns-hackathon.git

cd txt-dns-hackathon
cmake .
cmake --build .
```
Also, you can generate .deb package:
```bash
cpack -G DEB
```
## Run
```bash
./txt_dns <host>
```
## Run self-hosted back-end
This application has simple [back-end application](https://github.com/EpicStep/txt-dns-backend).