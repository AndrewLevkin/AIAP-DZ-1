#pragma once
#include <sstream>
#include <exception>
#include "./Worker.h"
class WorkerNotFound : public exception {
private:
	string message;
public:
	explicit WorkerNotFound(const Worker& worker);
	explicit WorkerNotFound(int index);
	virtual const char* what() const throw();
};
class WorkerAlreadyExists : public exception {
private:
	string message;
public:
	explicit WorkerAlreadyExists(const Worker& Worker);
	virtual const char* what() const throw();
};