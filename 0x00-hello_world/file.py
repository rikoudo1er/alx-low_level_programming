import os
fileName = input("The file name :")
os.system("echo \"#!/bin/bash \" >"+ fileName)
os.system("chmod u+x "+ fileName)

os.system("vim "+fileName)
