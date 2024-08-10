#pragma once
#include <iostream>
template <class T>
class ConsoleLog
{
public:
	void consoleLog(T message);
};

template <class T>
void ConsoleLog<T>::consoleLog(T message)
{
	std::cout << message;
}