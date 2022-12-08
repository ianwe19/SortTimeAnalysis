#include <iostream>
#include "Timer.h"
#include "DataHousing.h"


#define FIRST_FILE   500
#define SECOND_FILE  5000
#define THIRD_FILE   25000
#define FOURTH_FILE  100000


int main()
{
    // create a Timer object for each sorting method
    Timer bubbleTimer;
    Timer insertionTimer;
    Timer selectionTimer;

    // create a DataHousing object for each data file
    DataHousing data500(FIRST_FILE);
    DataHousing data5K(SECOND_FILE);
    DataHousing data25K(THIRD_FILE);
    DataHousing data100K(FOURTH_FILE);


    /* ---------- --------------------- ---------- */
    /* --------  BEGIN 500 ELEMENT SORT  --------- */
    /* ---------- --------------------- ---------- */
    std::cout << "Populating arrays... <500 elements> <\n";

    // parse data, load into arrays
    data500.ReadData(FIRST_FILE, "NumFile500.txt");

    std::cout << "Sorting...\n";

    // time bubble sort
    bubbleTimer.Start();
    data500.BubbleSort(FIRST_FILE);
    bubbleTimer.Stop();

    // time insertion sort
    insertionTimer.Start();
    data500.InsertionSort(FIRST_FILE);
    insertionTimer.Stop();

    // time selection sort
    selectionTimer.Start();
    data500.SelectionSort(FIRST_FILE);
    selectionTimer.Stop();

    // print formatted time data of each sort
    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : ";
    bubbleTimer.GetTime();
    std::cout << "Elapsed time <Insertion Sort>   : ";
    insertionTimer.GetTime();
    std::cout << "Elapsed time <Selection Sort>   : ";
    selectionTimer.GetTime();
    /* ---------- --------------------- ---------- */
    /* ---------  END 500 ELEMENT SORT  ---------- */
    /* ---------- --------------------- ---------- */


    /* ---------- --------------------- ---------- */
    /* ---------  BEGIN 5K ELEMENT SORT  --------- */
    /* ---------- --------------------- ---------- */
    std::cout << "Populating arrays... <5K elements> <\n";

    // parse data, load into arrays
    data5K.ReadData(SECOND_FILE, "NumFile5K.txt");

    std::cout << "Sorting...\n";

    // time bubble sort
    bubbleTimer.Start();
    data5K.BubbleSort(SECOND_FILE);
    bubbleTimer.Stop();

    // time insertion sort
    insertionTimer.Start();
    data5K.InsertionSort(SECOND_FILE);
    insertionTimer.Stop();

    // time selection sort
    selectionTimer.Start();
    data5K.SelectionSort(SECOND_FILE);
    selectionTimer.Stop();

    // print formatted time data of each sort
    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : ";
    bubbleTimer.GetTime();
    std::cout << "Elapsed time <Insertion Sort>   : ";
    insertionTimer.GetTime();
    std::cout << "Elapsed time <Selection Sort>   : ";
    selectionTimer.GetTime();
    /* ---------- --------------------- ---------- */
    /* ----------  END 5K ELEMENT SORT  ---------- */
    /* ---------- --------------------- ---------- */


    /* ---------- --------------------- ---------- */
    /* --------- BEGIN 25K ELEMENT SORT  --------- */
    /* ---------- --------------------- ---------- */
    std::cout << "Populating arrays... <25K elements> <\n";

    // parse data, load into arrays
    data25K.ReadData(THIRD_FILE, "NumFile25K.txt");

    std::cout << "Sorting...\n";

    // time bubble sort
    bubbleTimer.Start();
    data25K.BubbleSort(THIRD_FILE);
    bubbleTimer.Stop();

    // time insertion sort
    insertionTimer.Start();
    data25K.InsertionSort(THIRD_FILE);
    insertionTimer.Stop();

    // time selection sort
    selectionTimer.Start();
    data25K.SelectionSort(THIRD_FILE);
    selectionTimer.Stop();

    // print formatted time data of each sort
    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : ";
    bubbleTimer.GetTime();
    std::cout << "Elapsed time <Insertion Sort>   : ";
    insertionTimer.GetTime();
    std::cout << "Elapsed time <Selection Sort>   : ";
    selectionTimer.GetTime();
    /* ---------- --------------------- ---------- */
    /* ---------- END 25K ELEMENT SORT  ---------- */
    /* ---------- --------------------- ---------- */


    /* ---------- --------------------- ---------- */
    /* --------- BEGIN 100K ELEMENT SORT --------- */
    /* ---------- --------------------- ---------- */
    std::cout << "Populating arrays... <100K elements> <\n";

    // parse data, load into arrays
    data100K.ReadData(FOURTH_FILE, "NumFile100K.txt");

    std::cout << "Sorting...\n";

    // time bubble sort
    bubbleTimer.Start();
    data100K.BubbleSort(FOURTH_FILE);
    bubbleTimer.Stop();

    // time insertion sort
    insertionTimer.Start();
    data100K.InsertionSort(FOURTH_FILE);
    insertionTimer.Stop();

    // time selection sort
    selectionTimer.Start();
    data100K.SelectionSort(FOURTH_FILE);
    selectionTimer.Stop();

    // print formatted time data of each sort
    std::cout << "SORTS COMPLETE!\n";
    std::cout << "Elapsed time <Bubble Sort>      : ";
    bubbleTimer.GetTime();
    std::cout << "Elapsed time <Insertion Sort>   : ";
    insertionTimer.GetTime();
    std::cout << "Elapsed time <Selection Sort>   : ";
    selectionTimer.GetTime();
    /* ---------- --------------------- ---------- */
    /* ---------- END 100K ELEMENT SORT ---------- */
    /* ---------- --------------------- ---------- */


    return 0;
}
