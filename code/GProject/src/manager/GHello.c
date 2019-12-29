//===============================================
#include "GHello.h"
//===============================================
static GHelloO* m_GHelloO = 0;
//===============================================
static void GHello_Hello();
//===============================================
GHelloO* GHello_New() {
    GHelloO* lObj = (GHelloO*)malloc(sizeof(GHelloO));
    lObj->Delete = GHello_Delete;
    lObj->Hello = GHello_Hello;
    return lObj;
}
//===============================================
void GHello_Delete() {
    GHelloO* lObj = GHello();
    if(lObj != 0) {
        free(lObj);
    }
    m_GHelloO = 0;
}
//===============================================
GHelloO* GHello() {
    if(m_GHelloO == 0) {
        m_GHelloO = GHello_New();
    }
    return m_GHelloO;
}
//===============================================
static void GHello_Hello() {
    printf("Bonjour tout le monde\n");
}
//===============================================
