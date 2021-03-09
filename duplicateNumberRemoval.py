def sizeAfterRemovingDuplicacy(arr):
    anotherArr=[]
    for i in arr:
        if(i not in anotherArr):
            anotherArr.append(i)
    return len(anotherArr)


array=[1,2,1,2,6,6,8,8]
sizeAfterDuplcacy=sizeAfterRemovingDuplicacy(array)
print(sizeAfterDuplcacy)