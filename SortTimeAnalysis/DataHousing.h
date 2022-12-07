#ifndef __DATAHOUSING__
#define __DATAHOUSING__


class DataHousing {
private:
	int* bubbleSort;
	int* insertionSort;
	int* selectionSort;
	int* storageArray;
	int* copyArray;
	int arrayLength;

	void MakeArrayCopy(int);
	void RestoreArrayCopy(int);

public:
	DataHousing();
	DataHousing(int);

	~DataHousing();


	void BubbleSort();
	void InsertionSort(int);
	void SelectionSort(int);

	void ReadData(int);
};
#endif