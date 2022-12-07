#include <iostream>
#include "Timer.h"
#include "DataHousing.h"


#define NUM_FILE_500  500
#define NUM_FILE_5K   5000
#define NUM_FILE_25K  25000
#define NUM_FILE_100K 100000


int main()
{
    int bubbleTime = 0;
    int insertionTime = 0;
    int selectionTime = 0;


    DataHousing data500(NUM_FILE_500);
    DataHousing data5K(NUM_FILE_5K);
    DataHousing data25K(NUM_FILE_25K);
    DataHousing data100K(NUM_FILE_100K);


    // BEGIN 500 ELEMENT SORT
    std::cout << "Populating arrays... <500 elements> <\n";

    data500.ReadData(NUM_FILE_500, "NumFile500.txt");

    std::cout << "Sorting...\n";

    bubbleTime = data500.BubbleSort(NUM_FILE_500);

    data500.InsertionSort(NUM_FILE_500);

    data500.SelectionSort(NUM_FILE_500);

    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : " << bubbleTime;
    std::cout << "Elapsed time <Insertion Sort>   : " << insertionTime;
    std::cout << "Elapsed time <Selection Sort>   : " << selectionTime;
    // END 500 ELEMENT SORT


    // BEGIN 5K ELEMENT SORT
    std::cout << "Populating arrays... <5K elements> <\n";

    data5K.ReadData(NUM_FILE_5K, "NumFile5K.txt");

    std::cout << "Sorting...\n";

    data5K.BubbleSort(NUM_FILE_5K);

    data5K.InsertionSort(NUM_FILE_5K);

    data5K.SelectionSort(NUM_FILE_5K);


    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : " << bubbleTime;
    std::cout << "Elapsed time <Insertion Sort>   : " << insertionTime;
    std::cout << "Elapsed time <Selection Sort>   : " << selectionTime;

    // END 5K ELEMENT SORT


    // BEGIN 25K ELEMENT SORT
    std::cout << "Populating arrays... <25K elements> <\n";

    data25K.ReadData(NUM_FILE_25K, "NumFile25K.txt");

    std::cout << "Sorting...\n";

    data25K.BubbleSort(NUM_FILE_25K);

    data25K.InsertionSort(NUM_FILE_25K);


    data25K.SelectionSort(NUM_FILE_25K);

    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : " << bubbleTime;
    std::cout << "Elapsed time <Insertion Sort>   : " << insertionTime;
    std::cout << "Elapsed time <Selection Sort>   : " << selectionTime;
    // END 25K ELEMENT SORT


    // BEGIN 100K ELEMENT SORT
    std::cout << "Populating arrays... <100K elements> <\n";

    data100K.ReadData(NUM_FILE_100K, "NumFile100K.txt");

    std::cout << "Sorting...\n";

    data100K.BubbleSort(NUM_FILE_100K);

    data100K.InsertionSort(NUM_FILE_100K);

    data100K.SelectionSort(NUM_FILE_100K);

    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : " << bubbleTime;
    std::cout << "Elapsed time <Insertion Sort>   : " << insertionTime;
    std::cout << "Elapsed time <Selection Sort>   : " << selectionTime;
    // END 100K ELEMENT SORT


    return 0;
}
