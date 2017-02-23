#pragma once
#include <stdlib.h>

using namespace std;

struct node {
	float data;
	node* next;

	void append(float x) {
		if (next == NULL) {
			node* temp;
			temp = (node*)malloc(sizeof(node));
			temp->data = x;
			temp->next = NULL;
			next = temp;
		} else {
			next->append(x);
		}
	}

	float retrieve(int p) {
		node* anotherOne = this;
		for (int i = 0; i < p; i++) {
			if (anotherOne->next != NULL) {
				anotherOne = anotherOne->next;
			} else {
				throw "Shit";
			}
		}
		return anotherOne->data;
	}

	void insert(int p, float x) {
		node* anotherOne = this;

		for (int i = 1; i < p; i++) {
			if (anotherOne->next != NULL) {
				anotherOne = anotherOne->next;
			} else {
				throw "ERROR: index not in range";
			}
		}

		node* temp;
		temp = (node*)malloc(sizeof(node));
		temp->data = anotherOne->data;
		temp->next = anotherOne->next;

		anotherOne->data = x;
		anotherOne->next = temp;
	}

	node() {
		data = 0;
		next = NULL;
	};
};
