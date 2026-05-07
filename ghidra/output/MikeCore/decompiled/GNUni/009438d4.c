// Function: FUN_009438d4
// Address: 009438d4
// Size: 1260 bytes
// Class: GNUni
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Auth Expired: The 64-bit counter reach its maximum of 0x%08X%08X"
//   "static void pace::AuthorizationVerifier::advanceAndCheckTheCounterPublic(petpub::CountLimitRecord &...
//   "Auth Expired: The 64-bit counter reach its minimum of 0x%08X%08X"
//   "Auth Expired: The 32-bit counter1 reach its maximum of 0x%08X"
//   "Auth Expired: The 32-bit counter1 reach its minimum of 0x%08X"
//   "Auth Expired: The 32-bit counter2 reach its maximum of 0x%08X"
//   "Auth Expired: The 32-bit counter2 reach its minimum of 0x%08X"


void FUN_009438d4(byte param_1,byte param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  byte unaff_SIL;
  longlong unaff_RDI;
  uint local_38;
  uint local_34;
  
  local_38 = *(uint *)(unaff_RDI + 0x2c);
  uVar1 = *(uint *)(unaff_RDI + 0x30);
  local_34 = *(uint *)(unaff_RDI + 0x3c);
  uVar2 = *(uint *)(unaff_RDI + 0x40);
  if (*(char *)(unaff_RDI + 0x49) == '\0') {
    if (*(char *)(unaff_RDI + 0x29) == '\0') {
      if (uVar1 != 0) {
        if (((param_1 | unaff_SIL) == 1) && (local_38 == 0)) {
          FUN_00925fd0();
          FUN_00926010();
          FUN_00983230();
          FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterPublic(petpub::CountLimitRecord &, bool, bool, bool, bool)"
                       ,&DAT_00002a8f);
          FUN_009bd14b();
        }
        if ((local_38 != 0) && (unaff_SIL != 0)) {
          local_38 = local_38 - 1;
        }
      }
    }
    else if (uVar1 != 0xffffffff) {
      if (((param_1 | unaff_SIL) == 1) && (local_38 == 0xffffffff)) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00983230();
        FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterPublic(petpub::CountLimitRecord &, bool, bool, bool, bool)"
                     ,&DAT_00002a76);
        FUN_009bd14b();
      }
      if ((local_38 != 0xffffffff) && (unaff_SIL != 0)) {
        local_38 = local_38 + 1;
      }
    }
    if (*(char *)(unaff_RDI + 0x39) != '\0') {
      if (uVar2 == 0xffffffff) goto LAB_00943da3;
      if (((param_3 | param_2) == 1) && (local_34 == 0xffffffff)) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00983230();
        FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterPublic(petpub::CountLimitRecord &, bool, bool, bool, bool)"
                     ,&DAT_00002aac);
        FUN_009bd14b();
      }
      if ((local_34 == 0xffffffff) || (param_2 == 0)) goto LAB_00943da3;
      goto LAB_00943d05;
    }
    if (uVar2 == 0) goto LAB_00943da3;
    if (((param_3 | param_2) == 1) && (local_34 == 0)) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterPublic(petpub::CountLimitRecord &, bool, bool, bool, bool)"
                   ,&DAT_00002ac5);
      FUN_009bd14b();
    }
    if ((local_34 == 0) || (param_2 == 0)) goto LAB_00943da3;
  }
  else {
    if (*(char *)(unaff_RDI + 0x29) != '\0') {
      if ((uVar2 & uVar1) == 0xffffffff) goto LAB_00943da3;
      if (((param_1 | unaff_SIL) == 1) && ((local_34 & local_38) == 0xffffffff)) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00983230();
        FUN_00983230();
        FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterPublic(petpub::CountLimitRecord &, bool, bool, bool, bool)"
                     ,&DAT_00002a28);
        FUN_009bd14b();
      }
      if (unaff_SIL == 0) goto LAB_00943da3;
      if (local_34 == 0xffffffff) {
        if (local_38 != 0xffffffff) {
          local_38 = local_38 + 1;
          local_34 = 0;
        }
        goto LAB_00943da3;
      }
LAB_00943d05:
      local_34 = local_34 + 1;
      goto LAB_00943da3;
    }
    if (uVar2 == 0 && uVar1 == 0) goto LAB_00943da3;
    if (((param_1 | unaff_SIL) == 1) && (local_34 == 0 && local_38 == 0)) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00983230();
      FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterPublic(petpub::CountLimitRecord &, bool, bool, bool, bool)"
                   ,&DAT_00002a4c);
      FUN_009bd14b();
    }
    if (unaff_SIL == 0) goto LAB_00943da3;
    if (local_34 == 0) {
      if (local_38 != 0) {
        local_38 = local_38 - 1;
        local_34 = 0xffffffff;
      }
      goto LAB_00943da3;
    }
  }
  local_34 = local_34 - 1;
LAB_00943da3:
  *(uint *)(unaff_RDI + 0x2c) = local_38;
  *(uint *)(unaff_RDI + 0x3c) = local_34;
  return;
}


