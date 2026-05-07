// Function: FUN_01d0b3b0
// Address: 01d0b3b0
// Size: 545 bytes
// Class: GNMultipleValue

void FUN_01d0b3b0(void)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  int64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  uint8_t local_68;
  int64_t local_60;
  uint8_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  char local_30 [8];
  
  iVar3 = *(int *)(this_ptr + 0x250);
  if (1 < iVar3 - 1U) {
    if (iVar3 == 0) {
      local_50 = *arg1;
      local_48 = '\0';
      FUN_01d10370();
      if (local_48 == '\0') {
        return;
      }
      if (local_50 != 0) {
        FUN_00d50b20();
        return;
      }
      return;
    }
    if (iVar3 != 3) {
      return;
    }
    local_90 = *arg1;
    local_88 = 0;
    FUN_01d0b670(2,&local_90);
    if (local_40 == 0) {
      bVar2 = false;
      lVar1 = *arg1;
      lVar5 = 0;
    }
    else {
      bVar2 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      lVar1 = *arg1;
      lVar5 = local_40;
    }
    if ((lVar1 == 0) || (iVar3 = FUN_00d8c7a0(), iVar3 == 0)) {
      local_78 = 0;
      local_80 = 0;
      FUN_01d0aa90();
    }
    else {
      local_68 = 0;
      local_70 = lVar5;
      FUN_01d0aa90();
    }
    goto LAB_01d0b5af;
  }
  local_b0 = *arg1;
  local_a8 = 0;
  FUN_01d0b670(iVar3 - 1U,&local_b0);
  lVar5 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
    bVar2 = false;
    if (*arg1 != 0) goto LAB_01d0b4c5;
LAB_01d0b4ce:
    local_98 = 0;
    local_a0 = 0;
    FUN_01d0a320();
  }
  else {
    bVar2 = true;
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
    if (*arg1 == 0) goto LAB_01d0b4ce;
LAB_01d0b4c5:
    iVar3 = FUN_00d8c7a0();
    if (iVar3 == 0) goto LAB_01d0b4ce;
  }
  if (*(int *)(lVar5 + 0xc) == 1) {
    FUN_00d23340();
    pcVar4 = local_30;
    if (local_38[0] != '\0') {
      pcVar4 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar4 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30[0] == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    local_60 = local_40;
    local_58 = 1;
    FUN_01d0a320();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01d0b5af:
  if ((bVar2) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}

