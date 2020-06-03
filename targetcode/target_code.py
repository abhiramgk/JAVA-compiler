import re
emptyreg={"T0":"","T1":"","T2":"","T3":"","T4":"","T5":"","T6":"","T7":""}
usereg={}
variables=set()
varstor={}
def var2(st):
    print("\tb {}".format(st[1]))
    
def var3(st):
    flag=0
    x=re.findall("\[[0-9]*\]",st[0])
    if(x):
	    t=re.findall("[a-zA-Z$_][a-zA-Z0-9$_]*",st[0])
	    val=x[0][1:-1]
	    val=int(val)*4
	    #print("\tla $s0, {}({})".format(val,t[0]))
	    st[0]=str(val)+"({})".format(t[0])
    print("\tla $s0, {}".format(st[0]))
    if(st[2].isdigit()):
        print("\taddi $s7,$0,{}".format(int(st[2])))
        #varstor[st[0]]=int(st[2])
        print("\tsw $s7, 0($s0)")
    else:
        #varstor[st[0]]=usereg[st[2]]
	    x=re.findall("\[[0-9]*\]",st[2])
	    t=re.findall("[a-zA-Z$_][a-zA-Z0-9$_]*",st[2])
	    if(x):
		    val=x[0][1:-1]
		    val=int(val)*4
		    st[2]=str(val)+"({})".format(t[0])
		    flag=1
	    else:
	    	w = re.findall("^T[0-9]*",st[2])
	    	if(not w):
	            val=0
	            st[2]=str(val)+"({})".format(t[0])
	            flag=1
	    	else:
	    	   	print("\tsw ${}, 0($s0)".format(st[2].lower()))
    if(flag):
	    print("\tlw $s1,{}".format(st[2]))
	    print("\tsw $s1, 0($s0)")

def var4(st):
    print("\tbgt ${}, $0, {}".format(st[1].lower(),st[3]))

def eval(st):
    for i in range(len(st)):
	    x=re.findall("\[[0-9]*\]",st[i])
	    if(x):
	        t=re.findall("[a-zA-Z$_][a-zA-Z0-9$_]*",st[i])
	        val=x[0][1:-1]
	        val=int(val)*4
	        st[i]=str(val)+"({})".format(t[0])
	    else:
	    	w = re.findall("^T[0-9]*",st[i])
	    	if(not w):
	    	    #print(st[i])
	    	    t=re.findall("[a-zA-Z$_][a-zA-Z0-9$_]*",st[i])
	    	    if(t):
	    		    val=0
	    		    st[i]=str(val)+"({})".format(t[0])
	    		    #print(" {}".format(st[i]))
    if(st[0] in emptyreg):
        emptyreg.pop(st[0])
    if(st[2].isdigit()):
        t=re.findall("[a-zA-Z$_][a-zA-Z0-9$_]*",st[4])
        if(t[0] in variables):
            print("\tlw $s1, {}".format(st[4]))
            if(st[3]=="<"):
                print("\taddi {}, $s1, -{}".format(st[0],int(st[2])))
                #usereg[st[0]]=int(int(st[2])<varstor[st[4]])
            if(st[3]==">"):
                #print("\taddi {}, $s1, {}".format(st[0].lower(),int(st[2])))
                #print("\tsub {}, $0, {}".format(st[0].lower(),st[0].lower()))
                print("\tslti ${}, $s1, {}".format(st[0].lower(),int(st[2])))
                #usereg[st[0]]=int(int(st[2])>varstor[st[4]])
            if(st[3]=="/"):
                print("\taddi $s2, $0, {}".format(int(st[2])))
                print("\tdiv $s2, $s1")
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=int(st[2])/varstor[st[4]]
            if(st[3]=="*"):
                print("\taddi $s2, $0, {}".format(int(st[2])))
                print("\tmult $s1, $s2")
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=int(st[2])*varstor[st[4]]
            if(st[3]=="+"):
                print("\taddi ${}, $s1, {}".format(st[0].lower(),int(st[2])))
                #usereg[st[0]]=int(st[2])+varstor[st[4]]
            if(st[3]=="-"):
                print("\taddi ${}, $s1, -{}".format(st[0],lower(),int(st[2])))
                print("\tsub ${}, $0, ${}".format(st[0].lower(),st[0].lower()))
                #usereg[st[0]]=int(st[2])-varstor[st[4]]
        else:
            if(st[3]=="<"):
                print("\taddi ${}, ${}, -{}".format(st[0].lower(),st[4].lower(),int(st[2])))
                #usereg[st[0]]=int(int(st[2])<usereg[st[4]])
            if(st[3]==">"):
#                print("\taddi {}, {}, {}".format(st[0].lower(),st[4].lower(),int(st[2])))
#                print("\tsub {}, $0, {}".format(st[0].lower(),st[0].lower()))
                print("\t slti ${}, ${}, {}".format(st[0].lower(),st[4].lower(),int(st[2])))
                #usereg[st[0]]=int(int(st[2])>usereg[st[4]])
            if(st[3]=="/"):
                print("\taddi $s2, $0, {}".format(int(st[2])))
                print("\tdiv $s2, ${}".format(st[4].lower()))
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=int(st[2])/usereg[st[4]]
            if(st[3]=="*"):
                print("\taddi $s2, $0, {}".format(int(st[2])))
                print("\tmult $s1, ${}".format(st[4].lower()))
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=int(st[2])*usereg[st[4]]
            if(st[3]=="+"):
                print("\taddi ${}, ${}, {}".format(st[0].lower(),st[4].lower(),int(st[2])))
                #usereg[st[0]]=int(st[2])+usereg[st[4]]
            if(st[3]=="-"):
                print("\taddi ${}, ${}, -{}".format(st[0].lower(),st[4].lower(),int(st[2])))
                print("\tsub ${}, $0, ${}".format(st[0].lower(),st[0].lower()))
                #usereg[st[0]]=int(st[2])-usereg[st[4]]
    elif(st[4].isdigit()):
        t=re.findall("[a-zA-Z$_][a-zA-Z0-9$_]*",st[2])
        if(t[0] in variables):
            print("\tlw $s1, {}".format(st[2]))
            if(st[3]=="<"):
#                print("\taddi {}, $s1, -{}".format(st[0].lower(),int(st[4])))
#                print("\tsub {}, $0, {}".format(st[0].lower(),st[0].lower()))
                print("\tslti ${}, $s1, {}".format(st[0].lower(),int(st[4])))
                #usereg[st[0]]=int(varstor[st[2]]<int(st[4]))
            if(st[3]==">"):
                print("\taddi ${}, $s1, -{}".format(st[0].lower(),int(st[4])))
                #usereg[st[0]]=int(varstor[st[2]]>int(st[4]))
            if(st[3]=="/"):
                print("\taddi $s2, $0, {}".format(int(st[4])))
                print("\tdiv $s1, $s2")
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=varstor[st[2]]/int(st[4])    
            if(st[3]=="*"):
                print("\taddi $s2, $0, {}".format(int(st[4])))
                print("\tmult $s1, $s2")
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=varstor[st[2]]*int(st[4])
            if(st[3]=="+"):
                print("\taddi ${}, $s1, {}".format(st[0].lower(),int(st[4])))
                #usereg[st[0]]=varstor[st[2]]+int(st[4])
            if(st[3]=="-"):
                print("\taddi ${}, $s1, -{}".format(st[0].lower(),int(st[2])))
                #usereg[st[0]]=varstor[st[2]]-int(st[4])
        else:
            if(st[3]=="<"):
#                print("\taddi {}, {}, -{}".format(st[0].lower(),st[2].lower(),int(st[4])))
#                print("\tsub {}, $0, {}".format(st[0].lower(),st[0].lower()))
                print("\tslti ${}, ${}, {}".format(st[0].lower(),st[2].lower(),int(st[4])))
                #usereg[st[0]]=int(usereg[st[2]]<int(st[4]))
            if(st[3]==">"):
                print("\taddi ${}, ${}, -{}".format(st[0].lower(),st[2].lower(),int(st[4])))
                #usereg[st[0]]=int(usereg[st[2]]>int(st[4]))
            if(st[3]=="/"):
                print("\taddi $s2, $0, {}".format(int(st[4])))
                print("\tdiv $s2, {}".format(st[2].lower()))
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=usereg[st[2]]/int(st[4])    
            if(st[3]=="*"):
                print("\taddi $s2, $0, {}".format(int(st[4])))
                print("\tmult $s1, ${}".format(st[2].lower()))
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=usereg[st[2]]*int(st[4])
            if(st[3]=="+"):
                print("\taddi ${}, $s1, {}".format(st[0].lower(),int(st[4])))
                #usereg[st[0]]=usereg[st[2]]+int(st[4])
            if(st[3]=="-"):
                print("\taddi ${}, $s1, -{}".format(st[0].lower(),int(st[2])))
                #usereg[st[0]]=usereg[st[2]]-int(st[4])
    else:
    	if(st[2] in varstor and st[4] in varstor):
            print("\tlw $s1, {}".format(st[2]))
            print("\tlw $s2, {}".format(st[4]))
            if(st[3]=="<"):
                print("\tslt ${}, $s1, $s2".format(st[0].lower()))
                #usereg[st[0]]=int(varstor[st[2]]<varstor[st[4]])
            if(st[3]==">"):
                print("\tslt ${}, $s2, $s1".format(st[0].lower()))
                #usereg[st[0]]=int(varstor[st[2]]>varstor[st[4]])
            if(st[3]=="/"):
                print("\tdiv $s1, $s2")
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=varstor[st[2]]/varstor[st[4]]
            if(st[3]=="*"):
                print("\tmult $s1, $s2")
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=varstor[st[2]]*varstor[st[4]]
            if(st[3]=="+"):
                print("\tadd ${}, $s2, $s1".format(st[0],lower()))
                #usereg[st[0]]=varstor[st[2]]+varstor[st[4]]
            if(st[3]=="-"):
                print("\tsub ${}, $s1, $s2".format(st[0].lower()))
                #usereg[st[0]]=varstor[st[2]]-varstor[st[4]]
    	elif(st[2] in varstor):
            print("\tlw $s1, {}".format(st[2]))
            if(st[3]=="<"):
                print("\tslt ${}, $s1, ${}".format(st[0].lower(),st[4].lower()))
                #usereg[st[0]]=int(varstor[st[2]]<usereg[st[4]])
            if(st[3]==">"):
                print("\tslt ${}, ${}, $s1".format(st[0].lower(),st[4].lower()))
                #usereg[st[0]]=int(varstor[st[2]]>usereg[st[4]])
            if(st[3]=="/"):
                print("\tdiv $s1, {$}".format(st[4].lower()))
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=varstor[st[2]]/usereg[st[4]]
            if(st[3]=="*"):
                print("\tmult $s1, ${}".format(st[4].lower()))
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=varstor[st[2]]*usereg[st[4]]
            if(st[3]=="+"):
                print("\tadd ${}, ${}, $s1".format(st[0],lower(),st[4].lower()))
                #usereg[st[0]]=varstor[st[2]]+usereg[st[4]]
            if(st[3]=="-"):
                print("\tsub ${}, $s1, ${}".format(st[0].lower(),st[4].lower()))
                #usereg[st[0]]=varstor[st[2]]-usereg[st[4]]
    	elif(st[4] in varstor):
            print("\tlw $s2, {}".format(st[4]))
            if(st[3]=="<"):
                print("\tslt ${}, ${}, $s2".format(st[0].lower(),st[2].lower()))
                #usereg[st[0]]=int(usereg[st[2]]<varstor[st[4]])
            if(st[3]==">"):
                print("\tslt ${}, $s2, ${}".format(st[0].lower(),st[2].lower()))
                #usereg[st[0]]=int(usereg[st[2]]>varstor[st[4]])
            if(st[3]=="/"):
                print("\tdiv ${}, $s2".format(st[2].lower()))
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=usereg[st[2]]/varstor[st[4]]
            if(st[3]=="*"):
                print("\tmult ${}, $s2".format(st[2].lower()))
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=usereg[st[2]]*varstor[st[4]]
            if(st[3]=="+"):
                print("\tadd ${}, $s2, ${}".format(st[0],lower(),st[2].lower()))
                #usereg[st[0]]=usereg[st[2]]+varstor[st[4]]
            if(st[3]=="-"):
                print("\tsub ${}, ${}, $s2".format(st[0].lower(),st[2].lower()))
                #usereg[st[0]]=usereg[st[2]]-varstor[st[4]]
    	else:
            if(st[3]=="<"):
                print("\tslt ${}, ${}, ${}".format(st[0].lower(),st[2].lower(),st[4].lower()))
                #usereg[st[0]]=int(varstor[st[2]]<varstor[st[4]])
            if(st[3]==">"):
                print("\tslt ${}, ${}, ${}".format(st[0].lower(),st[4].lower(),st[2].lower()))
                #usereg[st[0]]=int(varstor[st[2]]>varstor[st[4]])
            if(st[3]=="/"):
                print("\tdiv ${}, ${}".format(st[2].lower(),st[4].lower()))
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=varstor[st[2]]/varstor[st[4]]
            if(st[3]=="*"):
                print("\tmult ${}, ${}".format(st[2].lower(),st[4].lower()))
                print("\tmflo ${}".format(st[0].lower()))
                #usereg[st[0]]=varstor[st[2]]*varstor[st[4]]
            if(st[3]=="+"):
                print("\tadd ${}, ${}, ${}".format(st[0].lower(),st[4].lower(),st[2].lower()))
                #usereg[st[0]]=varstor[st[2]]+varstor[st[4]]
            if(st[3]=="-"):
                print("\tsub ${}, ${}, ${}".format(st[0].lower(),st[2].lower(),st[4].lower()))
                #usereg[st[0]]=varstor[st[2]]-varstor[st[4]]

if __name__ == "__main__":
    fil=open("icg.txt","r")
    icg=fil.readlines(1200) 
    print("main:")
    for stat in icg:
        stat=stat.rstrip()
        st = stat.split(" ")
        for i in st:
            u = i.isdigit()
            v = re.findall("=",i)
            w = re.findall("^T[0-9]*",i)
            x = re.findall("^L[0-9]*",i)
            y= re.findall("^if",i)
            z = re.findall("^goto",i)
            if(not(u or v or w or x or y or z)):
            	t=re.findall("[a-zA-Z$_][a-zA-Z0-9$_]*",i)
            	if(t):
	                variables.add(t[0])
        for i in range(len(st)):
    	    w = re.findall("T[0-9]*",st[i])
    	    if(w):
    	    	val = int(st[i][1:])
    	    	val = val%8
    	    	value="T"+str(val)
    	    	st[i]=value
        if(len(st)==3):
            var3(st)
        elif(len(st)==4):
            var4(st)
        elif(len(st)==2):
            var2(st)
        elif(len(st)==1):
            print("\n{}".format(st[0]))
        else:
            eval(st)
    print(".data")
    for i in variables:
        print("\t {}: .word 0".format(i))
