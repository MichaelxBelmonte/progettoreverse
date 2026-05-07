// Function: FUN_01f0cb10
// Address: 01f0cb10
// Size: 3008 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01f0cc5e) */
/* WARNING: Removing unreachable block (ram,0x01f0cc6a) */
/* WARNING: Removing unreachable block (ram,0x01f0d0d6) */
/* WARNING: Removing unreachable block (ram,0x01f0d0e6) */
/* WARNING: Removing unreachable block (ram,0x01f0cb66) */
/* WARNING: Removing unreachable block (ram,0x01f0cb6f) */
/* WARNING: Removing unreachable block (ram,0x01f0cf60) */
/* WARNING: Removing unreachable block (ram,0x01f0cf6d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0cb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 in_RCX;
  undefined8 in_RDX;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  longlong *local_1a8;
  char local_1a0;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  longlong *local_88;
  longlong *local_68;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_04;
  
  (**(code **)(*unaff_RDI + 0x640))(in_RCX,in_RDX,param_3,param_4,param_1);
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_f0 = local_40;
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  if (unaff_RDI[0x2d] == 0) {
    (**(code **)(*unaff_RDI + 0x930))();
  }
  FUN_01e3f820();
  local_88 = (longlong *)param_2;
  uVar6 = FUN_01d5b230();
  (**(code **)(*local_40 + 0x5d8))(*local_40,uVar6);
  lVar9 = 8;
  uVar10 = 0;
  local_88 = (longlong *)0x0;
  bVar3 = false;
  local_68 = (longlong *)0x0;
  bVar11 = false;
  do {
    iVar7 = FUN_01d5b230();
    if ((longlong)iVar7 <= (longlong)uVar10) {
      FUN_01e40eb0();
      plVar8 = local_88;
      (**(code **)(*unaff_RDI + 0x7b0))();
      if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == local_1a8) {
        local_98 = (undefined1  [8])FUN_01e436c0();
        uStack_90 = extraout_XMM0_Qb;
        uVar16 = FUN_01e3f820();
        fVar12 = (float)-(uint)((float)local_98._0_4_ != (float)uVar16);
        fVar13 = (float)-(uint)((float)local_98._4_4_ != (float)((ulonglong)uVar16 >> 0x20));
        fVar14 = (float)-(uint)((float)uStack_90 != (float)extraout_XMM0_Qb_00);
        fVar15 = (float)-(uint)(uStack_90._4_4_ != (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20));
        if (((uint)fVar13 & 1) != 0) {
          (**(code **)(*local_f0 + 0x4c8))();
          local_e0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_e0 = '\x01';
          local_e8 = local_40;
          FUN_01d488d0();
          if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_130 = *unaff_RSI;
          local_128 = '\0';
          uVar16 = FUN_01e3f820();
          local_a8 = (float)uVar16;
          fStack_a4 = (float)((ulonglong)uVar16 >> 0x20);
          fStack_a0 = (float)extraout_XMM0_Qb_01;
          fStack_9c = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
          local_98._4_4_ = fVar13;
          local_98._0_4_ = fVar12;
          uStack_90._0_4_ = fVar14;
          uStack_90._4_4_ = fVar15;
          auVar17._0_8_ = FUN_01e436c0();
          auVar17._8_8_ = extraout_XMM0_Qb_02;
          auVar23._4_12_ = local_98._4_12_;
          auVar23._0_4_ = local_98._0_4_ * DAT_0239011c;
          auVar20._4_4_ = fStack_a4;
          auVar20._0_4_ = local_a8;
          auVar20._8_4_ = fStack_a0;
          auVar20._12_4_ = fStack_9c;
          blendps(auVar20,auVar17,2);
          blendps(auVar23,_DAT_023907b0,0xe);
          auVar20 = ZEXT416((uint)DAT_023b36b0);
          FUN_01cb3a60();
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_f0 + 0x4d0))();
          local_d0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_d0 = '\x01';
          local_d8 = local_40;
          FUN_01d488d0();
          if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_120 = *unaff_RSI;
          local_118 = '\0';
          uVar16 = FUN_01e3f820();
          local_a8 = (float)uVar16;
          fStack_a4 = (float)((ulonglong)uVar16 >> 0x20);
          fStack_a0 = (float)extraout_XMM0_Qb_03;
          fStack_9c = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
          _local_98 = auVar20;
          auVar18._0_8_ = FUN_01e436c0();
          auVar18._8_8_ = extraout_XMM0_Qb_04;
          auVar24._4_12_ = local_98._4_12_;
          auVar24._0_4_ = local_98._0_4_ * DAT_0239011c;
          auVar2._4_4_ = fStack_a4;
          auVar2._0_4_ = local_a8;
          auVar2._8_4_ = fStack_a0;
          auVar2._12_4_ = fStack_9c;
          blendps(auVar2,auVar18,2);
          blendps(auVar24,_DAT_023907b0,0xe);
          fVar13 = 0.0;
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar12 = DAT_02390d30;
          FUN_01cb3a60();
          if ((local_118 != '\0') && (local_120 != 0)) {
            FUN_00d50b20();
          }
        }
        local_98 = (undefined1  [8])FUN_01e436c0();
        uStack_90 = extraout_XMM0_Qb_05;
        local_a8 = fVar12;
        fStack_a4 = fVar13;
        fStack_a0 = fVar14;
        fStack_9c = fVar15;
        uVar16 = FUN_01e3f820();
        auVar25._0_4_ = (float)local_98._0_4_ + local_a8;
        auVar25._4_4_ = (float)local_98._4_4_ + fStack_a4;
        auVar25._8_4_ = (float)uStack_90 + fStack_a0;
        auVar25._12_4_ = uStack_90._4_4_ + fStack_9c;
        auVar19._0_4_ = (float)uVar16 + fVar12;
        auVar19._4_4_ = (float)((ulonglong)uVar16 >> 0x20) + fVar13;
        auVar19._8_4_ = (float)extraout_XMM0_Qb_06 + fVar14;
        auVar19._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_06 >> 0x20) + fVar15;
        auVar20 = insertps(auVar19,auVar25,0x4c);
        fVar12 = auVar20._0_4_ + _DAT_023b5de0;
        fVar13 = auVar20._4_4_ + _UNK_023b5de4;
        fVar14 = auVar20._12_4_ + _UNK_023b5dec;
        if ((fVar12 != fVar13) || (NAN(fVar12) || NAN(fVar13))) {
          fVar12 = fVar13;
          fVar15 = fVar14;
          (**(code **)(*local_f0 + 0x4c8))();
          local_c0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_c0 = '\x01';
          local_c8 = local_40;
          FUN_01d488d0();
          if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_110 = *unaff_RSI;
          local_108 = '\0';
          local_98 = (undefined1  [8])FUN_01e3f820();
          uStack_90 = extraout_XMM0_Qb_07;
          local_a8 = fVar13;
          fStack_a4 = fVar12;
          fStack_a0 = fVar14;
          fStack_9c = fVar15;
          uVar16 = FUN_01e436c0();
          auVar26._0_4_ = local_a8 * DAT_0239011c;
          auVar26._4_4_ = fStack_a4 * 0.0;
          auVar26._8_4_ = fStack_a0 * 0.0;
          auVar26._12_4_ = fStack_9c * 0.0;
          auVar21._0_4_ = (float)uVar16 + fVar13 + _DAT_0241c730;
          auVar21._4_4_ = (float)((ulonglong)uVar16 >> 0x20) + fVar12 + _UNK_0241c734;
          auVar21._8_4_ = (float)extraout_XMM0_Qb_08 + fVar14 + _UNK_0241c738;
          auVar21._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_08 >> 0x20) + fVar15 + _UNK_0241c73c;
          blendps(auVar21,auVar26,0xd);
          insertps(_local_98,DAT_02394248,0x10);
          fVar13 = 0.0;
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar12 = DAT_023b36b0;
          FUN_01cb3a60();
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_f0 + 0x4d0))();
          local_b0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_b0 = '\x01';
          local_b8 = local_40;
          FUN_01d488d0();
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_100 = *unaff_RSI;
          local_f8 = '\0';
          local_98 = (undefined1  [8])FUN_01e3f820();
          uStack_90 = extraout_XMM0_Qb_09;
          local_a8 = fVar12;
          fStack_a4 = fVar13;
          fStack_a0 = fVar14;
          fStack_9c = fVar15;
          uVar16 = FUN_01e436c0();
          auVar27._0_4_ = local_a8 * DAT_0239011c;
          auVar27._4_4_ = fStack_a4 * 0.0;
          auVar27._8_4_ = fStack_a0 * 0.0;
          auVar27._12_4_ = fStack_9c * 0.0;
          auVar22._0_4_ = (float)uVar16 + fVar12 + _DAT_0241c730;
          auVar22._4_4_ = (float)((ulonglong)uVar16 >> 0x20) + fVar13 + _UNK_0241c734;
          auVar22._8_4_ = (float)extraout_XMM0_Qb_10 + fVar14 + _UNK_0241c738;
          auVar22._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_10 >> 0x20) + fVar15 + _UNK_0241c73c;
          blendps(auVar22,auVar27,0xd);
          insertps(_local_98,DAT_02394248,0x10);
          FUN_01cb3a60();
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_01d48390();
      if ((bVar11) && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar3) && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_f0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_01d5b240(extraout_XMM0_Qa,uVar10 & 0xffffffff);
    plVar8 = local_88;
    if (local_88 == local_40) {
      if ((bVar3) || (local_88 == (longlong *)0x0)) goto joined_r0x01f0cdb1;
      bVar3 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01f0cd96;
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      plVar8 = local_40;
      if ((bVar3) && (local_88 != (longlong *)0x0)) {
        local_88 = local_40;
        FUN_00d50b20();
      }
LAB_01f0cd96:
      bVar3 = true;
joined_r0x01f0cdb1:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if ((bVar3) && (local_88 != (longlong *)0x0)) {
      local_88 = local_40;
      FUN_00d50b20();
      bVar3 = true;
      plVar8 = local_88;
    }
    else {
      bVar3 = true;
      plVar8 = local_40;
    }
    local_88 = plVar8;
    plVar8 = (longlong *)unaff_RDI[0x2b];
    uStack_90 = 0;
    local_98 = (undefined1  [8])*(ulonglong *)(*(longlong *)(unaff_RDI[0x2d] + 0x10) + -8 + lVar9);
    uVar16 = *(undefined8 *)(*(longlong *)(unaff_RDI[0x2d] + 0x10) + lVar9);
    local_a8 = (float)uVar16;
    fStack_a4 = (float)((ulonglong)uVar16 >> 0x20);
    fStack_a0 = 0.0;
    fStack_9c = 0.0;
    if (plVar8 == local_68) {
      bVar4 = bVar11;
      if ((!bVar11) && (plVar8 != (longlong *)0x0)) {
        bVar4 = true;
        uVar16 = FUN_00d50b00();
      }
LAB_01f0ce70:
      lVar1 = unaff_RDI[0x30];
    }
    else {
      if (plVar8 != (longlong *)0x0) {
        uVar16 = FUN_00d50b00();
      }
      bVar4 = true;
      if (bVar11) {
        bVar11 = local_68 != (longlong *)0x0;
        local_68 = plVar8;
        if (bVar11) {
          uVar16 = FUN_00d50b20();
        }
        goto LAB_01f0ce70;
      }
      lVar1 = unaff_RDI[0x30];
      local_68 = plVar8;
    }
    plVar8 = local_68;
    bVar11 = bVar4;
    if (((lVar1 != 0) && (6 < *(int *)(lVar1 + 0x18) + 3U)) && (uVar10 == **(uint **)(lVar1 + 0x10))
       ) {
      if (local_68 == (longlong *)0x0) {
        uVar16 = (**(code **)(*local_f0 + 0x370))();
        local_68 = local_40;
        if (local_40 == (longlong *)0x0) {
          local_68 = (longlong *)0x0;
        }
        else {
          bVar4 = true;
          if (local_38 == '\0') {
            uVar16 = FUN_00d50b00();
          }
        }
      }
      FUN_01d44a40(uVar16,1);
      if (local_40 == local_68) {
        plVar8 = local_68;
        bVar11 = bVar4;
        if ((!bVar4) && (local_40 != (longlong *)0x0)) {
          bVar11 = true;
          if (local_38 != '\0') goto LAB_01f0d000;
          FUN_00d50b00();
          bVar11 = true;
        }
      }
      else {
        if (local_38 != '\0') {
          bVar11 = true;
          plVar8 = local_40;
          if ((bVar4) && (plVar8 = local_40, local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar8 = local_40;
          }
          goto LAB_01f0d000;
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar11 = true;
        plVar8 = local_40;
        if ((bVar4) && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01f0d000:
    local_68 = plVar8;
    cVar5 = FUN_00d054a0();
    if (cVar5 != '\0') {
      local_150 = local_68;
      local_148 = '\0';
      local_140 = local_88;
      local_138 = '\0';
      (**(code **)(*unaff_RDI + 0x928))(&local_140,&local_150,uVar10 & 0xffffffff);
      if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar10 = uVar10 + 1;
    lVar9 = lVar9 + 0x10;
  } while( true );
}


