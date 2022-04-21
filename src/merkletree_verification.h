// This code is created by the Cybersecurity Lab, University of Colorado, Colorado Springs, 2022
// Please contact tgamboni@uccs.edu for inquiries.

#ifndef BITCOIN_MERKLETREE_VERIFICATION_H
#define BITCOIN_MERKLETREE_VERIFICATION_H


#include <inttypes.h>

class MerkleTreeVerification {
    public:
        // Retrieve a nonce
        static uint64_t getNonce();

        // Verify a nonce's correctness
        static bool verifyNonce(uint64_t nonce);
};

#endif // BITCOIN_MERKLETREE_VERIFICATION_H