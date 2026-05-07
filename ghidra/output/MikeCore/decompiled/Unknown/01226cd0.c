// Function: FUN_01226cd0
// Address: 01226cd0
// Size: 12343 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0122930b) */
/* WARNING: Removing unreachable block (ram,0x01229317) */
/* WARNING: Removing unreachable block (ram,0x01228c72) */
/* WARNING: Removing unreachable block (ram,0x01228c7e) */
/* WARNING: Removing unreachable block (ram,0x01228349) */
/* WARNING: Removing unreachable block (ram,0x01228355) */
/* WARNING: Removing unreachable block (ram,0x01226d56) */
/* WARNING: Removing unreachable block (ram,0x01226d62) */
/* WARNING: Removing unreachable block (ram,0x012288d8) */
/* WARNING: Removing unreachable block (ram,0x012288e4) */
/* WARNING: Removing unreachable block (ram,0x01228d73) */
/* WARNING: Removing unreachable block (ram,0x01228d7f) */
/* WARNING: Removing unreachable block (ram,0x01229b25) */
/* WARNING: Removing unreachable block (ram,0x01229b31) */
/* WARNING: Removing unreachable block (ram,0x01228923) */
/* WARNING: Removing unreachable block (ram,0x0122892f) */
/* WARNING: Removing unreachable block (ram,0x012283e3) */
/* WARNING: Removing unreachable block (ram,0x012283ef) */
/* WARNING: Removing unreachable block (ram,0x0122839f) */
/* WARNING: Removing unreachable block (ram,0x012283ab) */
/* WARNING: Removing unreachable block (ram,0x01229ba6) */
/* WARNING: Removing unreachable block (ram,0x01229bb2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01226cd0(void)

{
  float fVar1;
  longlong *****ppppplVar2;
  longlong ******pppppplVar3;
  longlong lVar4;
  longlong *******ppppppplVar5;
  longlong ****pppplVar6;
  longlong ****pppplVar7;
  longlong *plVar8;
  longlong *******ppppppplVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong ******pppppplVar20;
  char *pcVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong *******ppppppplVar28;
  code *pcVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong *unaff_RDI;
  char cVar32;
  int iVar33;
  ulonglong uVar34;
  longlong *******ppppppplVar35;
  int iVar36;
  longlong lVar37;
  longlong *******ppppppplVar38;
  undefined7 uVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  longlong lVar43;
  longlong *******ppppppplVar44;
  bool bVar45;
  bool bVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar51;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  uint local_res10;
  char in_stack_00000038;
  char local_158;
  undefined7 uStack_157;
  char local_150;
  longlong *******local_148;
  undefined8 *local_140;
  longlong *******local_138;
  undefined8 *local_130;
  undefined8 local_128;
  code *local_120;
  undefined8 local_118;
  longlong *******local_110;
  longlong ******local_108;
  undefined8 *local_100;
  ulonglong local_f8;
  longlong *******local_d8;
  undefined1 local_c8 [8];
  ulonglong uStack_c0;
  longlong local_b0;
  longlong *******local_a0;
  char local_98;
  longlong ******local_90;
  char local_80 [8];
  undefined1 local_78 [8];
  ulonglong uStack_70;
  ulonglong local_60;
  longlong ******local_58;
  longlong *******local_50;
  longlong *******local_48;
  char local_40 [8];
  undefined8 local_38;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  
  ppppppplVar38 = (longlong *******)(ulonglong)local_res10;
  FUN_00e7d780();
  local_38 = FUN_014832c0();
  FUN_015fbe40();
  local_148 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *******)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  lVar37 = *unaff_RDI;
  if (0 < *(int *)(lVar37 + 0xc)) {
    ppppppplVar38 = (longlong *******)0x0;
    do {
      pppppplVar20 = *(longlong *******)(*(longlong *)(lVar37 + 0x10) + (longlong)ppppppplVar38 * 8)
      ;
      if (pppppplVar20 != (longlong ******)0x0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      ppppppplVar35 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))) {
        FUN_00d50b20();
      }
      uVar27 = *(uint *)((longlong)ppppppplVar35 + 0xc);
      if ((int)uVar27 < 1) {
LAB_01226f94:
        FUN_00d50b20();
      }
      else {
        auVar11._12_4_ = 0;
        auVar11._0_12_ = stack0xffffffffffffff8c;
        _local_78 = auVar11 << 0x20;
        uVar34 = 0;
        local_50 = (longlong *******)CONCAT44(local_50._4_4_,DAT_02394274);
        local_108 = pppppplVar20;
        do {
          ppppplVar2 = ppppppplVar35[2][uVar34];
          if (ppppplVar2 != (longlong *****)0x0) {
            FUN_00d50b00();
          }
          fVar48 = *(float *)(ppppplVar2 + 7);
          local_c8._0_4_ = fVar48;
          fVar49 = *(float *)(ppppplVar2 + 8);
          FUN_00d50b20();
          fVar47 = (float)_powf();
          fVar48 = (float)local_78._0_4_ + fVar48 * fVar47 * fVar49;
          local_78._0_4_ = fVar48;
          fVar49 = local_50._0_4_ + fVar49;
          local_50 = (longlong *******)CONCAT44(local_50._4_4_,fVar49);
          uVar34 = uVar34 + 1;
        } while (uVar27 != uVar34);
        local_78._0_4_ = fVar48 / fVar49;
        pppppplVar20 = ppppppplVar35[2];
        if (uVar27 == 1) {
          uVar34 = 0;
        }
        else {
          uVar34 = 0;
          do {
            ppppplVar2 = pppppplVar20[uVar34];
            *(float *)(ppppplVar2 + 0xc) = *(float *)(ppppplVar2 + 8) * (float)local_78._0_4_;
            *(undefined8 *)((longlong)ppppplVar2 + 100) = 0;
            ppppplVar2 = pppppplVar20[uVar34 + 1];
            *(float *)(ppppplVar2 + 0xc) = *(float *)(ppppplVar2 + 8) * (float)local_78._0_4_;
            *(undefined8 *)((longlong)ppppplVar2 + 100) = 0;
            uVar34 = uVar34 + 2;
          } while ((uVar27 & 0xfffffffe) != uVar34);
        }
        if ((uVar27 & 1) != 0) {
          ppppplVar2 = pppppplVar20[uVar34];
          *(float *)(ppppplVar2 + 0xc) = (float)local_78._0_4_ * *(float *)(ppppplVar2 + 8);
          *(undefined8 *)((longlong)ppppplVar2 + 100) = 0;
        }
        pppppplVar20 = local_108;
        if (ppppppplVar35 != (longlong *******)0x0) goto LAB_01226f94;
      }
      if (pppppplVar20 != (longlong ******)0x0) {
        FUN_00d50b20();
      }
      ppppppplVar38 = (longlong *******)((longlong)ppppppplVar38 + 1);
      lVar37 = *unaff_RDI;
    } while ((longlong)ppppppplVar38 < (longlong)*(int *)(lVar37 + 0xc));
  }
  puVar18 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar18 = &DAT_02572358;
  local_120 = DAT_02572370;
  (*DAT_02572370)();
  local_110 = (longlong *******)(ulonglong)local_res10;
  local_140 = puVar18;
  if (0 < (int)local_res10) {
    local_78._0_4_ = (int)local_38 * 4;
    ppppppplVar38 = (longlong *******)0x0;
    do {
      FUN_00c8e690();
      ppppppplVar35 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_40[0] = '\0';
      local_48 = ppppppplVar35;
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      ppppplVar2 = local_148[2][(longlong)ppppppplVar38];
      if (ppppplVar2 != (longlong *****)0x0) {
        FUN_00d50b00();
      }
      uVar50 = FUN_0122b720();
      ppppppplVar44 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *******)0x0) && (uVar50 = FUN_00d50b00(), local_40[0] != '\0'))
           && (local_48 != (longlong *******)0x0)) {
          uVar50 = FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if (ppppplVar2 != (longlong *****)0x0) {
        uVar50 = FUN_00d50b20();
      }
      if (*(int *)((longlong)ppppppplVar44 + 0xc) != 0) {
        FUN_00d242c0(uVar50,0);
        pppppplVar20 = ppppppplVar44[2];
        ppppplVar2 = *pppppplVar20;
        pppppplVar3 = ppppppplVar35[2];
        *(undefined4 *)((longlong)pppppplVar3 + (longlong)*(int *)(ppppplVar2 + 2) * 4) =
             *(undefined4 *)(ppppplVar2 + 0xc);
        if (1 < *(int *)((longlong)ppppppplVar44 + 0xc)) {
          ppppplVar2 = pppppplVar20[1];
          *(undefined4 *)((longlong)pppppplVar3 + (longlong)*(int *)(ppppplVar2 + 2) * 4) =
               *(undefined4 *)(ppppplVar2 + 0xc);
        }
      }
      FUN_015c1480(1);
      FUN_00d50b20();
      FUN_00d50b20();
      ppppppplVar38 = (longlong *******)((longlong)ppppppplVar38 + 1);
    } while (local_110 != ppppppplVar38);
  }
  FUN_00c8e690();
  local_138 = local_48;
  if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
     ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ppppppplVar35 = local_138;
  if (0 < (int)(float)local_38) {
    if ((int)local_res10 < 1) {
      do {
        FUN_015c1480(1,local_res10);
        uVar27 = (int)local_38 - 1;
        local_38 = (ulonglong)uVar27;
      } while (uVar27 != 0);
    }
    else {
      local_78 = (undefined1  [8])(local_38 & 0xffffffff);
      uVar34 = (longlong)local_110 - 1;
      uVar30 = (ulonglong)((uint)local_110 & 3);
      uVar31 = (ulonglong)((uint)local_110 & 0xfffffffc);
      ppppppplVar38 = (longlong *******)0x0;
      do {
        lVar37 = local_140[2];
        pppppplVar20 = local_138[2];
        uVar25 = 0;
        if (2 < uVar34) {
          do {
            *(undefined4 *)((longlong)pppppplVar20 + uVar25 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar37 + uVar25 * 8) + 0x10) +
                  (longlong)ppppppplVar38 * 4);
            *(undefined4 *)((longlong)pppppplVar20 + uVar25 * 4 + 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar37 + 8 + uVar25 * 8) + 0x10) +
                  (longlong)ppppppplVar38 * 4);
            *(undefined4 *)((longlong)pppppplVar20 + uVar25 * 4 + 8) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar37 + 0x10 + uVar25 * 8) + 0x10) +
                  (longlong)ppppppplVar38 * 4);
            *(undefined4 *)((longlong)pppppplVar20 + uVar25 * 4 + 0xc) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar37 + 0x18 + uVar25 * 8) + 0x10) +
                  (longlong)ppppppplVar38 * 4);
            uVar25 = uVar25 + 4;
          } while (uVar31 != uVar25);
        }
        if (uVar30 != 0) {
          uVar26 = 0;
          do {
            *(undefined4 *)((longlong)pppppplVar20 + uVar26 * 4 + uVar25 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar37 + uVar25 * 8 + uVar26 * 8) + 0x10) +
                  (longlong)ppppppplVar38 * 4);
            uVar26 = uVar26 + 1;
          } while (uVar30 != uVar26);
        }
        FUN_015c1480(1,local_res10);
        pppppplVar20 = ppppppplVar35[2];
        lVar37 = local_140[2];
        uVar25 = 0;
        if (2 < uVar34) {
          do {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar37 + uVar25 * 8) + 0x10) + (longlong)ppppppplVar38 * 4
             ) = *(undefined4 *)((longlong)pppppplVar20 + uVar25 * 4);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar37 + 8 + uVar25 * 8) + 0x10) +
             (longlong)ppppppplVar38 * 4) = *(undefined4 *)((longlong)pppppplVar20 + uVar25 * 4 + 4)
            ;
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar37 + 0x10 + uVar25 * 8) + 0x10) +
             (longlong)ppppppplVar38 * 4) = *(undefined4 *)((longlong)pppppplVar20 + uVar25 * 4 + 8)
            ;
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar37 + 0x18 + uVar25 * 8) + 0x10) +
             (longlong)ppppppplVar38 * 4) =
                 *(undefined4 *)((longlong)pppppplVar20 + uVar25 * 4 + 0xc);
            uVar25 = uVar25 + 4;
          } while (uVar31 != uVar25);
        }
        if (((ulonglong)local_110 & 3) != 0) {
          uVar26 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar37 + uVar25 * 8 + uVar26 * 8) + 0x10) +
             (longlong)ppppppplVar38 * 4) =
                 *(undefined4 *)((longlong)pppppplVar20 + uVar26 * 4 + uVar25 * 4);
            uVar26 = uVar26 + 1;
          } while (uVar30 != uVar26);
        }
        ppppppplVar38 = (longlong *******)((longlong)ppppppplVar38 + 1);
      } while ((undefined1  [8])ppppppplVar38 != local_78);
    }
  }
  lVar37 = *unaff_RDI;
  if (0 < *(int *)(lVar37 + 0xc)) {
    lVar43 = 0;
    do {
      lVar37 = *(longlong *)(*(longlong *)(lVar37 + 0x10) + lVar43 * 8);
      if (lVar37 != 0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      ppppppplVar35 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))) {
        FUN_00d50b20();
      }
      uVar27 = *(uint *)((longlong)ppppppplVar35 + 0xc);
      FUN_00c8e690();
      ppppppplVar38 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      fVar48 = DAT_023b16a0;
      if (0 < (int)uVar27) {
        pppppplVar20 = ppppppplVar35[2];
        lVar4 = local_140[2];
        pppppplVar3 = ppppppplVar38[2];
        if (uVar27 == 1) {
          uVar34 = 0;
        }
        else {
          uVar34 = 0;
          do {
            ppppplVar2 = pppppplVar20[uVar34];
            *(float *)((longlong)pppppplVar3 + uVar34 * 4) =
                 *(float *)(ppppplVar2 + 0xc) *
                 *(float *)(*(longlong *)
                             (*(longlong *)
                               (lVar4 + (longlong)*(int *)((longlong)ppppplVar2 + 0xc) * 8) + 0x10)
                           + (longlong)*(int *)(ppppplVar2 + 2) * 4) * fVar48;
            ppppplVar2 = pppppplVar20[uVar34 + 1];
            *(float *)((longlong)pppppplVar3 + uVar34 * 4 + 4) =
                 *(float *)(ppppplVar2 + 0xc) *
                 *(float *)(*(longlong *)
                             (*(longlong *)
                               (lVar4 + (longlong)*(int *)((longlong)ppppplVar2 + 0xc) * 8) + 0x10)
                           + (longlong)*(int *)(ppppplVar2 + 2) * 4) * fVar48;
            uVar34 = uVar34 + 2;
          } while ((uVar27 & 0xfffffffe) != uVar34);
        }
        if ((uVar27 & 1) != 0) {
          ppppplVar2 = pppppplVar20[uVar34];
          *(float *)((longlong)pppppplVar3 + uVar34 * 4) =
               *(float *)(ppppplVar2 + 0xc) *
               *(float *)(*(longlong *)
                           (*(longlong *)
                             (lVar4 + (longlong)*(int *)((longlong)ppppplVar2 + 0xc) * 8) + 0x10) +
                         (longlong)*(int *)(ppppplVar2 + 2) * 4) * DAT_023b16a0;
        }
      }
      FUN_015c15b0(1,(ulonglong)uVar27);
      if (0 < (int)uVar27) {
        pppppplVar20 = ppppppplVar38[2];
        pppppplVar3 = ppppppplVar35[2];
        if ((ulonglong)uVar27 - 1 < 3) {
          uVar34 = 0;
        }
        else {
          uVar34 = 0;
          do {
            *(undefined4 *)(pppppplVar3[uVar34] + 0xc) =
                 *(undefined4 *)((longlong)pppppplVar20 + uVar34 * 4);
            *(undefined4 *)(pppppplVar3[uVar34 + 1] + 0xc) =
                 *(undefined4 *)((longlong)pppppplVar20 + uVar34 * 4 + 4);
            *(undefined4 *)(pppppplVar3[uVar34 + 2] + 0xc) =
                 *(undefined4 *)((longlong)pppppplVar20 + uVar34 * 4 + 8);
            *(undefined4 *)(pppppplVar3[uVar34 + 3] + 0xc) =
                 *(undefined4 *)((longlong)pppppplVar20 + uVar34 * 4 + 0xc);
            uVar34 = uVar34 + 4;
          } while ((uVar27 & 0xfffffffc) != uVar34);
        }
        if ((ulonglong)(uVar27 & 3) != 0) {
          uVar30 = 0;
          do {
            *(undefined4 *)(pppppplVar3[uVar34 + uVar30] + 0xc) =
                 *(undefined4 *)((longlong)pppppplVar20 + uVar30 * 4 + uVar34 * 4);
            uVar30 = uVar30 + 1;
          } while ((uVar27 & 3) != uVar30);
        }
      }
      if (ppppppplVar38 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      if (ppppppplVar35 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      if (lVar37 != 0) {
        FUN_00d50b20();
      }
      lVar43 = lVar43 + 1;
      lVar37 = *unaff_RDI;
    } while (lVar43 < *(int *)(lVar37 + 0xc));
  }
  puVar18 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar18 = &DAT_02572358;
  (*local_120)();
  puVar19 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar19 = &DAT_02572358;
  (*local_120)();
  local_130 = puVar19;
  FUN_00d227d0();
  FUN_00d227d0();
  FUN_00d21370();
  FUN_00d21370();
  if (0 < (int)local_res10) {
    ppppppplVar38 = (longlong *******)&local_48;
    uVar27 = local_res10;
    do {
      local_48 = (longlong *******)0x0;
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      local_48 = (longlong *******)0x0;
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  if (0 < (int)local_res10) {
    ppppppplVar35 = (longlong *******)0x0;
    do {
      ppppplVar2 = local_148[2][(longlong)ppppppplVar35];
      if (ppppplVar2 != (longlong *****)0x0) {
        FUN_00d50b00();
      }
      uVar50 = FUN_0122b720();
      ppppppplVar38 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *******)0x0) && (uVar50 = FUN_00d50b00(), local_40[0] != '\0'))
           && (local_48 != (longlong *******)0x0)) {
          uVar50 = FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if (ppppplVar2 != (longlong *****)0x0) {
        uVar50 = FUN_00d50b20();
      }
      if (*(int *)((longlong)ppppppplVar38 + 0xc) != 0) {
        FUN_00d242c0(uVar50,0);
        ppppppplVar44 = (longlong *******)*ppppppplVar38[2];
        if (ppppppplVar44 != (longlong *******)0x0) {
          FUN_00d50b00();
        }
        local_40[0] = '\0';
        local_48 = ppppppplVar44;
        FUN_00d233f0();
        if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if (ppppppplVar44 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        *(undefined4 *)((longlong)*ppppppplVar38[2] + 100) =
             *(undefined4 *)(*ppppppplVar38[2] + 0xc);
        if (1 < *(int *)((longlong)ppppppplVar38 + 0xc)) {
          ppppppplVar44 = (longlong *******)ppppppplVar38[2][1];
          if (ppppppplVar44 != (longlong *******)0x0) {
            FUN_00d50b00();
          }
          local_40[0] = '\0';
          local_48 = ppppppplVar44;
          FUN_00d233f0();
          if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if (ppppppplVar44 != (longlong *******)0x0) {
            FUN_00d50b20();
          }
          *(undefined4 *)(ppppppplVar38[2][1] + 0xd) = *(undefined4 *)(ppppppplVar38[2][1] + 0xc);
        }
      }
      FUN_00d50b20();
      ppppppplVar35 = (longlong *******)((longlong)ppppppplVar35 + 1);
    } while (local_110 != ppppppplVar35);
  }
  puVar19 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar19 = &DAT_02572358;
  (*local_120)();
  lVar37 = *unaff_RDI;
  if (0 < *(int *)(lVar37 + 0xc)) {
    lVar43 = 0;
    ppppppplVar38 = (longlong *******)&local_48;
    do {
      ppppppplVar35 = *(longlong ********)(*(longlong *)(lVar37 + 0x10) + lVar43 * 8);
      if (ppppppplVar35 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      ppppppplVar44 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if ((int)*(uint *)((longlong)ppppppplVar44 + 0xc) < 1) {
LAB_01227b8d:
        FUN_00d50b20();
      }
      else {
        uVar34 = 0;
        do {
          if (DAT_0239424c < *(float *)((longlong)ppppppplVar44[2][uVar34] + 100)) {
            local_40[0] = '\0';
            local_48 = ppppppplVar35;
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            break;
          }
          uVar34 = uVar34 + 1;
        } while (*(uint *)((longlong)ppppppplVar44 + 0xc) != uVar34);
        if (ppppppplVar44 != (longlong *******)0x0) goto LAB_01227b8d;
      }
      if (ppppppplVar35 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      lVar43 = lVar43 + 1;
      lVar37 = *unaff_RDI;
    } while (lVar43 < *(int *)(lVar37 + 0xc));
  }
  if (0 < *(int *)((longlong)puVar19 + 0xc)) {
    lVar37 = 0;
    ppppppplVar38 = (longlong *******)&local_48;
    do {
      lVar43 = *(longlong *)(puVar19[2] + lVar37 * 8);
      if (lVar43 != 0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      ppppppplVar35 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))) {
        FUN_00d50b20();
      }
      uVar27 = *(uint *)((longlong)ppppppplVar35 + 0xc);
      if ((int)uVar27 < 1) {
        *(undefined4 *)(lVar43 + 0x48) = 0;
LAB_01227cad:
        FUN_00d50b20();
      }
      else {
        pppppplVar20 = ppppppplVar35[2];
        if ((ulonglong)uVar27 - 1 < 3) {
          fVar48 = 0.0;
          uVar34 = 0;
        }
        else {
          fVar48 = 0.0;
          uVar34 = 0;
          do {
            fVar48 = fVar48 + *(float *)((longlong)pppppplVar20[uVar34] + 100) +
                     *(float *)((longlong)pppppplVar20[uVar34 + 1] + 100) +
                     *(float *)((longlong)pppppplVar20[uVar34 + 2] + 100) +
                     *(float *)((longlong)pppppplVar20[uVar34 + 3] + 100);
            uVar34 = uVar34 + 4;
          } while ((uVar27 & 0xfffffffc) != uVar34);
        }
        if ((ulonglong)(uVar27 & 3) != 0) {
          uVar30 = 0;
          do {
            fVar48 = fVar48 + *(float *)((longlong)pppppplVar20[uVar34 + uVar30] + 100);
            uVar30 = uVar30 + 1;
          } while ((uVar27 & 3) != uVar30);
        }
        *(float *)(lVar43 + 0x48) = fVar48;
        if (ppppppplVar35 != (longlong *******)0x0) goto LAB_01227cad;
      }
      FUN_00d50b20();
      lVar37 = lVar37 + 1;
    } while (lVar37 < *(int *)((longlong)puVar19 + 0xc));
  }
  FUN_00d242c0();
  FUN_00c8e690();
  ppppppplVar35 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
      (FUN_00d50b00(), ppppppplVar38 = ppppppplVar35, local_40[0] != '\0')) &&
     (local_48 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  ___bzero();
  if (0 < *(int *)((longlong)puVar19 + 0xc)) {
    uVar34 = 0;
    do {
      ppppppplVar44 = *(longlong ********)(puVar19[2] + (longlong)(int)uVar34 * 8);
      if (ppppppplVar44 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      ppppppplVar9 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))) {
        FUN_00d50b20();
      }
      ppppppplVar38 = (longlong *******)(ulonglong)*(uint *)((longlong)ppppppplVar9 + 0xc);
      if ((int)*(uint *)((longlong)ppppppplVar9 + 0xc) < 1) {
        iVar41 = 0;
      }
      else {
        auVar12._12_4_ = 0;
        auVar12._0_12_ = stack0xffffffffffffff8c;
        _local_78 = auVar12 << 0x20;
        ppppppplVar28 = (longlong *******)0x0;
        uVar30 = 0;
        do {
          ppppplVar2 = ppppppplVar9[2][(longlong)ppppppplVar28];
          if (ppppplVar2 != (longlong *****)0x0) {
            FUN_00d50b00();
          }
          if (*(char *)((longlong)ppppppplVar35[2] + (longlong)*(int *)((longlong)ppppplVar2 + 0xc))
              == '\0') {
            if ((float)local_78._0_4_ < *(float *)((longlong)ppppplVar2 + 100)) {
              local_78._0_4_ = *(float *)((longlong)ppppplVar2 + 100);
              uVar30 = (ulonglong)ppppppplVar28 & 0xffffffff;
            }
          }
          iVar41 = (int)uVar30;
          FUN_00d50b20();
          ppppppplVar28 = (longlong *******)((longlong)ppppppplVar28 + 1);
        } while (ppppppplVar38 != ppppppplVar28);
      }
      local_108 = (longlong ******)0x8;
      iVar42 = 1;
      do {
        uVar27 = *(int *)((longlong)ppppppplVar9[2][iVar41] + 0xc) - (uint)(iVar42 == -1);
        ppppppplVar28 = (longlong *******)(ulonglong)uVar27;
        if ((-1 < (int)uVar27) && ((int)uVar27 < (int)local_res10)) {
          while ((iVar23 = (int)ppppppplVar28, ppppppplVar38 = ppppppplVar28,
                 *(char *)((longlong)ppppppplVar35[2] + (longlong)ppppppplVar28) == '\0' &&
                 (puVar22 = *(undefined8 **)(puVar18[2] + (longlong)ppppppplVar28 * 8),
                 puVar22 != (undefined8 *)0x0))) {
            FUN_00d50b00();
            ppppppplVar5 = (longlong *******)puVar22[0x10];
            local_100 = puVar22;
            if (ppppppplVar5 == ppppppplVar44) {
              *(undefined1 *)((longlong)ppppppplVar35[2] + (longlong)ppppppplVar28) = 1;
LAB_0122851c:
              ppppppplVar28 = (longlong *******)(ulonglong)(uint)(iVar23 + iVar42);
              bVar45 = true;
            }
            else {
              if (ppppppplVar5 != (longlong *******)0x0) {
                FUN_00d50b00();
              }
              local_c8 = (undefined1  [8])ppppppplVar5;
              FUN_015f8890();
              ppppppplVar28 = local_48;
              if ((((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
                  (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *******)0x0)) {
                FUN_00d50b20();
              }
              uVar27 = *(uint *)((longlong)ppppppplVar28 + 0xc);
              local_50 = ppppppplVar28;
              uVar65 = uVar27;
              if (iVar42 == -1) {
                uVar65 = 0xffffffff;
              }
              iVar36 = *(int *)((longlong)*ppppppplVar28[2] + 0xc);
              local_58 = (longlong ******)CONCAT44(local_58._4_4_,iVar23);
              uVar40 = iVar23 - iVar36;
              uVar30 = local_38 >> 0x20;
              local_38 = uVar30 << 0x20;
              local_f8 = CONCAT44(local_f8._4_4_,uVar40);
              local_60 = uVar34;
              if (((int)uVar40 < 0) || ((int)uVar27 <= (int)uVar40)) {
                ppppppplVar38 = (longlong *******)0x0;
              }
              else {
                ppppppplVar38 = (longlong *******)0x0;
                local_38 = uVar30 << 0x20;
                ppppplVar2 = ppppppplVar28[2][uVar40];
                uVar16 = uVar65;
                while( true ) {
                  if (ppppplVar2 != (longlong *****)0x0) {
                    FUN_00d50b00();
                  }
                  fVar48 = *(float *)((longlong)ppppplVar2 + 100);
                  local_78._0_4_ = fVar48;
                  if ((fVar48 != DAT_0239424c) ||
                     (uVar65 = uVar40, NAN(fVar48) || NAN(DAT_0239424c))) {
                    local_38 = CONCAT44(local_38._4_4_,(float)local_38 + *(float *)(ppppplVar2 + 8))
                    ;
                    ppppppplVar38 = (longlong *******)(ulonglong)((int)ppppppplVar38 + 1);
                    uVar40 = uVar40 + iVar42;
                    uVar65 = uVar16;
                  }
                  FUN_00d50b20();
                  if (((((float)local_78._0_4_ == DAT_0239424c) &&
                       (!NAN((float)local_78._0_4_) && !NAN(DAT_0239424c))) || ((int)uVar40 < 0)) ||
                     ((int)uVar27 <= (int)uVar40)) break;
                  ppppplVar2 = local_50[2][uVar40];
                  uVar16 = uVar65;
                }
              }
              pppppplVar20 = ppppppplVar9[2];
              ppppppplVar28 = (longlong *******)((ulonglong)local_58 & 0xffffffff);
              if (iVar42 == 1) {
                iVar24 = ~*(uint *)((longlong)*pppppplVar20 + 0xc) + (int)local_58;
                iVar23 = *(int *)(pppppplVar20[iVar24] + 2);
                if (0 < iVar24) {
                  uVar34 = (ulonglong)(iVar24 - 1);
LAB_01228113:
                  iVar23 = iVar23 * 2 - *(int *)(pppppplVar20[uVar34] + 2);
                }
              }
              else {
                iVar24 = (int)local_58 - *(uint *)((longlong)*pppppplVar20 + 0xc);
                iVar23 = *(int *)(pppppplVar20[(longlong)iVar24 + 1] + 2);
                if (iVar24 + 1 < *(int *)((longlong)ppppppplVar9 + 0xc) + -1) {
                  uVar34 = (ulonglong)(iVar24 + 2);
                  goto LAB_01228113;
                }
              }
              uVar34 = FUN_014b75b0(iVar23,0);
              iVar23 = (int)uVar34;
              fVar48 = (float)local_38;
              if ((iVar23 == 0) || ((DAT_02394298 <= (float)local_38 && (3 < (int)ppppppplVar38))))
              {
                iVar24 = 0;
                local_38 = CONCAT44(local_38._4_4_,(int)CONCAT71((int7)(uVar34 >> 8),1));
                if ((fVar48 < DAT_02390124) || (iVar23 = -1, (int)ppppppplVar38 < 4))
                goto LAB_012281a6;
              }
              else {
                uVar30 = (ulonglong)(uint)-iVar23;
                if (0 < iVar23) {
                  uVar30 = uVar34 & 0xffffffff;
                }
                iVar33 = *(int *)(DAT_02802f00 + uVar30 * 4);
                iVar24 = -iVar33;
                if (iVar23 < 1) {
                  iVar24 = iVar33;
                }
                local_38 = (ulonglong)local_38._4_4_ << 0x20;
LAB_012281a6:
                iVar23 = -1;
                if ((uint)local_f8 != uVar65) {
                  ppppppplVar38 = (longlong *******)((longlong)(int)(uint)local_f8 << 3);
                  iVar36 = ((int)local_58 - uVar65) - iVar36;
                  iVar33 = -1;
                  do {
                    lVar37 = *(longlong *)((longlong)local_50[2] + (longlong)ppppppplVar38);
                    if (lVar37 != 0) {
                      FUN_00d50b00();
                    }
                    iVar23 = *(int *)(lVar37 + 0xc);
                    *(undefined1 *)((longlong)ppppppplVar35[2] + (longlong)iVar23) = 1;
                    local_78 = (undefined1  [8])lVar37;
                    if ((char)local_38 == '\0') {
                      iVar33 = *(int *)(lVar37 + 0x10) + iVar24;
                      uVar27 = iVar23 - *(int *)((longlong)*ppppppplVar9[2] + 0xc);
                      if (((int)uVar27 < 0) ||
                         (*(int *)((longlong)ppppppplVar9 + 0xc) <= (int)uVar27)) {
                        FUN_015f8590();
                        local_d8 = local_48;
                        if (local_48 == (longlong *******)0x0) {
                          local_d8 = (longlong *******)0x0;
                          local_f8 = 0;
                        }
                        else if (local_40[0] == '\0') {
                          uVar50 = FUN_00d50b00();
                          local_f8 = CONCAT71((int7)((ulonglong)uVar50 >> 8),1);
                          if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          local_40[0] = '\0';
                          local_f8 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
                        }
                        *(int *)(local_d8 + 2) = iVar33;
                        cVar32 = (char)local_f8;
                        if (iVar42 == 1) {
                          uVar50 = FUN_015f96a0();
                        }
                        else {
                          uVar50 = FUN_015f96d0();
                        }
                      }
                      else {
                        local_d8 = (longlong *******)ppppppplVar9[2][uVar27];
                        uVar50 = FUN_00d50b00();
                        *(int *)(local_d8 + 2) = iVar33;
                        *(undefined4 *)((longlong)local_d8 + 100) =
                             *(undefined4 *)((longlong)local_78 + 100);
                        cVar32 = '\x01';
                      }
                      local_40[0] = '\0';
                      local_48 = local_d8;
                      FUN_00d233f0(uVar50,iVar23);
                      if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
                        FUN_00d50b20();
                      }
                      if (cVar32 != '\0') {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      local_48 = (longlong *******)0x0;
                      local_40[0] = '\0';
                      FUN_00d233f0();
                      iVar23 = iVar33;
                      if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    *(float *)(ppppppplVar5 + 9) =
                         *(float *)(ppppppplVar5 + 9) - *(float *)((longlong)local_78 + 100);
                    FUN_00d50b20();
                    ppppppplVar38 =
                         (longlong *******)((longlong)ppppppplVar38 + (longlong)local_108);
                    iVar36 = iVar36 + iVar42;
                    iVar33 = iVar23;
                  } while (iVar36 != 0);
                }
                if (DAT_02411280 < *(float *)(ppppppplVar5 + 9) ||
                    DAT_02411280 == *(float *)(ppppppplVar5 + 9)) {
                  ppppppplVar28 = (longlong *******)((ulonglong)local_58 & 0xffffffff);
                }
                else {
                  local_40[0] = '\0';
                  local_48 = ppppppplVar5;
                  uVar27 = FUN_00d237a0();
                  ppppppplVar28 = (longlong *******)((ulonglong)local_58 & 0xffffffff);
                  ppppppplVar38 = (longlong *******)(ulonglong)uVar27;
                  if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
                    FUN_00d50b20();
                  }
                  if (uVar27 != 0xffffffff) {
                    FUN_00d23620();
                    local_60 = (ulonglong)((int)local_60 - (uint)((int)uVar27 < (int)local_60));
                  }
                }
              }
              FUN_00d50b20();
              if (ppppppplVar5 != (longlong *******)0x0) {
                FUN_00d50b20();
              }
              uVar34 = local_60;
              if (iVar23 != -1) goto LAB_0122851c;
              bVar45 = false;
            }
            FUN_00d50b20();
            if (((!bVar45) || ((int)ppppppplVar28 < 0)) || ((int)local_res10 <= (int)ppppppplVar28))
            break;
          }
        }
        local_108 = local_108 + -2;
        bVar45 = 0 < iVar42;
        iVar42 = iVar42 + -2;
      } while (bVar45);
      if (ppppppplVar9 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      if (ppppppplVar44 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      uVar27 = (int)uVar34 + 1;
      uVar34 = (ulonglong)uVar27;
    } while ((int)uVar27 < *(int *)((longlong)puVar19 + 0xc));
  }
  if (ppppppplVar35 != (longlong *******)0x0) {
    FUN_00d50b20();
  }
  pppppplVar20 = (longlong ******)FUN_00e8fc40();
  FUN_00d4ff40();
  *pppppplVar20 = (longlong *****)&DAT_02572358;
  (*local_120)();
  local_58 = pppppplVar20;
  if ((int)local_res10 < 1) {
    local_118 = 0;
    local_a0 = (longlong *******)0x0;
    local_128 = 0;
    local_b0 = 0;
    ppppppplVar38 = (longlong *******)0x0;
    local_60 = 0;
  }
  else {
    ppppppplVar44 = (longlong *******)0x0;
    local_60 = 0;
    ppppppplVar35 = (longlong *******)0x0;
    local_b0 = 0;
    local_128 = 0;
    local_a0 = (longlong *******)0x0;
    local_118 = 0;
    do {
      lVar37 = *(longlong *)(puVar18[2] + (longlong)ppppppplVar44 * 8);
      local_50 = ppppppplVar35;
      if (lVar37 == 0) {
LAB_01228690:
        bVar15 = true;
        bVar45 = false;
        uVar39 = 0;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uStack_c0;
        _local_c8 = auVar13 << 0x40;
        lVar43 = 0;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uStack_70;
        _local_78 = auVar14 << 0x40;
        if (local_b0 != 0) {
LAB_012286b7:
          if (lVar43 == 0) {
LAB_01228745:
          }
          else {
            ppppppplVar38 = (longlong *******)FUN_00e8fc40();
            FUN_011dfb20();
            (*(code *)(*ppppppplVar38)[3])();
            if (((char)local_118 != '\0') && (local_a0 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
            local_48 = ppppppplVar38;
            uVar50 = FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
              uVar50 = FUN_00d50b20();
            }
            local_118 = CONCAT71((int7)((ulonglong)uVar50 >> 8),1);
            local_a0 = ppppppplVar38;
            if (bVar45) {
              FUN_00d50b00();
              goto LAB_01228745;
            }
          }
          if (((char)local_128 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          local_128 = local_c8;
          local_b0 = (longlong)local_78;
        }
      }
      else {
        FUN_00d50b00();
        lVar43 = *(longlong *)(lVar37 + 0x80);
        if (lVar43 == 0) goto LAB_01228690;
        uVar50 = FUN_00d50b00();
        uVar39 = (undefined7)((ulonglong)ppppppplVar38 >> 8);
        bVar45 = true;
        bVar15 = false;
        local_c8._1_7_ = (int7)((ulonglong)uVar50 >> 8);
        local_c8[0] = 1;
        local_78 = (undefined1  [8])lVar43;
        if (local_b0 != lVar43) goto LAB_012286b7;
      }
      bVar45 = (char)local_50 != '\0';
      bVar46 = local_60 != 0;
      if (bVar46 && bVar45) {
        FUN_00d50b00();
      }
      ppppppplVar38 = local_50;
      uVar34 = local_60;
      if (lVar37 != 0) {
        if (local_60 == lVar37) {
          if ((char)local_50 == '\0') {
            FUN_00d50b00();
            FUN_00d50b00();
            ppppppplVar38 = (longlong *******)CONCAT71((int7)((ulonglong)ppppppplVar38 >> 8),1);
            uVar34 = local_60;
          }
        }
        else {
          FUN_00d50b00();
          if (bVar46 && bVar45) {
            FUN_00d50b20();
          }
          FUN_00d50b00();
          ppppppplVar38 = (longlong *******)CONCAT71(uVar39,1);
          uVar34 = lVar37;
          if (bVar46 && bVar45) {
            FUN_00d50b20();
          }
        }
      }
      local_60 = uVar34;
      if ((local_a0 != (longlong *******)0x0) && (local_60 != 0)) {
        FUN_015f8590();
        ppppppplVar35 = local_48;
        if (local_40[0] == '\0') {
          if (((local_48 != (longlong *******)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        *(int *)((longlong)ppppppplVar35 + 0xc) = (int)ppppppplVar44;
        if (lVar37 == 0) {
          *(undefined4 *)(ppppppplVar35 + 8) = 0;
        }
        FUN_015f96a0();
        FUN_00d50b20();
      }
      if (((char)ppppppplVar38 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar15 && local_78 != (undefined1  [8])0x0) {
        FUN_00d50b20();
      }
      if (lVar37 != 0) {
        FUN_00d50b20();
      }
      ppppppplVar44 = (longlong *******)((longlong)ppppppplVar44 + 1);
      ppppppplVar35 = (longlong *******)((ulonglong)ppppppplVar38 & 0xffffffff);
    } while (local_110 != ppppppplVar44);
  }
  iVar41 = *(int *)((longlong)local_58 + 0xc);
  if (0 < iVar41) {
    ppppppplVar35 = (longlong *******)0x0;
    do {
      pppplVar6 = local_58[2][(int)ppppppplVar35];
      if (pppplVar6 != (longlong ****)0x0) {
        FUN_00d50b00();
      }
      local_50 = ppppppplVar35;
      FUN_015f8890();
      ppppppplVar35 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))) {
        FUN_00d50b20();
      }
      uVar27 = *(uint *)((longlong)ppppppplVar35 + 0xc);
      uVar34 = (ulonglong)uVar27;
      if ((int)uVar27 < 1) {
        iVar41 = 0;
        if (0 < (int)local_50) goto LAB_01228add;
LAB_01228b0b:
        local_c8 = (undefined1  [8])local_50;
LAB_01228bd2:
        FUN_00d50b20();
      }
      else {
        uVar30 = 0;
        iVar41 = 0;
        do {
          ppppplVar2 = ppppppplVar35[2][uVar30];
          if (ppppplVar2 != (longlong *****)0x0) {
            FUN_00d50b00();
          }
          local_78._0_4_ = *(undefined4 *)(ppppplVar2 + 8);
          FUN_00d50b20();
          iVar41 = iVar41 + (uint)(DAT_0239424c < (float)local_78._0_4_);
          uVar30 = uVar30 + 1;
        } while (uVar34 != uVar30);
        if ((int)local_50 < 1) goto LAB_01228b0b;
LAB_01228add:
        if ((3 < (int)uVar27) && (2 < iVar41 - 1U)) {
          local_c8 = (undefined1  [8])local_50;
          goto LAB_01228bd2;
        }
        local_c8 = (undefined1  [8])CONCAT44(0,(int)local_50 - 1);
        pppplVar7 = local_58[2][(longlong)local_c8];
        if (pppplVar7 != (longlong ****)0x0) {
          FUN_00d50b00();
        }
        local_78 = (undefined1  [8])pppplVar7;
        FUN_00d23340();
        ppppppplVar44 = local_48;
        local_158 = local_40[0];
        pcVar21 = local_40;
        if (local_40[0] == '\0') {
          pcVar21 = &local_158;
        }
        *pcVar21 = '\0';
        if ((local_40[0] != '\0') && (ppppppplVar44 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        if (local_158 != '\0') {
          FUN_00d50b20();
        }
        if (0 < (int)uVar27) {
          do {
            FUN_015f8520();
            ppppppplVar44 = local_48;
            if ((((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
                (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            FUN_015f96a0();
            if (ppppppplVar44 != (longlong *******)0x0) {
              FUN_00d50b20();
            }
            uVar27 = (int)uVar34 - 1;
            uVar34 = (ulonglong)uVar27;
          } while (uVar27 != 0);
        }
        FUN_00d23620();
        if (local_78 != (undefined1  [8])0x0) {
          FUN_00d50b20();
        }
        if (ppppppplVar35 != (longlong *******)0x0) goto LAB_01228bd2;
      }
      if (pppplVar6 != (longlong ****)0x0) {
        FUN_00d50b20();
      }
      uVar27 = local_c8._0_4_ + 1;
      iVar41 = *(int *)((longlong)local_58 + 0xc);
      ppppppplVar35 = (longlong *******)(ulonglong)uVar27;
    } while ((int)uVar27 < iVar41);
  }
  if ((iVar41 != 0) && (pppplVar6 = *local_58[2], *(int *)((longlong)pppplVar6[2] + 0xc) != 0)) {
    FUN_00d50b00();
    plVar8 = *pppplVar6[2][2];
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_78 = (undefined1  [8])plVar8;
    if (0 < *(int *)((longlong)plVar8 + 0xc)) {
      iVar41 = *(int *)((longlong)plVar8 + 0xc) + 1;
      do {
        FUN_015f8520();
        ppppppplVar35 = local_48;
        if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
           ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))) {
          FUN_00d50b20();
        }
        FUN_015f96d0();
        if (ppppppplVar35 != (longlong *******)0x0) {
          FUN_00d50b20();
        }
        iVar41 = iVar41 + -1;
      } while (1 < iVar41);
    }
    if (local_78 != (undefined1  [8])0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  iVar41 = *(int *)((longlong)local_58 + 0xc);
  if (1 < iVar41) {
    lVar37 = 0;
    do {
      ppppppplVar35 = (longlong *******)local_58[2][lVar37];
      if (ppppppplVar35 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      ppppppplVar44 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      iVar41 = *(int *)((longlong)ppppppplVar44 + 0xc);
      FUN_00d23340();
      ppppppplVar9 = local_48;
      local_158 = local_40[0];
      pcVar21 = local_40;
      if (local_40[0] == '\0') {
        pcVar21 = &local_158;
      }
      *pcVar21 = '\0';
      if ((local_40[0] != '\0') && (ppppppplVar9 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      local_78._0_4_ = *(undefined4 *)(ppppppplVar9 + 8);
      if (local_158 != '\0') {
        FUN_00d50b20();
      }
      if (((float)local_78._0_4_ != DAT_0239424c) ||
         (NAN((float)local_78._0_4_) || NAN(DAT_0239424c))) {
LAB_01228fef:
        FUN_00d50b20();
      }
      else {
        uVar34 = (ulonglong)(iVar41 - 1U);
        if (1 < iVar41) {
          uVar34 = (ulonglong)(iVar41 - 1U);
          do {
            if ((*(float *)(ppppppplVar44[2][uVar34] + 8) != DAT_0239424c) ||
               (NAN(*(float *)(ppppppplVar44[2][uVar34] + 8)) || NAN(DAT_0239424c)))
            goto LAB_01228ef3;
            bVar45 = 1 < (longlong)uVar34;
            uVar34 = uVar34 - 1;
          } while (bVar45);
          uVar34 = 0;
        }
LAB_01228ef3:
        iVar42 = ((int)uVar34 + iVar41) / 2;
        local_50 = ppppppplVar35;
        if (iVar42 < iVar41) {
          pppplVar6 = local_58[2][lVar37 + 1];
          if (pppplVar6 != (longlong ****)0x0) {
            FUN_00d50b00();
          }
          local_78 = (undefined1  [8])pppplVar6;
          FUN_015f8890();
          uVar17 = *(undefined4 *)(*local_48[2] + 2);
          if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          pppppplVar20 = ppppppplVar44[2];
          uVar34 = (ulonglong)iVar42;
          uVar30 = ~uVar34;
          uVar31 = (ulonglong)(uint)(iVar41 - iVar42) & 7;
          if ((iVar41 - iVar42 & 7U) != 0) {
            do {
              *(undefined4 *)(pppppplVar20[uVar34] + 2) = uVar17;
              uVar34 = uVar34 + 1;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
          }
          if (6 < uVar30 + (longlong)iVar41) {
            do {
              *(undefined4 *)(pppppplVar20[uVar34] + 2) = uVar17;
              *(undefined4 *)(pppppplVar20[uVar34 + 1] + 2) = uVar17;
              *(undefined4 *)(pppppplVar20[uVar34 + 2] + 2) = uVar17;
              *(undefined4 *)(pppppplVar20[uVar34 + 3] + 2) = uVar17;
              *(undefined4 *)(pppppplVar20[uVar34 + 4] + 2) = uVar17;
              *(undefined4 *)(pppppplVar20[uVar34 + 5] + 2) = uVar17;
              *(undefined4 *)(pppppplVar20[uVar34 + 6] + 2) = uVar17;
              *(undefined4 *)(pppppplVar20[uVar34 + 7] + 2) = uVar17;
              uVar34 = uVar34 + 8;
            } while ((longlong)iVar41 != uVar34);
          }
          if (local_78 != (undefined1  [8])0x0) {
            FUN_00d50b20();
          }
        }
        ppppppplVar35 = local_50;
        if (ppppppplVar44 != (longlong *******)0x0) goto LAB_01228fef;
      }
      if (ppppppplVar35 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      lVar37 = lVar37 + 1;
      iVar41 = *(int *)((longlong)local_58 + 0xc);
    } while (lVar37 < (longlong)iVar41 + -1);
  }
  if (0 < iVar41) {
    lVar37 = 0;
    do {
      pppplVar6 = local_58[2][lVar37];
      if (pppplVar6 != (longlong ****)0x0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      ppppppplVar35 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      uVar27 = *(uint *)((longlong)ppppppplVar35 + 0xc);
      FUN_015fa880();
      if ((int)uVar27 < 1) {
LAB_0122918d:
        FUN_00d50b20();
      }
      else {
        pppppplVar20 = ppppppplVar35[2];
        if ((ulonglong)uVar27 - 1 < 7) {
          uVar34 = 0;
        }
        else {
          uVar34 = 0;
          do {
            pppppplVar20[uVar34][0x11] = (longlong ****)0x0;
            pppppplVar20[uVar34 + 1][0x11] = (longlong ****)0x0;
            pppppplVar20[uVar34 + 2][0x11] = (longlong ****)0x0;
            pppppplVar20[uVar34 + 3][0x11] = (longlong ****)0x0;
            pppppplVar20[uVar34 + 4][0x11] = (longlong ****)0x0;
            pppppplVar20[uVar34 + 5][0x11] = (longlong ****)0x0;
            pppppplVar20[uVar34 + 6][0x11] = (longlong ****)0x0;
            pppppplVar20[uVar34 + 7][0x11] = (longlong ****)0x0;
            uVar34 = uVar34 + 8;
          } while ((uVar27 & 0xfffffff8) != uVar34);
        }
        if ((ulonglong)(uVar27 & 7) != 0) {
          uVar30 = 0;
          do {
            pppppplVar20[uVar34 + uVar30][0x11] = (longlong ****)0x0;
            uVar30 = uVar30 + 1;
          } while ((uVar27 & 7) != uVar30);
        }
        if (ppppppplVar35 != (longlong *******)0x0) goto LAB_0122918d;
      }
      if (pppplVar6 != (longlong ****)0x0) {
        FUN_00d50b20();
      }
      lVar37 = lVar37 + 1;
      iVar41 = *(int *)((longlong)local_58 + 0xc);
    } while (lVar37 < iVar41);
    if (1 < iVar41) {
      lVar37 = 1;
      do {
        pppplVar6 = local_58[2][lVar37];
        if (pppplVar6 != (longlong ****)0x0) {
          FUN_00d50b00();
        }
        FUN_015f8890();
        ppppppplVar35 = local_48;
        if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
           ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))) {
          FUN_00d50b20();
        }
        if (*(int *)((longlong)*ppppppplVar35[2] + 0xc) % 2 == 1) {
          FUN_015f8890();
          FUN_00d23340();
          ppppppplVar35 = local_48;
          local_80[0] = local_40[0];
          pcVar21 = local_40;
          if (local_40[0] == '\0') {
            pcVar21 = local_80;
          }
          *pcVar21 = '\0';
          if ((local_40[0] != '\0') && (ppppppplVar35 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80[0] == '\0') && (ppppppplVar35 != (longlong *******)0x0)) {
            FUN_00d50b00();
          }
          if ((local_150 != '\0') && (CONCAT71(uStack_157,local_158) != 0)) {
            FUN_00d50b20();
          }
          FUN_015f9a10();
          FUN_015f96d0();
          if (ppppppplVar35 != (longlong *******)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if (pppplVar6 != (longlong ****)0x0) {
          FUN_00d50b20();
        }
        lVar37 = lVar37 + 1;
        iVar41 = *(int *)((longlong)local_58 + 0xc);
      } while (lVar37 < iVar41);
    }
    if (0 < iVar41) {
      lVar37 = 0;
      do {
        pppplVar6 = local_58[2][lVar37];
        if (pppplVar6 != (longlong ****)0x0) {
          FUN_00d50b00();
        }
        FUN_015f8890();
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *******)0x0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_012293e0;
          }
        }
        else if (local_48 != (longlong *******)0x0) {
LAB_012293e0:
          FUN_00d50b20();
        }
        if (pppplVar6 != (longlong ****)0x0) {
          FUN_00d50b20();
        }
        lVar37 = lVar37 + 1;
      } while (lVar37 < *(int *)((longlong)local_58 + 0xc));
    }
  }
  if (in_stack_00000038 == '\0') {
    bVar15 = true;
    bVar45 = true;
    local_90 = (longlong ******)0x0;
    iVar41 = *(int *)(*unaff_RDI + 0xc);
    goto joined_r0x01229ca8;
  }
  FUN_00c8e690();
  ppppppplVar35 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  ppppppplVar44 = local_48;
  if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
     ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_108 = ppppppplVar35[2];
  pppppplVar20 = ppppppplVar44[2];
  puVar22 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar22 = &DAT_024c1200;
  *(undefined8 *)((longlong)puVar22 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar22 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar22 + 0x1c) = 0;
  FUN_00d500e0();
  local_100 = puVar22;
  FUN_00e3d400();
  local_90 = (longlong ******)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_90 = (longlong *****)&DAT_02572358;
  (*local_120)();
  if (*(int *)((longlong)local_58 + 0xc) < 1) {
LAB_01229cb9:
    FUN_00d50b20();
  }
  else {
    pcVar29 = (code *)0x0;
    do {
      ppppppplVar9 = (longlong *******)local_58[2][(longlong)pcVar29];
      local_120 = pcVar29;
      if (ppppppplVar9 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
      local_110 = ppppppplVar9;
      FUN_015f8890();
      ppppppplVar9 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))) {
        FUN_00d50b20();
      }
      local_f8 = (ulonglong)*(uint *)((longlong)ppppppplVar9 + 0xc);
      if ((int)*(uint *)((longlong)ppppppplVar9 + 0xc) < 1) {
        local_c8 = (undefined1  [8])0x0;
        local_38 = (ulonglong)local_38._4_4_ << 0x20;
      }
      else {
        _local_c8 = ZEXT816(0);
        local_38 = (ulonglong)local_38._4_4_ << 0x20;
        uVar34 = 0;
        do {
          ppppplVar2 = ppppppplVar9[2][uVar34];
          if (ppppplVar2 != (longlong *****)0x0) {
            FUN_00d50b00();
          }
          auVar52._0_8_ = FUN_014b2ea0();
          auVar52._8_8_ = extraout_XMM0_Qb;
          auVar53._4_12_ = auVar52._4_12_;
          auVar53._0_4_ = (float)auVar52._0_8_ * DAT_023941f4;
          auVar54._0_8_ = _exp2f(auVar53._0_8_);
          auVar54._8_8_ = extraout_XMM0_Qb_00;
          auVar55._4_12_ = auVar54._4_12_;
          fVar48 = (float)auVar54._0_8_ * DAT_023941f8;
          auVar55._0_4_ = fVar48 * _DAT_0240cdec;
          iVar41 = FUN_00e7d780(auVar55._0_8_);
          ___bzero();
          FUN_015fe030();
          ppppppplVar28 = local_48;
          if ((((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
              (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *******)0x0)) {
            FUN_00d50b20();
          }
          local_78._0_4_ = fVar48 * DAT_02411290;
          if (0 < *(int *)((longlong)ppppppplVar28 + 0xc)) {
            lVar37 = 0;
            do {
              if (ppppppplVar28[2][lVar37] != (longlong *****)0x0) {
                FUN_00d50b00();
              }
              auVar56._0_8_ = FUN_014b2ea0();
              auVar56._8_8_ = extraout_XMM0_Qb_01;
              auVar57._4_12_ = auVar56._4_12_;
              auVar57._0_4_ = (float)auVar56._0_8_ * DAT_023941f4;
              fVar49 = (float)_exp2f(auVar57._0_8_);
              if ((float)local_78._0_4_ <= fVar49 * DAT_023941f8) {
                local_50 = (longlong *******)CONCAT44(local_50._4_4_,fVar49 * DAT_023941f8);
                fVar49 = (float)_powf();
                uVar27 = FUN_00e7d780(local_50._0_4_ * _DAT_0240cdec);
                if (uVar27 < 0x400) {
                  *(float *)((longlong)local_108 + (ulonglong)uVar27 * 4) =
                       fVar49 + *(float *)((longlong)local_108 + (ulonglong)uVar27 * 4);
                }
              }
              FUN_00d50b20();
              lVar37 = lVar37 + 1;
            } while (lVar37 < *(int *)((longlong)ppppppplVar28 + 0xc));
          }
          uVar50 = FUN_015c15b0(0,0x400);
          FUN_00e3daa0(uVar50,pppppplVar20);
          fVar49 = *(float *)pppppplVar20;
          lVar37 = 3;
          local_78._0_4_ = fVar49;
          do {
            fVar47 = *(float *)((longlong)pppppplVar20 + (lVar37 + -2) * 4);
            if (fVar49 <= fVar47) break;
            *(float *)((longlong)pppppplVar20 + (lVar37 + -3) * 4) = 0.0;
            fVar1 = *(float *)((longlong)pppppplVar20 + (lVar37 + -1) * 4);
            if (fVar47 <= fVar1) break;
            *(float *)((longlong)pppppplVar20 + (lVar37 + -2) * 4) = 0.0;
            fVar49 = *(float *)((longlong)pppppplVar20 + lVar37 * 4);
            if (fVar1 <= fVar49) break;
            *(float *)((longlong)pppppplVar20 + (lVar37 + -1) * 4) = 0.0;
            lVar37 = lVar37 + 3;
          } while (lVar37 != 0x402);
          FUN_015c15b0(0,0x400);
          FUN_00e7d780((float)iVar41 * _DAT_023b294c);
          uVar50 = FUN_015b3350();
          ppppppplVar5 = local_48;
          if (((local_40[0] == '\0') && (local_48 != (longlong *******)0x0)) &&
             ((uVar50 = FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *******)0x0)))
             ) {
            uVar50 = FUN_00d50b20();
          }
          FUN_00d242c0(uVar50,0);
          if (0 < *(int *)((longlong)ppppppplVar5 + 0xc)) {
            dVar51 = (double)(float)local_78._0_4_;
            lVar37 = 0;
            do {
              local_50 = (longlong *******)ppppppplVar5[2][lVar37][3];
              _local_78 = ZEXT416((uint)(fVar48 / (float)((double)ppppppplVar5[2][lVar37][2] /
                                                         _DAT_0240cd90)));
              iVar41 = FUN_00e7d780();
              if ((iVar41 < 5) &&
                 ((float)((uint)((float)local_78._0_4_ - (float)iVar41) & _DAT_02390140) <
                  DAT_0240cdf0)) {
                fVar49 = (float)((double)local_50 / dVar51);
                if (iVar41 == 2) {
                  local_38 = CONCAT44(local_38._4_4_,(float)local_38 + fVar49);
                }
                auVar58._0_4_ = -(uint)(iVar41 == _DAT_0240ce80);
                auVar58._4_4_ = -(uint)(iVar41 == _UNK_0240ce84);
                auVar58._8_4_ = -(uint)(_UNK_0240ce88 == 0);
                auVar58._12_4_ = -(uint)(_UNK_0240ce8c == 0);
                auVar10._4_4_ = fVar49 + local_c8._4_4_;
                auVar10._0_4_ = fVar49 + local_c8._0_4_;
                auVar10._8_4_ = local_c8._8_4_ + 0.0;
                auVar10._12_4_ = local_c8._12_4_ + 0.0;
                _local_c8 = blendvps(_local_c8,auVar10,auVar58);
              }
              lVar37 = lVar37 + 1;
            } while (lVar37 < *(int *)((longlong)ppppppplVar5 + 0xc));
          }
          FUN_00d50b20();
          if (ppppppplVar28 != (longlong *******)0x0) {
            FUN_00d50b20();
          }
          if (ppppplVar2 != (longlong *****)0x0) {
            FUN_00d50b20();
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 != local_f8);
      }
      ppppppplVar28 = (longlong *******)FUN_00e8fc40();
      FUN_011dfb20();
      (*(code *)(*ppppppplVar28)[3])();
      bVar45 = (float)local_38 < (float)local_c8._0_4_;
      if (0 < (int)(uint)local_f8) {
        if ((float)local_c8._0_4_ <= (float)local_38) {
          local_c8._0_4_ = (float)local_38;
        }
        uVar27 = *(uint *)(&DAT_0240cd98 + (ulonglong)bVar45 * 4);
        uVar65 = -(uint)((float)local_c8._0_4_ < (float)local_c8._4_4_) & DAT_02390d2c;
        uVar34 = 0;
        do {
          if (ppppppplVar9[2][uVar34] != (longlong *****)0x0) {
            FUN_00d50b00();
          }
          FUN_015f8590();
          ppppppplVar5 = local_48;
          if (local_40[0] == '\0') {
            if (((local_48 != (longlong *******)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
               (local_48 != (longlong *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          auVar59._0_8_ = FUN_014b2ea0();
          auVar59._8_8_ = extraout_XMM0_Qb_02;
          auVar60._4_12_ = auVar59._4_12_;
          auVar60._0_4_ = (float)auVar59._0_8_ * DAT_023941f4;
          auVar61._0_8_ = _exp2f(auVar60._0_8_);
          auVar61._8_8_ = extraout_XMM0_Qb_03;
          auVar62._4_12_ = auVar61._4_12_;
          auVar62._0_4_ =
               (((float)auVar61._0_8_ * DAT_023941f8) /
               (float)(uVar65 | ~-(uint)((float)local_c8._0_4_ < (float)local_c8._4_4_) & uVar27)) *
               DAT_02394204;
          auVar63._0_8_ = _logf(auVar62._0_8_);
          auVar63._8_8_ = extraout_XMM0_Qb_04;
          auVar64._4_12_ = auVar63._4_12_;
          auVar64._0_4_ = (float)auVar63._0_8_ * DAT_02394208;
          uVar17 = FUN_01483610(auVar64._0_8_);
          *(undefined4 *)(ppppppplVar5 + 2) = uVar17;
          FUN_015f96a0();
          FUN_00d50b20();
          FUN_00d50b20();
          uVar34 = uVar34 + 1;
        } while (local_f8 != uVar34);
      }
      local_40[0] = '\0';
      local_48 = ppppppplVar28;
      FUN_00d21140();
      pcVar29 = local_120;
      if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar28 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      if (ppppppplVar9 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      if (local_110 != (longlong *******)0x0) {
        FUN_00d50b20();
      }
      pcVar29 = pcVar29 + 1;
    } while ((longlong)pcVar29 < (longlong)*(int *)((longlong)local_58 + 0xc));
    if (local_100 != (undefined8 *)0x0) goto LAB_01229cb9;
  }
  if (ppppppplVar44 != (longlong *******)0x0) {
    FUN_00d50b20();
  }
  if (ppppppplVar35 != (longlong *******)0x0) {
    FUN_00d50b20();
  }
  bVar15 = false;
  bVar45 = false;
  iVar41 = *(int *)(*unaff_RDI + 0xc);
joined_r0x01229ca8:
  if (0 < iVar41) {
    lVar37 = 0;
    do {
      FUN_015fa940();
      lVar37 = lVar37 + 1;
      bVar45 = bVar15;
    } while (lVar37 < *(int *)(*unaff_RDI + 0xc));
  }
  uVar50 = FUN_00d216c0();
  local_48 = (longlong *******)local_58;
  local_40[0] = '\0';
  uVar50 = FUN_00d214d0(uVar50,*(undefined4 *)(*unaff_RDI + 0xc));
  if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
    uVar50 = FUN_00d50b20();
  }
  if (in_stack_00000038 != '\0') {
    local_40[0] = '\0';
    local_48 = (longlong *******)local_90;
    FUN_00d214d0(uVar50,*(undefined4 *)(*unaff_RDI + 0xc));
    if ((local_40[0] != '\0') && (local_48 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar45 && local_90 != (longlong ******)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_118 != '\0') && (local_a0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_128 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_98 = (char)ppppppplVar38;
  if ((local_98 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != (longlong ******)0x0) {
    FUN_00d50b20();
  }
  if (puVar19 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_130 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_138 != (longlong *******)0x0) {
    FUN_00d50b20();
  }
  if (local_140 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_148 != (longlong *******)0x0) {
    FUN_00d50b20();
  }
  return;
}


