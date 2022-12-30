#include <iostream>
#include <string>

class Task {
    public:
        Task();
        ~Task(); 

        void setTitle(const std::string& title);  
        std::string getTitle();

        void setAuther(const std::string& userSureName);
        std::string getAuther();

        void setDescription(int description);
        int getDescription();

        //static settastId(int tastId);
        static int gettastId();

        // void insert(const std::string& path);
        // void select(const std::string& path);
    private:
        std::string title;
        std::string auther;
        std::string description;
        ststic int tastId;
    }