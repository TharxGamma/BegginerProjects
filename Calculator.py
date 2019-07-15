'''
Some of this has been ripped from the internet (https://www.geeksforgeeks.org/python-simple-gui-calculator-using-tkinter/)
Still need to add some functions and might try to add some scientific calculator buttons but thats for a later date.
'''
from tkinter import * # Import all modules from tkinter

root = Tk() # Create a window called root

expression = "" # Global variable which is blank

# Function to update expression
# in the text entry box and takes num as an argument
def press(num): 
    # Expose global expression variable 
    global expression 
  
    # Add the strings together and set to expression. Also str(num) is casting num to a string
    expression = expression + str(num) 
  
    # update the expression by using the set method and pass in expression for us to change
    equation.set(expression) 


# Function to calculate final expression
def equalpress(): 
    # Try and except statement is used 
    # for handling the errors like zero 
    # division error etc. 

    try: 
        
        # I think this is just showing the function the variable. We just need to say its global
        global expression 
  
        # Set total. Here eval is passed the expression which would be whatever we passed in. Eval is a python function which 
        # returns the result evaluated from the expression (or whatever we pass in)
        # Then we cast this to a string
        total = str(eval(expression)) 

        # Set the equation with our total which we pass in
        equation.set(total) 
  
        # initialze the expression variable 
        # by empty string 
        expression = "" 
  
    # if a error occurs then handle it
    # with the except block 
    except: 
  
        equation.set(" error ") 
        expression = "" 

# Function to clear the contents 
# of text entry box 
def clear(): 
    global expression 
    expression = "" 
    equation.set("") 

# StringVar is a function which allows us to manipulate 
equation = StringVar() 
equation.set('enter your expression') 

# This sets up our buttons a lot of this is obvious, the textvariable is how we set the buttons with StringVar, sticky is the alignment of the text which uses compass positions
# Command tells the buttons what to do and lambda is (pasted from the internet)
# In Python, anonymous function means that a function is without a name. 
# As we already know that def keyword is used to define the normal functions and the lambda keyword is used to create anonymous functions.
# Grid is all about positioning 
screenDisplay = Entry(root, textvariable = equation) 
screenDisplay.grid(columnspan = 5, sticky = E)

numberPad1 = Button(root, text = "1", command = lambda: press(1))
numberPad1.grid(row = 4, column = 1)

numberPad2 = Button(root, text = "2", command = lambda: press(2))
numberPad2.grid(row = 4, column = 2)

numberPad3 = Button(root, text = "3", command = lambda: press(3))
numberPad3.grid(row = 4, column = 3)

numberPad4 = Button(root, text = "4", command = lambda: press(4))
numberPad4.grid(row = 3, column = 1)

numberPad5 = Button(root, text = "5", command = lambda: press(5))
numberPad5.grid(row = 3, column = 2)

numberPad6 = Button(root, text = "6", command = lambda: press(6))
numberPad6.grid(row = 3, column = 3)

numberPad7 = Button(root, text = "7", command = lambda: press(7))
numberPad7.grid(row = 2, column = 1)

numberPad8 = Button(root, text = "8", command = lambda: press(8))
numberPad8.grid(row = 2, column = 2)

numberPad9 = Button(root, text = "9", command = lambda: press(9))
numberPad9.grid(row = 2, column = 3)

numberPadAdd = Button(root, text = "+", command = lambda: press("+"))
numberPadAdd.grid(row = 3, column = 4)

numberPadMinus = Button(root, text = "- ", command = lambda: press("-"))
numberPadMinus.grid(row = 2, column = 4)

numberPadEqual = Button(root, text = "=", command = equalpress)
numberPadEqual.grid(row = 4, column = 4)


# Keep the window looping 
root.mainloop()