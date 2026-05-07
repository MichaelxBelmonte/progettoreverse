// Function: FUN_01ce9490
// Address: 01ce9490
// Size: 728 bytes
// Class: MUScaleBrowserItem

void* FUN_01ce9490(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t local_78;
  char local_70;
  int64_t local_48;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  lVar6 = *(int64_t *)(arg1 + 0x150);
  if (*(int *)(lVar6 + 0xc) < 1) {
    bVar2 = false;
    lVar7 = 0;
    bVar1 = false;
    local_48 = 0;
  }
  else {
    lVar8 = 0;
    local_48 = 0;
    bVar1 = false;
    lVar7 = 0;
    bVar2 = false;
    do {
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
      if (local_48 == lVar6) {
        if ((!bVar1) && (local_48 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (local_48 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          local_48 = lVar6;
        }
        else {
          bVar1 = true;
          local_48 = lVar6;
        }
      }
      iVar4 = FUN_01dd4c80();
      if (iVar4 != -1) {
        lVar6 = *(int64_t *)(local_48 + 0x20);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        FUN_01ce41d0();
        if (local_78 == lVar7) {
          lVar9 = lVar7;
          bVar3 = bVar2;
          if ((!bVar2) && (local_78 != 0)) {
            if (local_70 != '\0') goto LAB_01ce9654;
            FUN_00d50b00();
            bVar3 = true;
          }
LAB_01ce96a5:
          lVar7 = lVar9;
          bVar2 = bVar3;
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            lVar9 = local_78;
            if ((bVar2) && (lVar7 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01ce96a5;
          }
          lVar9 = local_78;
          if ((bVar2) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_01ce9654:
          local_70 = '\0';
          lVar7 = lVar9;
          bVar2 = true;
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (iVar4 < *(int *)(lVar7 + 0xc)) {
          lVar6 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + (int64_t)iVar4 * 8);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar6 = *(int64_t *)(arg1 + 0x150);
    } while (lVar8 < *(int *)(lVar6 + 0xc));
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar2) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

