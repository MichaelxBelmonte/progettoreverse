// Function: FUN_01a55ef0
// Address: 01a55ef0
// Size: 1497 bytes
// Class: Unknown

uint64_t FUN_01a55ef0(uint64_t param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  void* pVar4;
  char *pcVar5;
  int64_t **pplVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  int64_t *plVar9;
  bool bVar10;
  uint64_t uVar11;
  double dVar12;
  double dVar13;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  char local_30 [8];
  
  FUN_01a58e40();
  if (local_40 == (int64_t *)0x0) {
    bVar10 = true;
  }
  else {
    FUN_01a58e40();
    bVar10 = *(int *)((int64_t)local_50 + 0xc) == 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    uVar8 = 0;
    goto LAB_01a564b7;
  }
  FUN_01a58e40();
  local_70 = local_40;
  local_68 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_68 = '\x01';
  uVar2 = (**(code **)(*this_ptr + 0x488))();
  uVar8 = (uint64_t)uVar2;
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar2 & param_2) == 0) goto LAB_01a564b7;
  local_60 = (int64_t *)0x0;
  uVar11 = FUN_01caec40();
  local_a0 = g_027e1e88;
  if (g_027e1e88 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_000175c0(uVar11,&local_a0);
  plVar9 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
    FUN_01a58dc0();
    (**(code **)(*local_50 + 0xd30))();
    plVar9 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
      bVar10 = false;
    }
    else if (local_38[0] == '\0') {
      FUN_00d50b00();
      local_60 = plVar9;
      bVar10 = true;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_40;
      local_38[0] = '\0';
      bVar10 = true;
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_50 + 0xd38))();
    plVar9 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
      bVar10 = false;
    }
    else if (local_38[0] == '\0') {
      FUN_00d50b00();
      local_60 = plVar9;
      bVar10 = true;
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_40;
      local_38[0] = '\0';
      bVar10 = true;
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00083c20();
  if (plVar9 == (int64_t *)0x0) {
LAB_01a5619e:
    if (g_02802688 != 0) goto LAB_01a561af;
LAB_01a562c9:
    FUN_01a58e40();
    FUN_00d23310();
    plVar7 = local_40;
    pVar4 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
    pplVar6 = &local_58;
    if (local_38[0] != '\0') {
      pplVar6 = (int64_t **)local_38;
    }
    local_58 = (int64_t *)CONCAT71(local_58._1_7_,local_38[0]);
    *(char *)pplVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01259650();
    dVar12 = (double)(**(code **)(*plVar9 + 0x370))();
    if (((char)local_58 != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    dVar13 = (double)(**(code **)(*plVar9 + 0x378))(dVar12);
    FUN_01a58e40();
    plVar7 = local_40;
    local_78 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_78 = '\x01';
    local_80 = plVar7;
    FUN_01a527e0();
    FUN_0127f970(dVar13 - dVar12);
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_01a5619e;
    if (local_60 == (int64_t *)0x0) goto LAB_01a562c9;
LAB_01a561af:
    FUN_01a58e40();
    FUN_00d23310();
    pVar4 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
    pcVar5 = local_30;
    if (local_38[0] != '\0') {
      pcVar5 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar5 = '\0';
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01259650();
    local_58 = (int64_t *)FUN_01a8fc90();
    if ((local_30[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_40 = (int64_t *)FUN_01a8f210();
    FUN_00e7b970();
    local_58 = local_40;
    FUN_01a58e40();
    local_90 = local_40;
    local_88 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    plVar7 = local_58;
    local_88 = '\x01';
    uVar11 = FUN_01a527e0();
    FUN_01278f90(0,uVar11);
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar10) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
LAB_01a564b7:
  return uVar8 & 0xffffffff;
}

