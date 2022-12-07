#include "DataHousing.h"
#include "Timer.h"
#include <fstream>
#include <iostream>


#define NUM_FILE_500  500
#define NUM_FILE_5K   5000
#define NUM_FILE_25K  25000
#define NUM_FILE_100K 100000


DataHousing::DataHousing(int whichFile) {
	this->bubbleSort = new int[whichFile];
	this->insertionSort = new int[whichFile];
	this->selectionSort = new int[whichFile];
	this->storageArray = new int[whichFile];
}


DataHousing::~DataHousing() {
	delete[] storageArray;
	delete[] bubbleSort;
	delete[] insertionSort;
	delete[] selectionSort;
}


int DataHousing::BubbleSort(int whichFile) {
	Timer bubbleTimer;

	bubbleTimer.Start();

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
	bubbleTimer.Stop();
	return bubbleTimer.GetTime();
}


int DataHousing::InsertionSort(int whichFile) {
	Timer insertionTimer;

	insertionTimer.Start();

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


int DataHousing::SelectionSort(int whichFile) {
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


void DataHousing::ReadData(int whichFile, const char* fileName) {
	int i = 0;

	std::ifstream inputHandle(fileName, std::ios::in);

	// check to make sure the file opened...
	if (inputHandle.is_open() == true) {
		// if the file opened, read integers until EOF (end of file) is encountered
		i = 0;
		while (!inputHandle.eof()) {
			if (i < whichFile) {
				//inputHandle >> storageArray[i];
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
