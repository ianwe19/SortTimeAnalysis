#include "DataHousing.h"
#include <fstream>
#include <iostream>


#define NUM_FILE_500  0
#define NUM_FILE_5K   1
#define NUM_FILE_25K  2
#define NUM_FILE_100K 3


DataHousing::DataHousing() {
	this->bubbleSort = 0;
	this->insertionSort = 0;
	this->selectionSort = 0;
	this->arrayLength = 0;
	this->storageArray = 0;
}


void DataHousing::BubbleSort(int* numbersArray) {
	bool swap = true;
	while (swap == true) {
		swap = false;
		for (int i = 0; i <= this->arrayLength -2; i++) {
			int j = i + 1;
			if (numbersArray[i] > numbersArray[j]) {
				int temp = numbersArray[j];
				numbersArray[j] = numbersArray[i];
				numbersArray[i] = temp;
				swap = false;
			}
		}
	}
}


void DataHousing::InsertionSort(int* numbersArray) {
	int currentValue;
	for (int i = 1; i < arrayLength; i++) {
		int j = i - 1;
		currentValue = numbersArray[i];
		while (numbersArray[j] > currentValue && j >= 0) {
			numbersArray[j + 1] = numbersArray[j];
			j--;
		}
		numbersArray[j + 1] = currentValue;
	}
}


void DataHousing::SelectionSort(int* numbersArray) {
	for (int i = 0; i < arrayLength - 1; i++) {
		int currentMin = i;
		for (int j = i + 1; j < arrayLength; j++) {
			if (numbersArray[j] < numbersArray[currentMin])
				currentMin = j;
		}

		int tempNum = numbersArray[i];
		numbersArray[i] = numbersArray[currentMin];
		numbersArray[currentMin] = tempNum;
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
			if (i < arrayLength) {
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
