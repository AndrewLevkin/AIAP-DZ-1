#include "./Exeptions.h"

WorkerNotFound::WorkerNotFound(int index) {
	ostringstream stream;
	stream << "No worker with index " << index;
	message = stream.str();
}

WorkerNotFound::WorkerNotFound(const Worker& input) {
	ostringstream stream;
	stream << "Worker "
		<< input.GetFirstName() << " " << input.GetSecondName() << " " << input.GetRole()
		<< " not found";
	message = stream.str();
}

const char* WorkerNotFound::what() const throw() {
	return message.c_str();
}

WorkerAlreadyExists::WorkerAlreadyExists(const Worker& input) {
	ostringstream stream;
	stream << "Worker "
		<< input.GetFirstName() << " " << input.GetSecondName() << " " << input.GetRole()
		<< " already exists";
	message = stream.str();
}

const char* WorkerAlreadyExists::
what() const throw() {
	return message.c_str();
}