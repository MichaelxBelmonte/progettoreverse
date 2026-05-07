// Function: FUN_01e30190
// Address: 01e30190
// Size: 674 bytes
// Class: GNClassDescription
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


void FUN_01e30190(void)

{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t **pplVar7;
  bool bVar8;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_50 = 0;
  plVar6 = (int64_t *)0x0;
  while( true ) {
    FUN_00ca1380();
    lVar4 = local_48;
    local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_40[0]);
    pplVar7 = (int64_t **)local_40;
    if (local_40[0] == '\0') {
      pplVar7 = &local_80;
    }
    *(void*)pplVar7 = 0;
    if ((local_40[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)(lVar4 + 0xc);
    if ((char)local_80 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 <= local_50) break;
    FUN_00ca1380();
    lVar4 = local_48;
    local_38[0] = local_40[0];
    pplVar7 = (int64_t **)local_40;
    if (local_40[0] == '\0') {
      pplVar7 = (int64_t **)local_38;
    }
    *(void*)pplVar7 = 0;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + local_50 * 8);
    local_78 = '\0';
    local_80 = plVar2;
    FUN_00081d60();
    pplVar7 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar5 = FUN_00e85ea0();
      pplVar7 = &local_80;
      if (cVar5 == '\0') {
        pplVar7 = (int64_t **)&g_02802688;
      }
    }
    plVar3 = *pplVar7;
    if (plVar3 != plVar6) {
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar8 = plVar6 != (int64_t *)0x0;
        plVar6 = plVar3;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      else {
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        *(void*)(pplVar7 + 1) = 0;
        plVar6 = plVar3;
        if ((local_78 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_01d28610();
      lVar4 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) {
        local_70 = *this_ptr;
        local_68 = '\0';
        FUN_01d2eb50();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d2e930();
      lVar4 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) {
        local_60 = *this_ptr;
        local_58 = '\0';
        FUN_01d2e920();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    local_50 = local_50 + 1;
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

