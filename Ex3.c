#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void clip_value(int data[], int length, int min, int max, int result[])
{
    for (int i=0; i<=length; i++) 
    {
        if (data[i] < min)
        {
            result[i] = 0;
        }
        else if (data[i] > max)
        {
            result[i] = 1;
        }
        else 
        {
            result[i] = data[i];
        } 
    }
}
void print_array(int data[], int length)
{
    for(int i=0; i<length; i++)
    {
        printf("%d  ", data[i]);
    }
    printf("\n\n");
}

int main()
{
    // test
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8,9};
    int data2[] = {4,12,23,4,35,16,7,48,19};
     int length = 9;
 

    int min = 3;
    int max = 6;
    int min2 = 11;
    int max2 = 33;
    
    int result[length];
   int result2[length];
 
    clip_value(data, length, min, max, result);
    clip_value(data2, length, min2, max2,result2);

    // print_array
    printf("data array1: ");
    print_array(data, length);
    printf("data array2: ");
    print_array(data2, length);
    
    printf("result array1: ");
    print_array(result, length);

    printf("result array2: ");
    print_array(result2, length);
    return 0;
}

