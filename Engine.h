#ifndef ENGINE_H
#define ENGINE_H

#include <string>
    using std::string;

class Engine
{

    public:
        // default constructor 
        Engine();
        explicit Engine(string ); 
        // destructor 
        ~Engine();

        void setModel(string);
        void setBigBlock(bool);

        // const function cannot modify anything
        string getModel() const;
        bool getBigBlock() const;


    private:
    string model;
    bool bigBlock;
    string engineCyl;

};



#endif