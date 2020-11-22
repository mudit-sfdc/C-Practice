/*
This program is basically for searching a number in array and you can even enter that how many iteration you needed!!!
*/

#include<iostream>
using namespace std;
int calculate(int arr[],int num,int size){
    for(int i=0;i<size;i++)
    {
        if(num==arr[i])
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int arr[100],numOfIteration,numberTofind,sizeOfArray;
    //Insert number of iteration
    cin>>numOfIteration;
    while(numOfIteration--)
    {
        //Enter the size of array
        cin>>sizeOfArray;
        //Enter the array
        for (int i=0; i<sizeOfArray; i++) 
            cin >> arr[i]; 
        //Enter the number
        cin>>numberTofind; 
        cout<< calculate(arr,numberTofind,sizeOfArray) << endl;
    }
    return 0;
}
