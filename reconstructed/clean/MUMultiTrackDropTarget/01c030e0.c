// Function: FUN_01c030e0
// Address: 01c030e0
// Size: 596 bytes
// Class: MUMultiTrackDropTarget

int64_t * FUN_01c030e0(void)

{
  void*puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t *this_ptr;
  int64_t lVar10;
  uint32_t uVar11;
  uint32_t local_a8;
  uint32_t uStack_a4;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  int local_58;
  int iStack_54;
  int local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00ca1380();
  pcVar8 = &local_48;
  if (local_68[0] != '\0') {
    pcVar8 = local_68;
  }
  local_48 = local_68[0];
  *pcVar8 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      goto LAB_01c03154;
    }
LAB_01c03320:
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (local_70 == 0) goto LAB_01c03320;
LAB_01c03154:
    local_68[0] = '\0';
    local_60 = local_70;
    local_58 = -1;
    iStack_54 = 0;
    local_50 = 0;
    bVar6 = false;
    bVar5 = false;
    lVar10 = 0;
    while( true ) {
      lVar9 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_60 + 0xc) <= local_58) break;
      lVar9 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar9 * 8);
      if (lVar10 == 0) {
        FUN_00ca1380();
        local_38[0] = local_40[0];
        pcVar8 = local_40;
        if (local_40[0] == '\0') {
          pcVar8 = local_38;
        }
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        FUN_00c8e710();
        lVar10 = CONCAT71(uStack_47,local_48);
        if ((((local_40[0] == '\0') && (lVar10 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        bVar5 = bVar6;
        if (lVar10 != 0) {
          bVar5 = true;
        }
        bVar6 = bVar5;
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
      }
      uVar2 = *(void*)(lVar9 + 0x38);
      uVar3 = *(void*)(lVar9 + 0x40);
      uVar11 = (uint32_t)uVar3;
      iVar4 = *(int *)(lVar10 + 0x18);
      FUN_00c8e340(uVar11,1);
      iVar7 = iStack_54;
      local_a8 = (uint32_t)uVar2;
      uStack_a4 = (uint32_t)((uint64_t)uVar2 >> 0x20);
      puVar1 = (void*)(*(int64_t *)(lVar10 + 0x10) + (int64_t)iVar4);
      *puVar1 = local_a8;
      puVar1[1] = uStack_a4;
      puVar1[2] = uVar11;
      puVar1[3] = (int)((uint64_t)uVar3 >> 0x20);
      if (iStack_54 != 0) {
        if (iStack_54 < 0) {
          iStack_54 = -iStack_54;
        }
        else {
          local_58 = local_58 - iStack_54;
          FUN_00d23690(local_a8,iStack_54);
          local_50 = local_50 + iVar7;
          iStack_54 = 0;
        }
      }
    }
    FUN_01c051e0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if (bVar5) goto LAB_01c03328;
    if (lVar10 != 0) {
      FUN_00d50b00();
      goto LAB_01c03328;
    }
  }
  lVar10 = 0;
LAB_01c03328:
  *this_ptr = lVar10;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

