// Function: FUN_007f3f10
// Address: 007f3f10
// Size: 1584 bytes
// Class: GNData
// String references:
//   "GNData"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_007f3f10(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *unaff_RDI;
  longlong **pplVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  longlong *local_d8;
  char local_d0;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  char local_40;
  
  lVar2 = DAT_0270b870;
  if (DAT_0270b870 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  pplVar10 = &local_48;
  FUN_000175c0(param_1,&local_c0);
  plVar3 = local_48;
  if ((DAT_026d0220 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_02789148 = FUN_00d4fe50();
    DAT_02789130 = "GNData";
    _DAT_02789138 = 0x28;
    _DAT_02789140 = FUN_000378a0;
    _DAT_02789150 = 0;
    uRam0000000002789158 = 0;
    _DAT_02789160 = 0;
    uRam0000000002789168 = 0;
    _DAT_02789170 = 0;
    uRam0000000002789178 = 0;
    _DAT_02789180 = 0;
    uRam0000000002789188 = 0;
    _DAT_02789190 = 0;
    uRam0000000002789198 = 0;
    _DAT_027891a0 = 0;
    uRam00000000027891a8 = 0;
    _DAT_027891b0 = 0;
    uRam00000000027891b8 = 0;
    _DAT_027891c0 = 0;
    uRam00000000027891c8 = 0;
    _DAT_027891d0 = 0;
    uRam00000000027891d8 = 0;
    _DAT_027891e0 = 0;
    uRam00000000027891e8 = 0;
    _DAT_027891f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (longlong *)0x0) {
LAB_007f3f9f:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_007f3f9f;
  }
  local_58 = *pplVar10;
  if (local_58 == (longlong *)0x0) {
    local_50 = 1;
    local_58 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar10 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar10 + 1) = 0;
    }
    local_50 = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != (longlong *)0x0) {
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_025f02c0;
    puVar8[2] = &DAT_025f0658;
    puVar8[3] = 0;
    *(undefined2 *)(puVar8 + 4) = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    (*DAT_025f02d8)();
    FUN_01553170();
    FUN_01553180();
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    (*DAT_02572370)();
    if ((longlong *)*param_3 != (longlong *)0x0) {
      local_40 = '\0';
      local_48 = (longlong *)*param_3;
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar11 = FUN_00ce71c0();
    local_b0 = DAT_0272f9d8;
    if (DAT_0272f9d8 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_a8 = '\x01';
    (**(code **)(*local_d8 + 0x400))(uVar11,&local_b0);
    plVar3 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_48 = plVar3;
    local_40 = '\0';
    FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_98 = '\0';
    local_a0 = puVar8;
    uVar11 = FUN_015ac130();
    if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    local_90 = local_58;
    local_88 = '\0';
    FUN_0159bec0(uVar11,&local_90);
    plVar3 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      local_60 = plVar3;
      uVar9 = FUN_01553190();
      plVar3 = local_48;
      if (local_48 == (longlong *)0x0) {
        local_4c = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
          local_4c = 0;
          if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_007f42ca;
          FUN_00d50b20();
        }
        local_4c = 0;
      }
LAB_007f42ca:
      FUN_01553210();
      plVar4 = local_48;
      if (local_48 == (longlong *)0x0) {
        bVar1 = true;
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
          bVar1 = false;
          if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_007f4309;
          FUN_00d50b20();
        }
        bVar1 = false;
      }
LAB_007f4309:
      cVar6 = FUN_007f4950();
      if ((cVar6 == '\0') && (cVar6 = FUN_007f4950(), cVar6 == '\0')) {
        local_80 = local_60;
        local_78 = '\0';
        FUN_0015b0f0(extraout_XMM0_Da,1);
        plVar5 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        *unaff_RDI = plVar5;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (!bVar1 && plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_4c == '\0' && plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        goto LAB_007f4397;
      }
      if (!bVar1 && plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((char)local_4c == '\0' && plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_007f4397:
  if ((char)local_50 == '\0' && local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


