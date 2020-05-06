# vscpworks

![License](https://img.shields.io/badge/license-MIT-blue.svg)
![C/C++ CI](https://github.com/grodansparadis/vscp/workflows/C/C++%20CI/badge.svg)
[![Release](https://img.shields.io/github/release/grodansparadis/vscp.svg)](https://github.com/grodansparadis/vscpworks/releases)

<img src="https://vscp.org/images/logo.png" width="100">


**Available for**: Linux, Windows

VSCP general toolbox software for VSCP that runs on Linux and Windows. It has functionality to investigate events from remote devices, send events to remote devices, scan for remote devices, update firmware on remote devices and configure remote devices.

---

**I M P O R T A N T**

---

**This software is deprecated**. It will not be updated. Instead a new tool is under development that will take over the role of vscpworks. No new development will be done on this software.

---

The manual for vscpworks is [here](https://docs.vscp.org/#vscpworks)

## How to install on Linux
Either install using debian package in release section of this repository or build/install following the build instructions below.

## How to install on Windows
Install using the windows installation script available in the release section och this repository.

## How to build on Linux
vscpworks is built using a standard autoconf build

```bash
cd vscpworks
git submodule update --init --recursive
sudo apt-get install libwxgtk3.0-gtk3-dev
./configure
make
make install
```

## How to build on Windows
tbd

## Troubleshooting

### Connecting over tcp/ip to >=14.0.0 vscpd

The interface list has been changed from this version. Now the GUID's is used. To be compatible with  vscpworks which relay on the driver names a device driver name should end with "|" (without the quotes) to make the parsing work. Here is an example for vscpl1drv-can4vscp

```xml
<!-- The can4vscp driver -->
<driver enable="true"
        name="can4vscp|"
        config="/dev/ttyUSB0"
        flags="0"
        translation="0x02"
        path="/var/lib/vscp/drivers/level1/vscpl1drv-can4vscp.so"
        guid="FF:FF:FF:FF:FF:FF:FF:F5:01:00:00:00:00:00:00:02"
/>
```

Without this scan/config/boot will not work as they should.
