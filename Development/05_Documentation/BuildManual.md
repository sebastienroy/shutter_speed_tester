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
  - On back side
    - 1x switch button
    - 1x control LED.
  - On front side :
    - 5x resistors
    - 1x transistor
    - 2x arduino female headers
    - 1x 4 pins KF2510 male connector
    - 3x 2 pins KF2510 male connectors
- Solder male headers on the Arduino board
- Solder I2C interface on the LCD display
- Solder wires on
  - phototransistor
  - Light source LED
- Crimp connectors on wires
  - LCD 4 wires : dupont connector at LCD side and KF2510 at PCB side
  - Battery adapter, Gnd on a 2 pins female KF2510, Vcc on a 1 pin Dupont female connector 
  - Switch connectors : 
    - on the above 2 pins KF2510 
    - on a male 1 pin Dupont connector 
  - Phototransistor, KF2510
  - Light source LED, KF2510
- System assembly and test
  - Plug the Arduino board 
  - Connect the LCD display
  - Connect the light source LED
  - Connect the phototransistor
  - Connect the battery adapter and the switch  
  - Connect the Arduino on the computer, and upload the code
  - Adjust the display contrast
  - Test the behaviour : states, measured value
  - Unplug from computer, connect to a battery
  - Switch on, test the behaviour
- 3D print all the case pieces
  - Remove all the adhesion layer
  - Check that all the pieces fit together, pay special attention on reset button and light souce LED blocking part.
- Sensor assembly
  - Insert the phototransitor in its dedicated hole and screw the cover
- Front panel assembly
  - Insert the reset button  
  - Screw PCB and LCD on the front panel, connect them together
  - Insert power switch in the front panel, and connect it to the PCB and the battery adapter
- Case body assembly
  - Insert the light source LED in the case body, and block it using the piece printed for that usage
  - Connect all the wires
  - Screw the front panel on the case body
  - Block the sensor wire on the body
- Assembly of the rear panel
  - Screw the battery cage back on the rear panel
  - Screw the rear panel on the body
- Final test with a battery

