// Function: FUN_01731410
// Address: 01731410
// Size: 1514 bytes
// Class: GNString


void FUN_01731410(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  char cVar21;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined4 local_a4;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  longlong local_88;
  ulonglong local_80;
  char local_78;
  char local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  char local_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar22 = *unaff_RSI;
  local_69 = (char)unaff_RSI[1];
  if ((local_69 != '\0') && (lVar22 != 0)) {
    FUN_00d50b00();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025fbf30;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined1 *)((longlong)puVar6 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
  puVar6[4] = 0;
  *(undefined1 *)(puVar6 + 5) = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  (*DAT_025fbf48)();
  FUN_0171ab80();
  FUN_01727370();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar11 = &DAT_025683c0;
  *puVar7 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  puVar2 = *(undefined8 **)(unaff_RDI + 0x10);
  local_90 = puVar6;
  if (puVar2 == puVar7) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x10) = puVar7;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  local_98 = '\0';
  local_a0 = 0;
  local_a4 = 0xffffffff;
  local_88 = lVar22;
  while( true ) {
    pvVar8 = _pthread_getspecific((pthread_key_t)puVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_00e7bdb0();
    uVar10 = FUN_00e7bdb0();
    cVar4 = FUN_01252960(uVar10,uVar9,&local_a0,&local_e0);
    if (cVar4 == '\0') break;
    if (local_a0 == 0) {
      local_58 = '\0';
      cStack_57 = '\0';
      cStack_56 = '\0';
      cStack_55 = '\0';
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      local_68 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uVar9 = FUN_01727330();
      uVar24 = local_80;
      if (local_80 == 0) {
        bVar3 = false;
        uVar24 = 0;
      }
      else {
        bVar3 = true;
        if (((local_78 == '\0') && (uVar9 = FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0)) {
          uVar9 = FUN_00d50b20();
        }
      }
    }
    else {
      uVar5 = FUN_01715620();
      local_68 = CONCAT44(local_68._4_4_,uVar5);
      uVar5 = FUN_01715630();
      local_68 = CONCAT44(uVar5,(undefined4)local_68);
      uVar24 = *(ulonglong *)(local_a0 + 0x18);
      uVar18 = (uint)uVar24 & 0xf;
      cVar4 = (char)uVar18 + '\x01';
      if (uVar18 == 0xf) {
        cVar4 = '\0';
      }
      uVar18 = (uint)(uVar24 >> 4) & 0xf;
      cVar12 = (char)uVar18 + '\x01';
      if (uVar18 == 0xf) {
        cVar12 = '\0';
      }
      uVar18 = (uint)(uVar24 >> 8) & 0xf;
      cVar13 = (char)uVar18 + '\x01';
      if (uVar18 == 0xf) {
        cVar13 = '\0';
      }
      uVar18 = (uint)(uVar24 >> 0xc) & 0xf;
      cVar14 = (char)uVar18 + '\x01';
      if (uVar18 == 0xf) {
        cVar14 = '\0';
      }
      uVar18 = (uint)(uVar24 >> 0x10) & 0xf;
      cVar15 = (char)uVar18 + '\x01';
      if (uVar18 == 0xf) {
        cVar15 = '\0';
      }
      uVar18 = (uint)(uVar24 >> 0x14) & 0xf;
      cVar16 = (char)uVar18 + '\x01';
      if (uVar18 == 0xf) {
        cVar16 = '\0';
      }
      uVar18 = (uint)(uVar24 >> 0x18) & 0xf;
      cVar17 = (char)uVar18 + '\x01';
      if (uVar18 == 0xf) {
        cVar17 = '\0';
      }
      uVar20 = uVar24 >> 0x1c & 0xf;
      cVar21 = (char)uVar20 + '\x01';
      if ((int)uVar20 == 0xf) {
        cVar21 = '\0';
      }
      uStack_60 = CONCAT17(cVar21,CONCAT16(cVar17,CONCAT15(cVar16,CONCAT14(cVar15,CONCAT13(cVar14,
                                                  CONCAT12(cVar13,CONCAT11(cVar12,cVar4)))))));
      uVar18 = (uint)(uVar24 >> 0x20);
      local_58 = (char)(uVar18 & 0xf) + '\x01';
      if ((uVar18 & 0xf) == 0xf) {
        local_58 = '\0';
      }
      uVar19 = uVar18 >> 4 & 0xf;
      cStack_57 = (char)uVar19 + '\x01';
      if (uVar19 == 0xf) {
        cStack_57 = '\0';
      }
      uVar19 = uVar18 >> 8 & 0xf;
      cStack_56 = (char)uVar19 + '\x01';
      if (uVar19 == 0xf) {
        cStack_56 = '\0';
      }
      uVar18 = uVar18 >> 0xc & 0xf;
      cStack_55 = (char)uVar18 + '\x01';
      if (uVar18 == 0xf) {
        cStack_55 = '\0';
      }
      local_c8 = local_a0;
      local_c0 = '\0';
      local_b8 = 0;
      local_b0 = '\0';
      uVar9 = FUN_01721000(&local_b8,&local_c8);
      uVar24 = local_80;
      if (local_80 == 0) {
        bVar3 = false;
        uVar24 = 0;
      }
      else if (local_78 == '\0') {
        uVar9 = FUN_00d50b00();
        bVar3 = true;
        if ((local_78 != '\0') && (local_80 != 0)) {
          uVar9 = FUN_00d50b20();
        }
      }
      else {
        local_78 = '\0';
        bVar3 = true;
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    FUN_00d8cf90(uVar9,6);
    uVar20 = local_80;
    if ((((local_78 == '\0') && (local_80 != 0)) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_78 = '\0';
    local_80 = uVar20;
    FUN_00d21140();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    uVar9 = *(undefined8 *)(uVar20 + 0x10);
    uStack_54 = (undefined4)uVar9;
    uStack_50 = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_80 = local_e0;
    if (local_e0 >> 0x20 == 0) {
      dVar25 = 0.0;
      if (local_d8 >> 0x20 != 0) {
        auVar26._0_8_ = FUN_00e7c860();
        auVar26._8_8_ = extraout_XMM0_Qb;
        auVar26 = roundsd(auVar26,auVar26,0xb);
        dVar25 = auVar26._0_8_ + DAT_023b19a0;
      }
    }
    else {
      dVar25 = (double)FUN_00e7c860();
    }
    uStack_4c = SUB84(dVar25,0);
    uStack_48 = (uint)((ulonglong)dVar25 >> 0x20);
    lVar22 = *(longlong *)(unaff_RDI + 0x10);
    lVar23 = (longlong)*(int *)(lVar22 + 0x18);
    FUN_00c8e340(dVar25,1);
    lVar22 = *(longlong *)(lVar22 + 0x10);
    puVar11 = (undefined *)(ulonglong)uStack_48;
    *(uint *)(lVar22 + 0x20 + lVar23) = uStack_48;
    puVar1 = (undefined4 *)(lVar22 + 0x10 + lVar23);
    *puVar1 = CONCAT13(cStack_55,CONCAT12(cStack_56,CONCAT11(cStack_57,local_58)));
    puVar1[1] = uStack_54;
    puVar1[2] = uStack_50;
    puVar1[3] = uStack_4c;
    *(undefined8 *)(lVar22 + lVar23) = local_68;
    ((undefined8 *)(lVar22 + lVar23))[1] = uStack_60;
    FUN_00d50b20();
    lVar22 = local_88;
    if ((bVar3) && (uVar24 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_69 != '\0') && (lVar22 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


