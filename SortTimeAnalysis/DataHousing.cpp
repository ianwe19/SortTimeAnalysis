#include "DataHousing.h"
#include <fstream>
#include <iostream>


#define NUM_FILE_500  500
#define NUM_FILE_5K   5000
#define NUM_FILE_25K  25000
#define NUM_FILE_100K 100000


DataHousing::DataHousing() {
	this->bubbleSort = 0;
	this->insertionSort = 0;
	this->selectionSort = 0;
	this->arrayLength = 0;
	this->storageArray = 0;
	this->copyArray = 0;
}


DataHousing::DataHousing(int whichFile) {
	this->bubbleSort = new int[whichFile];
	this->insertionSort = new int[whichFile];
	this->selectionSort = new int[whichFile];
	this->storageArray = new int[whichFile];
	this->copyArray = new int[whichFile];
	this->arrayLength = 0;
}


DataHousing::~DataHousing() {
	delete[] storageArray;
	delete[] bubbleSort;
	delete[] insertionSort;
	delete[] selectionSort;
	delete[] copyArray;
}


void DataHousing::BubbleSort() {

	bool swap = true;
	while (swap == true) {
		swap = false;
		for (int i = 0; i <= this->arrayLength -2; i++) {
			int j = i + 1;
			if (this->bubbleSort[i] > this->bubbleSort[j]) {
				int temp = this->bubbleSort[j];
				this->bubbleSort[j] = this->bubbleSort[i];
				this->bubbleSort[i] = temp;
				swap = false;
			}
		}
	}
}


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


void DataHousing::SelectionSort(int whichFile) {
	for (int i = 0; i < whichFile - 1; i++) {
		int currentMin = i;
		for (int j = i + 1; j < arrayLength; j++) {
			if (this->selectionSort[j] < selectionSort[currentMin])
				currentMin = j;
		}

		int tempNum = selectionSort[i];
		selectionSort[i] = selectionSort[currentMin];
		selectionSort[currentMin] = tempNum;
	}
}


void DataHousing::ReadData(int whichFile) {
	int i = 0;

	if (whichFile == NUM_FILE_500) {
		std::ifstream inputHandle("NumFile500.txt", std::ios::in);
	}
	else if (whichFile == NUM_FILE_5K) {
		std::ifstream inputHandle("NumFile5K.txt", std::ios::in);
	}
	else if (whichFile == NUM_FILE_25K) {
		std::ifstream inputHandle("NumFile25K.txt", std::ios::in);
	}
	else if (whichFile == NUM_FILE_100K) {
		std::ifstream inputHandle("NumFile100K.txt", std::ios::in);
	}

	std::ifstream inputHandle("NumFile500.txt", std::ios::in);

	// check to make sure the file opened...
	if (inputHandle.is_open() == true) {
		// if the file opened, read integers until EOF (end of file) is encountered
		i = 0;
		while (!inputHandle.eof()) {
			if (i < whichFile) {
				inputHandle >> storageArray[i];
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


void DataHousing::MakeArrayCopy(int whichFile) {
	for (int i = 0; i < whichFile; i++) {
		this->copyArray[i] = this->storageArray[i];
	}
}


void DataHousing::RestoreArrayCopy(int whichFile) {
	for (int i = 0; i < whichFile; i++) {
		this->storageArray[i] = this->copyArray[i];
	}
}
