import os
fileName = input("name of files :")
os.system("git add "+fileName)
commit = input(" File number : ")
os.system("git commit -a -m \" Add file "+ commit +"\" ")
os.system("git push")
