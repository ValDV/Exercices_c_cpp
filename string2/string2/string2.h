#pragma once

#define STRING2_H

#include <iostream>
#include <cstring>

class chaine2 {
private:
    int _taille;
    char* _ptr;
public:
    chaine2(const char* ch = "");
    chaine2(char c, int n = 1);
    chaine2(const chaine2&);  
    ~chaine2();                
    int longueur();            
    char& operator[](int);     
    void operator+=(char);     
    void operator+=(const chaine2&);
    chaine2 operator+(const chaine2&); 
    chaine2& operator=(const chaine2&);
    int operator==(const chaine2&);
    int operator!=(const chaine2&);

    friend std::ostream& operator<<(std::ostream& os, const chaine2& chaine);
    friend std::istream& operator>>(std::istream& is, chaine2& chaine);
};
