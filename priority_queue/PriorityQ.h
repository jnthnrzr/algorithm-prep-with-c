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
	Boolean empty();
	void insert(int num);
	int removeMax();

	int get_size();
	void set_size(int num);

};