// Function: FUN_00bce900
// Address: 00bce900
// Size: 3626 bytes
// Class: GNPlugInWrapperDelegate
// String references:
//   "GNPlugInWrapperDelegate"

void FUN_00bce900(void)

{
  bool bVar1;
  bool bVar2;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar11;
  uint64_t uVar12;
  int64_t *local_a8;
  char local_a0;
  int64_t local_40;
  char local_38;
  
  this_ptr[0xd] = (int64_t)arg1;
  FUN_01f27fe0();
  if ((g_026cbca0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026cbc88 = "GNPlugInWrapperDelegate";
    g_026cbc98 = 0;
    g_026cbc90 = 0;
    ___cxa_guard_release();
  }
  if (local_a8 == (int64_t *)0x0) {
    lVar6 = 0;
  }
  else {
    uVar12 = (**(code **)(*local_a8 + 0x360))();
    lVar6 = FUN_00e86120(uVar12,1);
  }
  (**(code **)(*(int64_t *)((int64_t)local_a8 + lVar6) + 0x20))();
  lVar6 = this_ptr[5];
  lVar7 = lVar6;
  if (lVar6 != local_40) {
    lVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar7 = 0;
        goto LAB_00bce991;
      }
      FUN_00d50b00();
      lVar6 = this_ptr[5];
      this_ptr[5] = local_40;
    }
    else {
      local_38 = '\0';
LAB_00bce991:
      this_ptr[5] = lVar7;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
      lVar7 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((g_028a5780 == (int64_t *)0x0) || (g_028a5789 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5780 == (int64_t *)0x0) {
      plVar10 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar10 = (int64_t)&g_02573318;
      (*g_02573330)();
      if (g_028a5770 == plVar10) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar11 = g_028a5770 != (int64_t *)0x0;
        g_028a5770 = plVar10;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (g_028a5778 == '\0') {
        g_028a5778 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      plVar10 = (int64_t *)FUN_00e8fc40();
      FUN_00bdab20();
      (**(code **)(*plVar10 + 0x18))();
      if (g_028a5780 == plVar10) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar11 = g_028a5780 != (int64_t *)0x0;
        g_028a5780 = plVar10;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (g_028a5788 == '\0') {
        g_028a5788 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_02578b00;
      (*g_02578b18)();
      if (g_028a5790 == puVar8) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar11 = g_028a5790 != (void*)0x0;
        g_028a5790 = puVar8;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (g_028a5798 == '\0') {
        g_028a5798 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028a5789 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5789 = '\x01';
      FUN_00e8cb70();
    }
  }
  plVar9 = g_028a5780;
  plVar10 = (int64_t *)this_ptr[0xb];
  if (plVar10 != g_028a5780) {
    if (g_028a5780 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    this_ptr[0xb] = (int64_t)plVar9;
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar9 = (int64_t *)FUN_00e8fc40();
  FUN_00bdbf50();
  (**(code **)(*plVar9 + 0x18))();
  plVar10 = (int64_t *)this_ptr[0xc];
  if (plVar10 == plVar9) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0xc] = (int64_t)plVar9;
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar6 = this_ptr[5];
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_00b690f0();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*g_028a5770 + 0x368))();
  lVar6 = this_ptr[0xc];
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_00b68030();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*g_028a5770 + 0x378))();
  FUN_00b33530();
  FUN_00b335a0();
  (**(code **)(*(int64_t *)this_ptr[5] + 0x3a0))();
  (**(code **)(*(int64_t *)this_ptr[5] + 0x398))(g_02410f78);
  (**(code **)(this_ptr[2] + 0x10))();
  FUN_00d50b00();
  FUN_00b32c10();
  if (this_ptr + 2 != (int64_t *)0x0) {
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(this_ptr[3] + 0x10))();
  FUN_00d50b00();
  FUN_00b34cd0();
  if (this_ptr + 3 != (int64_t *)0x0) {
    (**(code **)(this_ptr[3] + 0x10))();
    FUN_00d50b20();
  }
  if (this_ptr[0xd] == 0) {
    return;
  }
  plVar10 = (int64_t *)FUN_00e8fc40();
  FUN_0000ee70();
  (**(code **)(*plVar10 + 0x18))();
  FUN_00b30410();
  uVar12 = FUN_00003080();
  FUN_00d91a70(uVar12,1);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00b30350();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00003040();
  FUN_00d91a70(uVar12,1);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00b303c0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*arg1 + 0x68))();
  switch(uVar3) {
  case 0xb:
    FUN_00b303b0();
    lVar6 = g_027662b8;
    if (g_027662b8 != 0) {
      FUN_00d50b00();
    }
    lVar7 = g_026fb928;
    if (g_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    break;
  case 0xc:
    FUN_00b303b0();
    lVar6 = g_027662a8;
    if (g_027662a8 != 0) {
      FUN_00d50b00();
    }
    lVar7 = g_026fb928;
    if (g_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    break;
  default:
    FUN_00d50b20();
    lVar6 = g_02766278;
    if (g_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar7 = g_026fb928;
    if (g_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    bVar1 = true;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    plVar10 = (int64_t *)0x0;
    goto LAB_00bcf2ac;
  case 0xf:
    FUN_00b303b0();
    lVar6 = g_027662c0;
    if (g_027662c0 != 0) {
      FUN_00d50b00();
    }
    lVar7 = g_026fb928;
    if (g_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    break;
  case 0x10:
    FUN_00b303b0();
    lVar6 = g_027662b0;
    if (g_027662b0 != 0) {
      FUN_00d50b00();
    }
    lVar7 = g_026fb928;
    if (g_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  bVar1 = false;
LAB_00bcf2ac:
  uVar12 = FUN_00b34ba0();
  FUN_00bcdd30(uVar12,0x200);
  lVar6 = this_ptr[7];
  lVar7 = lVar6;
  if (lVar6 == local_40) goto LAB_00bcf352;
  lVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar7 = 0;
      goto LAB_00bcf310;
    }
    FUN_00d50b00();
    lVar6 = this_ptr[7];
    this_ptr[7] = local_40;
  }
  else {
    local_38 = '\0';
LAB_00bcf310:
    this_ptr[7] = lVar7;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
    lVar7 = local_40;
  }
LAB_00bcf352:
  if ((local_38 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_00b34c20();
  (**(code **)(*this_ptr + 0x3d0))();
  lVar6 = g_027662c8;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    lVar6 = g_027662c8;
  }
  g_027662c8 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x3d8))();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  lVar6 = g_027662d0;
  if (g_027662d0 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x3e0))();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  lVar6 = g_027662d8;
  if (g_027662d8 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((g_02802504 == 0) &&
     (g_02802504 = (**(code **)(*(int64_t *)this_ptr[0xd] + 0xb8))(), g_02802504 == 0)) {
    (**(code **)(*this_ptr + 0x3d0))();
    FUN_00d99d60();
    lVar6 = g_027662e0;
    if (g_027662e0 != 0) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00d90eb0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    g_02802504 = (uVar4 & 0xff) * 2 + -1;
  }
  iVar5 = (**(code **)(*(int64_t *)this_ptr[0xd] + 0xb0))();
  if ((iVar5 == 1) || (g_02802510 != '\0')) {
    FUN_00b67ff0();
  }
  if (!bVar1 && plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

