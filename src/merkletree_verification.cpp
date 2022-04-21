// This code is created by the Cybersecurity Lab, University of Colorado, Colorado Springs, 2022
// Please contact tgamboni@uccs.edu for inquiries.

#include <inttypes.h>
#include <logging.h>

#ifndef BITCOIN_MERKLETREE_VERIFICATION_CPP
#define BITCOIN_MERKLETREE_VERIFICATION_CPP

class MerkleTreeVerification {
    public:
        static uint64_t getNonce() {
            uint64_t nonce = 1234567;
            
            //LogPrint(BCLog::MERKLE_VER, "\n!!!!! Generated Merkle tree verification nonce=%d\n", nonce); // Cybersecurity Lab
            return nonce;
        }

        static bool verifyNonce(uint64_t their_nonce) {
            uint64_t nonce = 1234567;

            //LogPrint(BCLog::MERKLE_VER, "\n!!!!! Verified Merkle tree verification nonce %d == %d\n", nonce, their_nonce); // Cybersecurity Lab
            return true;
        }
};

#endif // BITCOIN_MERKLETREE_VERIFICATION_CPP