#include "DataHousing.h"


DataHousing::DataHousing() {
	this->bubbleSort = 0;
	this->insertionSort = 0;
	this->selectionSort = 0;
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

}


void DataHousing::SelectionSort(int* numbersArray) {

}


void DataHousing::ReadData() {

}
