/*
	Linked list's header file
	simple implementation of a linked list which I am using in my school system
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
#include <cassert>

namespace std {

	template<typename T>
	struct LLNode {
		T 			data;
		LLNode<T>* next;
	};

	template<typename T>
	class LinkedList {
	protected:
		LLNode<T>* head;
		LLNode<T>* tail;
		int count;
	public:
		LinkedList();
		virtual ~LinkedList();
		LinkedList(const LinkedList& other);
		LinkedList& operator=(const LinkedList& other);

		bool isEmpty() const;
		int length() const;

		LLNode<T>* search(const T& val);

		void insertLast(const T& val);

		void clearList();

		template <typename S>
		friend ostream& operator<<(ostream& out, const LinkedList<S>& list);
	};

	template <typename T>
	LinkedList<T>::LinkedList() {
		head = tail = NULL;
		count = 0;
	}

	template <typename T>
	LinkedList<T>::~LinkedList() {
		clearList();
	}

	template <typename T>
	LinkedList<T>::LinkedList(const LinkedList& other) {
		head = tail = NULL;
		LLNode<T>* p = other.head;

		while (p != NULL) {
			insertLast(p->data);
			p = p->next;
		}
		count = other.count;
	}


	template <typename T>
	bool LinkedList<T>::isEmpty() const {
		return (count == 0);
	}

	template <typename T>
	int LinkedList<T>::length() const {
		return count;
	}

	template <typename T>
	LLNode<T>* LinkedList<T>::search(const T& val) {
		bool found = false;
		LLNode<T>* p = head;
		while ((p != NULL) && !found) {
			if (p->data == val)
				found = true;
			else
				p = p->next;
		}
		return p;
	}

	template <typename T>
	void LinkedList<T>::insertLast(const T& val) {
		LLNode<T>* p = new LLNode<T>;
		p->data = val;
		p->next = NULL;

		if (head != NULL) {
			tail->next = p;
			tail = p;
		}
		else {
			head = tail = p;
		}
		count++;
	}




	template <typename T>
	void LinkedList<T>::clearList() {
		LLNode<T>* p;

		while (head != NULL) {
			p = head;
			head = head->next;
			delete p;
		}
		tail = NULL;
		count = 0;
	}

	template <typename T>
	ostream& operator<<(ostream& out, const LinkedList<T>& list) {
		LLNode<T>* p = list.head;
		while (p != NULL) {
			out << p->data << " ";
			p = p->next;
		}
		return out;
	}

} /* namespace std */

#endif /* LINKEDLIST_H_ */
