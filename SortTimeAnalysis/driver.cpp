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


    std::cout << "Populating arrays... <500 elements> <\n";

    data500.ReadData(NUM_FILE_500);


    std::cout << "Sorting...\n";

    bubbleTimer.Start();

    data500.BubbleSort();


    return 0;
}
