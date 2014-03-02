#this is the set up script to install all the software I use for the cockroaches
sudo apt-get install gcc-avr avr-libc
sudo apt-get install openjdk-6-jre #No idea what this does, but without I get an error saying "Java: not found"
wget http://www.pjrc.com/teensy/td_118/teensyduino.64bit
chmod u+x teensyduino.64bit
wget http://www.pjrc.com/teensy/49-teensy.rules
sudo cp 49-teensy.rules /etc/udev/rules.d/49-teensy.rules
chmod u+x /etc/udev/rules.d/49-teensy.rules
wget http://arduino.googlecode.com/files/arduino-1.0.5-linux64.tgz
tar -xvzf arduino-1.0.5-linux64.tgz
rm arduino-1.0.5-linux64.tgz
rm 49-teensy.rules
./teensyduino.64.bit
