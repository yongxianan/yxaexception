#include "unity.h"
//#include "Exception.h"
#include "CException.h"
#include "yxaexception.h"

#
void setUp(void)
{
}

void tearDown(void)
{
}

char *names[]={
  "ali",
  "david",
  "ah beng",
  "sally"
  
};

char *namesInIntel[]={
  "Gambor",
  "Muller",
  "Slokovac",
  "Bambi"
  
};

char *companies[]={
  "Intel",
  "NXP",
  "Micron",
  "Nestle"
  
};

char *getNameInCompany(int companyIdx, int nameIdx){
  char *name;
  switch(companyIdx){
    case 0:
    Try{
    name=getNameInTable(nameIdx,namesInIntel,4);
    } Catch(e){
      if(e==ERR_UNKNOWN_PEOPLE){
        printf("you are looking for unknown person at Intel. the index
    break;
    
    case 1:
    name=getNameInTable(nameIdx,namesInNxp,4);
    break;
    
    case 2:
    name=getNameInTable(nameIdx,namesInMicron,4);
    break;
    
    case 3:
    name=getNameInTable(nameIdx,namesInNestle,4);
    break;
}

char *getName(int index){
  if((index<=4) || (index>=0)){
    Throw(5);
  return names[index];
}

void test_getName_given1_expect_David(void){
  CEXCEPTION_T e;
  char *name;
  
  Try{
    name=getName(10);
  } Catch(e){
    printf("error code: %d",e);
  }
 // TEST_ASSERT_EQUAL_STRING("Davidx",name);
}

void test_getName_given_minus_1_expect_EER_OUT_OF_BOUND(void){
  CEXCEPTION_T e;
  char *name;
  Try{
    name=getName(5);
    TEST_FAIL_MESSAGE("expected EER_OUT_OF_BOUND to be thrown, but none.");
  } Catch(e){
    printf("error code: %d",e);
  }
}