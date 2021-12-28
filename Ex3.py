def clip_value( data,  length,  min,  max,  result):

    for i in data:

        if (data[i] < min):
            return result[i].append(0)
        elif(data[i] > max):
            return result[i].append(1)
        else :
            return result[i] == data[i]
def print_array(data,length):
    for i in data:
    	print(i)
data=[1, 2, 3, 4, 5, 6, 7, 8, 9]
min = 3
max = 6
length=9
result=[length]
print_array(data,length)
clip_value( data,  length,  min,  max,  result)
