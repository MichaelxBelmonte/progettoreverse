// Function: FUN_01e23740
// Address: 01e23740
// Size: 3122 bytes
// Class: GNRootView
// String references:
//   "GNRootView"


/* WARNING: Removing unreachable block (ram,0x01e23d53) */
/* WARNING: Removing unreachable block (ram,0x01e23a04) */
/* WARNING: Removing unreachable block (ram,0x01e23a10) */
/* WARNING: Removing unreachable block (ram,0x01e23d47) */
/* WARNING: Removing unreachable block (ram,0x01e24072) */
/* WARNING: Removing unreachable block (ram,0x01e2407e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01e23740(char param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *in_RDX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar12;
  float extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar15 = (undefined4)param_2;
  FUN_01e24810();
  if (((*in_RDX == 0) || (iVar4 = FUN_01d3b630(), iVar4 != 1)) && (param_1 != '\0')) {
    lVar8 = *unaff_RSI;
  }
  else {
    DAT_028b9519 = '\x01';
    lVar8 = *unaff_RSI;
  }
  if (lVar8 != 0) {
    FUN_01e42030();
    plVar5 = local_40;
    plVar7 = DAT_028b9508;
    if (DAT_028b9508 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar5 = local_40;
        }
      }
      else {
        local_38 = '\0';
      }
      bVar9 = DAT_028b9508 != (longlong *)0x0;
      plVar7 = plVar5;
      DAT_028b9508 = plVar5;
      if (bVar9) {
        plVar5 = (longlong *)FUN_00d50b20();
        plVar7 = local_40;
      }
    }
    if ((plVar7 != (longlong *)0x0) && (DAT_028b9510 == '\0')) {
      DAT_028b9510 = '\x01';
      plVar5 = (longlong *)FUN_00e8cb90();
      plVar7 = local_40;
    }
    if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
      plVar5 = (longlong *)FUN_00d50b20();
    }
    goto LAB_01e2395a;
  }
  if ((DAT_026e85e0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027f4bd8 = FUN_0006d940();
    _DAT_027f4bc0 = "GNRootView";
    _DAT_027f4bc8 = 0x1d0;
    _DAT_027f4bd0 = FUN_00097da0;
    _DAT_027f4be0 = 0;
    uRam00000000027f4be8 = 0;
    _DAT_027f4bf0 = 0;
    uRam00000000027f4bf8 = 0;
    _DAT_027f4c00 = 0;
    uRam00000000027f4c08 = 0;
    _DAT_027f4c10 = 0;
    uRam00000000027f4c18 = 0;
    _DAT_027f4c20 = 0;
    uRam00000000027f4c28 = 0;
    _DAT_027f4c30 = 0;
    uRam00000000027f4c38 = 0;
    _DAT_027f4c40 = 0;
    uRam00000000027f4c48 = 0;
    _DAT_027f4c50 = 0;
    uRam00000000027f4c58 = 0;
    _DAT_027f4c60 = 0;
    uRam00000000027f4c68 = 0;
    _DAT_027f4c70 = 0;
    uRam00000000027f4c78 = 0;
    _DAT_027f4c80 = 0;
    ___cxa_guard_release();
  }
  local_78 = FUN_00e86210();
  local_70 = 0;
  uVar12 = extraout_XMM0_Qa;
  if (local_78 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_70 = '\x01';
  plVar5 = (longlong *)FUN_01d824e0(uVar12,&local_78);
  plVar7 = DAT_028b9508;
  if (DAT_028b9508 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_01e2384c;
      }
      FUN_00d50b00();
      plVar3 = DAT_028b9508;
      DAT_028b9508 = local_40;
      plVar5 = (longlong *)0x0;
      plVar7 = local_40;
      if (plVar3 == (longlong *)0x0) goto LAB_01e23911;
    }
    else {
      local_38 = '\0';
      plVar7 = local_40;
LAB_01e2384c:
      bVar9 = DAT_028b9508 == (longlong *)0x0;
      DAT_028b9508 = plVar7;
      if (bVar9) {
        plVar5 = (longlong *)0x0;
        goto LAB_01e23911;
      }
    }
    plVar5 = (longlong *)FUN_00d50b20();
    plVar7 = local_40;
  }
LAB_01e23911:
  if ((plVar7 != (longlong *)0x0) && (DAT_028b9510 == '\0')) {
    DAT_028b9510 = '\x01';
    plVar5 = (longlong *)FUN_00e8cb90();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    plVar5 = (longlong *)FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    plVar5 = (longlong *)FUN_00d50b20();
  }
LAB_01e2395a:
  if (DAT_028b9508 != (longlong *)0x0) {
    FUN_01d907a0();
    local_48 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    uVar12 = FUN_01d3abf0();
    *(undefined8 *)(unaff_RDI + 0x44) = uVar12;
    FUN_01d3abf0();
    FUN_01f514b0();
    uVar12 = FUN_01f51370();
    *(undefined8 *)(unaff_RDI + 0x34) = uVar12;
    *(ulonglong *)(unaff_RDI + 0x3c) = CONCAT44(uVar16,uVar15);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int *)(unaff_RDI + 0xc) != -1) {
      fVar11 = (float)FUN_01e21f60();
      fVar17 = 0.0;
      *(float *)(unaff_RDI + 0x44) = *(float *)(unaff_RDI + 0x44) - fVar11;
      if (*(int *)(unaff_RDI + 0x10) != -1) {
        FUN_01e21df0();
        *(float *)(unaff_RDI + 0x48) =
             *(float *)(unaff_RDI + 0x48) - (extraout_XMM0_Db + fVar17 + DAT_02390d00);
      }
    }
    fVar11 = DAT_0239011c;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    *(float *)(unaff_RDI + 0x44) =
         *(float *)(unaff_RDI + 0x44) - (float)*(undefined8 *)(unaff_RDI + 0x28) * DAT_0239011c;
    *(float *)(unaff_RDI + 0x48) =
         *(float *)(unaff_RDI + 0x48) -
         (float)((ulonglong)*(undefined8 *)(unaff_RDI + 0x28) >> 0x20) * fVar11;
    if (*unaff_RSI != 0) {
      FUN_01e3f820();
      uVar12 = FUN_01e46ed0();
      *(undefined8 *)(unaff_RDI + 0x44) = uVar12;
    }
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = &DAT_026a3350;
    puVar6[2] = &DAT_026a37c8;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(undefined2 *)(puVar6 + 5) = 0;
    puVar6[6] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x37) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x69) = 0;
    puVar6[0xf] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x7f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x8c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
    uVar12 = (*DAT_026a3368)();
    if (DAT_028b94c8 == puVar6) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = DAT_028b94c8 != (undefined8 *)0x0;
      DAT_028b94c8 = puVar6;
      if (bVar10) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (DAT_028b94d0 == '\0') {
      DAT_028b94d0 = '\x01';
      uVar12 = FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      uVar12 = FUN_00d50b20();
    }
    plVar5 = DAT_028b9508;
    local_60 = 0;
    if (DAT_028b9508 != (longlong *)0x0) {
      uVar12 = FUN_00d50b00();
    }
    local_68 = plVar5;
    local_60 = '\x01';
    FUN_01e5b6f0(uVar12,&local_68);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_01e21f60();
    auVar13._0_4_ = (float)uVar12 + fVar11;
    auVar13._4_4_ = (float)((ulonglong)uVar12 >> 0x20) + fVar17;
    auVar13._8_4_ = (float)extraout_XMM0_Qb + fVar18;
    auVar13._12_4_ = (float)((ulonglong)extraout_XMM0_Qb >> 0x20) + fVar19;
    auVar14._4_4_ = fVar17;
    auVar14._0_4_ = fVar11;
    auVar14._8_4_ = fVar18;
    auVar14._12_4_ = fVar19;
    auVar14 = blendps(auVar13,auVar14,2);
    *(longlong *)(unaff_RDI + 0x4c) = auVar14._0_8_;
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar5 = (longlong)&DAT_0269f1a0;
    plVar5[2] = (longlong)&DAT_0269fac8;
    plVar5[0x27] = 0;
    *(undefined1 *)(plVar5 + 0x28) = 0;
    FUN_00d500e0();
    if (DAT_028b94a8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = DAT_028b94a8 != (longlong *)0x0;
      DAT_028b94a8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (DAT_028b94b0 == '\0') {
      DAT_028b94b0 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    plVar5 = DAT_028b94a8;
    FUN_00d50b00();
    plVar5[0x27] = unaff_RDI;
    FUN_00d50b20();
    (**(code **)(*DAT_028b94a8 + 0x4d0))();
    FUN_01e5bc80();
    FUN_01e5bb70(*(undefined8 *)(unaff_RDI + 0x44));
    FUN_01e5ca90();
    plVar5 = local_40;
    local_58 = DAT_028b94a8;
    local_50 = 0;
    if (DAT_028b94a8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*plVar5 + 0x450))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar5 = (longlong)&DAT_0269f1a0;
    plVar5[2] = (longlong)&DAT_0269fac8;
    plVar5[0x27] = 0;
    *(undefined1 *)(plVar5 + 0x28) = 0;
    FUN_00d500e0();
    if (DAT_028b94b8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = DAT_028b94b8 != (longlong *)0x0;
      DAT_028b94b8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (DAT_028b94c0 == '\0') {
      DAT_028b94c0 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    plVar5 = DAT_028b94b8;
    *(undefined1 *)(DAT_028b94b8 + 0x28) = 1;
    FUN_00d50b00();
    plVar5[0x27] = unaff_RDI;
    FUN_00d50b20();
    (**(code **)(*DAT_028b94b8 + 0x4d0))();
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x27] = 0;
    *(undefined4 *)(plVar5 + 0x28) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x17c) = 0;
    plVar5[0x30] = 0;
    *(undefined1 *)(plVar5 + 0x31) = 0;
    plVar5[0x29] = 0;
    plVar5[0x2a] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x154) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x15c) = 0;
    plVar5[0x2d] = 0;
    plVar5[0x2e] = 0;
    *(undefined1 *)(plVar5 + 0x2f) = 0;
    *plVar5 = (longlong)&DAT_0269e7e8;
    plVar5[2] = (longlong)&DAT_0269f160;
    plVar5[0x32] = 0;
    FUN_00d500e0();
    if (DAT_028b94f8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = DAT_028b94f8 != (longlong *)0x0;
      DAT_028b94f8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (DAT_028b9500 == '\0') {
      DAT_028b9500 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    (**(code **)(*DAT_028b94f8 + 0x4d0))();
    uVar12 = _DAT_023dcd04;
    *(undefined8 *)(unaff_RDI + 100) = _DAT_023dccfc;
    *(undefined8 *)(unaff_RDI + 0x6c) = uVar12;
    uVar12 = _DAT_023dcd04;
    *(undefined8 *)(unaff_RDI + 0x54) = _DAT_023dccfc;
    *(undefined8 *)(unaff_RDI + 0x5c) = uVar12;
    plVar5 = DAT_028b94f8;
    lVar8 = *(longlong *)(unaff_RDI + 0x20);
    lVar1 = DAT_028b94f8[0x32];
    if (lVar1 != lVar8) {
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      plVar5[0x32] = lVar8;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01d3abf0();
    FUN_01e22920();
    FUN_01e5d9c0();
    if (*(int *)(unaff_RDI + 0xc) == -1) {
      *(undefined4 *)(unaff_RDI + 0x10) = 0xffffffff;
    }
    FUN_01e1f2c0();
    *(undefined1 *)(unaff_RDI + 0x31) = 1;
    (**(code **)(*DAT_028b94a8 + 0x3c0))();
    *(undefined1 *)(unaff_RDI + 0x31) = 0;
    FUN_01e42030();
    (**(code **)(*local_40 + 0x6e0))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((longlong)*(int *)(unaff_RDI + 0xc) != -1) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) +
         (longlong)*(int *)(unaff_RDI + 0xc) * 8) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      if ((longlong)*(int *)(unaff_RDI + 0xc) == -1) {
        lVar8 = 0;
        bVar9 = true;
      }
      else {
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) +
                 (longlong)*(int *)(unaff_RDI + 0xc) * 8);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_00d50b00();
        }
        bVar9 = false;
      }
      FUN_01e25fd0();
      plVar5 = local_40;
      if (local_40 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (!bVar9 && lVar8 != 0) {
        FUN_00d50b20();
      }
      if (((DAT_028b9519 == '\0') && (plVar5 != (longlong *)0x0)) &&
         (iVar4 = FUN_01d5b230(), iVar4 != 0)) {
        FUN_01d62b90();
        plVar7 = *(longlong **)(unaff_RDI + 0x20);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == plVar7) {
          FUN_01d62b80();
        }
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01e23600();
    FUN_01e236a0();
    if ((DAT_028b94c8 != (undefined8 *)0x0) && (FUN_01e5e740(), DAT_028b94c8 != (undefined8 *)0x0))
    {
      FUN_00d50130();
    }
    if (DAT_028b94b8 != (longlong *)0x0) {
      FUN_00d50130();
    }
    if (DAT_028b94f8 != (longlong *)0x0) {
      FUN_00d50130();
    }
    if (DAT_028b94f8 != (longlong *)0x0) {
      DAT_028b94f8 = (longlong *)0x0;
      FUN_00d50b20();
    }
    local_48 = (longlong *)0x0;
    FUN_00d50b20();
    if (DAT_028b94a8 != (longlong *)0x0) {
      DAT_028b94a8 = (longlong *)0x0;
      FUN_00d50b20();
    }
    if (DAT_028b94c8 != (undefined8 *)0x0) {
      DAT_028b94c8 = (undefined8 *)0x0;
      FUN_00d50b20();
    }
    if (DAT_028b94b8 != (longlong *)0x0) {
      DAT_028b94b8 = (longlong *)0x0;
      FUN_00d50b20();
    }
    plVar5 = (longlong *)FUN_01e24a90();
    DAT_028b9519 = '\0';
  }
  return plVar5;
}


