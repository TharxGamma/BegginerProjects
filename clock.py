from tkinter import * # Import everything from tkinter
import time # Import time module

def tick(): # Create a function
    time_string = time.strftime("%H:%M:%S") # Declare time_string. time.strftime formats the time taken in to a string, we pass in string formats to tell it how we want it formatted. Can't take 0 arguments
    clock.config(text=time_string) # Clock returns the current CPU time as a float. (Need more information)
    clock.after(200, tick) # Calls itself (Maybe this is recursion? Dunno I'm a noob)

root = Tk() # Create the window that opens
clock=Label(root, font=("times", 50, "bold"), bg= "white") # Inside the label we put it into the root which is our window, set the font and colour.
clock.grid(row=0, column=1) # The layout for the clock using grid and passing it the position we want it
tick() # Call the tick function

root.mainloop() # Tell the program to keep looping