/* 
 * File:   newclass.h
 * Author: Tibz
 *
 * Created on 29 juin 2009, 16:31
 */

#ifndef _NEWCLASS_H
#define	_NEWCLASS_H

#include <stdlib.h>

class NewClass {
public:
    NewClass();
    NewClass(const NewClass& orig);
    virtual ~NewClass();
private:

};

#endif	/* _NEWCLASS_H */

