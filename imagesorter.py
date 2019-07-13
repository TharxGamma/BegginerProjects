import os, shutil

source = 'C:\\Users\\Tharx\\Downloads\\'
destination = 'C:\\Users\\Tharx\\Downloads\\Pictures'

files = os.listdir(source)

for f in files:

    if os.path.splitext(f)[1] in (".png"):

        shutil.move(source + f, destination)