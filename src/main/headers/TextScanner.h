/* 
 * File:   TextScanner.h
 * Author: gidis
 *
 * Created on January 3, 2013, 11:31 AM
 */

#ifndef TEXTSCANNER_H
#define	TEXTSCANNER_H
#include <string>
class TextScanner {
public:
    TextScanner();
    TextScanner(const TextScanner& orig);
    bool contains(std::string where,std::string what);
    virtual ~TextScanner();
private:

};

#endif	/* TEXTSCANNER_H */

