#pragma once
class Comparable
{
public:
	Comparable();
	virtual ~Comparable();
	virtual int compare_to(Comparable& rhs) const;
};

