import os

realpath = os.path.realpath(__file__)
############################################
deez = realpath.split("\\")
print(deez)
indexofDeez = deez.index("ExeFileIgnore.py")
deez.remove(deez[indexofDeez])
print(deez)
deez="\\".join(deez)
print(deez)
############################################
filePath = deez + "\\" + ".gitignore"
print(filePath)
fileToEdit = open(filePath, "w")
###########################################
for toBeWritten in os.listdir(deez + "\\"):
    if toBeWritten.endswith(".exe"):
        fileToEdit.write(toBeWritten + "\n")
############################################
fileToEdit = open(filePath)
contentOfFile = fileToEdit.read()
fileToEdit.close()