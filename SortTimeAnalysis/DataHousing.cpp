#include "DataHousing.h"


DataHousing::DataHousing() {
	this->bubbleSort = 0;
	this->insertionSort = 0;
	this->selectionSort = 0;
	this->arrayLength = 0;
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


void DataHousing::ReadData() {

}
