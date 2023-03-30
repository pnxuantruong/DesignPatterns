#pragma once
#include "IObserver.h"

class ISubject
{
public:
	ISubject() {};
	~ISubject() {};

	virtual void Attach(IObserver*) = 0;
	virtual void Detach(IObserver*) = 0;
	virtual void Notify() = 0;
};

