// Function: FUN_00e4d310
// Address: 00e4d310
// Size: 645 bytes
// Class: GNJSONGenerator
// String references:
//   "\t"
//   ",\n"
//   "function"
//   "file"
//   "/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp"
//   "line"
//   "appendList"
//   "bool GNJSONGenerator::appendList(GNArg<GNList<>>, GNInt)"
//   "[\n"
//   "\n"

uint64_t FUN_00e4d310(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar4;
  
  lVar1 = g_02786b58;
  if (*arg1 == 0) {
    if (g_02786b58 != 0) {
      FUN_00d50b00();
    }
    FUN_00e97360();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
LAB_00e4d58c:
    uVar3 = 0;
  }
  else {
    if (param_2 < 0) {
      param_2 = -param_2;
    }
    else if (*(char *)(this_ptr + 0x18) != '\0') {
      iVar4 = param_2;
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        do {
          FUN_00e7dde0();
          FUN_00d8db70();
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    FUN_00d8db40();
    lVar1 = *arg1;
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar4 = 0;
        do {
          cVar2 = FUN_00e4c4b0();
          if (cVar2 == '\0') {
            FUN_00083b20();
            goto LAB_00e4d58c;
          }
          if (iVar4 == *(int *)(lVar1 + 0xc) + -1) {
            if (*(char *)(this_ptr + 0x18) != '\0') {
              FUN_00d8db40();
            }
          }
          else if (*(char *)(this_ptr + 0x18) == '\0') {
            FUN_00d8db40();
          }
          else {
            FUN_00d8db40();
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_00083b20();
    }
    if ((-1 < param_2) && (*(char *)(this_ptr + 0x18) != '\0')) {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        FUN_00e7dde0();
        FUN_00d8db70();
      }
    }
    FUN_00d8db40();
    uVar3 = 1;
  }
  return uVar3;
}

