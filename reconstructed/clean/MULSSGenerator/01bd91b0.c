// Function: FUN_01bd91b0
// Address: 01bd91b0
// Size: 572 bytes
// Class: MULSSGenerator

uint64_t FUN_01bd91b0(uint64_t param_1,char param_2)

{
  int iVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  int64_t lVar10;
  int64_t **pplVar11;
  int64_t *local_40;
  char local_38;
  
  FUN_01bd8b20();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01bd9229;
    FUN_00d50b00();
    if (param_2 != '\0') goto LAB_01bd9203;
  }
  else {
    if (local_40 == (int64_t *)0x0) {
LAB_01bd9229:
      uVar7 = 0;
      goto LAB_01bd9379;
    }
    if (param_2 == '\0') goto LAB_01bd927e;
LAB_01bd9203:
    iVar4 = FUN_01caea40();
    FUN_01d3a560();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01bd9251;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_01bd9251:
      uVar5 = FUN_01d3b590();
      FUN_00d50b20();
      if ((uVar5 & 2) != 0) {
        iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x90) + 0x18);
        iVar6 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar6 = iVar1;
        }
        if (3 < iVar1) {
          lVar10 = 0;
          do {
            if (*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x90) + 0x10) + lVar10 * 4) ==
                iVar4) {
              if (7 < iVar1) {
                FUN_01bd8f70();
              }
              goto LAB_01bd927e;
            }
            lVar10 = lVar10 + 1;
          } while (iVar6 >> 2 != (int)lVar10);
        }
      }
    }
    FUN_01bd8c50();
  }
LAB_01bd927e:
  pplVar11 = &local_40;
  FUN_01caeb00();
  plVar8 = local_40;
  FUN_000f5df0();
  if (plVar8 == (int64_t *)0x0) {
LAB_01bd92ba:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bd92ba;
  }
  plVar2 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    plVar8 = *(int64_t **)(this_ptr + 0x90);
    iVar6 = (**(code **)(*plVar2 + 0xa88))();
    iVar4 = (int)plVar8[3];
    iVar1 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    uVar7 = 0xffffffff;
    if (3 < iVar4) {
      uVar9 = 0;
      do {
        if (*(int *)(plVar8[2] + uVar9 * 4) == iVar6) {
          uVar7 = uVar9 & 0xffffffff;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (iVar1 >> 2 != (int)uVar9);
    }
    (**(code **)(*plVar2 + 0x918))(uVar7);
    FUN_00d50b20();
  }
  uVar7 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
  FUN_00d50b20();
LAB_01bd9379:
  return uVar7 & 0xffffffff;
}

