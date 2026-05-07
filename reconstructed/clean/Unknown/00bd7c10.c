// Function: FUN_00bd7c10
// Address: 00bd7c10
// Size: 1377 bytes
// Class: Unknown

void FUN_00bd7c10(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_c8;
  char local_c0;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00b67e30();
  if ((*arg1 == 0) || (iVar5 = FUN_00d8c7a0(), iVar5 == 0)) {
    FUN_00b67c50();
    return;
  }
  if (param_2 == 1) {
    cVar4 = (**(code **)(**(int64_t **)(this_ptr + 0x68) + 0x88))();
    if (cVar4 == '\0') {
      FUN_00bd69b0();
    }
    cVar4 = (**(code **)(**(int64_t **)(this_ptr + 0x68) + 0x90))();
    if (cVar4 == '\0') {
      FUN_00d8a060();
      FUN_00d8f1a0();
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_40 = local_88;
      local_38 = '\0';
      FUN_00b679c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_88 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d8ee20();
    lVar3 = local_40;
    lVar6 = *arg1;
    if (lVar6 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_00bd7ec1;
      local_48 = arg1 + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00bd7eba;
      }
    }
    else {
      local_48 = arg1 + 1;
      lVar2 = arg1[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *arg1 = lVar3;
        if (((char)lVar2 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_00bd7eba:
        *(void*)local_48 = 1;
LAB_00bd7ec1:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00bd80ba;
      }
      *arg1 = local_40;
      if (((char)lVar2 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)local_48 = 1;
    goto LAB_00bd80ba;
  }
  if ((g_028a57a0 == 0) || (g_028a57a9 == '\0')) {
    FUN_00e8cb50();
    lVar6 = g_02704060;
    if (g_028a57a0 == 0) {
      if (g_02704060 != 0) {
        FUN_00d50b00();
        lVar3 = g_028a57a0;
        if (g_028a57a0 == lVar6) {
          bVar1 = false;
        }
        else {
          g_028a57a0 = lVar6;
          bVar1 = true;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if (g_028a57a8 == '\0') {
          g_028a57a8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      g_028a57a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a57a9 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028a57a0 != 0) goto LAB_00bd7f30;
    lVar6 = 0;
  }
  else {
LAB_00bd7f30:
    lVar6 = g_028a57a0;
    local_50 = 0;
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_58 = lVar6;
  cVar4 = FUN_00d8f400();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') goto LAB_00bd80ba;
  iVar5 = FUN_00d8c7a0();
  lVar6 = g_028a57a0;
  if (iVar5 < 2) {
    FUN_00b67c50();
    return;
  }
  local_70 = 0;
  if (g_028a57a0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar6;
  local_70 = '\x01';
  FUN_00d97f50(param_1,&local_78);
  lVar3 = local_40;
  lVar6 = *arg1;
  if (lVar6 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != 0)) {
      local_48 = arg1 + 1;
      if (local_38 != '\0') goto LAB_00bd8051;
      FUN_00d50b00();
      goto LAB_00bd808b;
    }
LAB_00bd8092:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = arg1 + 1;
    lVar2 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *arg1 = lVar3;
      if (((char)lVar2 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
LAB_00bd808b:
      *(void*)local_48 = 1;
      goto LAB_00bd8092;
    }
    *arg1 = local_40;
    if (((char)lVar2 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
LAB_00bd8051:
    *(void*)local_48 = 1;
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_00bd80ba:
  FUN_00cddf30();
  local_68 = local_40;
  local_60 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = '\x01';
  FUN_00b67c50();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}

