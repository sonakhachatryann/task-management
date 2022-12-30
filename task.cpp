#include <iostream>
#include <string>
#include "tasks.h"

int Task::taskId = 0;

Task::Task() {}

Task::~Task()
{
	std::cout << "Task add in data base";
}

void Task::setTitle(const std::string& newTitle) {
	title = newTitle;
}

std::string Task::getTitle() {
	return title;
}

void Task::setAuther(const std::string& newAuther) {
	auther = newAuther;
}

std::string Task::getAuther() {
	return auther;
}

void Task::setDescription(int newDescription) {
	description = newDescription;
}

std::string Task::getDescription() {
	return description;
}

int Task::gettaskId() {
	return taskId;
}


