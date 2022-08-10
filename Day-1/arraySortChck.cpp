//Check that the array is properly sorted
#include<iostream>
using namespace std;

int checkSorting(int arr[],int size){
    if(size == 0 || size == 1)
        return 1;
    if(arr[0] > arr[1]){
        return 0;}
    else{
        int answer = checkSorting(arr + 1,size-1);
        cout << "the value : " << arr+1 << endl;
        return answer;
    }
}

int main(){
    int array[5] = {2,4,7,8,9};
    int size = 5;
    // int val[] = array[] + 1;
    // cout << "the doubt" << val << endl;
    int answer = checkSorting(array,size);
    answer ? cout << "the array is sorted denoted as " << answer : cout << "the array is not sorted denoted as " << answer << endl;
    return 0;
}