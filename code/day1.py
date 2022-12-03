# #version 1
# #open the data file in read mode
# f = open("day1data.in", "r")
# groups = f.read().split("\n\n")

# count = 0
# sum = 0
# sums = []

# for lines in groups:
#     lines = lines.split("\n")
#     for line in lines:
#         if line != "":
#             sum += int(line)
#     count += 1
#     sums.append(sum)
#     print("group {}: {}".format(count, sum))
#     sum = 0


# sums.sort(reverse=True)
# print(sums[0], sums[1] , sums[2])
# print(sums[0] + sums[1] + sums[2])

# f.close();


# version 2
count = 0
sum = 0
sums = []
with open("day1data.in",'r') as readfile:
    for line in readfile:
        #delete the new lines or space '\n', '\r', '\t', ' '
        if line.strip():
            sum += int(line)
        else:
            #new line, initialize the sum as well
            sums.append(sum)
            sum = 0

print("highest calory : " + str(max(sums)))
sums.sort(reverse=True)
print(sums[0], sums[1] , sums[2])
print(sums[0] + sums[1] + sums[2])