#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> array, int item)
{

    int high = array.size() - 1;
    int low = 0;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (array[mid] == item) { return mid; } 
        else if (item > array[mid]) { low = mid + 1; }
        else { high = mid - 1; }

    }
    return -1;
    
}

int main() 
{

    cout << "Please input a number you would like to search for" << endl;

    int input;
    cin >> input;

    // creating vector of number undsorted
    vector<int> array;
    array.push_back(1);
    array.push_back(34);
    array.push_back(14);
    array.push_back(3);
    array.push_back(21);
    array.push_back(12);
    array.push_back(93);
    array.push_back(39);

    // sorting the vector
    sort(array.begin(), array.end());

    // searching for item and printing
    cout << binarySearch(array, input) << endl;


} // namespace std;
