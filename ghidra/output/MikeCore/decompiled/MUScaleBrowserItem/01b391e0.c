// Function: FUN_01b391e0
// Address: 01b391e0
// Size: 4877 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"


/* WARNING: Removing unreachable block (ram,0x01b39b8d) */
/* WARNING: Removing unreachable block (ram,0x01b39b99) */
/* WARNING: Removing unreachable block (ram,0x01b39ad7) */
/* WARNING: Removing unreachable block (ram,0x01b39ae3) */
/* WARNING: Removing unreachable block (ram,0x01b39a21) */
/* WARNING: Removing unreachable block (ram,0x01b39a2d) */
/* WARNING: Removing unreachable block (ram,0x01b3a3f3) */
/* WARNING: Removing unreachable block (ram,0x01b3a3ff) */
/* WARNING: Removing unreachable block (ram,0x01b396e7) */
/* WARNING: Removing unreachable block (ram,0x01b396f3) */
/* WARNING: Removing unreachable block (ram,0x01b394de) */
/* WARNING: Removing unreachable block (ram,0x01b394ea) */
/* WARNING: Removing unreachable block (ram,0x01b3963a) */
/* WARNING: Removing unreachable block (ram,0x01b39646) */
/* WARNING: Removing unreachable block (ram,0x01b39c43) */
/* WARNING: Removing unreachable block (ram,0x01b39c4f) */
/* WARNING: Removing unreachable block (ram,0x01b39ce1) */
/* WARNING: Removing unreachable block (ram,0x01b39ced) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01b391e0(pthread_key_t param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  longlong unaff_RDI;
  longlong lVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  longlong *local_1e8;
  char local_1e0;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_54;
  longlong local_50;
  longlong *local_48;
  char local_40;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar8 = FUN_01b3e280();
  local_68 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_01b392ad;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01b39245:
    local_b0 = 0;
    lVar14 = *(longlong *)(unaff_RDI + 0x120);
    if (lVar14 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_b8 = lVar14;
    cVar4 = (**(code **)(*local_68 + 0x50))();
    uVar8 = extraout_XMM0_Qa_00;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d50b20();
      return 1;
    }
    local_54 = 0;
    plVar12 = *(longlong **)(unaff_RDI + 0x120);
    if (plVar12 != local_68) {
LAB_01b392d5:
      if ((char)local_54 == '\0') {
        uVar8 = FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x120) = local_68;
      if (plVar12 != (longlong *)0x0) {
        local_60 = 0;
        uVar8 = FUN_00d50b20();
      }
    }
  }
  else {
    if (local_48 != (longlong *)0x0) goto LAB_01b39245;
LAB_01b392ad:
    local_54 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    plVar12 = *(longlong **)(unaff_RDI + 0x120);
    uVar8 = extraout_XMM0_Qa;
    if (plVar12 != local_48) goto LAB_01b392d5;
  }
  if ((char)local_54 == '\0') {
    FUN_01b06a50();
    cVar4 = FUN_01aa7eb0();
    uVar8 = extraout_XMM0_Qa_01;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_01f27fe0();
      local_a0 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x90) + 0x10))();
      FUN_00d50b00();
      local_a0 = '\x01';
      local_a8 = (longlong *)(unaff_RDI + 0x90);
      FUN_01f474f0();
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        (**(code **)(*local_a8 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01b06a50();
      FUN_01aa8280();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_01aa5ff0(0);
    }
  }
  if (*(longlong *)(unaff_RDI + 0xe0) != 0) {
    *(undefined8 *)(unaff_RDI + 0xe0) = 0;
    local_60 = 0;
    uVar8 = FUN_00d50b20();
  }
  if ((char)local_54 != '\0') goto LAB_01b39902;
  FUN_017b2910(uVar8,0);
  plVar12 = *(longlong **)(unaff_RDI + 0xd8);
  plVar1 = plVar12;
  plVar11 = plVar12;
  if (plVar12 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0xd8) = 0;
        plVar1 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        plVar12 = *(longlong **)(unaff_RDI + 0xd8);
        *(longlong **)(unaff_RDI + 0xd8) = local_48;
        plVar1 = local_48;
      }
    }
    else {
      local_40 = '\0';
      *(longlong **)(unaff_RDI + 0xd8) = local_48;
      plVar1 = local_48;
    }
    plVar11 = plVar1;
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar1 = *(longlong **)(unaff_RDI + 0xd8);
      plVar11 = local_48;
    }
  }
  if ((local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*local_68 + 0x370))();
    plVar12 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b3a2a1;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_01b3a2a1:
      FUN_017a9f30();
      local_98 = local_48;
      local_90 = 0;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = '\x01';
      cVar4 = (**(code **)(*plVar12 + 0x50))();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        puVar10 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        param_1 = 0x26034e8;
        *puVar10 = &DAT_026034e8;
        puVar10[0xc] = 0;
        *(undefined1 (*) [16])(puVar10 + 7) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar10 + 9) = (undefined1  [16])0x0;
        *(undefined8 *)((longlong)puVar10 + 0x55) = 0;
        (*DAT_02603500)();
        pvVar9 = _pthread_getspecific(param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017b31f0();
        FUN_00d50b20();
      }
      local_60 = 0;
      FUN_00d50b20();
      goto LAB_01b3990b;
    }
  }
  else {
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017aa5e0();
    plVar12 = local_48;
    if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0173b120();
    plVar1 = *(longlong **)(unaff_RDI + 0xe0);
    plVar11 = plVar1;
    if (plVar1 != local_48) {
      if (local_40 == '\0') {
        if (local_48 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
          goto LAB_01b395a9;
        }
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0xe0);
        *(longlong **)(unaff_RDI + 0xe0) = local_48;
        plVar11 = local_48;
      }
      else {
        local_40 = '\0';
        plVar11 = local_48;
LAB_01b395a9:
        *(longlong **)(unaff_RDI + 0xe0) = plVar11;
      }
      param_1 = (pthread_key_t)plVar1;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar11 = local_48;
      }
    }
    if ((local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0173b120();
    plVar1 = *(longlong **)(unaff_RDI + 0xe8);
    plVar11 = plVar1;
    if (plVar1 != local_48) {
      if (local_40 == '\0') {
        if (local_48 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
          goto LAB_01b39683;
        }
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0xe8);
        *(longlong **)(unaff_RDI + 0xe8) = local_48;
        plVar11 = local_48;
      }
      else {
        local_40 = '\0';
        plVar11 = local_48;
LAB_01b39683:
        *(longlong **)(unaff_RDI + 0xe8) = plVar11;
      }
      param_1 = (pthread_key_t)plVar1;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar11 = local_48;
      }
    }
    if ((local_40 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_017583b0();
    if (cVar4 != '\0') {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01758890();
    }
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_0173f680();
    if (cVar4 == '\0') {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736c00();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736c00();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01b39902:
  local_60 = 0;
LAB_01b3990b:
  lVar14 = 0;
  if (*(longlong *)(unaff_RDI + 0xe0) == 0) {
    *(undefined8 *)(unaff_RDI + 0xf0) = 0;
    *(undefined4 *)(unaff_RDI + 0xfc) = 0;
    *(undefined1 *)(unaff_RDI + 0x100) = 0;
    *(undefined4 *)(unaff_RDI + 0x104) = 0xffffffff;
    *(undefined4 *)(unaff_RDI + 0x108) = 0xffffffff;
    *(undefined4 *)(unaff_RDI + 0x10c) = 0xffffffff;
    *(undefined4 *)(unaff_RDI + 0x110) = 0xffffffff;
  }
  else {
    FUN_01b27070();
    plVar12 = local_48;
    if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0')
        ) && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xd8) != 0) {
      local_50 = 0;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0150();
      if (cVar4 == '\0') {
        *(undefined1 *)(unaff_RDI + 0xf0) = 0;
      }
      else {
        *(undefined1 *)(unaff_RDI + 0xf0) = *(undefined1 *)(unaff_RDI + 0x89);
      }
      if (*(char *)(unaff_RDI + 0xfc) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x89);
      }
      *(undefined1 *)(unaff_RDI + 0xfc) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017bff00();
      if (cVar4 == '\0') {
        *(undefined1 *)(unaff_RDI + 0xf1) = 0;
      }
      else {
        *(undefined1 *)(unaff_RDI + 0xf1) = *(undefined1 *)(unaff_RDI + 0x88);
      }
      if (*(char *)(unaff_RDI + 0xfd) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x88);
      }
      *(undefined1 *)(unaff_RDI + 0xfd) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0270();
      if (cVar4 == '\0') {
        *(undefined1 *)(unaff_RDI + 0xf2) = 0;
      }
      else {
        *(undefined1 *)(unaff_RDI + 0xf2) = *(undefined1 *)(unaff_RDI + 0x89);
      }
      if (*(char *)(unaff_RDI + 0xfe) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x89);
      }
      *(undefined1 *)(unaff_RDI + 0xfe) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_017c0260();
      lVar14 = local_50;
      if (cVar4 == '\0') {
        *(undefined1 *)(unaff_RDI + 0xf3) = 0;
      }
      else {
        *(undefined1 *)(unaff_RDI + 0xf3) = *(undefined1 *)(unaff_RDI + 0x88);
      }
      if (*(char *)(unaff_RDI + 0xff) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x88);
      }
      *(undefined1 *)(unaff_RDI + 0xff) = uVar5;
      pvVar9 = _pthread_getspecific(param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar6 = FUN_017c0280();
      *(uint *)(unaff_RDI + 0xf8) = (uint)bVar6;
      if (*(char *)(unaff_RDI + 0x100) == '\0') {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(unaff_RDI + 0x88);
      }
      *(char *)(unaff_RDI + 0x100) = cVar4;
    }
    if (*(char *)(unaff_RDI + 0xf3) == '\0') {
      if (*(char *)(unaff_RDI + 0x88) == '\0') {
        *(undefined4 *)(unaff_RDI + 0xf4) = 1;
        cVar4 = *(char *)(unaff_RDI + 0xfc);
      }
      else {
        *(undefined4 *)(unaff_RDI + 0xf4) = 0;
        cVar4 = *(char *)(unaff_RDI + 0xfc);
      }
    }
    else {
      *(undefined4 *)(unaff_RDI + 0xf4) = 4;
      cVar4 = *(char *)(unaff_RDI + 0xfc);
    }
    if ((cVar4 != '\0') && (*(int *)(unaff_RDI + 0x104) != -1)) {
      if (*(int *)(unaff_RDI + 0x104) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x89);
      }
      *(undefined1 *)(unaff_RDI + 0xf0) = uVar5;
    }
    if ((*(char *)(unaff_RDI + 0xfd) != '\0') && (*(int *)(unaff_RDI + 0x108) != -1)) {
      if (*(int *)(unaff_RDI + 0x108) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x88);
      }
      *(undefined1 *)(unaff_RDI + 0xf1) = uVar5;
    }
    if ((*(char *)(unaff_RDI + 0xfe) != '\0') && (*(int *)(unaff_RDI + 0x10c) != -1)) {
      if (*(int *)(unaff_RDI + 0x10c) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(unaff_RDI + 0x89);
      }
      *(undefined1 *)(unaff_RDI + 0xf2) = uVar5;
    }
    if ((*(char *)(unaff_RDI + 0xff) != '\0') && (*(int *)(unaff_RDI + 0x110) != -1)) {
      *(int *)(unaff_RDI + 0xf4) = *(int *)(unaff_RDI + 0x110);
    }
    FUN_01b381a0();
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01b31bc0();
  lVar2 = DAT_027e4590;
  if ((*(longlong *)(unaff_RDI + 0xe0) == 0) && (lVar14 != 0)) {
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027e4598;
    if (DAT_027e4598 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar3;
    local_120 = '\x01';
    local_118 = 0;
    local_110 = '\0';
    FUN_00d31230(&local_118,&local_128);
    plVar12 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01e11330();
    local_108 = plVar12;
    local_100 = '\0';
    FUN_01e125e0();
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  pplVar13 = &local_48;
  FUN_01ceb020();
  plVar12 = local_48;
  if ((DAT_02737920 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    local_50 = lVar14;
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = (undefined1  [16])0x0;
    _DAT_027e2ea0 = (undefined1  [16])0x0;
    _DAT_027e2eb0 = (undefined1  [16])0x0;
    _DAT_027e2ec0 = (undefined1  [16])0x0;
    _DAT_027e2ed0 = (undefined1  [16])0x0;
    _DAT_027e2ee0 = (undefined1  [16])0x0;
    _DAT_027e2ef0 = (undefined1  [16])0x0;
    _DAT_027e2f00 = (undefined1  [16])0x0;
    _DAT_027e2f10 = (undefined1  [16])0x0;
    _DAT_027e2f20 = (undefined1  [16])0x0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
    lVar14 = local_50;
  }
  if (plVar12 == (longlong *)0x0) {
    pplVar13 = &DAT_02802688;
    plVar12 = DAT_02802688;
    cVar4 = DAT_02802690;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar13 = &DAT_02802688;
    }
    plVar12 = *pplVar13;
    cVar4 = *(char *)(pplVar13 + 1);
  }
  if (cVar4 == '\0') {
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar13 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 == (longlong *)0x0) {
    uVar8 = FUN_00d6f370();
    local_d8 = DAT_027e4588;
    local_e8 = 0;
    local_e0 = '\0';
    if (DAT_027e4588 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_00d6f570(uVar8,&local_d8);
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01aa3f90();
    cVar4 = (**(code **)(*local_48 + 0x3a0))();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d6f370();
      FUN_01aa3f90();
      uVar8 = (**(code **)(*local_1e8 + 0x368))();
      local_78 = local_c8;
      local_70 = 0;
      local_f8 = DAT_027e4588;
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          uVar8 = FUN_00d50b00();
          local_f8 = DAT_027e4588;
        }
      }
      else {
        local_c0 = '\0';
      }
      local_70 = '\x01';
      DAT_027e4588 = local_f8;
      if (local_f8 != 0) {
        local_70 = '\x01';
        uVar8 = FUN_00d50b00();
      }
      local_f0 = '\x01';
      FUN_00d6f570(uVar8,&local_f8);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if ((char)local_54 == '\0') {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (lVar14 != 0)) {
    FUN_00d50b20();
  }
  return 1;
}


