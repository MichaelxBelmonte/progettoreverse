// Function: FUN_01e2fa60
// Address: 01e2fa60
// Size: 1358 bytes
// Class: GNClassDescription
// === GNClassDescription properties ===
//                   _potentialValues
//                   _derivationSources
//                   _derivationDestinations
//                   _documentation


int64_t * FUN_01e2fa60(void)

{
  int iVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  char cVar7;
  int iVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar10;
  int64_t lVar11;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  iVar8 = 0;
  if (*arg1 == 0) {
LAB_01e2fbb4:
    bVar3 = false;
  }
  else {
    FUN_00d4efa0();
    lVar11 = g_02800140;
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    plVar9 = local_58;
    pplVar10 = (int64_t **)local_38;
    if ((char)local_50 != '\0') {
      pplVar10 = &local_50;
    }
    local_38[0] = (char)local_50;
    *(void*)pplVar10 = 0;
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) goto LAB_01e2fbb4;
    pplVar10 = &local_58;
    (**(code **)(*(int64_t *)*arg1 + 0x210))();
    plVar9 = local_58;
    FUN_00081d60();
    if (plVar9 == (int64_t *)0x0) {
LAB_01e2fb76:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar7 = FUN_00e85ea0();
      if (cVar7 == '\0') goto LAB_01e2fb76;
    }
    plVar9 = *pplVar10;
    if (plVar9 == (int64_t *)0x0) {
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      plVar9 = (int64_t *)0x0;
    }
    else if (*(char *)(pplVar10 + 1) == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      bVar5 = false;
      bVar4 = false;
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
      bVar3 = true;
      bVar5 = false;
      bVar4 = false;
    }
    if (((char)local_50 != '\0') && (bVar4 = bVar5, local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      if (bVar4) {
        FUN_00d50b00();
      }
      *this_ptr = (int64_t)plVar9;
      goto LAB_01e2ff9a;
    }
  }
  lVar11 = 0;
  local_48 = (int64_t *)0x0;
  while( true ) {
    FUN_00ca1380();
    plVar9 = local_58;
    local_68 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_50);
    pplVar10 = &local_50;
    if ((char)local_50 == '\0') {
      pplVar10 = &local_68;
    }
    *(void*)pplVar10 = 0;
    if (((char)local_50 != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)((int64_t)plVar9 + 0xc);
    if ((char)local_68 != '\0') {
      FUN_00d50b20();
    }
    lVar6 = g_026d83d0;
    if (iVar1 <= lVar11) break;
    FUN_00ca1380();
    plVar9 = local_58;
    local_40[0] = (char)local_50;
    pplVar10 = &local_50;
    if ((char)local_50 == '\0') {
      pplVar10 = (int64_t **)local_40;
    }
    *(void*)pplVar10 = 0;
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = *(int64_t **)(plVar9[2] + lVar11 * 8);
    local_60 = '\0';
    local_68 = plVar9;
    FUN_00081d60();
    pplVar10 = (int64_t **)&g_02802688;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar7 = FUN_00e85ea0();
      pplVar10 = &local_68;
      if (cVar7 == '\0') {
        pplVar10 = (int64_t **)&g_02802688;
      }
    }
    plVar2 = *pplVar10;
    local_38[0] = *(char *)(pplVar10 + 1);
    pplVar10 = pplVar10 + 1;
    if (local_38[0] == '\0') {
      pplVar10 = (int64_t **)local_38;
    }
    *(void*)pplVar10 = 0;
    if ((local_60 != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    plVar9 = local_48;
    bVar4 = bVar3;
    if (plVar2 != (int64_t *)0x0) {
      iVar8 = iVar8 + 1;
      if (plVar2 == local_48) {
        plVar2 = local_48;
        if (bVar3) goto joined_r0x01e2fd4c;
        bVar4 = true;
        if (local_38[0] == '\0') {
          FUN_00d50b00();
          plVar9 = local_48;
        }
      }
      else if (local_38[0] == '\0') {
        FUN_00d50b00();
        bVar4 = true;
        if ((bVar3) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
joined_r0x01e2fd4c:
        local_48 = plVar2;
        plVar9 = local_48;
        if (local_38[0] != '\0') {
          FUN_00d50b20();
          plVar9 = local_48;
        }
      }
      else {
        bVar4 = true;
        plVar9 = plVar2;
        if ((bVar3) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar3 = bVar4;
    local_48 = plVar9;
    lVar11 = lVar11 + 1;
  }
  if (iVar8 < 2) {
    *(void*)(this_ptr + 1) = 0;
    if (bVar3) goto LAB_01e2fe4d;
  }
  else {
    if (g_026d83d0 != 0) {
      FUN_00d50b00();
    }
    FUN_000175c0();
    plVar9 = local_58;
    if (local_58 == local_48) {
      if ((!bVar3) && (local_58 != (int64_t *)0x0)) {
        plVar9 = local_48;
        if ((char)local_50 != '\0') goto LAB_01e2fe8e;
        bVar3 = true;
        FUN_00d50b00();
      }
LAB_01e2ff3f:
      plVar9 = local_48;
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_48 != (int64_t *)0x0)) {
          local_48 = plVar9;
          FUN_00d50b20();
          bVar3 = true;
        }
        else {
          local_48 = plVar9;
          bVar3 = true;
        }
        goto LAB_01e2ff3f;
      }
      if ((bVar3) && (local_48 != (int64_t *)0x0)) {
        local_48 = local_58;
        FUN_00d50b20();
      }
LAB_01e2fe8e:
      local_50._0_1_ = '\0';
      bVar3 = true;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    local_48 = plVar9;
    if (bVar3) {
LAB_01e2fe4d:
      *this_ptr = (int64_t)local_48;
      goto LAB_01e2ff9a;
    }
  }
  plVar9 = local_48;
  if (local_48 == (int64_t *)0x0) {
    plVar9 = (int64_t *)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)plVar9;
LAB_01e2ff9a:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

