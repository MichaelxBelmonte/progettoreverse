// Function: FUN_00479050
// Address: 00479050
// Size: 1636 bytes
// Class: MDDetectionAudioSourceInsp


/* WARNING: Removing unreachable block (ram,0x0047946c) */
/* WARNING: Removing unreachable block (ram,0x00479478) */
/* WARNING: Removing unreachable block (ram,0x00479107) */
/* WARNING: Removing unreachable block (ram,0x00479117) */
/* WARNING: Removing unreachable block (ram,0x00479220) */
/* WARNING: Removing unreachable block (ram,0x0047922c) */
/* WARNING: Removing unreachable block (ram,0x0047956f) */
/* WARNING: Removing unreachable block (ram,0x0047957b) */
/* WARNING: Removing unreachable block (ram,0x004795b6) */
/* WARNING: Removing unreachable block (ram,0x004795c2) */
/* WARNING: Removing unreachable block (ram,0x00479299) */
/* WARNING: Removing unreachable block (ram,0x004792a2) */
/* WARNING: Removing unreachable block (ram,0x00479164) */
/* WARNING: Removing unreachable block (ram,0x00479171) */
/* WARNING: Removing unreachable block (ram,0x0047969c) */
/* WARNING: Removing unreachable block (ram,0x004796a9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479050(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  undefined1 uVar10;
  char cVar11;
  short sVar12;
  int iVar13;
  longlong **pplVar14;
  short *psVar15;
  short *psVar16;
  undefined8 *unaff_RSI;
  ulonglong uVar17;
  longlong *unaff_RDI;
  short *psVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [8];
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong *local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  longlong local_58;
  longlong *local_40;
  char local_38;
  
  fVar24 = (float)((ulonglong)param_2 >> 0x20);
  fVar23 = (float)param_2;
  uStack_60 = in_XMM0_Qb;
  local_68 = (undefined1  [8])param_1;
  local_88 = fVar23;
  fStack_84 = fVar24;
  fStack_80 = in_XMM1_Dc;
  fStack_7c = in_XMM1_Dd;
  (**(code **)(*unaff_RDI + 0x640))();
  local_90 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_90 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  plVar7 = local_90;
  lVar2 = unaff_RDI[0x4d];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar2;
  bVar9 = (**(code **)(*unaff_RDI + 0xac8))();
  if ((bVar9 | local_58 == 0) == 1) {
    FUN_01e07690(local_58 == 0,local_88);
  }
  else {
    cVar11 = (**(code **)(*unaff_RDI + 0xac8))();
    if (cVar11 != '\0') {
      (**(code **)(*unaff_RDI + 0x878))();
    }
    cVar11 = FUN_01e07410();
    if (cVar11 != '\0') {
      uVar19 = *(undefined4 *)((longlong)unaff_RDI + 0x18c);
      uVar20 = FUN_01e3f820();
      local_88 = (float)uVar20;
      fStack_84 = (float)((ulonglong)uVar20 >> 0x20);
      fStack_80 = (float)extraout_XMM0_Qb;
      fStack_7c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      local_68._4_4_ = fVar24;
      local_68._0_4_ = fVar23;
      uStack_60._0_4_ = in_XMM1_Dc;
      uStack_60._4_4_ = in_XMM1_Dd;
      cVar11 = FUN_01e05890();
      uVar10 = (**(code **)(*unaff_RDI + 0x9a0))();
      uVar20 = 0x12;
      if (cVar11 != '\0') {
        uVar20 = 8;
      }
      fVar23 = (float)local_68._0_4_;
      fVar24 = (float)local_68._4_4_;
      in_XMM1_Dc = (float)uStack_60;
      in_XMM1_Dd = uStack_60._4_4_;
      (**(code **)(*plVar7 + 0x3f0))(uVar20,uVar19,0,uVar10);
    }
    FUN_01e3f820();
    uVar20 = (**(code **)(*plVar7 + 0x548))();
    local_88 = fVar23;
    fStack_84 = fVar24;
    fStack_80 = in_XMM1_Dc;
    fStack_7c = in_XMM1_Dd;
    (**(code **)(*unaff_RDI + 0x960))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_004792a7;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_004792a7:
      iVar13 = FUN_00d8c7a0();
      if ((0 < iVar13) && (iVar13 = FUN_00d8c7a0(), 0 < iVar13)) {
        do {
          sVar12 = FUN_00d8cbc0();
          psVar15 = (short *)unaff_RDI[0x4e];
          piVar1 = (int *)(psVar15 + 0xc);
          psVar16 = (short *)&DAT_023dccec;
          psVar18 = (short *)&DAT_023dccf4;
          if (*piVar1 < 0x14) {
LAB_004793c0:
            fVar23 = (float)*(undefined8 *)psVar18;
            fVar24 = (float)((ulonglong)*(undefined8 *)psVar18 >> 0x20);
            in_XMM1_Dc = 0.0;
            in_XMM1_Dd = 0.0;
          }
          else {
            psVar15 = *(short **)(psVar15 + 8);
            if (*psVar15 == sVar12) {
              psVar16 = psVar15 + 2;
              psVar15 = psVar15 + 6;
              psVar18 = psVar15;
              goto LAB_004793c0;
            }
            uVar5 = *piVar1 / 0x14;
            uVar8 = 1;
            psVar16 = psVar15;
            do {
              uVar17 = uVar8;
              psVar16 = psVar16 + 10;
              if (uVar5 == uVar17) {
                psVar18 = (short *)&DAT_023dccf4;
                psVar16 = (short *)&DAT_023dccec;
                if ((longlong)uVar17 < (longlong)(int)uVar5) goto LAB_004793c8;
                goto LAB_004793c0;
              }
              uVar8 = uVar17 + 1;
            } while (*psVar16 != sVar12);
            psVar18 = (short *)&DAT_023dccf4;
            psVar16 = (short *)&DAT_023dccec;
            if ((longlong)(int)uVar5 <= (longlong)uVar17) goto LAB_004793c0;
            fVar23 = (float)*(undefined8 *)(psVar15 + (uVar17 & 0xffffffff) * 10 + 6);
            fVar24 = (float)((ulonglong)*(undefined8 *)(psVar15 + (uVar17 & 0xffffffff) * 10 + 6) >>
                            0x20);
            in_XMM1_Dc = 0.0;
            in_XMM1_Dd = 0.0;
          }
LAB_004793c8:
          if (fVar23 <= DAT_0239424c) {
            auVar21 = (undefined1  [8])CONCAT44(fStack_84,local_88);
            uVar22 = CONCAT44(fStack_7c,fStack_80);
          }
          else {
            local_68._4_4_ = fStack_84 - fVar24;
            uStack_60._4_4_ = fStack_7c - in_XMM1_Dd;
            auVar27._8_8_ = extraout_XMM0_Qb_00;
            auVar27._0_8_ = uVar20;
            auVar25._4_12_ = auVar27._4_12_;
            auVar25._0_4_ = (float)uVar20 + (local_88 - fVar23) + DAT_02390d00 + DAT_02390d00;
            local_68._0_4_ = local_88 - fVar23;
            uStack_60._0_4_ = fStack_80 - in_XMM1_Dc;
            auVar28._0_4_ = (uint)((float)local_68._4_4_ * DAT_0239011c) & _DAT_023945e0;
            auVar28._4_4_ = local_68._4_4_ & _UNK_023945e4;
            auVar28._8_4_ = (uint)uStack_60._4_4_ & _UNK_023945e8;
            auVar28._12_4_ = (uint)uStack_60._4_4_ & _UNK_023945ec;
            auVar29._4_12_ = SUB1612(auVar28 | _DAT_023945f0,4);
            auVar29._0_4_ = SUB164(auVar28 | _DAT_023945f0,0) + (float)local_68._4_4_ * DAT_0239011c
            ;
            auVar26._0_12_ = ZEXT812(0);
            auVar26._12_4_ = 0;
            auVar27 = roundss(auVar26,auVar29,0xb);
            auVar27 = insertps(auVar25,auVar27,0x10);
            (**(code **)(*(longlong *)*unaff_RSI + 0x408))(psVar15,psVar16,auVar27._0_8_);
            auVar6._4_4_ = fStack_84;
            auVar6._0_4_ = local_88;
            auVar6._8_4_ = fStack_80;
            auVar6._12_4_ = fStack_7c;
            _local_68 = blendps(_local_68,auVar6,2);
            auVar21 = local_68;
            uVar22 = uStack_60;
          }
          local_88 = SUB84(auVar21,0);
          fStack_84 = (float)((ulonglong)auVar21 >> 0x20);
          fStack_80 = (float)uVar22;
          fStack_7c = (float)((ulonglong)uVar22 >> 0x20);
          bVar4 = 1 < iVar13;
          iVar13 = iVar13 + -1;
        } while (bVar4);
      }
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x4c] == 0) goto LAB_00479654;
  FUN_00d50b00();
  FUN_00209700();
  if (plVar7 == (longlong *)0x0) {
LAB_004794e2:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar11 = FUN_00e85ea0();
    if (cVar11 == '\0') goto LAB_004794e2;
    pplVar14 = &local_90;
  }
  plVar3 = *pplVar14;
  FUN_00d50b20();
  if (plVar3 != (longlong *)0x0) {
    uVar19 = FUN_01e3f820();
    (**(code **)(*plVar7 + 0x6a0))(0,uVar19);
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d48370();
    (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
    lVar2 = unaff_RDI[0x4c];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))
              (*(undefined8 *)((longlong)unaff_RDI + 0x24c),
               (int)*(undefined8 *)((longlong)unaff_RDI + 0x254));
    FUN_01d48390();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_00479654:
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


