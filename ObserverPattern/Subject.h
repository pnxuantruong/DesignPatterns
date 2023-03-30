#pragma once
#include "ISubject.h"
#include <list>

class Subject :
	public ISubject
{
public:
	Subject() {};
	~Subject() { 
		observers.clear(); 
	}

	void Attach(IObserver*);
	void Detach(IObserver*);
	void Notify();

private:	
	std::list<IObserver*> observers;
};

