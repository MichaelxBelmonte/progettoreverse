// Function: FUN_004f83c0
// Address: 004f83c0
// Size: 3428 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"


/* WARNING: Removing unreachable block (ram,0x004f8534) */
/* WARNING: Removing unreachable block (ram,0x004f8540) */
/* WARNING: Removing unreachable block (ram,0x004f85ae) */
/* WARNING: Removing unreachable block (ram,0x004f85ba) */
/* WARNING: Removing unreachable block (ram,0x004f8aa2) */
/* WARNING: Removing unreachable block (ram,0x004f8aae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_004f83c0(pthread_key_t param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  undefined8 *unaff_RDI;
  longlong **pplVar10;
  bool bVar11;
  undefined4 uVar12;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  undefined8 local_48;
  longlong *local_40;
  char local_38;
  
  local_48 = param_2;
  FUN_004f9670();
  plVar5 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_004f7c70();
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  local_70 = local_58;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar5 + 0x18))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_012f4ba0();
  plVar7 = DAT_02708bf0;
  if (DAT_02708bf0 != (longlong *)0x0) {
    uVar12 = FUN_00d50b00();
  }
  local_58 = plVar7;
  local_50 = '\0';
  pplVar10 = &local_58;
  FUN_00ca0840(uVar12,pplVar10);
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5f80();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e78c0();
  plVar7 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar7[7] = 0;
    plVar7[8] = 0;
    pVar9 = 0x25d31f0;
    *plVar7 = (longlong)&DAT_025d31f0;
    *(undefined4 *)(plVar7 + 9) = 0;
    plVar7[10] = 0;
    *(undefined1 *)(plVar7 + 0xb) = 0;
    *(undefined8 *)((longlong)plVar7 + 0x5c) = 0;
    *(undefined8 *)((longlong)plVar7 + 99) = 0;
    (*DAT_025d3208)();
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    param_1 = 0x2607248;
    *puVar8 = &DAT_02607248;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    *(undefined8 *)((longlong)puVar8 + 0x76) = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = 0;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    puVar8[0x1a] = 0;
    (*DAT_02607260)();
    FUN_012c64a0();
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_50 = '\x01';
    local_58 = plVar7;
    FUN_00d50b20();
  }
  else {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    plVar7 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
joined_r0x004f8796:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        local_58 = plVar7;
        local_50 = '\x01';
        goto joined_r0x004f8796;
      }
      local_58 = local_40;
      local_50 = '\x01';
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((DAT_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      param_1 = 0x15ef30;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 == (longlong *)0x0) {
LAB_004f88d4:
      pplVar10 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_004f88d4;
    }
    cVar3 = *(char *)(pplVar10 + 1);
    if ((cVar3 == '\0') || (*pplVar10 == (longlong *)0x0)) {
      if (*pplVar10 == (longlong *)0x0) goto LAB_004f8a46;
    }
    else {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar7 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      param_1 = 0x2607248;
      *puVar8 = &DAT_02607248;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      *(undefined8 *)((longlong)puVar8 + 0x76) = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x14] = 0;
      puVar8[0x15] = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0;
      puVar8[0x18] = 0;
      puVar8[0x19] = 0;
      puVar8[0x1a] = 0;
      (*DAT_02607260)();
      FUN_012c64a0();
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
LAB_004f8a46:
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar7 = local_58;
  FUN_012e7710();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7900();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e60a0();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012e60e0();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6040();
  FUN_012e6050();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_40;
  FUN_011f2810();
  plVar2 = local_40;
  FUN_004fbac0();
  plVar1 = DAT_02802688;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar10 = &DAT_02802688;
    }
    plVar1 = *pplVar10;
  }
  if (plVar1 == (longlong *)0x0) {
    bVar11 = false;
    plVar1 = local_70;
    goto joined_r0x004f8e02;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar10 = &local_90;
  FUN_011f2810();
  plVar1 = local_90;
  FUN_004fbac0();
  if (plVar1 == (longlong *)0x0) {
LAB_004f8dc1:
    pplVar10 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004f8dc1;
  }
  plVar1 = local_70;
  bVar11 = *pplVar10 != (longlong *)0x0;
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
joined_r0x004f8e02:
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (bVar11) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7d10();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2810();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7d10();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2810();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012de7c0();
    FUN_012de780();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((local_50 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


