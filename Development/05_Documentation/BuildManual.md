# Shutter Speed Tester Build Manual

## Target audience

This build manual is intended for an allready skilled audience in following domains :
- Arduino usage
- Electronics circuits
- Soldering
- Wire crimping
- 3D printing

This manual is NOT a tutorial. It will not help you to learn the knowledges listed above. These knowledges are prerequisits.  
However, all the prerequisits can be easily aquired at school and/or by reading and practicing tutorials easily available on the web. So did the author of this manual.
The details of any of the described build steps can be found in the developement steps of the project.

## Construction description

- Solder components on the pcb :
  - On front side :
    - 5x resistors
    - 1x transistor
    - 2x arduino female headers
    - 1x 4 pins KF2510 male connector
    - 3x 2 pins KF2510 male connectors
  - On back side
    - 1x switch button
    - 1x control LED.
- Solder male headers on the Arduino board
- Solder I2C interface on the LCD display
- Solder wires on
  - phototransistor
  - Light source LED
- Crimp connectors on wires
  - LCD 4 wires : dupont connector at LCD side and KF2510 at PCB side
  - Battery adapter, KF2510, the Vcc wire passing by the power switch
  - Phototransistor, KF2510
  - Light source LED, KF2510
- 3D print all the case pieces
- Screw PCB and LCD on the front panel, connect them together
  - Don't forget the reset button 
  - If development step 8 has NOT been developped, identify the I2C address of the LCD display using the I2C scanner, and adapt if needed the shutter speed tester code
  - Upload the shutter speed tester code on the Arduino
  - Connect the LED and the phototransistor, and check that all is functional
- Assembly of the casing
  - Insert the LED in the case body, and block it using the piece printed for that usage
  - Insert the phototransitor on its case and screw the cover
  - Insert the Power switch in the front panel, and connect it to the PCB and the battery adapter
  - Screw the front panel on the body
  - block the sensor wire on the body
  - Screw the battery cage back on the rear panel
  - Screw the rear panel on the body

