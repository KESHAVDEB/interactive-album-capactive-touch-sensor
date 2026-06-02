# Build Guide

## Overview

This guide describes how to recreate the Elements Interactive Album system.

## Hardware Requirements

* Arduino Uno
* Breadboard
* Resistors
* Bare Conductive Paint
* Jumper Wires
* Solid-core wire
* Paperclip
* USB A-to-B Cable
* CNC-Cut Wooden Enclosure

## Assembly

### Step 1 - Fabricate Enclosure

Use the CNC design files located in:

/hardware

Cut the enclosure and prepare cable routing holes.

### Step 2 - Apply Conductive Areas

Paint the four element regions using Bare Conductive Paint.

Allow sufficient drying time before wiring.

### Step 3 - Assemble Circuit

Install:

* Arduino
* Breadboard
* Sensor wiring
* Paperclip (touching the conductive paint through the small holes from the rear)
* Plug in USB A-ot-B Cable

Mount all electronics underneath the enclosure.

### Step 4 - Upload Firmware

Navigate to:

/firmware

Open the Arduino sketch and upload it to the board.

### Step 5 - Configure Max/MSP

Open:

max-msp/Elements.maxpat

Press the "On" button

Start playback.

### Step 6 - Test Interaction

Touch or approach each element.

The corresponding track should respond in real time.
