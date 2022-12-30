#include <iostream>
#include <string>


class Project {
     public:
        Project();
        ~Project() {std:cout << "Project data saved in data-base";}

        void setProjectName(const std::string& projectName);    
        std::string getProjectName();

        void setprojectManagerName(const std::string& projectManagerName);
        std::string getprojectManagerName();

        void setprojectManagerSName(const std::string& projectManagerSName);
        std::string getprojectManagerSName();

        static setProjectId(int projectId);
        static int getProjectId();

        // void insert(const std::string& path);
        // void select(const std::string& path);

    private:
        std::string projectName;
        std::string projectManagerName;
        std::string projectManagerSName; 
        static int projectId;
};