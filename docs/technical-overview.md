# Technical Overview

## Project Summary

Elements is an interactive music installation and experimental album format that combines embedded hardware, audio production, and real-time user interaction.

The project consists of four audio tracks representing the classical elements:

* Earth
* Water
* Fire
* Air

Each track can be played simultaneously and manipulated using a custom-built capacitive touch controller. The interaction allows users to create unique mixes by physically engaging with the artwork, resulting in a different listening experience every time.

---

## Technologies Used

### Hardware

* Arduino Mega
* CapacitiveSensor Library
* Bare Conductive Paint
* Breadboard Circuit
* CNC-Machined Wooden Enclosure
* Solid core-wire 22 guage
* Jumper/Dupont wires
* USB-A to MIDI
* 4.7 Megaohm Resistors

### Software

* Arduino IDE
* Max/MSP
* Logic Pro X
* Adobe Photoshop
* Adobe Illustrator

---

## Key Features

* Four capacitive touch sensors
* Real-time volume control
* Custom Software (Via Max/MSP) for Simultaneous playback of four tracks
* Interactive physical interface
* Colour-coded visual feedback
* Custom hardware enclosure

---

## Technical Challenges

### Serial Communication

The original CapacitiveSensor example was modified to support four independent sensors and transmit sensor data to Max/MSP using Serial.write().

### Sensor Reliability

Initial attempts using veroboard construction resulted in unreliable readings. The final implementation used a breadboard-based design to improve stability and signal consistency.

### User Experience

The physical artwork, colour scheme, and Max/MSP interface were designed together to ensure each element remained visually and functionally connected.

---

## Outcome

The project successfully demonstrates how physical computing can be integrated with music production to create new forms of interactive media. Users are able to influence an album in real time through touch, transforming passive listening into an active experience.
