// ==========================================================================
//                 SeqAn - The Library for Sequence Analysis
// ==========================================================================
// Copyright (c) 2006-2013, Knut Reinert, FU Berlin
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of Knut Reinert or the FU Berlin nor the names of
//       its contributors may be used to endorse or promote products derived
//       from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL KNUT REINERT OR THE FU BERLIN BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ==========================================================================
// Author: Manuel Holtgrewe <manuel.holtgrewe@fu-berlin.de>
// ==========================================================================
// Tests for SeqAn's module random.
// ==========================================================================

#include <seqan/basic.h>
#include <seqan/file.h>
#include <seqan/random.h>  // The module under test.

#include "test_random_rng.h"
#include "test_random_dists.h"
#include "test_random_shuffle.h"


SEQAN_BEGIN_TESTSUITE(test_random) {
    // Call Tests.
    SEQAN_CALL_TEST(test_default_rng);

    SEQAN_CALL_TEST(test_random_mt19937_constructors);
    SEQAN_CALL_TEST(test_random_mt19937_pick);
    SEQAN_CALL_TEST(test_random_mt19937_metafunctions);

    SEQAN_CALL_TEST(test_random_rng_functor_constructors);
    SEQAN_CALL_TEST(test_random_rng_functor_pick);

    SEQAN_CALL_TEST(test_random_normal_constructors);
    SEQAN_CALL_TEST(test_random_normal_pick);

    SEQAN_CALL_TEST(test_random_geometric_fair_coin_constructors);
    SEQAN_CALL_TEST(test_random_geometric_fair_coin_pick);

    SEQAN_CALL_TEST(test_random_lognormal_constructors);
    SEQAN_CALL_TEST(test_random_lognormal_pick);

    SEQAN_CALL_TEST(test_random_uniform_int_constructors);
    SEQAN_CALL_TEST(test_random_uniform_int_pick);
    SEQAN_CALL_TEST(test_random_uniform_bool_pick);

    SEQAN_CALL_TEST(test_random_uniform_double_constructors);
    SEQAN_CALL_TEST(test_random_uniform_double_pick);

    SEQAN_CALL_TEST(test_random_shuffle);

    // Verify Checkpoints.
    SEQAN_VERIFY_CHECKPOINTS("core/include/seqan/random.h");
    SEQAN_VERIFY_CHECKPOINTS("core/include/seqan/random/random_lognormal.h");
    SEQAN_VERIFY_CHECKPOINTS("core/include/seqan/random/random_mt19937.h");
    SEQAN_VERIFY_CHECKPOINTS("core/include/seqan/random/random_normal.h");
    SEQAN_VERIFY_CHECKPOINTS("core/include/seqan/random/random_shuffle.h");
}
SEQAN_END_TESTSUITE
