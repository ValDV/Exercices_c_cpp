#include "string2.h"

chaine2::chaine2(const char* ch) {
    _taille = strlen(ch);
    _ptr = new char[_taille + 1];
    strcpy(_ptr, ch);
}

chaine2::chaine2(char c, int n) {
    _taille = n;
    _ptr = new char[_taille + 1];
    for (int i = 0; i < _taille; i++) {
        _ptr[i] = c;
    }
    _ptr[_taille] = '\0';
}

chaine2::chaine2(const chaine2& other) {
    _taille = other._taille;
    _ptr = new char[_taille + 1];
    strcpy(_ptr, other._ptr);
}

chaine2::~chaine2() {
    delete[] _ptr;
}

int chaine2::longueur() {
    return _taille;
}

char& chaine2::operator[](int index) {
    return _ptr[index];
}

void chaine2::operator+=(char c) {
    char* new_ptr = new char[_taille + 2];
    strcpy(new_ptr, _ptr);
    new_ptr[_taille] = c;
    new_ptr[_taille + 1] = '\0';

    delete[] _ptr;
    _ptr = new_ptr;
    _taille++;
}

void chaine2::operator+=(const chaine2& other) {
    char* new_ptr = new char[_taille + other._taille + 1];
    strcpy(new_ptr, _ptr);
    strcat(new_ptr, other._ptr);
    delete[] _ptr;
    _ptr = new_ptr;
    _taille += other._taille;
}

chaine2 chaine2::operator+(const chaine2& other) {
    chaine2 result;
    result._taille = _taille + other._taille;
    result._ptr = new char[result._taille + 1];
    strcpy(result._ptr, _ptr);
    strcat(result._ptr, other._ptr);
    return result;
}

chaine2& chaine2::minuscule() {
    for (int i = 0; i < _taille; i++) {
        _ptr[i] = tolower(_ptr[i]);
    }
    return *this;
}

chaine2& chaine2::operator=(const chaine2& other) {
    if (this != &other) {
        delete[] _ptr;
        _taille = other._taille;
        _ptr = new char[_taille + 1];
        strcpy(_ptr, other._ptr);
    }
    return *this;
}

int chaine2::operator==(const chaine2& other) {
    return strcmp(_ptr, other._ptr) == 0;
}

int chaine2::operator!=(const chaine2& other) {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const chaine2& chaine) {
    os << chaine._ptr;
    return os;
}

std::istream& operator>>(std::istream& is, chaine2& chaine) {
    char buffer[256];
    is >> buffer;
    chaine = chaine2(buffer);
    return is;
}
