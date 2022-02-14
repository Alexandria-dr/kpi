#запис у файл тексту з перевіркою на комбінацію клавіш
def catchC(str,file):
    i=0
    while i<len(str):
        if str[i]==chr(17):
            str=str[:i:]        # Робимо зріз до символу "Ctrl" + "Q"
            if(len(str)!=0):
                file.write(str+'\n')
            return 0
        i+=1
    file.write(str+'\n')
    return 1

#введення тексту
def inputText(name):
    print("enter text (stop: ctrl+q):")
    bo=1
    file = open(name,"w")
    while(bo):
        str_text=input()
        bo = catchC(str_text,file)
    file.close()

#запис рядків в список
def getText(textList):
    file = open("text.txt","r")
    for i in file.readlines():
        textList.append(i)
    file.close()
    return textList

#підрахунок символів
def countSymb(text):
    res=0
    for i in text:
        if i!=' ' and i!='\n':
            res+=1
    return res

#сортування
def quicksort(array):
    if len(array) < 2:
        return array
    else:
        pivot = array[0]
        less = [i for i in array[1:] if countSymb(i) <= countSymb(pivot)]
        greater = [i for i in array[1:] if countSymb(i) > countSymb(pivot)]
        return quicksort(less)+[pivot]+quicksort(greater)

#файл з результатом
def resFile(textList,name):
    file=open(name,"w")
    for i in textList:
        i=i[:-1]+" [ "+str(countSymb(i))+" ]\n"
        file.write(i)
    file.close()

#читання файлу
def readFile(name):
    print("\nread file ",name," :")
    file=open(name,"r")
    for i in file.read():
        print(i,end='')
