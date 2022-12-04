

f = open("../input/day4data.in","r")
lines = f.readlines();
count = 0; count1 =0;
for line in lines:
    words =  line.split(',');
    # map the function
    # map(lambda x: x.split('-'),split_pair)
    # range(x,y+1)
    # set(list1) <= set(list2):
    word0 = words[0].split('-');
    a = int(word0[0]);
    b = int(word0[1]);
    word1 = words[1].split('-');
    # print(word0 + " " + word1 + "\n");
    c = int(word1[0]);
    d = int(word1[1]);
    
    print(a, b, c, d);

    #s1 <= s2
    if((a<=c and d<=b) or (c<=a and b<=d)):
        count+=1;

    #s1.intersection(s2)
    if((a <= c and c <= b) or (c<=a and a<=d)):
        count1 +=1;
 
    
print(count, count1)
