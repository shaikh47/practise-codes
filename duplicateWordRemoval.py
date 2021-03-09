def duplicacyRemovalWord(arr):
    hashMap={}
    for i in arr:
        if(i not in hashMap.keys()):
            hashMap[i]=1
        else:
            hashMap[i]=hashMap[i]+1

    redundant=[]
    for i in hashMap:
        if(hashMap[i]>1):
            redundant.append(i)
    return redundant



stringVar="hi my name is shaikh name is"
array=stringVar.split(' ')

redundantArray=duplicacyRemovalWord(array)

print("Redundant words are: ", redundantArray)