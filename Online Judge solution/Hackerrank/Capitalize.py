s=input()
word=s.split()
string=[]
for w in word:
    if(w[0].isalpha()):
        string.append(w.title())
    else:
        string.append(w)
string=' '.join(string)        
print(string)