#pragma once
template<class T>
struct Cvor {
	T info;
	Cvor<T>* next = nullptr;
	Cvor(T info, Cvor<T>* next = nullptr) {
		this->info = info;
		this->next = next;
	}
};