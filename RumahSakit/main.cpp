#include "header.h"

int main(){
    List_dokter Lp;
    List_pasien Lc;
    List_relasi Lr;

    Lp.first = nullptr;
    Lr.first = nullptr;
    Lc.first = nullptr;
    Lc.last = nullptr;
    menu(Lr, Lp, Lc);
    return 0;
}
