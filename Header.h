#ifndef Header_h
#define Header_h

int temp = 0;
int list[4] = {6,2,5,1}

int BubbleSort(list[]) {
	for (int j = 1; j < 4; j++) {
		for (int i = 2; i < 4; i++) {
			if (list[i - 1] > list[i]) {
				temp = list[i - 1];
				list[i - 1] = list[i];
				list[i] = temp;
			}
		}
	}
}







#endif // !Header_h
