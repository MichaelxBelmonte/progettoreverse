// Function: FUN_00e4cc70
// Address: 00e4cc70
// Size: 529 bytes
// Class: GNJSONGenerator
// String references:
//   "\t"
//   "function"
//   "file"
//   "/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp"
//   "line"
//   "appendNumber"
//   "bool GNJSONGenerator::appendNumber(GNArg<GNNumber>, GNInt)"

uint64_t FUN_00e4cc70(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int64_t *arg1;
  int64_t *this_ptr;
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
  void*local_40;
  char local_38;
  
  lVar1 = g_02786b70;
  if (*arg1 == 0) {
    if (g_02786b70 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    local_88 = 6;
    local_80 = "function";
    local_78 = "bool GNJSONGenerator::appendNumber(GNArg<GNNumber>, GNInt)";
    local_70 = "file";
    local_68 = 
    "/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp"
    ;
    local_60 = "line";
    local_90 = &g_0258d9c0;
    local_58 = 0x109;
    FUN_00e97360(param_1,&local_90);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    return 0;
  }
  cVar2 = FUN_00dd6e50();
  if (cVar2 == 'f') {
    FUN_00d459e0();
    UNRECOVERED_JUMPTABLE = *(code **)(*this_ptr + 0x370);
  }
  else {
    if (cVar2 != 'd') {
      if (cVar2 == 'b') {
        uVar4 = FUN_00e4dd60();
        return uVar4;
      }
      if ((-1 < param_2) && ((char)this_ptr[3] != '\0')) {
        for (; param_2 != 0; param_2 = param_2 + -1) {
          uVar3 = FUN_00e7dde0();
          FUN_00d8db70(param_1,uVar3);
        }
      }
      (**(code **)(*(int64_t *)*arg1 + 0x368))();
      local_40 = local_90;
      local_38 = 0;
      if ((char)local_88 == '\0') {
        if (local_90 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = local_88 & 0xffffff00;
      }
      local_38 = '\x01';
      FUN_00d8dbf0();
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
      return 1;
    }
    FUN_00d45bc0();
    UNRECOVERED_JUMPTABLE = *(code **)(*this_ptr + 0x378);
  }
                                          uVar4 = (*UNRECOVERED_JUMPTABLE)();
  return uVar4;
}

