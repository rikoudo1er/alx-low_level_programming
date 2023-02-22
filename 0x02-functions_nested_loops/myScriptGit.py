import os
os.system("git add * ")
commit = input(" File number : ")
os.system("git commit -a -m \" Add file "+ commit +"\" ")
os.system("git push")
