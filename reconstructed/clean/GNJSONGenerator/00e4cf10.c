// Function: FUN_00e4cf10
// Address: 00e4cf10
// Size: 830 bytes
// Class: GNJSONGenerator
// String references:
//   "\t"
//   ",\n"
//   "{\n"
//   "function"
//   "file"
//   "/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp"
//   "line"
//   "appendDictionary"
//   "bool GNJSONGenerator::appendDictionary(GNArg<GNDictionary<>>, GNInt)"
//   "\n"

uint64_t FUN_00e4cf10(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar4;
  int64_t local_a8;
  uint8_t local_a0;
  void*local_90;
  uint local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_02786b48;
  if (*arg1 == 0) {
    if (g_02786b48 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    local_88 = 6;
    local_80 = "function";
    local_78 = "bool GNJSONGenerator::appendDictionary(GNArg<GNDictionary<>>, GNInt)";
    local_70 = "file";
    local_68 = 
    "/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp"
    ;
    local_60 = "line";
    local_90 = &g_0258d8a8;
    local_58 = 0x6e;
    FUN_00e97360();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
LAB_00e4d1db:
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
    if (*arg1 != 0) {
      local_88 = local_88 & 0xffffff00;
      local_90 = (void*)0x0;
      local_80 = *(char **)(*arg1 + 0x10);
      local_78 = (char *)((uint64_t)local_78 & 0xffffffff00000000);
      if (0 < *(int *)((int64_t)local_80 + 0xc)) {
        iVar4 = 0;
        do {
          local_90 = *(void**)(*(int64_t *)((int64_t)local_80 + 0x10) + (int64_t)iVar4 * 8)
          ;
          FUN_012d5b70((int64_t)iVar4,&local_90);
          lVar1 = local_40;
          if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_a8 = lVar1;
          local_a0 = 0;
          cVar2 = FUN_00e4d6e0(param_2 + 1,&local_a8);
          if (cVar2 == '\0') {
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (((char)local_88 != '\0') && (local_90 != (void*)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00e4d1db;
          }
          if ((int)local_78 == *(int *)((int64_t)local_80 + 0xc) + -1) {
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
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          iVar4 = (int)local_78 + 1;
          local_78 = (char *)CONCAT44(local_78._4_4_,iVar4);
        } while (iVar4 < *(int *)((int64_t)local_80 + 0xc));
        if (((char)local_88 != '\0') && (local_90 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
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

