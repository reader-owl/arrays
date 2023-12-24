#include <iostream>

/*
                        Q.  Kadane's Algorithm, maximum subarray sum

                    explanation -  given array - arr[] = {-2, -3, 4, -1, -2, 1, 5, -3}
                                    we have to find the subarray which has maximum sum
                                    in above case the subarray is - {4, -1, -2, 1, 5}, which gives sum = 7

                Brute force - trying out all subarrays, as we did in 18th(i guess)

maxi = INT_MIN;
for(i=0; i<n; i++)
{
    for(j=i; j<n; j++)
    {
        sum = 0
        for(k=i->j)
            sum += arr[k]

        maxi = max(sum, maxi)
    }
}

                TC - O(N^3)         // nearly
                SC - O(1)


                Better sol -  minimizing brute force

maxi = INT_MIN;
for(i=0; i<n; i++)
{
    sum = 0
    for(j=i; j<n; j++)
    {
        sum += arr[j]

        maxi = max(sum, maxi)
    }
}

                TC - O(N^2)
                SC - O(1)



                Optimal sol -  Kadane's Algorithm
                                we will take first element and iterate through the array and keep adding the next
                                elements. we will keep adding if 'sum > 0' otherwise we drop the element

                                first we take '-2', sum will be '-2' which is lesser than 0, so we will not take it
                                then we take '-3', sum will be '-3' and if we form an array of {-2, -3} sum will be '-5'
                                which is getting less, which opposite of what question is telling
                                then we move to '4', sum = '4'      we will take it
                                then we move to '-1', sum = '3' (of {4, -1})    we will take it bcz 'sum > 0'
                                then  to '-2', sum = '1' (of {4, -1, -2})    we take bcz 'sum > 0'
                                then  to '1', sum = '2' (of {4, -1, -2, 1})     we take it
                                then  to '5', sum = '7' (of {4, -1, -2, 1, 5})      we take it
                                then  to '-3', sum = '4' (of {4, -1, -2, 1, 5, -3})     we will not take it bcz '4' is 
                                not maximum (4 is lesser than 7)
                                                we will only take if 'sum > 0'

        Actual code
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0, maxi = LONG_MIN;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];

        if(sum > maxi)
        {
            maxi = sum;
        }

        if(sum < 0)
        {
            sum = 0;
        }

        if(maxi < 0)
        {
            arr[0];             // check this line, might be wrong code line
        }
    }
    return maxi;
}

                TC - O(N)
                SC - O(1)


            Print the maximum subarray sum
    pseudo
maxi = INT_MIN
sum = 0
absStart = -1
ansEnd = -1
for(i=0; i<n; i++)
{
    if(sum == 0)
        start = i;              // bcz we always starts from the next element if the sum is less than 0

    if(sum > maxi)
    {
        maxi = sum;
        ansStart = start, ansEnd = i;
    }
    if(sum < 0)
    {
        sum = 0;
    }
}

                TC - O(N)
                SC - O(1)
*/

int main()
{
    std::cout << "Hello World!\n";
}