#include <iostream>
#include "projects.h"

int Project::projectId = 0;

Project::Project() {}

Project::~Project() {
	std::cout << "Project data saved in data-base";
}

void Project::setProjectName(const std::string& newProjectName) {
	projectName = newProjectName;
}

std::string Project::getProjectName() {
	return projectName;
}
​
void Project::setprojectManagerName(const std::string& newProjectManagerName) {
	projectManagerName = newProjectManagerName;
}

std::string Project::getprojectManagerName() {
	return projectManagerName;
}

void Project::setprojectManagerSName(const std::string& newProjectManagerSName) {
	projectManagerSName = newProjectManagerSName;
}

std::string Project::getprojectManagerSName() {
	return projectManagerSName;
}

int Project::getProjectId() {
	return projectId;
}

