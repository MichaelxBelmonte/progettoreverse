// Function: FUN_019e90e0
// Address: 019e90e0
// Size: 1575 bytes
// Class: GNDictionary

void FUN_019e90e0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar4;
  bool bVar5;
  uint32_t uVar6;
  float fVar7;
  uint64_t uVar8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  lVar3 = g_027e1460;
  if (*arg1 == 0) {
    return;
  }
  if (g_027e1460 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_e0 = lVar3;
  local_d8 = '\x01';
  uVar8 = FUN_000175c0(param_1,&local_e0);
  lVar3 = local_48;
  if (local_48 == 0) {
    bVar1 = false;
    lVar3 = 0;
    bVar4 = false;
    if (local_40 != '\0') {
      bVar4 = false;
      bVar1 = false;
      lVar3 = 0;
    }
  }
  else if (local_40 == '\0') {
    uVar8 = FUN_00d50b00();
    bVar1 = true;
    bVar4 = local_48 != 0;
  }
  else {
    local_40 = '\0';
    bVar1 = true;
    bVar4 = true;
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar3 != 0) {
    uVar6 = FUN_00d459e0();
    *(void*)(this_ptr + 0x43) = uVar6;
    FUN_00d403d0();
    local_d0 = g_027e13d8;
    if (g_027e13d8 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    local_68 = 0;
    FUN_00d50b00();
    local_68 = '\x01';
    local_c0 = 0;
    local_b8 = '\0';
    local_70 = this_ptr;
    uVar8 = FUN_00d40470(&local_c0,&local_70,1,3);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  lVar2 = g_027e1468;
  if (g_027e1468 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_b0 = lVar2;
  local_a8 = '\x01';
  uVar8 = FUN_000175c0(uVar8,&local_b0);
  if (local_48 == lVar3) {
LAB_019e939a:
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar8 = FUN_00d50b00();
      }
      bVar5 = lVar3 != 0;
      bVar1 = true;
      lVar3 = local_48;
      if ((bool)(bVar4 & bVar5)) {
        uVar8 = FUN_00d50b20();
      }
      goto LAB_019e939a;
    }
    if ((bool)(bVar4 & lVar3 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    local_40 = '\0';
    bVar1 = true;
    lVar3 = local_48;
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar3 != 0) {
    fVar7 = (float)FUN_00d459e0();
    uVar8 = (**(code **)(*this_ptr + 0x950))((double)fVar7);
  }
  lVar2 = g_027e1470;
  if (g_027e1470 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  uVar8 = FUN_000175c0(uVar8,&local_a0);
  if (local_48 == lVar3) {
    lVar2 = lVar3;
    bVar4 = bVar1;
    if ((!bVar1) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_019e9468;
      uVar8 = FUN_00d50b00();
      bVar4 = true;
    }
LAB_019e94ce:
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    lVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar8 = FUN_00d50b00();
      }
      bVar4 = true;
      if ((bVar1) && (lVar3 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      goto LAB_019e94ce;
    }
    if ((bVar1) && (lVar3 != 0)) {
      uVar8 = FUN_00d50b20();
    }
LAB_019e9468:
    local_40 = '\0';
    bVar4 = true;
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar8 = FUN_00d459e0();
    *(int *)(this_ptr + 0x44) = (int)uVar8;
  }
  lVar3 = g_027e1478;
  if (g_027e1478 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_90 = lVar3;
  local_88 = '\x01';
  FUN_000175c0(uVar8,&local_90);
  if (local_48 == lVar2) {
    lVar3 = lVar2;
    bVar1 = bVar4;
    if ((!bVar4) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_019e9586;
      FUN_00d50b00();
      bVar1 = true;
    }
LAB_019e95e8:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar1 = true;
      if ((bVar4) && (lVar2 != 0)) {
        FUN_00d50b20();
        bVar1 = true;
      }
      goto LAB_019e95e8;
    }
    if ((bVar4) && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_019e9586:
    local_40 = '\0';
    bVar1 = true;
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    uVar6 = FUN_00d459e0();
    *(void*)((int64_t)this_ptr + 0x224) = uVar6;
  }
  uVar8 = (**(code **)(*this_ptr + 0x540))();
  local_80 = g_027e1480;
  if (g_027e1480 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_78 = '\x01';
  FUN_000175c0(uVar8,&local_80);
  if (local_48 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = local_48;
    if (local_40 != '\0') goto LAB_019e96a7;
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_019e96a7:
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00dd6ab0();
    (**(code **)(*this_ptr + 0x518))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  if ((bVar1) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return;
}

