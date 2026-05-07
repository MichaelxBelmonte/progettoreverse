// Function: FUN_00ddc6f0
// Address: 00ddc6f0
// Size: 504 bytes
// Class: GNValue

uint64_t FUN_00ddc6f0(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  int iVar8;
  
  cVar4 = (**(code **)(*this_ptr + 0x388))();
  pcVar3 = g_025795c0;
  if (cVar4 != '\0') {
LAB_00ddc717:
    uVar7 = 0;
    goto LAB_00ddc8aa;
  }
  iVar8 = (int)this_ptr[4];
  bVar2 = false;
  puVar6 = (void*)0x0;
  while (iVar5 = (**(code **)(*this_ptr + 0x390))(), iVar8 < iVar5) {
    FUN_00d8cbc0();
    cVar4 = FUN_00d90d50();
    if (cVar4 != '\0') break;
    if (puVar6 == (void*)0x0) {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_025795a8;
      (*pcVar3)();
      bVar2 = true;
    }
    FUN_00d8ea20();
    iVar8 = (int)this_ptr[4] + 1;
    *(int *)(this_ptr + 4) = iVar8;
  }
  if (puVar6 == (void*)0x0) {
    cVar4 = (**(code **)(*this_ptr + 0x388))();
    if (cVar4 != '\0') goto LAB_00ddc717;
    cVar4 = (**(code **)(*this_ptr + 0x388))();
    if (cVar4 == '\0') {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_025795a8;
      (*pcVar3)();
      bVar2 = true;
    }
    else {
      puVar6 = (void*)0x0;
    }
  }
  if (param_2 != (void*)0x0) {
    this_ptr = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *this_ptr = (int64_t)&g_025795a8;
    (*pcVar3)();
    plVar1 = (int64_t *)*param_2;
    if (plVar1 == this_ptr) {
      if (*(char *)(param_2 + 1) == '\0') goto LAB_00ddc860;
      FUN_00d50b20();
    }
    else {
      *param_2 = this_ptr;
      if ((*(char *)(param_2 + 1) != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00ddc860:
      *(void*)(param_2 + 1) = 1;
    }
    FUN_00d8dbf0();
    FUN_00d8c7d0();
  }
  uVar7 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
  if ((bVar2) && (puVar6 != (void*)0x0)) {
    FUN_00d50b20();
  }
LAB_00ddc8aa:
  return uVar7 & 0xffffffff;
}

