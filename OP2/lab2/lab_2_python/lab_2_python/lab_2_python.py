from module1 import *

fillFile('bintest')
readFile('bintest')
copyFile('bintest')
cleanKatalog('bintest')
print('\n======Список без старих записів======')
readFile('bintest')
createNewKatalogs('bintest')
print('\n======Вторинні пацієнти======')
readFile('secondary')
print('\n======Інші пацієнти======')
readFile('other')
cleanFile('bintest')
    
