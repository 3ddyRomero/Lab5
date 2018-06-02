#ifndef INGREDIENTE_H
#define INGREDIENTE_H

#include <vector>
#include <string>

using namespace std;

class ingrediente{
        private:            
            string name;
            string tipo;

        public:
            ingrediente();
            ingrediente(string, string);
            

            string getName();
            void setName(string);

            string getTipo();
            void setTipo(string);

            ~ingrediente();

};
#endif