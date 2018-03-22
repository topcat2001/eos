/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */
#include <eosiolib/eosio.hpp>
#include "../test_api/test_api.hpp"

#include "test_multi_index.cpp"

extern "C" {

   void apply( uint64_t receiver, uint64_t code, uint64_t action ) {

      WASM_TEST_HANDLER_EX(test_multi_index, idx64_general);
      WASM_TEST_HANDLER_EX(test_multi_index, idx64_store_only);
      WASM_TEST_HANDLER_EX(test_multi_index, idx64_check_without_storing);
      WASM_TEST_HANDLER_EX(test_multi_index, idx128_general);
      WASM_TEST_HANDLER_EX(test_multi_index, idx128_store_only);
      WASM_TEST_HANDLER_EX(test_multi_index, idx128_check_without_storing);
      WASM_TEST_HANDLER_EX(test_multi_index, idx128_autoincrement_test);
      WASM_TEST_HANDLER_EX(test_multi_index, idx128_autoincrement_test_part1);
      WASM_TEST_HANDLER_EX(test_multi_index, idx128_autoincrement_test_part2);
      WASM_TEST_HANDLER_EX(test_multi_index, idx256_general);
      WASM_TEST_HANDLER_EX(test_multi_index, idx_double_general);

      //unhandled test call
      eosio_assert(false, "Unknown Test");
   }

}
