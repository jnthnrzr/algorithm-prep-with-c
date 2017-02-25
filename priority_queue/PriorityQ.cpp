#include "PriorityQ.h"

PriorityQ::PriorityQ() {
	
	// for(int i=0; i<this->arr.size(); i++) {
	// 	this->arr[i] = 0;
	// }

	this->size = 0;
}

PriorityQ::~PriorityQ() {
	

}


bool PriorityQ::empty() {
	if(this->size)
		return false;
	else 
		return true;
}

void PriorityQ::max_heapify(int index) {
	if(this->arr[index] > this->arr[index/2]) {
		int temp = this->arr[index/2];
		this->arr[index/2] = this->arr[index];
		this->arr[index] = temp;
		max_heapify(index/2);
	}
}

void PriorityQ::insert(int num) {
	if (this->size == 0) {
		this->arr[0] = num;
	}
	else {
		this->arr[size] = num;
		max_heapify(this->size);
	}
	this->size++;
}


int PriorityQ::removeMax() {
	int temp;
	if(this->size == 1){
		temp = this->arr[0];
	}
	else {
		deheapify(0);
		temp = this->arr[size-1];
	}
	this->size--;
	return temp;

}

void PriorityQ::deheapify(int index) {


	if(index <= this->size -1) {
		int ind_temp, temp;
		if(this->arr[index*2+1] > this->arr[index*2+2] && fix this) {
			ind_temp = index * 2;
		}
		else {
			ind_temp = index * 2 + 1;
		}

		temp = this->arr[ind_temp];
		this->arr[ind_temp] = this->arr[index];
		deheapify(ind_temp);
	}

}

