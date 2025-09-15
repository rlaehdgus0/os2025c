from system.move import *
import keyboard
import time
with open("data/pos.txt", "r") as f:
    lines = f.readlines()
x=int(lines[0])
y=int(lines[1])
life=int(lines[2])
a = move(x,y)
with open("data/map.txt", "a") as f:
    while True:
        if keyboard.is_pressed("up"):
            y=a.up()
        elif keyboard.is_pressed("down"):
            y=a.down()
        elif keyboard.is_pressed("left"):
            x=a.left()
        elif keyboard.is_pressed("right"):
            x=a.right()
        elif keyboard.is_pressed("esc"):
            break
        time.sleep(0.5)

    
