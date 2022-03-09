import _pickle
import _datetime

#==========заповнення часу запису==========
def fillTimeDict(arr):
    D={'day':0,'month':0,'year':0}
    i=0
    for key in D:
        D[key]=int(arr[i])
        i+=1
    return D

#==========створення запису пацієнта==========
def fillDict(D):
    name=input('введіть прізвище: ') 
    D['surname']= name
    a=input('введіть дату попереднього прийому:').split('.')
    D['pVisit']=fillTimeDict(a)
    a=input('введіть дату наступного прийому:').split('.')
    D['fVisit']=fillTimeDict(a)
    return D

#==========створення бінарного файлу==========
def fillFile(file_name):
    with open(file_name, "ab") as file:
        flag='т'
        while (flag=='т' or flag=='Т'):
            D_patient={}
            D_patient=fillDict(D_patient)
            _pickle.dump(D_patient, file)
            flag=input('продовжити? (т/н)')
            print()

#==========читання бінарного файлу==========
def readFile(file_name):
    patient=0
    with open(file_name, "rb") as file:
        try:
            patient = _pickle.load(file)
        except EOFError:
            print('записів немає')
        while(patient):
            print('\nпрізвище: ',patient['surname'])
            print('минулий прийом: %02d.%02d.%04d'%(patient['pVisit']['day'],patient['pVisit']['month'],patient['pVisit']['year']))
            print('наступний прийом: %02d.%02d.%04d'%(patient['fVisit']['day'],patient['fVisit']['month'],patient['fVisit']['year']))
            try:
                patient = _pickle.load(file)
            except EOFError:
                break

#==========копіювання бінарного файлу==========
def copyFile(file_name):
    fcopy=open('temp','wb')
    with open(file_name, "rb") as file:
        patient = _pickle.load(file)
        while(patient):
            _pickle.dump(patient, fcopy)
            try:
                patient = _pickle.load(file)
            except EOFError:
                break
    fcopy.close()


#==========очищення записів, які вже відбулися==========
def cleanKatalog(file_name):
    fcopy=open('temp','rb')
    file = open(file_name,'wb')
    file.truncate()
    now=_datetime.datetime.now()

    patient = _pickle.load(fcopy)
    while(patient):
        if (patient['fVisit']['year'] >= now.year):
            if (patient['fVisit']['year'] == now.year and patient['fVisit']['month'] >= now.month):
                if (patient['fVisit']['month'] == now.month and patient['fVisit']['day'] >= now.day):
                    _pickle.dump(patient, file)
                elif (patient['fVisit']['month'] > now.month):
                    _pickle.dump(patient, file)
            elif (patient['fVisit']['year'] > now.year):
                _pickle.dump(patient, file)
        try:
            patient = _pickle.load(fcopy)
        except EOFError:
            break

    fcopy.close()
    file.close()


#==========сортування пацієнтів по файлах==========
def createNewKatalogs(file_name):
    oldFile = open(file_name,'rb')
    FFile=open("secondary", 'wb')
    SFile=open("other", 'wb')
    patient = _pickle.load(oldFile)
    while (patient):
        if (patient['fVisit']['year'] == patient['pVisit']['year']):
            if (patient['fVisit']['month'] == patient['pVisit']['month']):
                if ((patient['fVisit']['day'] - patient['pVisit']['day']) <= 10):
                    _pickle.dump(patient, FFile)
            elif (abs(patient['fVisit']['month'] - patient['pVisit']['month']) == 1):
                if (abs(patient['fVisit']['day'] - patient['pVisit']['day']) >= 23):
                    _pickle.dump(patient, FFile)
                else:
                    _pickle.dump(patient, SFile)
            else:
                _pickle.dump(patient, SFile)
        elif (abs(patient['fVisit']['year'] - patient['pVisit']['year']) == 1):
            if (abs(patient['fVisit']['month'] - patient['pVisit']['month']) == 11):
                if (abs(patient['fVisit']['day'] - patient['pVisit']['day']) >= 23):
                    _pickle.dump(patient, FFile)
            else:
                _pickle.dump(patient, SFile)
        else:
            _pickle.dump(patient, SFile)

        try:
            patient = _pickle.load(oldFile)
        except EOFError:
            break
    oldFile.close();
    FFile.close();
    SFile.close();


#==========очищення файлу==========
def cleanFile(file_name):
    c=input('Видалити записи з файлу? (т/н)')
    if (c=='т' or c=='Т'):
        file = open('bintest','wb')
        #file.truncate()
        file.close()