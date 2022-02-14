from module1 import *

text_list=[]
inputText("text.txt")
readFile("text.txt")
text_list = getText(text_list)
text_list = quicksort(text_list)
resFile(text_list,"result.txt")
readFile("result.txt")