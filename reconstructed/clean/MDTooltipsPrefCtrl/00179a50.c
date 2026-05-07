// Function: FUN_00179a50
// Address: 00179a50
// Size: 515 bytes
// Class: MDTooltipsPrefCtrl

uint64_t FUN_00179a50(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int local_68;
  int64_t local_50;
  char local_48;
  
  if ((*(int64_t *)(this_ptr + 0xa8) == 0) || (lVar1 = *arg1, *(int *)(lVar1 + 0xc) == 0)) {
LAB_00179c4e:
    uVar7 = 0;
  }
  else {
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar9 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + uVar9 * 8);
        lVar3 = *(int64_t *)(this_ptr + 0xa8);
        if (lVar3 == 0) {
LAB_00179c42:
          FUN_00115910();
          goto LAB_00179c4e;
        }
        local_68 = -1;
        do {
          lVar6 = (int64_t)local_68;
          local_68 = local_68 + 1;
          if (*(int *)(lVar3 + 0xc) <= local_68) {
            FUN_00136a40();
            goto LAB_00179c42;
          }
          plVar4 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar6 * 8);
          (**(code **)(*plVar2 + 0x370))();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          cVar5 = (**(code **)(*plVar4 + 0x50))();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        } while (cVar5 == '\0');
        FUN_00136a40();
        uVar8 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar8;
      } while ((int)uVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_00115910();
    uVar7 = 1;
  }
  return uVar7;
}

