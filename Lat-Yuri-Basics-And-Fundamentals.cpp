#include <iostream>
using namespace std;

// Function to perform Selection Sort in descending order
void DescendingSorter(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
    	
        // Assume the maximum element is at the current position
        int maxIndex = i;
        
        // Find the maximum element in the remaining unsorted portion
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        // Swap the found maximum element with the element at index i
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
        }
    }

int main()
{
	const int maxSize = 10;
	int arrayOne[maxSize], arrayTwo[maxSize], mergedArray[2 * maxSize];
	int sizeOne, sizeTwo;
	
	// First array *************************************************************************************
	cout << "Enter the number of elements for the first array (max: 10): ";
	cin >> sizeOne;
	 	
	while(sizeOne <= 0 || sizeOne > maxSize) 
	{
        cout << "Invalid input. Please enter a number from 1 and 10: " << maxSize << ": ";
        cin >> sizeOne;
	}

	cout << "Enter the elements for the first array:\n";
	
	for(int i = 0; i < sizeOne; i++)
		cin >> arrayOne[i];
		
	// Second array *************************************************************************************
	cout << "Enter the number of elements for the second array (max: 10): ";
	cin >> sizeTwo;
	
	while(sizeTwo <= 0 || sizeTwo > maxSize) 
	{
        cout << "Invalid input. Please enter a number from 1 and 10: " << maxSize << ": ";
        cin >> sizeTwo;
	}
	
	cout << "Enter the elemets for the second array:\n";
	
	for(int i = 0; i < sizeTwo; i++)
		cin >> arrayTwo[i];
		
	// Merging the two arrays ***************************************************************************
	
	int mergedSize = sizeOne + sizeTwo;
	
	for(int i = 0; i < sizeOne; i++)
		mergedArray[i] = arrayOne[i];
		
	for(int i = 0; i < sizeTwo; i++)
		mergedArray[sizeOne + i] = arrayTwo[i];
		
	
	// Calling a void that sorts the mergedArray into descending order
	
	DescendingSorter(mergedArray, mergedSize);
		
	cout << "Merged and sorted array in descending order:\n";
	for (int i = 0; i < mergedSize; ++i)
        cout << mergedArray[i] << " ";
        
}