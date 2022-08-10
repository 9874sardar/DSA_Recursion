// Adding array of integers using recursion
#include <iostream>
using namespace std;

int sumOfArr(int arr[],int size){
    
    if(size == 0){
        return 0;
        }
    if(size ==1){
        return arr[0];
    }

    int ans = sumOfArr(arr+1,size - 1);
    int finAns = arr[0] + ans;
    return finAns;
}

int main(){
    int a[5] = {3 ,4, 5 ,9 , 9};
    int size = 5;
    int finalAns = sumOfArr(a,size);
    cout << "the value is "<< finalAns << endl;
    return 0;
}