# System Architecture

## High-Level Overview

User
  ↓
Capacitive Touch Surface
  ↓
Arduino + CapacitiveSensor Library
  ↓ Serial (9600 baud)
Max/MSP Application
  ↓
Audio Engine
  ↓
Earth / Water / Fire / Air Tracks

## Hardware Layer

The physical interface consists of four conductive touch areas representing the four classical elements.

Each sensor is connected to the Arduino using the CapacitiveSensor library and generates proximity/touch data.

## Communication Layer

Sensor values are transmitted from the Arduino to Max/MSP over a serial connection.

Data is sent using:

* Serial.write()
* 9600 baud

The Max patch polls incoming data and maps values to audio parameters.

## Application Layer

The Max/MSP application:

* Loads all four audio tracks
* Receives sensor values
* Adjusts track volume
* Provides visual feedback
* Allows alternative control modes (i.e., controlling EQ of each song instead of Volume)

## Audio Layer

The four tracks are synchronized and share:

* Common duration
* Common musical key
* Compatible arrangement structure

This allows simultaneous playback without musical conflicts.
