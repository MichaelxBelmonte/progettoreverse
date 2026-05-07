// Function: FUN_01f6ddb0
// Address: 01f6ddb0
// Size: 963 bytes
// Class: GNAlertPanel
// === GNAlertPanel properties ===
//                   _infoText
//                   _okTitle
//                   _cancelTitle


int FUN_01f6ddb0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  undefined7 uVar6;
  byte bVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar8;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*arg1 == 0) {
    bVar8 = true;
    local_58 = 0;
    plVar4 = (int64_t *)0x0;
  }
  else {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    FUN_00e97870();
    local_78 = local_50;
    local_70 = 0;
    lVar2 = g_02800b40;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        lVar2 = g_02800b40;
      }
    }
    else {
      local_48 = '\0';
    }
    local_70 = '\x01';
    g_02800b40 = lVar2;
    if (lVar2 != 0) {
      local_70 = '\x01';
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar2;
    FUN_00ca0840(param_1,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e97f20();
    if (this_ptr[0x13] == 0) {
      uVar5 = FUN_00e97f30();
      bVar8 = true;
      if (local_40 == 0) {
        uVar5 = FUN_00e978a0();
        bVar8 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          uVar5 = FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar5 = FUN_00d50b20();
      }
      lVar2 = g_02800b48;
      if (bVar8) {
        if (g_02800b48 != 0) {
          uVar5 = FUN_00d50b00();
        }
        if (this_ptr[0x13] != lVar2) {
          FUN_00d64850();
          lVar1 = this_ptr[0x13];
          if (lVar1 != lVar2) {
            local_58 = lVar1;
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            this_ptr[0x13] = lVar2;
            if (local_58 != 0) {
              FUN_00d50b20();
            }
          }
          uVar5 = FUN_00d64910();
        }
        if (lVar2 == 0) {
          uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
        }
        else {
          uVar5 = FUN_00d50b20();
          uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
        }
        local_58 = CONCAT71(uVar6,1);
        bVar8 = false;
        bVar7 = 1;
        goto LAB_01f6dfeb;
      }
    }
    else {
      FUN_00d50b00();
      uVar5 = FUN_00d50b20();
    }
    local_58 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    bVar8 = false;
  }
  bVar7 = 0;
LAB_01f6dfeb:
  iVar3 = (**(code **)(*this_ptr + 0x5d8))();
  if ((bool)(bVar7 & iVar3 == 2)) {
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    FUN_00e978d0();
    local_68 = local_50;
    local_60 = 0;
    local_88 = g_026fceb8;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        local_88 = g_026fceb8;
      }
    }
    else {
      local_48 = '\0';
    }
    local_60 = '\x01';
    g_026fceb8 = local_88;
    if (local_88 != 0) {
      local_60 = '\x01';
      FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_01ca93d0(param_1,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar8 && plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return iVar3;
}

