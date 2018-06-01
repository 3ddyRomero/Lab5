#ifndef INGREDIENTE_H
#define INGREDIENTE_H

#include <vector>
#include <string>

using namespace std;

class ingrediente{
        private:
            
            
            string name;
            string tipo;
            int cantidad;

        public:
            ingrediente();
            ingrediente(string, string, int);
            

            string getName();
            void setName(string);

            string getTipo();
            void setTipo(string);
            
            int getCantidad();
            void setCantidad(int);

            ~ingrediente();

};
#endif