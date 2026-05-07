// Function: FUN_01e6eb20
// Address: 01e6eb20
// Size: 1911 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6eb20(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar15;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar14 [16];
  longlong *local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  
  fVar15 = (float)((ulonglong)param_2 >> 0x20);
  fVar13 = (float)param_2;
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 != 1) || (iVar8 = FUN_01d3b630(), iVar8 != 1)) goto LAB_01e6f258;
  FUN_01d3abf0();
  uVar10 = FUN_01e466c0();
  local_f8 = (float)uVar10;
  fStack_f4 = (float)((ulonglong)uVar10 >> 0x20);
  fStack_f0 = (float)extraout_XMM0_Qb;
  fStack_ec = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  FUN_01e6d9a0();
  plVar2 = local_50;
  if (local_50 == (longlong *)0x0) goto LAB_01e6f258;
  if (local_48 == '\0') {
    FUN_00d50b00();
  }
  if (plVar2[4] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    if (plVar2[5] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      local_d8 = FUN_01e6d410();
      lVar1 = plVar2[5];
      local_f8 = fVar13;
      fStack_f4 = fVar15;
      fStack_f0 = in_XMM1_Dc;
      fStack_ec = in_XMM1_Dd;
      uStack_d0 = extraout_XMM0_Qb_00;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_58 = 0;
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      auVar12._8_8_ = uStack_d0;
      auVar12._0_8_ = local_d8;
      auVar14._4_4_ = fStack_f4;
      auVar14._0_4_ = local_f8;
      auVar14._8_4_ = fStack_f0;
      auVar14._12_4_ = fStack_ec;
      auVar11._0_4_ = (float)local_d8 + local_f8;
      auVar11._4_4_ = (float)((ulonglong)local_d8 >> 0x20) + fStack_f4;
      auVar11._8_4_ = (float)uStack_d0 + fStack_f0;
      auVar11._12_4_ = (float)((ulonglong)uStack_d0 >> 0x20) + fStack_ec;
      auVar12 = blendps(auVar11,auVar12,0xd);
      auVar14 = blendps(auVar14,_DAT_02421240,0xe);
      local_58 = '\x01';
      local_c0 = 0;
      local_b8 = '\0';
      local_60 = unaff_RDI;
      FUN_01d5ef60(auVar12._0_8_,auVar14._0_8_);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    if (*(uint *)(unaff_RDI + 0x2b) < 2) {
      plVar2 = (longlong *)plVar2[4];
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_d8 = FUN_01e6d410();
      local_e8._4_4_ = fVar15;
      local_e8._0_4_ = fVar13;
      fStack_e0 = in_XMM1_Dc;
      fStack_dc = in_XMM1_Dd;
      if (((float)DAT_028ba110 != 0.0) || (NAN((float)DAT_028ba110))) {
        if ((DAT_028ba110._4_4_ != 0.0) || (NAN(DAT_028ba110._4_4_))) {
          local_108 = DAT_028ba110;
          uStack_100 = 0;
          goto LAB_01e6f0a1;
        }
      }
      local_108 = _DAT_024202c0;
      uStack_100 = _UNK_024202c8;
LAB_01e6f0a1:
      DAT_028ba110 = local_108;
      (**(code **)(*plVar2 + 0x4d8))();
      auVar5._8_8_ = uStack_100;
      auVar5._0_8_ = local_108;
      auVar14 = blendps(_local_e8,auVar5,2);
      local_d8 = FUN_00d05510();
      _local_e8 = auVar14;
      (**(code **)(*plVar2 + 0x4d0))();
      cVar7 = FUN_00d05410();
      if (cVar7 != '\0') {
        FUN_01e40eb0();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_50 == (longlong *)0x0) {
          local_a8 = '\0';
          local_b0 = plVar2;
          (**(code **)(*unaff_RDI + 0x450))();
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_a0 = *unaff_RSI;
          local_98 = '\0';
          (**(code **)(*plVar2 + 0x3c0))();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
      FUN_00d50b20();
      return;
    }
  }
  if (plVar2[6] != 0) {
    FUN_00d50b00();
    cVar7 = *(char *)((longlong)plVar2 + 0xc);
    FUN_00d50b20();
    if (cVar7 != '\0') {
      plVar3 = (longlong *)unaff_RDI[0x2d];
      if (plVar3 != plVar2) {
        FUN_00d50b00();
        unaff_RDI[0x2d] = (longlong)plVar2;
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x620))();
      while( true ) {
        (**(code **)(*unaff_RDI + 0x658))();
        plVar4 = local_50;
        plVar3 = (longlong *)*unaff_RSI;
        if (plVar3 != local_50) break;
        if (((char)unaff_RSI[1] == '\0') && (local_50 != (longlong *)0x0)) {
          if (local_48 == '\0') {
            FUN_00d50b00();
            goto LAB_01e6ee87;
          }
LAB_01e6ee43:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_48 = '\0';
        }
        if (*unaff_RSI == 0) goto LAB_01e6ef9c;
LAB_01e6ee99:
        iVar8 = FUN_01d3a5a0();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 == 6) goto LAB_01e6efb0;
        FUN_01d3abf0();
        FUN_01e466c0();
        FUN_01e6d9a0();
        plVar3 = local_50;
        if (local_50 == (longlong *)0x0) {
          bVar6 = true;
        }
        else {
          if (local_48 == '\0') {
            FUN_00d50b00();
          }
          bVar6 = false;
        }
        plVar4 = (longlong *)unaff_RDI[0x2d];
        if (plVar3 == plVar2) {
          if (plVar4 != plVar2) {
            FUN_00d50b00();
            unaff_RDI[0x2d] = (longlong)plVar2;
            if (plVar4 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else if (plVar4 != (longlong *)0x0) {
          unaff_RDI[0x2d] = 0;
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x620))();
        if (!bVar6 && plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      lVar1 = unaff_RSI[1];
      if (local_48 != '\0') {
        *unaff_RSI = (longlong)local_50;
        if (((char)lVar1 != '\0') && (plVar3 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01e6ee43;
      }
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar4;
      if (((char)lVar1 != '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01e6ee87:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      if (*unaff_RSI != 0) goto LAB_01e6ee99;
LAB_01e6ef9c:
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01e6efb0:
      if ((longlong *)unaff_RDI[0x2d] == plVar2) {
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_026717b8;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(undefined8 *)((longlong)puVar9 + 0x2c) = 0;
        *(undefined8 *)((longlong)puVar9 + 0x34) = 0;
        (*DAT_026717d0)();
        local_90 = plVar2[6];
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        local_88 = '\x01';
        uVar10 = FUN_01caeb20();
        if ((local_88 != '\0') && (local_90 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        local_118 = plVar2;
        local_110 = 0;
        uVar10 = FUN_01e6d120(uVar10,&local_118);
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar10 = FUN_00d50b00();
            goto LAB_01e6f1d2;
          }
LAB_01e6f20b:
          bVar6 = true;
        }
        else {
          if (local_50 == (longlong *)0x0) goto LAB_01e6f20b;
LAB_01e6f1d2:
          local_78 = '\0';
          local_80 = puVar9;
          (**(code **)(*local_50 + 0x3b8))(uVar10,1);
          bVar6 = false;
          if ((local_78 != '\0') && (bVar6 = false, local_80 != (undefined8 *)0x0)) {
            FUN_00d50b20();
            bVar6 = false;
          }
        }
        if (unaff_RDI[0x2d] != 0) {
          unaff_RDI[0x2d] = 0;
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x620))();
        if (!bVar6) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_01e6f258:
  local_70 = *unaff_RSI;
  local_68 = '\0';
  FUN_01e459c0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}


