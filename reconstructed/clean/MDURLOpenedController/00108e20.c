// Function: FUN_00108e20
// Address: 00108e20
// Size: 2425 bytes
// Class: MDURLOpenedController

void FUN_00108e20(uint64_t param_1,char param_2)

{
  byte bVar1;
  int64_t lVar2;
  byte bVar3;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  uint7 uVar12;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t unaff_R12;
  int64_t *plVar13;
  int64_t **pplVar14;
  bool bVar15;
  uint64_t local_80;
  int local_5c;
  int local_58;
  char local_54;
  int64_t *local_50;
  char local_48;
  uint8_t local_3a;
  char local_39;
  uint64_t local_38;
  byte bVar4;
  
  if (*arg1 == 0) {
    return;
  }
  cVar6 = *(char *)(this_ptr + 0xc);
  local_3a = cVar6 != '\0';
  local_39 = FUN_01a90590();
  local_58 = FUN_01a90480();
  local_5c = FUN_01a904a0();
  local_38 = 0;
  local_80 = FUN_01a93720();
  lVar2 = g_026e11a8;
  if (g_026e11a8 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar10 = local_50;
  uVar9 = FUN_00053ac0();
  if (plVar10 == (int64_t *)0x0) {
LAB_00108efc:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    uVar9 = FUN_00e85ea0();
    if ((char)uVar9 == '\0') goto LAB_00108efc;
  }
  plVar10 = *pplVar14;
  if (plVar10 == (int64_t *)0x0) {
    uVar12 = (uint7)((uint64_t)unaff_R12 >> 8);
    bVar1 = 1;
    bVar3 = 0;
    bVar4 = 0;
    local_38._0_1_ = '\0';
    local_38._1_7_ = 0;
    plVar10 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      uVar9 = FUN_00d50b00();
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
    bVar3 = 1;
    bVar4 = 1;
    uVar12 = 0;
    bVar1 = 0;
    local_38._0_1_ = '\x01';
  }
  if ((local_48 != '\0') && (bVar4 = bVar3, local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_54 = param_2;
  if ((plVar10 != (int64_t *)0x0) && (cVar5 = FUN_00d45ad0(), (cVar6 != '\0') != (bool)cVar5)) {
    local_3a = FUN_00d45ad0();
    local_54 = '\x01';
  }
  lVar2 = g_026e11b0;
  if (g_026e11b0 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar11 = local_50;
  FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_0010900a:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_0010900a;
  }
  plVar11 = *pplVar14;
  if (plVar11 == plVar10) {
    if ((bool)(bVar1 & plVar11 != (int64_t *)0x0)) {
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_00109058;
      FUN_00d50b00();
      cVar6 = '\x01';
    }
    else {
      uVar12 = local_38._1_7_ & 0xffffff;
      cVar6 = (char)local_38;
    }
  }
  else if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if ((bool)(bVar4 & plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
      plVar10 = plVar11;
      cVar6 = '\x01';
    }
    else {
      plVar10 = plVar11;
      cVar6 = '\x01';
    }
  }
  else {
    bVar15 = plVar10 != (int64_t *)0x0;
    plVar10 = plVar11;
    if ((bool)(bVar4 & bVar15)) {
      FUN_00d50b20();
    }
LAB_00109058:
    *(void*)(pplVar14 + 1) = 0;
    cVar6 = '\x01';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    local_38._1_7_ = uVar12 & 0xffffff;
    local_38._0_1_ = cVar6;
    cVar5 = FUN_00d45ad0();
    if (local_39 != cVar5) {
      local_38._1_7_ = uVar12 & 0xffffff;
      local_38._0_1_ = cVar6;
      local_39 = FUN_00d45ad0();
      local_54 = '\x01';
    }
  }
  lVar2 = g_026e11b8;
  if (g_026e11b8 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar11 = local_50;
  uVar9 = FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_00109178:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    uVar9 = FUN_00e85ea0();
    if ((char)uVar9 == '\0') goto LAB_00109178;
  }
  plVar11 = *pplVar14;
  if (plVar11 == plVar10) {
    if ((cVar6 == '\0') && (plVar11 != (int64_t *)0x0)) {
      plVar11 = plVar10;
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_001091c6;
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
      local_38._0_1_ = '\x01';
      FUN_00d50b00();
    }
    else {
      local_38._1_7_ = uVar12 & 0xffffff;
      local_38._0_1_ = cVar6;
    }
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar11 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
      local_38._0_1_ = '\x01';
      if ((cVar6 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
        plVar10 = plVar11;
        goto joined_r0x00109708;
      }
    }
    else {
      if ((cVar6 != '\0') && (plVar10 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_001091c6:
      *(void*)(pplVar14 + 1) = 0;
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
    }
    local_38._0_1_ = '\x01';
    plVar10 = plVar11;
  }
joined_r0x00109708:
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((plVar10 != (int64_t *)0x0) && (iVar8 = FUN_00d45870(), iVar8 != local_58)) {
    local_58 = FUN_00d45870();
    local_54 = '\x01';
  }
  lVar2 = g_026e11c0;
  if (g_026e11c0 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar11 = local_50;
  FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_001092bf:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_001092bf;
  }
  plVar11 = *pplVar14;
  if (plVar11 == plVar10) {
    if (((char)local_38 == '\0') && (plVar11 != (int64_t *)0x0)) {
      plVar11 = plVar10;
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_0010930e;
      FUN_00d50b00();
      goto joined_r0x0010934b;
    }
    uVar12 = local_38._1_7_ & 0xffffff;
    plVar11 = plVar10;
    cVar6 = (char)local_38;
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_0010930e:
      *(void*)(pplVar14 + 1) = 0;
    }
joined_r0x0010934b:
    cVar6 = '\x01';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar11 != (int64_t *)0x0) {
    local_38._1_7_ = uVar12 & 0xffffff;
    local_38._0_1_ = cVar6;
    iVar8 = FUN_00d45870();
    if (iVar8 != local_5c) {
      local_38._1_7_ = uVar12 & 0xffffff;
      local_38._0_1_ = cVar6;
      local_5c = FUN_00d45870();
      local_54 = '\x01';
    }
  }
  lVar2 = g_026e11c8;
  if (g_026e11c8 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar10 = local_50;
  uVar9 = FUN_00053ac0();
  if (plVar10 == (int64_t *)0x0) {
LAB_00109410:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    uVar9 = FUN_00e85ea0();
    if ((char)uVar9 == '\0') goto LAB_00109410;
  }
  plVar10 = *pplVar14;
  if (plVar10 == plVar11) {
    if ((cVar6 == '\0') && (plVar10 != (int64_t *)0x0)) {
      plVar10 = plVar11;
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_0010945d;
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
      local_38._0_1_ = '\x01';
      FUN_00d50b00();
    }
    else {
      local_38._1_7_ = uVar12 & 0xffffff;
      local_38._0_1_ = cVar6;
    }
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar10 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
      local_38._0_1_ = '\x01';
      if ((cVar6 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
        plVar11 = plVar10;
        goto joined_r0x00109734;
      }
    }
    else {
      if ((cVar6 != '\0') && (plVar11 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_0010945d:
      *(void*)(pplVar14 + 1) = 0;
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
    }
    local_38._0_1_ = '\x01';
    plVar11 = plVar10;
  }
joined_r0x00109734:
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_80 = local_80 >> 0x20;
  if ((plVar11 != (int64_t *)0x0) && (iVar8 = FUN_00d45870(), iVar8 != local_58)) {
    local_80 = FUN_00d45870();
    local_54 = '\x01';
  }
  lVar2 = g_026e11d0;
  if (g_026e11d0 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar10 = local_50;
  FUN_00053ac0();
  if (plVar10 == (int64_t *)0x0) {
LAB_00109559:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00109559;
  }
  plVar13 = *pplVar14;
  uVar12 = (uint7)((uint64_t)plVar10 >> 8);
  if (plVar13 == plVar11) {
    if (((char)local_38 != '\0') || (plVar13 == (int64_t *)0x0)) {
      uVar12 = local_38._1_7_ & 0xffffff;
      plVar13 = plVar11;
      cVar6 = (char)local_38;
      goto joined_r0x00109749;
    }
    plVar13 = plVar11;
    if (*(char *)(pplVar14 + 1) != '\0') goto LAB_001095a8;
    FUN_00d50b00();
  }
  else if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if (((char)local_38 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (((char)local_38 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_001095a8:
    *(void*)(pplVar14 + 1) = 0;
  }
  cVar6 = '\x01';
joined_r0x00109749:
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((plVar13 != (int64_t *)0x0) && (*(int64_t *)(this_ptr + 0x60) != 0)) {
    FUN_00d50b00();
    plVar10 = *(int64_t **)(this_ptr + 0x60);
    local_38._0_1_ = cVar6;
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar10 + 0x3c8))();
    cVar7 = FUN_00d45ad0();
    FUN_00d50b20();
    FUN_00d50b20();
    cVar6 = (char)local_38;
    uVar12 = (uint7)((uint64_t)plVar10 >> 8);
    if (cVar5 != cVar7) {
      plVar10 = *(int64_t **)(this_ptr + 0x60);
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d45ad0();
      (**(code **)(*plVar10 + 0x3d0))();
      FUN_00d50b20();
    }
  }
  if (local_54 != '\0') {
    local_38._1_7_ = uVar12 & 0xffffff;
    local_38._0_1_ = cVar6;
    FUN_00109ad0(local_5c,local_39,local_58,local_80);
  }
  if ((cVar6 != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

