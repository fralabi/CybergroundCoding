//https://www.geeksforgeeks.org/binary-search/

// C++ program to implement recursive Binary Search 
#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;
	return 0;
}

//Use of function of C++ Library 

// binary_search example
#include <bits/stdc++.h>// std::cout
#include <algorithm>    // std::binary_search, std::sort
#include <vector>       // std::vector
using namespace std;


int main () {
	int myints[] = {1,2,3,4,5,4,3,2,1};
	vector<int> v(myints,myints+9);                         

	// using default comparison:
	sort (v.begin(), v.end());

	cout << "looking for a 3... ";
	if (binary_search (v.begin(), v.end(), 3))
		cout << "found!\n"; 
	else 
		cout << "not found.\n";

	// using myfunction as comp:
	return 0;
}
