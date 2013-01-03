/* 
 * File:   TextScanner.cpp
 * Author: gidis
 * 
 * Created on January 3, 2013, 11:31 AM
 */

#include "TextScanner.h"
#include <string>

TextScanner::TextScanner() {
}

TextScanner::TextScanner(const TextScanner& orig) {
}
bool contains(std::string where,std::string what){
    int position=where.find(what);
    if(position>=0){
        return true;
    }else{
        return false;
    }
}

TextScanner::~TextScanner() {
}

