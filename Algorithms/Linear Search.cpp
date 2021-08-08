//SOURCE:

// C++ program for linear search with implementation of Linear Search
#include<bits/stdc++.h>
using namespace std;

void search(vector<int> arr, int search_Element)
{
	int left = 0;
	int length = arr.size();
	int position = -1;
	int right = length - 1;
	
	// Run loop from 0 to right
	for(left = 0; left <= right;)
	{
		
		// If search_element is found with
		// left variable
		if (arr[left] == search_Element)
		{
			
			position = left;
			cout << "Element found in Array at "
				<< position + 1 << " Position with "
				<< left + 1 << " Attempt";
				
			break;
		}
	
		// If search_element is found with
		// right variable
		if (arr[right] == search_Element)
		{
			position = right;
			cout << "Element found in Array at "
				<< position + 1 << " Position with "
				<< length - right << " Attempt";
				
			break;
		}
		left++;
		right--;
	}

	// If element not found
	if (position == -1)
		cout << "Not found in Array with "
			<< left << " Attempt";
}

// Driver code
int main()
{
	vector<int> arr{ 1, 2, 3, 4, 5 };
	int search_element = 5;
	
	// Function call
	search(arr, search_element);
}
	
// This code is contributed by mayanktyagi1709

#include<bits/stdc++.h> // std::cout
#include <algorithm>    // std::search
#include <vector>       // std::vector
using namespace std;

// Driver code
int main()
{
	vector<int> arr{ 1, 2, 3, 4, 5 };
	int search_element = 5;
	
	// Declaring an iterator for storing the returning pointer
    vector<int>::iterator i;
  
  // Using std::search and storing the result in iterator i
  i = std::search(arr.begin(), arr.end(), arr, arr+arr.size());
  
  // checking if iterator i contains end pointer of arr or not
  if (i != arr.end()) {
      cout << "5 is present at index " << (i - arr.begin());
  } else {
      cout << "5 is not present in vector1";
  }
}

