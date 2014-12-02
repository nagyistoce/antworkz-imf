#ifndef BASICID_H
#define BASICID_H
#include "BaseLib.h"

#include <QString>

class BASESHARED_EXPORT BasicId : public QString
{
public:
    BasicId(const QString & string=QString());
    BasicId(const char * const chars);
};

#endif // BASICID_H