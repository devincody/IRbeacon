# IRbeacon

![274960531_1358212354652230_3817705211798648368_n](https://user-images.githubusercontent.com/5545285/157615026-f2e808c0-3c56-4435-8da3-0ee260fcc509.jpg)

Who likes remotes anyways?

I certainly don't. After being frustrated with having to find the remote for the TV or the oscillating fan or our roomba knock-off, I've decided to just let google home manage them for me.

Dependancies:
flask
pyserial


## Hardware

I designed the PCBs using CircuitMaker, leveraging the work that I already put into the temperature probe hat I developed previously.
https://workspace.circuitmaker.com/Projects/Details/Devin-Cody/Raspberry-Pi-Zero-Hat-IR-beacon
NB: Should use 3 LEDs, not 2 to prevent burn out. Skip the power jack, everything can be power via USB port on raspberry pi and allows access to Arduino Nano USB port for programming (much easier than using ISP pins).
