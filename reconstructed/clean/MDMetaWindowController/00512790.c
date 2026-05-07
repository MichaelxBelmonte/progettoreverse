// Function: FUN_00512790
// Address: 00512790
// Size: 2149 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "%@ %@.%@ %@"

void FUN_00512790(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  int iVar9;
  uint64_t uVar10;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  uint64_t local_a8;
  int local_a0;
  int64_t *local_70;
  int64_t *local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01e53f10();
  FUN_01f27fe0();
  FUN_01f2eb50();
  local_70 = local_c0;
  if (local_b8 == '\0') {
    if (((local_c0 != (int64_t *)0x0) && (FUN_00d50b00(), local_b8 != '\0')) &&
       (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_b8 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = '\0';
  local_50 = (int64_t *)0x0;
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_c0 + 0x450))();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') goto LAB_00512c9c;
  FUN_01e561b0();
  FUN_01e48bd0();
  plVar8 = local_c0;
  if (local_b8 == '\0') {
    if (((local_c0 != (int64_t *)0x0) && (FUN_00d50b00(), local_b8 != '\0')) &&
       (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_b8 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) goto LAB_00512c9c;
  local_b8 = '\0';
  local_c0 = (int64_t *)0x0;
  local_68 = plVar8;
  local_b0 = plVar8;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  while( true ) {
    lVar5 = (int64_t)(int)local_a8;
    iVar9 = (int)local_a8 + 1;
    local_a8 = CONCAT44(local_a8._4_4_,iVar9);
    iVar7 = *(int *)((int64_t)local_b0 + 0xc);
    if (iVar7 <= iVar9) break;
    plVar8 = *(int64_t **)(local_b0[2] + 8 + lVar5 * 8);
    local_c0 = plVar8;
    if ((g_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_026e0ab8 = FUN_00015ff0();
      g_026e0aa0 = "MDMetaWindowController";
      g_026e0aa8 = 0x198;
      g_026e0ab0 = FUN_0006dea0;
      g_026e0ac0 = 0;
      ram_00000000026e0ac8 = 0;
      g_026e0ad0 = 0;
      g_026e0b48 = 0;
      ram_00000000026e0b50 = 0;
      g_026e0b58 = 0;
      g_026e0b5a = 1;
      g_026e0ad8 = 0;
      ram_00000000026e0ae0 = 0;
      g_026e0ae8 = 0;
      ram_00000000026e0af0 = 0;
      g_026e0af8 = 0;
      ram_00000000026e0b00 = 0;
      g_026e0b08 = 0;
      ram_00000000026e0b10 = 0;
      g_026e0b18 = 0;
      ram_00000000026e0b20 = 0;
      g_026e0b28 = 0;
      ram_00000000026e0b30 = 0;
      g_026e0b38 = 0;
      ram_00000000026e0b40 = 0;
      g_026e0b63 = 0;
      g_026e0b5b = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar6 = &local_c0;
      if (cVar3 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    plVar8 = *pplVar6;
    if (plVar8 != (int64_t *)0x0) {
      if (*(char *)(pplVar6 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar6 + 1) = 0;
      }
      goto LAB_00512b16;
    }
    if (local_a8._4_4_ != 0) {
      if (local_a8._4_4_ < 1) {
        iVar7 = -local_a8._4_4_;
      }
      else {
        local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 - local_a8._4_4_);
        FUN_00d23690();
        local_a0 = local_a0 + local_a8._4_4_;
        iVar7 = 0;
      }
      local_a8 = CONCAT44(iVar7,(int)local_a8);
    }
  }
  plVar8 = (int64_t *)0x0;
LAB_00512b16:
  FUN_00515020();
  FUN_00d50b20();
  if (plVar8 == (int64_t *)0x0) goto LAB_00512c9c;
  cVar3 = FUN_00651a90();
  plVar8 = g_0270b060;
  if (cVar3 == '\0') {
    FUN_0062abf0();
    FUN_00b34bf0();
    FUN_00b303a0();
    FUN_00b2eeb0();
    plVar2 = local_50;
    plVar8 = local_c0;
    if (local_50 == local_c0) {
      if ((local_48 != '\0') || (local_c0 == (int64_t *)0x0)) goto LAB_00512c4d;
      if (local_b8 == '\0') {
        FUN_00d50b00();
        goto LAB_00512c49;
      }
LAB_00512bfc:
      local_48 = '\x01';
      local_b8 = '\0';
    }
    else {
      if (local_b8 != '\0') {
        local_50 = local_c0;
        if ((local_48 != '\0') && (plVar2 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00512bfc;
      }
      local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_48);
      if (local_c0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar8;
      if (((char)local_68 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00512c49:
      local_48 = '\x01';
LAB_00512c4d:
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_0270b060 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar2 = local_50;
    if (local_50 == plVar8) {
      if ((local_48 != '\0') || (plVar8 == (int64_t *)0x0)) {
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00512c8f;
      }
    }
    else {
      local_50 = plVar8;
      if ((local_48 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_48 = '\x01';
  }
LAB_00512c8f:
  if (iVar9 < iVar7) {
    FUN_00d50b20();
  }
LAB_00512c9c:
  lVar5 = g_0270b068;
  if (g_0270b068 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  local_60 = lVar5;
  local_58 = '\0';
  FUN_000175c0(uVar10,&local_60);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    local_c8 = '\0';
    local_d0 = 0;
  }
  else {
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d97750();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar10 = FUN_00d50b20();
  local_110 = g_0270b070;
  if (g_0270b070 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_108 = '\x01';
  uVar10 = FUN_000175c0(uVar10,&local_110);
  local_100 = g_0270b078;
  if (g_0270b078 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_000175c0(uVar10,&local_100);
  uVar10 = FUN_00513530(&local_60,&local_40,&local_50);
  FUN_00d8cb40(uVar10,&local_c0);
  lVar1 = local_e0;
  if (local_d8 == '\0') {
    if (((local_e0 != 0) && (FUN_00d50b00(), local_d8 != '\0')) && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d8 = '\0';
  }
  FUN_002d10d0();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  local_f0 = lVar1;
  local_e8 = '\0';
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x958))();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

