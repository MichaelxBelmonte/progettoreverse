// Function: FUN_01b221c0
// Address: 01b221c0
// Size: 674 bytes
// Class: Unknown

uint64_t FUN_01b221c0(void* param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar5;
  int64_t **pplVar7;
  bool bVar8;
  int64_t local_70;
  char local_68;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  undefined7 uVar6;
  
  if (*(char *)(this_ptr + 0x315) == '\0') {
    uVar5 = 0;
    goto LAB_01b22450;
  }
  bVar8 = *(char *)(this_ptr + 0x316) == '\0';
  uVar6 = (undefined7)((uint64_t)unaff_R12 >> 8);
  uVar5 = CONCAT71(uVar6,!bVar8);
  if (((bVar8) || (param_2 == '\0')) || (uVar5 = CONCAT71(uVar6,1), *arg1 == 0))
  goto LAB_01b22450;
  FUN_01caeae0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01b22450;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01b22450;
  FUN_01d66da0();
  lVar2 = g_027e3d70;
  if (g_027e3d70 != 0) {
    FUN_00d50b00();
  }
  pplVar7 = &local_40;
  FUN_000175c0();
  plVar1 = local_40;
  FUN_011a6590();
  if (plVar1 == (int64_t *)0x0) {
LAB_01b222c1:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b222c1;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017aa5e0();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_0173b120();
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    local_38 = '\0';
    FUN_01ad60d0(1,2);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b22450:
  return uVar5 & 0xffffffff;
}

