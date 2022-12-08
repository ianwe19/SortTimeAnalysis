#ifndef __DATAHOUSING__
#define __DATAHOUSING__


class DataHousing {
private:
	int* bubbleSort;
	int* insertionSort;
	int* selectionSort;

public:
	// CONSTRUCTOR - allocate memory for dynamic arrays according which file we are using
	DataHousing(int);

	// DESTRUCTOR - deallocate memory from dynamic arrays
	~DataHousing();

	// bubble sort that acts only on this->bubbleSort[]
	void BubbleSort(int);

	// insertion sort that acts only on this->insertionSort[]
	void InsertionSort(int);

	// selection sort that acts only on this->selectionSort[]
	void SelectionSort(int);

	// open file, parse data, insert into each array to be sorted
	void ReadData(int, const char*);
};
#endif