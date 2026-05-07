// Function: FUN_014004b0
// Address: 014004b0
// Size: 734 bytes
// Class: MUDataPointFunction

void FUN_014004b0(int64_t *param_1,int64_t *param_2,uint32_t param_3)

{
  void*puVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  void*puVar4;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  uint32_t local_44;
  void*local_40;
  char local_38;
  
  local_50 = param_2;
  local_44 = param_3;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d8db80();
  if ((char)local_44 == '\0') {
    iVar2 = FUN_00d90910();
  }
  else {
    iVar2 = FUN_00d90c30();
  }
  do {
    if (iVar2 == -1) {
      FUN_00d8c7d0();
      *this_ptr = puVar3;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
    FUN_00d8e3d0();
    puVar1 = local_40;
    if ((((local_38 == '\0') && (local_40 != (void*)0x0)) &&
        (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_90 = puVar1;
    local_88 = '\0';
    local_80 = *param_1;
    local_78 = '\0';
    FUN_00d98db0(&local_80,&local_90,0);
    puVar4 = local_40;
    if (local_40 == puVar3) {
LAB_014006a1:
      puVar4 = puVar3;
      if (local_38 != '\0') {
LAB_014006a7:
        if (local_40 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
          puVar3 = puVar4;
          goto LAB_014006a1;
        }
        if (local_38 == '\0') goto LAB_014006b5;
        goto LAB_014006a7;
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
LAB_014006b5:
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_44 == '\0') {
      local_58 = '\0';
      local_60 = *local_50;
      iVar2 = FUN_00d90910();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
      local_70 = *local_50;
      iVar2 = FUN_00d90c30();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    puVar3 = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  } while( true );
}

