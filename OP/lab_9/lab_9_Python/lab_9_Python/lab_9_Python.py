def myLen(s):
    i=0
    s+=chr(1000)
    while(s[i]!=chr(1000)):
        i+=1
    return i

def myFind(s,str):
    len=myLen(str)
    i=0
    while(len!=i):
        if (s==str[i]):
            return i
        i+=1
        
def myLastFind(s,str):
    len=myLen(str)
    i=len-1
    while(i>-1):
        if (s==str[i]):
            return i
        i-=1

str = input("введіть рядок: ")
for i in range(0,myLen(str),1):
    if myFind(str[i],str)==myLastFind(str[i],str):
       print("Символ: ",str[i],"   Позиція:",i+1)
