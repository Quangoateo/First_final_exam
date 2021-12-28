
 
# Function to calculate sum
# of even numbers at even indices
def sum_even_and_even_index(arr,n):
     
 
    sum = 0
     
# calculating sum of even
# number at even index
    for i in range(0,n):
        if (i % 2 == 0) :
            sum += arr[i]
    # required sum
    return sum
# Driver program to test above
arr1 = [2,6,3,8,6,3]
arr2=[1,2,5,3,1,5,1]
n = len(arr1)
n2=len(arr2)
print(sum_even_and_even_index(arr1, n))
print(sum_even_and_even_index(arr2,n2))



	
