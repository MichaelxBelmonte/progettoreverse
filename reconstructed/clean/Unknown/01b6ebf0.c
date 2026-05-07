// Function: FUN_01b6ebf0
// Address: 01b6ebf0
// Size: 715 bytes
// Class: Unknown

bool FUN_01b6ebf0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  char *pcVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar9 [16];
  float local_98;
  uint64_t local_80;
  uint64_t local_78;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*arg1 == 0) {
    return false;
  }
  uVar6 = FUN_01d3b590();
  if ((uVar6 & 8) != 0) {
    return true;
  }
  iVar5 = FUN_01d3a5a0();
  if (((iVar5 == 5) ||
      ((iVar5 = FUN_01d3a5a0(), iVar5 == 1 && (iVar5 = FUN_01d3b620(), iVar5 == 2)))) &&
     (*(int *)((int64_t)this_ptr + 0x19c) != 0)) {
    FUN_01d3abf0();
    local_78 = FUN_01e466c0();
    uVar8 = (**(code **)(*this_ptr + 0xa68))();
    auVar9._8_4_ = (int)extraout_XMM0_Qb;
    auVar9._0_8_ = uVar8;
    auVar9._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar9 = blendps(ZEXT816(0),auVar9,1);
    FUN_01b6e930(auVar9._0_8_,0,0);
    lVar2 = local_48;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_98 = (float)uVar8;
      bVar1 = (float)((uint)(local_98 - (float)local_78) & g_02390140) < g_02390d28;
      iVar5 = FUN_01d3a5a0();
      goto joined_r0x01b6ed18;
    }
  }
  bVar1 = false;
  iVar5 = FUN_01d3a5a0();
joined_r0x01b6ed18:
  if ((iVar5 == 1) && (iVar5 = FUN_01d3b620(), iVar5 == 2)) {
    FUN_01d3abf0();
    local_78 = FUN_01e466c0();
    FUN_01b6e930(&local_80,0,0);
    lVar2 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_68 = lVar2;
    local_60 = '\0';
    uVar8 = FUN_01b6d110(local_80,&local_68);
    lVar3 = local_48;
    if ((local_40[0] == '\0') && (local_48 != 0)) {
      uVar8 = FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((lVar2 != 0) && (this_ptr[0x37] != 0)) {
      local_58 = lVar3;
      local_50 = '\0';
      FUN_00c9fe40(uVar8,&local_58);
      pcVar7 = local_38;
      if (local_40[0] != '\0') {
        pcVar7 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00dd6ab0();
        cVar4 = FUN_00d05410();
        if (cVar4 != '\0') {
          FUN_00d50b20();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          return false;
        }
        FUN_00d50b20();
      }
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return bVar1;
}

