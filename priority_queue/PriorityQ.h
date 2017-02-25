/*
The highest priority has the highest value
*/

class PriorityQ {

private:
	int arr[10];
	int size;

public:
	PriorityQ(); //constructor
	~PriorityQ(); //destructor
	bool empty();
	void insert(int num);
	void max_heapify(int index);
	int removeMax();
	void deheapify(int index);

	int left(int index) {
		return 2*index+1;
	}
	int right(int index) {
		return 2*index+2;
	}
	int parent(int index) {
		return index/2;
	}


};