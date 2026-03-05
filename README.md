# Morse Code Translator using Keil and Proteus

## Overview
This project implements a Morse Code Translator using a microcontroller programmed in Embedded C.  
The system converts characters into Morse code signals and displays them through an LED or buzzer.

The program was written and compiled using **Keil µVision**, and the circuit was simulated in **Proteus Design Suite**.

---

## Features
- Converts characters into Morse code (dots and dashes)
- LED or buzzer indication for Morse signals
- Implemented using Embedded C
- Simulated using Proteus
- Easy to modify for different messages

---

## Tools Used
- Keil µVision IDE
- Proteus Design Suite
- Embedded C programming
- 8051 microcontroller (AT89C51 or similar)

---

## Working Principle
1. The microcontroller reads characters from the program.
2. Each character is converted into Morse code using a lookup pattern.
3. Dots and dashes are represented by different LED or buzzer timings.
4. The output is displayed through blinking signals.

Example:

A → . -  
S → . . .  
O → - - -

Example message:

SOS → . . .  - - -  . . .

---

morse-code-translator
│
├── morse_code.c
├── morse_code.hex
├── proteus_simulation.pdsprj
└── README.md

## Author
Arunthathe
