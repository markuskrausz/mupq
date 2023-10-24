#ifndef _API_H_
#define _API_H_


#include "params.h"

#define CRYPTO_SECRETKEYBYTES OV_SECRETKEYBYTES
#define CRYPTO_PUBLICKEYBYTES OV_PUBLICKEYBYTES
#define CRYPTO_BYTES          OV_SIGNATUREBYTES
#define CRYPTO_ALGNAME        OV_ALGNAME


// for size_t
#include <stddef.h>

#ifdef  __cplusplus
extern  "C" {
#endif


int
crypto_sign_keypair(unsigned char *pk, unsigned char *sk);

int
crypto_sign(unsigned char *sm, size_t *smlen,
            const unsigned char *m, size_t mlen,
            const unsigned char *sk);

int
crypto_sign_open(unsigned char *m, size_t *mlen,
                 const unsigned char *sm, size_t smlen,
                 const unsigned char *pk);

#ifdef  __cplusplus
}
#endif



#endif
