cycle=int(input(""))

for x in range(cycle):
    mainString=input("")
    subString=input("")

    count=0
    spliceLength=len(subString)
    for i in range(len(mainString)-spliceLength+1):
        subCheck=mainString[i:i+spliceLength]   #return a substring strVar[startIndex:endIndex]
        if(subString==subCheck):
            count+=1

    print("Case ",x+1,": ",count,sep='')
