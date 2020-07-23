# AVR programmer

## Flash programmer

ARCELI Atmel AT AVRISP mkii XPII AVR ISP mk2 USB AVRISP In-System Programmer

## Toolchain

Runs on an ubuntu 18.04 VM, 8Gb, 8 Cores.

```console
sudo apt-get install -y avrdude
sudo apt-get install -y avrdude-doc
sudo apt-get install -y binutils-avr
sudo apt-get install -y avr-libc
sudo apt-get install -y gcc-avr
sudo apt-get install -y gdb-avr
sudo apt-get install -y make 
```

Arduino CLI

```
curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh
```

Visual Studio Code 

Include path for C/C++ configuration.

```
~/arduino-1.8.13/**
```

Machine specific options for the AVR GCC

```
http://www.nongnu.org/avr-libc/user-manual/using_tools.html
```

## Arduino IDE for Linux

```console
# Add thin GUI to ubuntu VM
sudo apt-get install -y tasksel
sudo tasksel install lubuntu-core

curl -SL -o arduino-1.8.13-linux64.tar.xz https://www.arduino.cc/download_handler.php?f=/arduino-1.8.13-linux64.tar.xz
tar xvf arduino-1.8.13-linux64.tar.xz
sudo ./install.sh
```

### AVR DUDE

```console
avrdude -p m328 -c avrispmkII -v

-or-

avrdude -p m328 -c avrispmkII -t
arvdude> sig

Device signature = 0x1e9514 ## Change chip configuration?
```

#### Fix for wrong chip

Maybe this is not needed.

```console
avrdude -p m328 -c avrispmkII -v -C avrdude-atmega328-no-p.conf
```
