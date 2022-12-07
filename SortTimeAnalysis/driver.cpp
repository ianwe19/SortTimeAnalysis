#include <iostream>
#include "Timer.h"
#include "DataHousing.h"


#define NUM_FILE_500  500
#define NUM_FILE_5K   5000
#define NUM_FILE_25K  25000
#define NUM_FILE_100K 100000


int main()
{
    
    Timer bubbleTimer;
    Timer insertionTimer;
    Timer selectionTimer;

    DataHousing data500(NUM_FILE_500);
    DataHousing data5K(NUM_FILE_5K);
    DataHousing data25K(NUM_FILE_25K);
    DataHousing data100K(NUM_FILE_100K);


    // BEGIN 500 ELEMENT SORT
    std::cout << "Populating arrays... <500 elements> <\n";

    data500.ReadData(NUM_FILE_500, "NumFile500.txt");

    std::cout << "Sorting...\n";

    bubbleTimer.Start();
    data500.BubbleSort(NUM_FILE_500);
    bubbleTimer.Stop();

    insertionTimer.Start();
    data500.InsertionSort(NUM_FILE_500);
    insertionTimer.Stop();

    selectionTimer.Start();
    data500.SelectionSort(NUM_FILE_500);
    selectionTimer.Stop();

    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : ";
    bubbleTimer.GetTime();
    std::cout << "Elapsed time <Insertion Sort>   : ";
    insertionTimer.GetTime();
    std::cout << "Elapsed time <Selection Sort>   : ";
    selectionTimer.GetTime();
    // END 500 ELEMENT SORT


    // BEGIN 5K ELEMENT SORT
    std::cout << "Populating arrays... <5K elements> <\n";

    data500.ReadData(NUM_FILE_5K, "NumFile5K.txt");

    std::cout << "Sorting...\n";

    bubbleTimer.Start();
    data500.BubbleSort(NUM_FILE_5K);
    bubbleTimer.Stop();

    insertionTimer.Start();
    data500.InsertionSort(NUM_FILE_5K);
    insertionTimer.Stop();

    selectionTimer.Start();
    data500.SelectionSort(NUM_FILE_5K);
    selectionTimer.Stop();

    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : ";
    bubbleTimer.GetTime();
    std::cout << "Elapsed time <Insertion Sort>   : ";
    insertionTimer.GetTime();
    std::cout << "Elapsed time <Selection Sort>   : ";
    selectionTimer.GetTime();
    // END 5K ELEMENT SORT


    // BEGIN 25K ELEMENT SORT
    std::cout << "Populating arrays... <25K elements> <\n";

    data500.ReadData(NUM_FILE_25K, "NumFile25K.txt");

    std::cout << "Sorting...\n";

    bubbleTimer.Start();
    data500.BubbleSort(NUM_FILE_25K);
    bubbleTimer.Stop();

    insertionTimer.Start();
    data500.InsertionSort(NUM_FILE_25K);
    insertionTimer.Stop();

    selectionTimer.Start();
    data500.SelectionSort(NUM_FILE_25K);
    selectionTimer.Stop();

    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : ";
    bubbleTimer.GetTime();
    std::cout << "Elapsed time <Insertion Sort>   : ";
    insertionTimer.GetTime();
    std::cout << "Elapsed time <Selection Sort>   : ";
    selectionTimer.GetTime();
    // END 25K ELEMENT SORT


    // BEGIN 100K ELEMENT SORT
    std::cout << "Populating arrays... <100K elements> <\n";

    data500.ReadData(NUM_FILE_100K, "NumFile100K.txt");

    std::cout << "Sorting...\n";

    bubbleTimer.Start();
    data500.BubbleSort(NUM_FILE_100K);
    bubbleTimer.Stop();

    insertionTimer.Start();
    data500.InsertionSort(NUM_FILE_100K);
    insertionTimer.Stop();

    selectionTimer.Start();
    data500.SelectionSort(NUM_FILE_100K);
    selectionTimer.Stop();

    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : ";
    bubbleTimer.GetTime();
    std::cout << "Elapsed time <Insertion Sort>   : ";
    insertionTimer.GetTime();
    std::cout << "Elapsed time <Selection Sort>   : ";
    selectionTimer.GetTime();
    // END 100K ELEMENT SORT


    return 0;
}
