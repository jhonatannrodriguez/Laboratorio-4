#include "../include/DTCompraInfo.h"

    DTCompraInfo :: DTCompraInfo() {
        this->monto = 0;
        this->fecha_compra = DTFecha(0,0,0);
    }

    DTCompraInfo :: DTCompraInfo(float monto,DTFecha fecha_compra) {
        this->monto = monto;
        this->fecha_compra = fecha_compra;
    }

    float DTCompraInfo :: getMonto() {
        return this->monto;
    }

    DTFecha DTCompraInfo :: getFecha() {
        return this->fecha_compra;
    }

    void DTCompraInfo :: asociarDTPC(DTProductoCompleto* DTPC) {
        this->setDTPC.emplace(DTPC);
    }

    set<DTProductoCompleto*> DTCompraInfo :: getSetDTPC() {
        return this->setDTPC;
    }

    DTCompraInfo :: ~DTCompraInfo() {
        this->setDTPC.clear();
    }
