#ifndef __DATAHOUSING__
#define __DATAHOUSING__


class DataHousing {
private:
	int* bubbleSort;
	int* insertionSort;
	int* selectionSort;
	int* storageArray;
	int arrayLength;

public:
	// CONSTRUCTOR
	DataHousing();


	void BubbleSort(int*);
	void InsertionSort(int*);
	void SelectionSort(int*);

	void ReadData(int);
};
#endif