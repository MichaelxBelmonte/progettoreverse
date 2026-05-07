// Function: FUN_00c7a080
// Address: 00c7a080
// Size: 550 bytes
// Class: GNAttributeType

void FUN_00c7a080(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t lVar5;
  bool bVar6;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (unaff_SIL == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if ((g_028a6c90 == (int64_t *)0x0) || (g_028a6c99 == '\0')) {
      FUN_00e8cb50();
      if (g_028a6c90 == (int64_t *)0x0) {
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar4 + 0x18))();
        if (g_028a6c90 == plVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar6 = g_028a6c90 != (int64_t *)0x0;
          g_028a6c90 = plVar4;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a6c98 == '\0') {
          g_028a6c98 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        g_028a6c99 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a6c99 = '\x01';
        FUN_00e8cb70();
      }
    }
    FUN_00d97950();
    lVar3 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_70 = lVar3;
    local_68 = '\0';
    FUN_00c7a420(param_1,&local_70);
    lVar5 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 == 0) {
      FUN_00c7a4d0();
      if ((local_40 != 0) && (lVar5 = local_40, local_38 == '\0')) {
        FUN_00d50b00();
      }
      local_58 = '\0';
      local_50 = lVar3;
      local_48 = '\0';
      local_60 = lVar5;
      FUN_00c7a730(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    *this_ptr = lVar5;
    *(void*)(this_ptr + 1) = 1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

