#pragma once

class IObserver
{
public:
	IObserver() {};
	~IObserver() {};

	virtual void Update() = 0;
};

