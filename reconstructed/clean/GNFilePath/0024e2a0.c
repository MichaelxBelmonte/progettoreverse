// Function: FUN_0024e2a0
// Address: 0024e2a0
// Size: 535 bytes
// Class: GNFilePath

bool FUN_0024e2a0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  uint64_t local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  if ((lVar1 != 0) && (param_2 != '\0')) {
    FUN_007f2390();
    plVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 == (int64_t *)0x0) goto LAB_0024e4a2;
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_48 == (int64_t *)0x0) goto LAB_0024e4a2;
    local_90 = 0;
    local_31 = '\0';
    local_88 = plVar3;
    local_80 = '\0';
    FUN_01e561b0();
    local_58 = local_68;
    local_50 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_50 = '\x01';
    FUN_007f3210(&local_58,&local_90,&local_31);
    plVar3 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      FUN_007f32f0();
    }
    else {
      if (local_31 != '\0') {
        FUN_01f27fe0();
        (**(code **)(*local_48 + 0x560))();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar2 = *(int64_t *)(this_ptr + 0x98);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_78 = plVar3;
      local_70 = '\0';
      FUN_01c4f180(local_90,0);
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_0024e4a2:
  return lVar1 != 0;
}

