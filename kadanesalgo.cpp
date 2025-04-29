#include<iostream>
#include<climits>
using namespace std;
int main(){
    int array[5] = {2, 3, -4, 5, 6};
    int maxSum = INT_MIN;
    int currSum = 0;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        currSum += array[i];
        maxSum = max(currSum, maxSum);
    }
    
if (currSum < 0)
{
    currSum + 0;
}
    cout<<"The max sum is "<<maxSum<<endl;

    return 0;
}