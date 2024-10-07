#ifndef Header_h
#define Header_h

int temp = 0;
int list[4] = { 6,2,5,1 };

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







#endif // !Header_h
