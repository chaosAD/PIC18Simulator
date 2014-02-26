#include "unity.h"
#include "Bytecode.h"
#include "Execute.h"

void setUp() {}
void tearDown() {}

void test_meedling_around_with_some_text_ficture() {
  // Create test fixture
  Instruction inst = {
                      .mnemonic = MOVLW,
                      .name = "movlw"
                     };	
  Bytecode code = { .instruction = &inst,
                    .operand1 = 45, 
                    .operand2 =	-1, 
                    .operand3 = -1					
                  };
	
  // Test execution of the bytecode
  execute(&code);
	
  // Unit test
  TEST_ASSERT_EQUAL(45, FSR[WREG]);
}
