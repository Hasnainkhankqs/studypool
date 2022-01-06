//Implement the following three algorithms in either C++ or Java: Bubble-Sort, Binary-Search, and Sequential-Search.
#include <iostream>
using namespace std;

////bubble sort algorithm
//void DisplaySortedArray(int array[], int size);
//void BSAlgo(int arrayofnumbers[], int length);
//
//int main() {
//	
//  int unsorteddata[] = {91, -55, 65, 92, 7, 0 , 5,1,-99};
//  
//  
//  int length = sizeof(unsorteddata) / sizeof(unsorteddata[0]);
//  
//  BSAlgo(unsorteddata, length);
//  
//  cout << "Here is the sorted Array:\n";
//  DisplaySortedArray(unsorteddata, length);
//}
//
//
//void DisplaySortedArray(int array[], int size) {
//  for (int i = 0; i < size; ++i) {
//    cout << "  " << array[i];
//  }
//  cout << "\n";
//}
//
//	
//void BSAlgo(int arrayofnumbers[], int length) {
//    
//  
//  for (int i = 0; i < (length-1); i++) {
//      
//    // check if swapping to sort array happens or not 0 for yes 1 for no
//    int swp = 0;
//    
//    //no to compare two number in the given array
//    for (int j = 0; j < (length-i-1); j++) {
//        
//      // compare two numbers in the array
//      if (arrayofnumbers[j] > arrayofnumbers[j + 1]) {
//
//        // swapping happens if numbers are not already sorted
//        int temp = arrayofnumbers[j];
//        arrayofnumbers[j] = arrayofnumbers[j + 1];
//        arrayofnumbers[j + 1] = temp;
//		// 1 means swapping happens for unsorted array
//        swp = 1;
//      }
//    }
//	// Checking if array is already sorted or not
//    if (swp == 0){
//    	break;
//	}
//      
//  }
//}


////Binary search program
//int main()
//{
//    
//    int DataToBeSearched[] = {11,12,13,14,15,16,17,18,19};
//
//    int num = 16; // element to be searched
//    int Atfirst = 0;
//    int Atlast = 8;
//    int middle = (Atfirst+Atlast)/2;
//    
//    while(Atfirst <= Atlast){
//    	
//        if(DataToBeSearched[middle]<num){
//        	Atfirst = middle+1;
//		}
//		
//        else if(DataToBeSearched[middle]==num){
//            cout<<"The number: "<<num<<" found at the Position "<<middle+1 << " and index " << middle;
//            break;
//        }
//        else{
//        	Atlast = middle-1;
//		}
//            
//        middle = (Atfirst+Atlast)/2;
//    }
//    if(Atfirst>Atlast){
//    	cout<<"The number: "<<num<<" is not found in the provided Array";
//	}
//        
//}

//Sequential-Search
//int SequentialSearch(int arr[10], int x){
//	for (int i = 0; i <= 10; i++)
//        if (arr[i] == x)
//            return i;
//    return -1;
//}
//int main(){
//	int arr[10] = {1,4,6,7,8,3,2,9,5,6};
//	int x = 5;
//        
//    int result = SequentialSearch(arr, x);
//    if(result == -1){
//    	cout << "Element is not present in array";
//	}
//	else{
//		cout << "Element is present at position "<< result + 1 << " and  index " << result;
//	}
//    
//}
