#ifndef Header_h
#define Header_h



void BubbleSort(int list[], int size) {
    int temp;
    for (int j = 0; j < size - 1; j++) {
        for (int i = 0; i < size - j - 1; i++) {
            if (list[i] > list[i + 1]) {
                // Swap elements
                temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
            }
        }
    }
}







#endif