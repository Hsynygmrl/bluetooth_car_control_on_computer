import keyboard
import serial
port = 'COM10'
bluetooth = serial.Serial(port,9600)
while True:
    # FORWARD
    if keyboard.is_pressed('up arrow') or keyboard.is_pressed('w'):
        bluetooth.write(b'F')
    # BACK
    if keyboard.is_pressed('down arrow') or keyboard.is_pressed('s'):
        bluetooth.write(b'B')
    # RİGHT
    if keyboard.is_pressed('right arrow') or keyboard.is_pressed('d'):
        bluetooth.write(b'R')
    # LEFT
    if keyboard.is_pressed('left arrow') or keyboard.is_pressed('a'):
        bluetooth.write(b'L')
    # LAZER
    if keyboard.is_pressed('ı'):
        bluetooth.write(b'W')
    if keyboard.is_pressed('o'):
        bluetooth.write(b'w')
    # LEDS
    if keyboard.is_pressed('y'):
        bluetooth.write(b'U')
    if keyboard.is_pressed('u'):
        bluetooth.write(b'u')
    # MAİN LED
    if keyboard.is_pressed('r'):
        bluetooth.write(b'X')
    if keyboard.is_pressed('t'):
        bluetooth.write(b'x')
    # DROP CONTROL
    if keyboard.is_pressed('esc'):
        break
    # İF İT HAS NO VALUE, THEN STOP
    else:
        bluetooth.write(b'S')
        
        

        