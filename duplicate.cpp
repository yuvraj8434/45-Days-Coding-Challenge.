#include <iostream>
using namespace std;

int removeDuplicates(int nums[], int size) {
    if (size == 0) {
        return 0; 
    }

    int k = 1; 

    for (int i = 1; i < size; i++) {
        if (nums[i] != nums[k - 1]) // Compare current element with the last unique
        {                                    
            nums[k] = nums[i];                   // Store unique element
            k++;                                // Increment the count of unique elements
        }
    }

    return k;                        // Return the number of unique elements
}

int main() 
{
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    int uniqueCount = removeDuplicates(nums, size);
    
    cout << "Number of unique elements: " << uniqueCount << endl;
    cout << "Unique elements: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}