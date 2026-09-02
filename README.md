# LockSense-8051

## Automatic Door Locking System using 8051

LockSense is a sensor-based automatic door locking system using the AT89C51 microcontroller, L293D motor driver, and DC motor. The circuit is designed and simulated in Proteus.

## Project Overview

The system detects an input from the sensor and uses the AT89C51 microcontroller to control the direction of the motor through the L293D motor driver.

When the sensor is triggered, the motor operates in one direction to open the door. After a delay, the motor reverses direction to close the door.

## Components Used

- AT89C51 Microcontroller
- Sensor / Input Switch
- L293D Motor Driver
- DC Motor
- Proteus

## Pin Configuration

| Component | AT89C51 Port |
|---|---|
| Sensor | P1.0 |
| Motor Control 1 | P1.1 |
| Motor Control 2 | P1.2 |

## Working

1. The sensor provides an input to P1.0 of the AT89C51.
2. The microcontroller checks the sensor condition.
3. When the sensor is triggered, P1.1 and P1.2 control the motor through the L293D.
4. The motor runs in one direction to open the door.
5. After a delay, the motor direction is reversed to close the door.
6. The motor is then stopped.
7. The system waits for the next sensor trigger.

## Project Files

- `auto_door_locking.c` — Embedded C source code
- `auto_door_locking.hex` — Compiled HEX file
- `LockSense-8051-Circuit.png` — Proteus circuit diagram

## Tools & Technologies

- 8051 Microcontroller
- Embedded C
- L293D Motor Driver
- Proteus

## Simulation

The circuit is simulated in Proteus using an AT89C51, sensor input, L293D motor driver, and motor.

## Project Status

Completed
