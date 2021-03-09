#include <iostream>
#include "snowman.hpp"
#include <string>
#include <stdexcept>
using namespace std;

static void swap_char(char *a, char *b){
    char t = *a;
    *a = *b;
    *b = t;
}

//returns option number from string conf
static int int_from_conf(size_t index, string conf){
    return conf.at(index)-'1';
}

// throws when config < 11111111 or config > 44444444
struct MyException : public exception {
   const char * what () const throw () {
      return "Invalid configuration for snowman. Input should be 8 digits bitween 1 and 4";
   }
};

namespace ariel{
    string snowman(const int config){
        
        //input validation
        if(config < 11111111 || config > 44444444){
            throw (MyException());
        } 

        //convertion
        string conf = to_string(config);

        //decompose
        size_t index = 0;
        const int h = int_from_conf(index++, conf);
        const int n = int_from_conf(index++, conf);
        const int l = int_from_conf(index++, conf);
        const int r = int_from_conf(index++, conf);
        const int x = int_from_conf(index++, conf);
        const int y = int_from_conf(index++, conf);
        const int t = int_from_conf(index++, conf);
        const int b = int_from_conf(index, conf);
        char lu = ' ';
        char ld = X.at(x).at(0);
        char ru = ' ';
        char rd = Y.at(y).at(0);

        //lifted arms require swaping placement level
        if(ld == '\\'){
            swap_char(&lu, &ld);
        }
        if(rd == '/'){
            swap_char(&ru, &rd);
        }

        // constructing the snowman
        return  H.at(h)+'\n'+
                lu+"("+E.at(l)+N.at(n)+E.at(r)+')'+ru+'\n'+
                ld+'('+T.at(t)+')'+rd+'\n'+
                " ("+B.at(b)+')';
    }

}

