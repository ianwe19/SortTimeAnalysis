#include "DataHousing.h"
#include <fstream>
#include <iostream>


#define FIRST_FILE   500
#define SECOND_FILE  5000
#define THIRD_FILE   25000
#define FOURTH_FILE  100000


// CONSTRUCTOR - allocate memory for dynamic arrays according which file we are using
DataHousing::DataHousing(int whichFile) {
	this->bubbleSort = new int[whichFile];
	this->insertionSort = new int[whichFile];
	this->selectionSort = new int[whichFile];
}


// DESTRUCTOR - deallocate memory from dynamic arrays
DataHousing::~DataHousing() {
	delete[] bubbleSort;
	delete[] insertionSort;
	delete[] selectionSort;
}


// bubble sort that acts only on this->bubbleSort[]
void DataHousing::BubbleSort(int whichFile) {
	bool swap = true;
	while (swap == true) {
		swap = false;
		for (int i = 0; i <= whichFile - 2; i++) {
			int j = i + 1;
			if (bubbleSort[i] > bubbleSort[j]) {
				int temp = bubbleSort[j];
				bubbleSort[j] = bubbleSort[i];
				bubbleSort[i] = temp;
				swap = true;
			}
		}
	}
}


// insertion sort that acts only on this->insertionSort[]
void DataHousing::InsertionSort(int whichFile) {
	int currentValue;
	for (int i = 1; i < whichFile; i++) {
		int j = i - 1;
		currentValue = this->insertionSort[i];
		while (this->insertionSort[j] > currentValue && j >= 0) {
			this->insertionSort[j + 1] = this->insertionSort[j];
			j--;
		}
		this->insertionSort[j + 1] = currentValue;
	}
}


// selection sort that acts only on this->selectionSort[]
void DataHousing::SelectionSort(int whichFile) {
	for (int i = 0; i < whichFile - 1; i++) {
		int currentMin = i;
		for (int j = i + 1; j < whichFile; j++) {
			if (this->selectionSort[j] < selectionSort[currentMin])
				currentMin = j;
		}

		int tempNum = selectionSort[i];
		selectionSort[i] = selectionSort[currentMin];
		selectionSort[currentMin] = tempNum;
	}
}


// open file, parse data, insert into each array to be sorted
void DataHousing::ReadData(int whichFile, const char* fileName) {
	int i = 0;

	// get the input handle for the file we are using
	std::ifstream inputHandle(fileName, std::ios::in);

	// check to make sure the file opened...
	if (inputHandle.is_open() == true) {
		// if the file opened, read integers until EOF (end of file) is encountered
		// and insert into all 3 arrays to be sorted
		i = 0;
		while (!inputHandle.eof()) {
			if (i < whichFile) {
				inputHandle >> bubbleSort[i];
				inputHandle >> insertionSort[i];
				inputHandle >> selectionSort[i];
				i++;
			}
		}

		// close the file now that we are done reading
		inputHandle.close();
	}
	else {
		// if the file didn't open, echo this to the user
		std::cout << "ERROR: The file could not be opened for reading...\n";
	}

}
