#ifndef PLATO_H
#define PLATO_H

#include <vector>
#include <string>

using namespace std;

class plato{
        private:            
            string cliente;
            string plat;

        public:
            plato();
            plato(string,string);

            string getCliente();
            void setCliente(string);

            string getPlato();
            void setPlato(string);
	    
	        void pushPlatos();	

            ~plato();

};
#endif
