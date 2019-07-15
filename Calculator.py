from tkinter import *

root = Tk()

screenDisplay = Label(root, text = "0")
screenDisplay.grid(columnspan = 5, sticky = E)

numberPad1 = Button(root, text = "1")
numberPad1.grid(row = 4, column = 1)

numberPad2 = Button(root, text = "2")
numberPad2.grid(row = 4, column = 2)

numberPad3 = Button(root, text = "3")
numberPad3.grid(row = 4, column = 3)

numberPad4 = Button(root, text = "4")
numberPad4.grid(row = 3, column = 1)

numberPad5 = Button(root, text = "5")
numberPad5.grid(row = 3, column = 2)

numberPad6 = Button(root, text = "6")
numberPad6.grid(row = 3, column = 3)

numberPad7 = Button(root, text = "7")
numberPad7.grid(row = 2, column = 1)

numberPad8 = Button(root, text = "8")
numberPad8.grid(row = 2, column = 2)

numberPad9 = Button(root, text = "9")
numberPad9.grid(row = 2, column = 3)

numberPadAdd = Button(root, text = "+")
numberPadAdd.grid(row = 3, column = 4)

numberPadMinus = Button(root, text = "- ")
numberPadMinus.grid(row = 2, column = 4)

numberPadEqual = Button(root, text = "=")
numberPadEqual.grid(row = 4, column = 4)

root.mainloop()