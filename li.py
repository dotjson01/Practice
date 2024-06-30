import turtle
import time
import random
import math

# Set up the turtle
screen = turtle.Screen()
screen.setup(800, 600)
screen.bgcolor("black")
t = turtle.Turtle()
t.speed(0)  # Fastest speed
t.hideturtle()

# Function to draw a petal
def draw_petal(size):
    t.circle(size, 60)
    t.left(120)
    t.circle(size, 60)
    t.left(120)

# Function to draw the flower
def draw_flower(angle):
    t.penup()
    t.goto(0, -100)
    t.pendown()

    # Draw stem
    t.color("green")
    t.setheading(90)
    t.forward(200)

    # Draw rotating petals
    for i in range(6):
        t.color(random.random(), random.random(), random.random())
        t.setheading(angle + i * 60)
        draw_petal(100 + 20 * abs(math.sin(angle/10)))

    # Draw center
    t.penup()
    t.goto(0, 100)
    t.pendown()
    t.color("yellow")
    t.begin_fill()
    t.circle(20 + 5 * abs(math.sin(angle/5)))
    t.end_fill()

# Animation loop
angle = 0
while True:
    t.clear()
    
    draw_flower(angle)
    
    # Write the name
    t.penup()
    t.goto(0, -250)
    t.color("purple")
    t.write("Hiye Laxmi ", align="center", font=("Arial", 24, "normal"))
    
    screen.update()
    time.sleep(0.10)
    angle += 5

# This line is not needed anymore as we have an infinite loop
# turtle.done()