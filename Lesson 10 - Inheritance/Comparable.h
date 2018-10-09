#pragma once
class Comparable
{
public:
	Comparable();
	virtual ~Comparable() = 0;
	virtual int compare_to(Comparable& rhs) = 0;
};

