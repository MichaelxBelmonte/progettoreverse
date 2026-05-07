// Function: FUN_00ac62d0
// Address: 00ac62d0
// Size: 825 bytes
// Class: Unknown

void FUN_00ac62d0(string *param_1,string *param_2)

{
  uint64_t uVar1;
  byte *arg1;
  byte local_100;
  byte local_e8;
  byte local_d0;
  byte local_b8;
  string *local_b0;
  byte local_a0;
  int64_t local_98;
  byte local_88;
  byte local_70;
  byte local_58;
  string local_40 [8];
  uint64_t local_38;
  
  FUN_00aca500();
  uVar1 = local_38;
  if (((byte)local_40[0] & 1) == 0) {
    if (1 < (byte)local_40[0]) goto LAB_00ac6342;
LAB_00ac6302:
    param_2 = local_40;
    FUN_00ac86a0();
    FUN_00ac62d0();
    if (((byte)local_40[0] & 1) != 0) {
      operator_delete(param_1);
    }
  }
  else {
    operator_delete(param_1);
    if (uVar1 == 0) goto LAB_00ac6302;
LAB_00ac6342:
    std::string::string(param_1,param_2);
  }
  FUN_00aca420();
  FUN_00aca420();
  FUN_00aca500();
  if ((*arg1 & 1) == 0) {
    if (*arg1 >> 1 == 0) goto LAB_00ac63d4;
  }
  else if (*(int64_t *)(arg1 + 8) == 0) {
LAB_00ac63d4:
    std::string::string(param_1,param_2);
    goto LAB_00ac63e0;
  }
  if (((byte)local_40[0] & 1) == 0) {
    local_38 = (uint64_t)((byte)local_40[0] >> 1);
  }
  param_1 = local_b0;
  if ((local_b8 & 1) == 0) {
    param_1 = (string *)(uint64_t)(local_b8 >> 1);
  }
  if (local_38 != 0) {
    if (param_1 == (string *)0x0) {
      FUN_00aca500();
      std::string::string(param_1,param_2);
      FUN_00ac9740();
      FUN_00aca630();
      std::string::string(param_1,param_2);
      FUN_00ac9740();
      FUN_00aca630();
      std::string::string(param_1,param_2);
      FUN_00ac9740();
      if ((local_d0 & 1) != 0) {
        operator_delete(param_1);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(param_1);
      }
      if ((local_e8 & 1) != 0) {
        operator_delete(param_1);
      }
      if ((local_70 & 1) != 0) {
        operator_delete(param_1);
      }
      if ((local_100 & 1) != 0) {
        operator_delete(param_1);
      }
    }
    else {
      std::string::string(param_1,param_2);
    }
    goto LAB_00ac63e0;
  }
  if (param_1 == (string *)0x0) {
    std::string::string((string *)0x0,param_2);
    FUN_00ac9740();
    goto LAB_00ac63e0;
  }
  if ((local_a0 & 1) == 0) {
    if (local_a0 >> 1 == 0) goto LAB_00ac659c;
  }
  else if (local_98 == 0) {
LAB_00ac659c:
    std::string::string(param_1,param_2);
    goto LAB_00ac63e0;
  }
  std::string::string(param_1,param_2);
  FUN_00ac9740();
LAB_00ac63e0:
  if ((local_b8 & 1) != 0) {
    operator_delete(param_1);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(param_1);
  }
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(param_1);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(param_1);
  }
  return;
}

