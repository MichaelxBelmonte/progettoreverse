// Function: FUN_01d1ae90
// Address: 01d1ae90
// Size: 1619 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"
//   "GNComboBox"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d1ae90(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_R12;
  undefined7 uVar12;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  char cVar13;
  undefined4 uVar14;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  char local_40;
  undefined8 *local_38;
  
  local_60 = (longlong *)0x0;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  uVar14 = FUN_01ccad60();
  plVar4 = local_48;
  if (local_48 == (longlong *)0x0) {
    uVar9 = 0;
    plVar10 = (longlong *)0x0;
joined_r0x01d1af10:
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
  }
  else {
    uVar12 = (undefined7)((ulonglong)unaff_R12 >> 8);
    if (local_40 == '\0') {
      uVar14 = FUN_00d50b00();
      uVar9 = CONCAT71(uVar12,1);
      plVar10 = plVar4;
      local_60 = plVar4;
      goto joined_r0x01d1af10;
    }
    local_60 = local_48;
    uVar9 = CONCAT71(uVar12,1);
    plVar10 = local_48;
  }
  lVar11 = DAT_027edfd8;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    cVar13 = '\0';
    local_58 = (longlong *)0x0;
    bVar2 = false;
  }
  else {
    if (DAT_027edfd8 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_d0 = lVar11;
    local_c8 = '\x01';
    FUN_01ccaae0(uVar14,&local_d0);
    local_70 = local_48;
    if (local_48 == (longlong *)0x0) {
      local_70 = (longlong *)0x0;
      local_68 = 0;
    }
    else if (local_40 == '\0') {
      uVar8 = FUN_00d50b00();
      local_68 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      local_68 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_01d25cb0();
    local_58 = local_48;
    if (local_48 == (longlong *)0x0) {
      bVar2 = false;
      local_58 = (longlong *)0x0;
    }
    else {
      if (((local_40 == '\0') && (uVar14 = FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      bVar2 = true;
      if (0 < *(int *)((longlong)local_58 + 0xc)) {
        lVar11 = 0;
        local_50 = uVar9;
        local_38 = puVar7;
        do {
          lVar3 = DAT_027edfd8;
          plVar1 = *(longlong **)(local_58[2] + lVar11 * 8);
          if (DAT_027edfd8 != 0) {
            uVar14 = FUN_00d50b00();
          }
          local_c0 = lVar3;
          local_b8 = '\x01';
          uVar14 = FUN_01ccab60(uVar14,&local_c0);
          local_80 = local_90;
          local_78 = 0;
          if (local_88 == '\0') {
            if (local_90 != 0) {
              uVar14 = FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_78 = '\x01';
          uVar14 = (**(code **)(*plVar1 + 0x98))(uVar14,&local_80);
          plVar1 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (longlong *)0x0) && (uVar14 = FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              uVar14 = FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            local_40 = '\0';
            local_48 = plVar1;
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar14 = FUN_00d50b20();
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)((longlong)local_58 + 0xc));
        bVar2 = true;
        uVar9 = local_50;
        puVar7 = local_38;
      }
    }
    cVar13 = (char)local_68;
    if ((DAT_027f94e0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      local_50 = uVar9;
      local_38 = puVar7;
      _DAT_026efe08 = FUN_000f5df0();
      _DAT_026efdf0 = "GNPopUpButton";
      _DAT_026efdf8 = 0x240;
      _DAT_026efe00 = FUN_001e3bf0;
      _DAT_026efe10 = 0;
      uRam00000000026efe18 = 0;
      _DAT_026efe20 = 0;
      uRam00000000026efe28 = 0;
      _DAT_026efe30 = 0;
      uRam00000000026efe38 = 0;
      _DAT_026efe40 = 0;
      uRam00000000026efe48 = 0;
      _DAT_026efe50 = 0;
      uRam00000000026efe58 = 0;
      _DAT_026efe60 = 0;
      uRam00000000026efe68 = 0;
      _DAT_026efe70 = 0;
      uRam00000000026efe78 = 0;
      _DAT_026efe80 = 0;
      uRam00000000026efe88 = 0;
      _DAT_026efe90 = 0;
      uRam00000000026efe98 = 0;
      _DAT_026efea0 = 0;
      uRam00000000026efea8 = 0;
      _DAT_026efeb0 = 0;
      ___cxa_guard_release();
      cVar13 = (char)local_68;
      uVar9 = local_50;
      puVar7 = local_38;
    }
    if (plVar10 == (longlong *)0x0) {
LAB_01d1b232:
      if (DAT_02802688 != (longlong *)0x0) goto LAB_01d1b23f;
LAB_01d1b28e:
      plVar10 = local_60;
      if ((DAT_027f5f80 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        local_50 = uVar9;
        local_38 = puVar7;
        _DAT_027ef558 = FUN_001f8a30();
        _DAT_027ef540 = "GNComboBox";
        _DAT_027ef548 = 0x268;
        _DAT_027ef550 = FUN_01d0cdd0;
        _DAT_027ef560 = 0;
        uRam00000000027ef568 = 0;
        _DAT_027ef570 = 0;
        uRam00000000027ef578 = 0;
        _DAT_027ef580 = 0;
        uRam00000000027ef588 = 0;
        _DAT_027ef590 = 0;
        uRam00000000027ef598 = 0;
        _DAT_027ef5a0 = 0;
        uRam00000000027ef5a8 = 0;
        _DAT_027ef5b0 = 0;
        uRam00000000027ef5b8 = 0;
        _DAT_027ef5c0 = 0;
        uRam00000000027ef5c8 = 0;
        _DAT_027ef5d0 = 0;
        uRam00000000027ef5d8 = 0;
        _DAT_027ef5e0 = 0;
        uRam00000000027ef5e8 = 0;
        _DAT_027ef5f0 = 0;
        uRam00000000027ef5f8 = 0;
        _DAT_027ef600 = 0;
        ___cxa_guard_release();
        cVar13 = (char)local_68;
        puVar7 = local_38;
      }
      plVar1 = DAT_02802688;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar1 = DAT_02802688;
        if (cVar5 != '\0') {
          plVar1 = local_60;
        }
      }
      if (plVar1 != (longlong *)0x0) {
        local_98 = '\0';
        local_a0 = puVar7;
        FUN_01d0a580();
        if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d1b232;
      if (local_60 == (longlong *)0x0) goto LAB_01d1b28e;
LAB_01d1b23f:
      local_a8 = '\0';
      local_b0 = puVar7;
      FUN_01d6f820();
      if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar10 = local_70;
    if (puVar7 == (undefined8 *)0x0) goto LAB_01d1b326;
  }
  FUN_00d50b20();
LAB_01d1b326:
  if ((bVar2) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar13 != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar4 != (longlong *)0x0) && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


