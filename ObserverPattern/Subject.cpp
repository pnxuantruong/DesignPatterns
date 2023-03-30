#include "Subject.h"

void Subject::Attach(IObserver* observer)
{
	observers.push_back(observer);
}

void Subject::Detach(IObserver* observer) {
	observers.remove(observer);
}

void Subject::Notify() {
	for (auto o : observers) {
		o->Update();
	}
}