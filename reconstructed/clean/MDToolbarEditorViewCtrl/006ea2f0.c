// Function: FUN_006ea2f0
// Address: 006ea2f0
// Size: 1791 bytes
// Class: MDToolbarEditorViewCtrl

void FUN_006ea2f0(void)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  byte bVar6;
  int64_t *plVar7;
  bool bVar8;
  uint32_t uVar9;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  uVar9 = FUN_0027c9f0();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b00();
  }
  lVar1 = g_027276f0;
  local_70 = local_40;
  if (g_027276f0 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_e0 = lVar1;
  local_d8 = '\x01';
  FUN_01d5e6e0(uVar9,&local_e0);
  uVar9 = FUN_01d64cb0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar1 = g_02708f00;
  if (g_02708f00 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = '\x01';
  uVar9 = FUN_01d5e6e0(uVar9,&local_d0);
  plVar7 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar6 = 1;
    plVar7 = (int64_t *)0x0;
    bVar2 = false;
  }
  else if (local_38 == '\0') {
    uVar9 = FUN_00d50b00();
    bVar6 = 0;
    bVar2 = true;
  }
  else {
    local_38 = '\0';
    bVar2 = true;
    bVar6 = 0;
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    uVar9 = FUN_01d66e50();
  }
  lVar1 = g_026de660;
  if (g_026de660 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  uVar9 = FUN_01d5e6e0(uVar9,&local_c0);
  if (local_40 == plVar7) {
    if ((bool)(bVar6 & local_40 != (int64_t *)0x0)) {
      if (local_38 != '\0') goto LAB_006ea525;
      bVar2 = true;
      uVar9 = FUN_00d50b00();
    }
LAB_006ea57c:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      bVar8 = (bool)(bVar2 & plVar7 != (int64_t *)0x0);
      bVar2 = true;
      plVar7 = local_40;
      if (bVar8) {
        uVar9 = FUN_00d50b20();
      }
      goto LAB_006ea57c;
    }
    bVar8 = plVar7 != (int64_t *)0x0;
    plVar7 = local_40;
    if ((bool)(bVar2 & bVar8)) {
      uVar9 = FUN_00d50b20();
    }
LAB_006ea525:
    local_38 = '\0';
    bVar2 = true;
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    uVar9 = FUN_01d66e50();
  }
  lVar1 = g_026de680;
  if (g_026de680 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  uVar9 = FUN_01d5e6e0(uVar9,&local_b0);
  plVar5 = local_40;
  if (local_40 == plVar7) {
    bVar8 = bVar2;
    if ((!bVar2) && (local_40 != (int64_t *)0x0)) {
      plVar5 = plVar7;
      if (local_38 == '\0') {
        uVar9 = FUN_00d50b00();
        goto LAB_006ea664;
      }
      goto LAB_006ea630;
    }
joined_r0x006ea673:
    plVar5 = plVar7;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    bVar8 = true;
    if ((bVar2) && (plVar7 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
      plVar7 = local_40;
LAB_006ea664:
      bVar8 = true;
      goto joined_r0x006ea673;
    }
  }
  else {
    if ((bVar2) && (plVar7 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_006ea630:
    local_38 = '\0';
    bVar8 = true;
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    uVar9 = FUN_01d66e50();
  }
  FUN_01d5b240(uVar9,0);
  if (local_40 == plVar5) {
    bVar2 = bVar8;
    if ((!bVar8) && (local_40 != (int64_t *)0x0)) {
      bVar2 = true;
      plVar7 = plVar5;
      if (local_38 != '\0') goto LAB_006ea7b0;
      FUN_00d50b00();
      goto LAB_006ea776;
    }
  }
  else {
    plVar7 = local_40;
    if (local_38 != '\0') {
      bVar2 = true;
      if ((bVar8) && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_006ea7b0;
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar2 = true;
    if ((!bVar8) || (plVar5 == (int64_t *)0x0)) goto LAB_006ea7b0;
    FUN_00d50b20();
    plVar5 = local_40;
LAB_006ea776:
    bVar2 = true;
  }
  plVar7 = plVar5;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_006ea7b0:
  cVar3 = FUN_01d65330();
  if (cVar3 != '\0') {
    FUN_01d66e50();
  }
  FUN_01d62660();
  local_a0 = local_40;
  local_98 = '\0';
  FUN_01d778e0();
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cef4e0(g_023b1608);
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    local_60 = 0;
    FUN_00d50b00();
    local_90 = g_027276f8;
    local_60 = '\x01';
    local_68 = this_ptr;
    if (g_027276f8 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027f0e10;
    local_88 = '\x01';
    if (g_027f0e10 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar1;
    local_78 = '\x01';
    local_50 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x70);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar1;
    FUN_000bf690(&local_80,&local_90,&local_58);
    plVar5 = *(int64_t **)(this_ptr + 0x80);
    plVar4 = plVar5;
    if (plVar5 != local_40) {
      plVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar4 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar5 = *(int64_t **)(this_ptr + 0x80);
        }
      }
      else {
        local_38 = '\0';
      }
      *(int64_t **)(this_ptr + 0x80) = plVar4;
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar4 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar2) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

