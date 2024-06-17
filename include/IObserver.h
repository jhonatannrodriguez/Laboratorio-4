#ifndef _IOBSERVER_H
#define _IOBSERVER_H

#include "DTNotificacion.h"

class IObserver {
public:
    virtual void notificar(DTNotificacion dtn);
    virtual ~IObserver() {}  
};
#endif