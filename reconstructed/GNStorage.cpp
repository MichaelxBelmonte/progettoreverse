// Reconstructed implementation of GNStorage
// From MikeCore binary — reverse-engineered pseudocode

#include "GNStorage.h"

// ============================================================
// @015985f0 — 6672 bytes
// str: ""GNStorage""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0159a01b) */
/* WARNING: Removing unreachable block (ram,0x0159a02b) */
/* WARNING: Removing unreachable block (ram,0x01598dad) */
/* WARNING: Removing unreachable block (ram,0x01598db9) */
/* WARNING: Removing unreachable block (ram,0x01599ecd) */
/* WARNING: Removing unreachable block (ram,0x01598cf3) */
/* WARNING: Removing unreachable block (ram,0x01598d03) */
/* WARNING: Removing unreachable block (ram,0x01598ea2) */
/* WARNING: Removing unreachable block (ram,0x01598eca) */
/* WARNING: Removing unreachable block (ram,0x01598711) */
/* WARNING: Removing unreachable block (ram,0x01598730) */
/* WARNING: Removing unreachable block (ram,0x01598713) */
/* WARNING: Removing unreachable block (ram,0x01598732) */
/* WARNING: Removing unreachable block (ram,0x01598ea4) */
/* WARNING: Removing unreachable block (ram,0x01598ecc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015985f0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  void *pvVar11;
  double *pdVar12;
  pthread_key_t pVar13;
  longlong lVar14;
  code *pcVar15;
  longlong lVar16;
  pthread_key_t pVar17;
  undefined4 uVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 *unaff_RDI;
  longlong **pplVar21;
  undefined7 uVar23;
  ulonglong uVar22;
  longlong *plVar24;
  undefined8 uVar25;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  double dVar26;
  double dVar27;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  undefined8 *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  int local_10c;
  int local_108;
  undefined4 local_104;
  double local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  char local_e0;
  int local_d8;
  uint local_d4;
  code *local_d0;
  double local_c8;
  uint local_bc;
  ulonglong local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  longlong *local_90;
  char local_88;
  pthread_key_t local_78;
  longlong *local_68;
  longlong *local_58;
  char local_50;
  ulonglong local_48;
  longlong *local_40;
  char local_31;
  
  lVar16 = DAT_027c7808;
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if (DAT_027c7808 != 0) {
      FUN_00d50b00();
    }
    uVar25 = (**(code **)(*param_2 + 0x88))();
    local_a8 = (longlong)local_90;
    if ((local_88 == '\0') && (local_90 != (longlong *)0x0)) {
      uVar25 = FUN_00d50b00();
    }
    if (lVar16 != 0) {
      uVar25 = FUN_00d50b20();
    }
    lVar16 = local_a8;
    if ((local_a8 == 0) || (*(int *)(local_a8 + 0xc) == 0)) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      cVar4 = '\0';
      local_68 = (longlong *)0x0;
      local_48 = 0;
      local_40 = (longlong *)0x0;
    }
    else {
      local_90 = (longlong *)0x0;
      local_78 = -1;
      local_b8 = 4;
      cVar4 = '\0';
      local_68 = (longlong *)0x0;
      local_48 = 0;
      local_40 = (longlong *)0x0;
      uVar22 = local_b8;
LAB_01598705:
      local_b8 = uVar22;
      plVar19 = local_90;
      lVar14 = DAT_027c7238;
      lVar9 = (longlong)(int)local_78;
      local_78 = local_78 + 1;
      if ((int)local_78 < *(int *)(lVar16 + 0xc)) {
        local_90 = *(longlong **)(*(longlong *)(lVar16 + 0x10) + 8 + lVar9 * 8);
        if (DAT_027c7238 != 0) {
          uVar25 = FUN_00d50b00();
        }
        local_1d0 = lVar14;
        local_1c8 = '\x01';
        (**(code **)(*local_90 + 0x88))(uVar25,&local_1d0);
        plVar19 = local_58;
        FUN_00053ac0();
        pplVar21 = (longlong **)&DAT_02802688;
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar21 = &local_58;
          if (cVar3 == '\0') {
            pplVar21 = (longlong **)&DAT_02802688;
          }
        }
        plVar19 = *pplVar21;
        uVar23 = (undefined7)((ulonglong)pplVar21 >> 8);
        if (plVar19 == local_40) {
          if (((char)local_48 == '\0') && (plVar19 != (longlong *)0x0)) {
            plVar19 = local_40;
            if (*(char *)(pplVar21 + 1) != '\0') goto LAB_01598817;
            uVar22 = CONCAT71(uVar23,1);
            FUN_00d50b00();
          }
          else {
            uVar22 = local_48 & 0xffffffff;
          }
        }
        else {
          if (*(char *)(pplVar21 + 1) == '\0') {
            if (plVar19 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            uVar22 = CONCAT71(uVar23,1);
            if (((char)local_48 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_40 = plVar19;
              goto LAB_01598870;
            }
          }
          else {
            if (((char)local_48 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01598817:
            *(undefined1 *)(pplVar21 + 1) = 0;
          }
          uVar22 = CONCAT71(uVar23,1);
          local_40 = plVar19;
        }
LAB_01598870:
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (longlong *)0x0) {
LAB_01598dfd:
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          FUN_015ac3a0();
          local_40 = (longlong *)0x0;
          local_48 = uVar22 & 0xffffffff;
          goto LAB_01599e20;
        }
        local_48 = uVar22 & 0xffffffff;
        uVar5 = FUN_00d45870();
        lVar14 = DAT_027c7240;
        uVar25 = extraout_XMM0_Qa;
        if (DAT_027c7240 != 0) {
          uVar25 = FUN_00d50b00();
        }
        local_1c0 = lVar14;
        local_1b8 = '\x01';
        (**(code **)(*local_90 + 0x88))(uVar25,&local_1c0);
        plVar19 = local_58;
        uVar25 = FUN_00053ac0();
        pplVar21 = (longlong **)&DAT_02802688;
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x360))();
          uVar25 = FUN_00e85ea0();
          pplVar21 = &local_58;
          if ((char)uVar25 == '\0') {
            pplVar21 = (longlong **)&DAT_02802688;
          }
        }
        plVar19 = *pplVar21;
        cVar3 = (char)uVar22;
        if (plVar19 == local_40) {
          if ((cVar3 == '\0') && (plVar19 != (longlong *)0x0)) {
            plVar19 = local_40;
            if (*(char *)(pplVar21 + 1) != '\0') goto LAB_015989c8;
            local_48 = CONCAT71((int7)((ulonglong)uVar25 >> 8),1);
            FUN_00d50b00();
            plVar19 = local_40;
          }
          else {
            local_48 = uVar22 & 0xffffffff;
            plVar19 = local_40;
          }
        }
        else if (*(char *)(pplVar21 + 1) == '\0') {
          if (plVar19 != (longlong *)0x0) {
            uVar25 = FUN_00d50b00();
          }
          local_48 = CONCAT71((int7)((ulonglong)uVar25 >> 8),1);
          if (cVar3 != '\0') {
            FUN_00d50b20();
          }
        }
        else {
          if (cVar3 != '\0') {
            uVar25 = FUN_00d50b20();
          }
LAB_015989c8:
          local_40 = plVar19;
          *(undefined1 *)(pplVar21 + 1) = 0;
          local_48 = CONCAT71((int7)((ulonglong)uVar25 >> 8),1);
          plVar19 = local_40;
        }
        local_40 = plVar19;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1b8 != '\0') && (local_1c0 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (longlong *)0x0) {
          uVar22 = local_48 & 0xffffffff;
          goto LAB_01598dfd;
        }
        uVar6 = FUN_00d45870();
        lVar14 = DAT_027c7268;
        uVar25 = extraout_XMM0_Qa_00;
        if (DAT_027c7268 != 0) {
          uVar25 = FUN_00d50b00();
        }
        local_1b0 = lVar14;
        local_1a8 = '\x01';
        uVar25 = (**(code **)(*local_90 + 0x88))(uVar25,&local_1b0);
        plVar19 = local_58;
        if ((DAT_026d5e38 == '\0') &&
           (iVar7 = ___cxa_guard_acquire(), uVar25 = extraout_XMM0_Qa_02, iVar7 != 0)) {
          _DAT_026d5d88 = FUN_00d4fe50();
          _DAT_026d5d70 = "GNStorage";
          _DAT_026d5d78 = 0x30;
          _DAT_026d5d80 = FUN_0005d8e0;
          _DAT_026d5d90 = 0;
          uRam00000000026d5d98 = 0;
          _DAT_026d5da0 = 0;
          uRam00000000026d5da8 = 0;
          _DAT_026d5db0 = 0;
          uRam00000000026d5db8 = 0;
          _DAT_026d5dc0 = 0;
          uRam00000000026d5dc8 = 0;
          _DAT_026d5dd0 = 0;
          uRam00000000026d5dd8 = 0;
          _DAT_026d5de0 = 0;
          uRam00000000026d5de8 = 0;
          _DAT_026d5df0 = 0;
          uRam00000000026d5df8 = 0;
          _DAT_026d5e00 = 0;
          uRam00000000026d5e08 = 0;
          _DAT_026d5e10 = 0;
          uRam00000000026d5e18 = 0;
          _DAT_026d5e20 = 0;
          uRam00000000026d5e28 = 0;
          _DAT_026d5e30 = 0;
          uVar25 = ___cxa_guard_release();
        }
        pplVar21 = (longlong **)&DAT_02802688;
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar21 = &local_58;
          uVar25 = extraout_XMM0_Qa_01;
          if (cVar3 == '\0') {
            pplVar21 = (longlong **)&DAT_02802688;
          }
        }
        plVar19 = *pplVar21;
        if (plVar19 == local_68) {
          if ((cVar4 == '\0') && (plVar19 != (longlong *)0x0)) {
            plVar19 = local_68;
            if (*(char *)(pplVar21 + 1) != '\0') goto LAB_01598ae5;
            cVar4 = '\x01';
            uVar25 = FUN_00d50b00();
          }
        }
        else {
          if (*(char *)(pplVar21 + 1) == '\0') {
            if (plVar19 != (longlong *)0x0) {
              uVar25 = FUN_00d50b00();
            }
            if ((cVar4 != '\0') && (local_68 != (longlong *)0x0)) {
              uVar25 = FUN_00d50b20();
              local_68 = plVar19;
              cVar4 = '\x01';
              goto LAB_01598b50;
            }
          }
          else {
            if ((cVar4 != '\0') && (local_68 != (longlong *)0x0)) {
              uVar25 = FUN_00d50b20();
            }
LAB_01598ae5:
            *(undefined1 *)(pplVar21 + 1) = 0;
          }
          local_68 = plVar19;
          cVar4 = '\x01';
        }
LAB_01598b50:
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          uVar25 = FUN_00d50b20();
        }
        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
          uVar25 = FUN_00d50b20();
        }
        iVar7 = (int)local_b8;
        if (local_68 == (longlong *)0x0 || (int)uVar6 <= iVar7) {
          uVar22 = local_b8 & 0xffffffff;
          if (iVar7 < (int)uVar6) {
            do {
              uVar22 = (ulonglong)uVar6;
              if ((uVar5 & 1) != 0) goto LAB_01598705;
              uVar5 = (int)uVar5 / 2;
              uVar6 = (int)uVar6 / 2;
            } while (iVar7 < (int)uVar6);
            uVar22 = local_b8 & 0xffffffff;
          }
        }
        else {
          uVar22 = (ulonglong)uVar6;
        }
        goto LAB_01598705;
      }
      FUN_015ac3a0();
      local_f0 = (longlong *)FUN_00e7bcc0();
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar17 = 0x2572358;
      *puVar10 = &DAT_02572358;
      (*DAT_02572370)();
      local_b0 = puVar10;
      FUN_00d21370();
      FUN_016c0a70();
      if (local_90 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pvVar11 = _pthread_getspecific(pVar17);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016caa50();
      local_d0 = (code *)FUN_00e7bdb0();
      lVar16 = local_a8;
      local_90 = (longlong *)0x0;
      local_78 = 0xffffffff;
      local_d4 = 0;
      local_d8 = 0;
      uVar25 = extraout_XMM0_Qa_03;
      while( true ) {
        lVar14 = DAT_02725a40;
        pVar17 = local_78 + 1;
        if (*(int *)(lVar16 + 0xc) <= (int)pVar17) break;
        pcVar15 = *(code **)(lVar16 + 0x10);
        local_90 = *(longlong **)(pcVar15 + (longlong)(int)local_78 * 8 + 8);
        if (DAT_02725a40 != 0) {
          uVar25 = FUN_00d50b00();
        }
        local_1a0 = lVar14;
        local_198 = '\x01';
        (**(code **)(*local_90 + 0x88))(uVar25,&local_1a0);
        plVar20 = local_58;
        FUN_00053ac0();
        pplVar21 = (longlong **)&DAT_02802688;
        if (plVar20 != (longlong *)0x0) {
          (**(code **)(*plVar20 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar21 = &local_58;
          if (cVar3 == '\0') {
            pplVar21 = (longlong **)&DAT_02802688;
          }
        }
        plVar20 = *pplVar21;
        uVar23 = (undefined7)((ulonglong)pplVar21 >> 8);
        if (plVar20 == local_40) {
          if (((char)local_48 == '\0') && (plVar20 != (longlong *)0x0)) {
            plVar20 = local_40;
            if (*(char *)(pplVar21 + 1) != '\0') goto LAB_01598fa9;
            uVar22 = CONCAT71(uVar23,1);
            FUN_00d50b00();
          }
          else {
            uVar22 = local_48 & 0xffffffff;
          }
        }
        else {
          if (*(char *)(pplVar21 + 1) == '\0') {
            if (plVar20 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            uVar22 = CONCAT71(uVar23,1);
            if (((char)local_48 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_40 = plVar20;
              goto LAB_01599000;
            }
          }
          else {
            if (((char)local_48 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01598fa9:
            *(undefined1 *)(pplVar21 + 1) = 0;
          }
          uVar22 = CONCAT71(uVar23,1);
          local_40 = plVar20;
        }
LAB_01599000:
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_198 != '\0') && (local_1a0 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (longlong *)0x0) {
LAB_01599dc7:
          local_40 = (longlong *)0x0;
LAB_01599dcd:
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
LAB_01599de5:
          FUN_015ac3a0();
          local_48 = uVar22 & 0xffffffff;
          goto joined_r0x01599ff5;
        }
        local_48 = uVar22 & 0xffffffff;
        local_31 = cVar4;
        local_100 = (double)FUN_00d45bc0();
        lVar14 = DAT_027c7238;
        uVar25 = 0;
        if (local_100 <= 0.0) goto LAB_01599dcd;
        if (DAT_027c7238 != 0) {
          uVar25 = FUN_00d50b00();
        }
        local_190 = lVar14;
        local_188 = '\x01';
        (**(code **)(*local_90 + 0x88))(uVar25,&local_190);
        plVar20 = local_58;
        uVar25 = FUN_00053ac0();
        pplVar21 = (longlong **)&DAT_02802688;
        if (plVar20 != (longlong *)0x0) {
          (**(code **)(*plVar20 + 0x360))();
          uVar25 = FUN_00e85ea0();
          pplVar21 = &local_58;
          if ((char)uVar25 == '\0') {
            pplVar21 = (longlong **)&DAT_02802688;
          }
        }
        plVar20 = *pplVar21;
        cVar3 = (char)uVar22;
        if (plVar20 == local_40) {
          if ((cVar3 == '\0') && (plVar20 != (longlong *)0x0)) {
            plVar20 = local_40;
            if (*(char *)(pplVar21 + 1) != '\0') goto LAB_01599171;
            local_48 = CONCAT71((int7)((ulonglong)uVar25 >> 8),1);
            FUN_00d50b00();
            plVar20 = local_40;
          }
          else {
            local_48 = uVar22 & 0xffffffff;
            plVar20 = local_40;
          }
        }
        else if (*(char *)(pplVar21 + 1) == '\0') {
          if (plVar20 != (longlong *)0x0) {
            uVar25 = FUN_00d50b00();
          }
          local_48 = CONCAT71((int7)((ulonglong)uVar25 >> 8),1);
          if (cVar3 != '\0') {
            FUN_00d50b20();
          }
        }
        else {
          if (cVar3 != '\0') {
            uVar25 = FUN_00d50b20();
          }
LAB_01599171:
          local_40 = plVar20;
          *(undefined1 *)(pplVar21 + 1) = 0;
          local_48 = CONCAT71((int7)((ulonglong)uVar25 >> 8),1);
          plVar20 = local_40;
        }
        local_40 = plVar20;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_188 != '\0') && (local_190 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (longlong *)0x0) {
LAB_01599dc0:
          uVar22 = local_48 & 0xffffffff;
          goto LAB_01599dc7;
        }
        local_31 = cVar4;
        iVar7 = FUN_00d45870();
        lVar14 = DAT_027c7240;
        uVar25 = extraout_XMM0_Qa_04;
        if (DAT_027c7240 != 0) {
          uVar25 = FUN_00d50b00();
        }
        local_180 = lVar14;
        local_178 = '\x01';
        (**(code **)(*local_90 + 0x88))(uVar25,&local_180);
        plVar20 = local_58;
        FUN_00053ac0();
        pplVar21 = (longlong **)&DAT_02802688;
        if (plVar20 != (longlong *)0x0) {
          (**(code **)(*plVar20 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar21 = &local_58;
          if (cVar3 == '\0') {
            pplVar21 = (longlong **)&DAT_02802688;
          }
        }
        plVar20 = *pplVar21;
        if (plVar20 == local_40) {
          if (((char)local_48 == '\0') && (plVar20 != (longlong *)0x0)) {
            plVar20 = local_40;
            if (*(char *)(pplVar21 + 1) != '\0') goto LAB_015992cd;
            FUN_00d50b00();
            plVar20 = local_40;
            goto joined_r0x01599448;
          }
          uVar22 = local_48 & 0xffffffff;
        }
        else {
          if (*(char *)(pplVar21 + 1) == '\0') {
            if (plVar20 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((char)local_48 != '\0') {
              FUN_00d50b20();
            }
          }
          else {
            if ((char)local_48 != '\0') {
              FUN_00d50b20();
            }
LAB_015992cd:
            local_40 = plVar20;
            *(undefined1 *)(pplVar21 + 1) = 0;
            plVar20 = local_40;
          }
joined_r0x01599448:
          uVar22 = CONCAT71((int7)((ulonglong)pplVar21 >> 8),1);
          local_40 = plVar20;
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_178 != '\0') && (local_180 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == (longlong *)0x0) goto LAB_01599dc7;
        local_48 = uVar22 & 0xffffffff;
        local_31 = cVar4;
        local_bc = FUN_00d45870();
        lVar14 = DAT_027c7268;
        uVar25 = extraout_XMM0_Qa_05;
        if (DAT_027c7268 != 0) {
          uVar25 = FUN_00d50b00();
        }
        local_170 = lVar14;
        local_168 = '\x01';
        (**(code **)(*local_90 + 0x88))(uVar25,&local_170);
        plVar20 = local_58;
        if ((DAT_026d5e38 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          _DAT_026d5d88 = FUN_00d4fe50();
          _DAT_026d5d70 = "GNStorage";
          _DAT_026d5d78 = 0x30;
          pcVar15 = FUN_0005d8e0;
          _DAT_026d5d80 = FUN_0005d8e0;
          _DAT_026d5d90 = 0;
          uRam00000000026d5d98 = 0;
          _DAT_026d5da0 = 0;
          uRam00000000026d5da8 = 0;
          _DAT_026d5db0 = 0;
          uRam00000000026d5db8 = 0;
          _DAT_026d5dc0 = 0;
          uRam00000000026d5dc8 = 0;
          _DAT_026d5dd0 = 0;
          uRam00000000026d5dd8 = 0;
          _DAT_026d5de0 = 0;
          uRam00000000026d5de8 = 0;
          _DAT_026d5df0 = 0;
          uRam00000000026d5df8 = 0;
          _DAT_026d5e00 = 0;
          uRam00000000026d5e08 = 0;
          _DAT_026d5e10 = 0;
          uRam00000000026d5e18 = 0;
          _DAT_026d5e20 = 0;
          uRam00000000026d5e28 = 0;
          _DAT_026d5e30 = 0;
          ___cxa_guard_release();
        }
        pplVar21 = (longlong **)&DAT_02802688;
        if (plVar20 != (longlong *)0x0) {
          (**(code **)(*plVar20 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar21 = &local_58;
          if (cVar3 == '\0') {
            pplVar21 = (longlong **)&DAT_02802688;
          }
        }
        plVar20 = *pplVar21;
        if (plVar20 == local_68) {
          local_31 = cVar4;
          if ((cVar4 == '\0') && (plVar20 != (longlong *)0x0)) {
            plVar20 = local_68;
            if (*(char *)(pplVar21 + 1) != '\0') goto LAB_015993eb;
            local_31 = '\x01';
            FUN_00d50b00();
          }
        }
        else {
          if (*(char *)(pplVar21 + 1) == '\0') {
            if (plVar20 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_31 = '\x01';
            if ((cVar4 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_68 = plVar20;
              goto LAB_01599460;
            }
          }
          else {
            if ((cVar4 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_015993eb:
            *(undefined1 *)(pplVar21 + 1) = 0;
          }
          local_31 = '\x01';
          local_68 = plVar20;
        }
LAB_01599460:
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
        lVar14 = DAT_027c7250;
        if (DAT_027c7250 != 0) {
          FUN_00d50b00();
        }
        local_160 = lVar14;
        local_158 = '\x01';
        (**(code **)(*local_90 + 0x88))();
        plVar20 = local_58;
        uVar25 = FUN_00053ac0();
        pplVar21 = (longlong **)&DAT_02802688;
        if (plVar20 != (longlong *)0x0) {
          (**(code **)(*plVar20 + 0x360))();
          uVar25 = FUN_00e85ea0();
          pplVar21 = &local_58;
          if ((char)uVar25 == '\0') {
            pplVar21 = (longlong **)&DAT_02802688;
          }
        }
        plVar20 = *pplVar21;
        cVar4 = (char)uVar22;
        if (plVar20 == local_40) {
          if ((cVar4 == '\0') && (plVar20 != (longlong *)0x0)) {
            plVar24 = local_40;
            if (*(char *)(pplVar21 + 1) != '\0') goto LAB_01599597;
            local_48 = CONCAT71((int7)((ulonglong)uVar25 >> 8),1);
            FUN_00d50b00();
            plVar24 = local_40;
          }
          else {
            local_48 = uVar22 & 0xffffffff;
            plVar24 = local_40;
          }
        }
        else if (*(char *)(pplVar21 + 1) == '\0') {
          if (plVar20 != (longlong *)0x0) {
            uVar25 = FUN_00d50b00();
          }
          local_48 = CONCAT71((int7)((ulonglong)uVar25 >> 8),1);
          plVar24 = plVar20;
          if (cVar4 != '\0') {
            FUN_00d50b20();
          }
        }
        else {
          plVar24 = plVar20;
          if (cVar4 != '\0') {
            uVar25 = FUN_00d50b20();
          }
LAB_01599597:
          local_40 = plVar24;
          *(undefined1 *)(pplVar21 + 1) = 0;
          local_48 = CONCAT71((int7)((ulonglong)uVar25 >> 8),1);
          plVar24 = local_40;
        }
        local_40 = plVar24;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        cVar4 = local_31;
        if (local_40 == (longlong *)0x0) goto LAB_01599dc0;
        local_c8 = (double)FUN_00d45bc0();
        if ((local_d8 != iVar7) || (local_d4 != local_bc)) {
          pvVar11 = _pthread_getspecific((pthread_key_t)pcVar15);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = local_bc;
          plVar20 = (longlong *)(ulonglong)local_bc;
          pcVar15 = local_d0;
          FUN_016c3060(local_d0,plVar20,0);
          local_d4 = uVar5;
          local_d8 = iVar7;
        }
        if (((local_68 == (longlong *)0x0) || ((int)local_68[3] < 2)) ||
           (iVar8 = (int)(0x10 / (longlong)(int)local_b8), iVar8 == 0)) {
          local_108 = iVar7;
          FUN_01907b60(local_c8,0x10 % (longlong)(int)local_b8 & 0xffffffff);
          plVar24 = local_58;
          if (local_58 == (longlong *)0x0) {
            uVar18 = (undefined4)CONCAT71((int7)((ulonglong)plVar20 >> 8),1);
            bVar2 = false;
            plVar24 = (longlong *)0x0;
          }
          else {
            bVar2 = true;
            if (local_50 == '\0') {
              FUN_00d50b00();
              uVar18 = 0;
              if ((local_50 == '\0') || (local_58 == (longlong *)0x0)) goto LAB_01599885;
              FUN_00d50b20();
            }
            uVar18 = 0;
          }
LAB_01599885:
          local_50 = '\0';
          local_58 = plVar24;
          uVar25 = FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            uVar25 = FUN_00d50b20();
          }
          pVar13 = *(int *)(lVar16 + 0xc) - 1;
          if (pVar17 == pVar13) goto LAB_01599b30;
          lVar14 = *(longlong *)(local_a8 + 0x10);
          plVar20 = *(longlong **)(lVar14 + (longlong)(int)(local_78 + 2) * 8);
          local_104 = uVar18;
          if (plVar20 != (longlong *)0x0) {
            uVar25 = FUN_00d50b00();
          }
          lVar9 = DAT_027c7250;
          pVar13 = (pthread_key_t)lVar14;
          local_f8 = plVar20;
          if (DAT_027c7250 != 0) {
            uVar25 = FUN_00d50b00();
          }
          local_150 = lVar9;
          local_148 = '\x01';
          (**(code **)(*plVar20 + 0x88))(uVar25,&local_150);
          plVar20 = local_58;
          FUN_00053ac0();
          pplVar21 = (longlong **)&DAT_02802688;
          if (plVar20 != (longlong *)0x0) {
            (**(code **)(*plVar20 + 0x360))();
            cVar4 = FUN_00e85ea0();
            pplVar21 = &local_58;
            if (cVar4 == '\0') {
              pplVar21 = (longlong **)&DAT_02802688;
            }
          }
          plVar20 = *pplVar21;
          if (plVar20 == local_40) {
            if (((char)local_48 == '\0') && (plVar20 != (longlong *)0x0)) {
              plVar20 = local_40;
              if (*(char *)(pplVar21 + 1) != '\0') goto LAB_01599a04;
              FUN_00d50b00();
              plVar20 = local_40;
              goto joined_r0x01599cb1;
            }
            uVar22 = local_48 & 0xffffffff;
          }
          else {
            if (*(char *)(pplVar21 + 1) == '\0') {
              if (plVar20 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((char)local_48 != '\0') {
                FUN_00d50b20();
              }
            }
            else {
              if ((char)local_48 != '\0') {
                FUN_00d50b20();
              }
LAB_01599a04:
              local_40 = plVar20;
              *(undefined1 *)(pplVar21 + 1) = 0;
              plVar20 = local_40;
            }
joined_r0x01599cb1:
            uVar22 = CONCAT71((int7)((ulonglong)pplVar21 >> 8),1);
            local_40 = plVar20;
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 == (longlong *)0x0) || (dVar26 = (double)FUN_00d45bc0(), dVar26 <= local_c8)
             ) {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            *unaff_RDI = 0;
            bVar1 = false;
          }
          else {
            dVar27 = ((DAT_023b4df8 / local_100) / (double)(int)local_bc) * _DAT_023b1e98;
            pVar13 = (pthread_key_t)
                     ((dVar27 * DAT_023942d0 + (dVar26 - local_c8)) / ((double)local_108 * dVar27));
            local_10c = ((local_108 * (int)local_b8) / (int)local_bc) * pVar13;
            local_58 = local_f0;
            FUN_00e7c2a0(pVar13,(longlong)(local_108 * (int)local_b8) % (longlong)(int)local_bc &
                                0xffffffff);
            local_e8 = local_58;
            FUN_00e7b820();
            bVar1 = true;
          }
          uVar25 = FUN_00d50b20();
          if (bVar1) {
            local_48 = uVar22 & 0xffffffff;
            goto LAB_01599b30;
          }
          cVar4 = local_31;
          if ((char)local_104 == '\0' && plVar24 != (longlong *)0x0) {
            FUN_00d50b20();
            cVar4 = local_31;
          }
          goto LAB_01599de5;
        }
        iVar7 = 0;
        bVar2 = false;
        plVar20 = (longlong *)0x0;
        do {
          pdVar12 = (double *)FUN_00d7de50();
          FUN_01907b60(*pdVar12 + local_c8);
          plVar24 = local_58;
          if (local_58 == plVar20) {
            plVar24 = plVar20;
            bVar1 = bVar2;
            if ((bVar2) || (local_58 == (longlong *)0x0)) goto joined_r0x0159977d;
            bVar1 = true;
            if (local_50 == '\0') {
              FUN_00d50b00();
              goto LAB_01599768;
            }
          }
          else if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            if ((bVar2) && (plVar20 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar20 = plVar24;
LAB_01599768:
              plVar24 = plVar20;
              bVar1 = true;
            }
joined_r0x0159977d:
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar1 = true;
            if ((bVar2) && (plVar20 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          bVar2 = bVar1;
          local_50 = '\0';
          local_58 = plVar24;
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar25 = FUN_00e7b820();
          pVar13 = (pthread_key_t)pcVar15;
          iVar7 = iVar7 + iVar8;
          plVar20 = plVar24;
        } while (iVar7 < (int)local_68[3] + -1);
LAB_01599b30:
        if (pVar17 == *(int *)(lVar16 + 0xc) - 1U) {
          pvVar11 = _pthread_getspecific(pVar13);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = (longlong *)FUN_019079b0();
          FUN_00e7b820();
          pvVar11 = _pthread_getspecific(pVar13);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_c8 = (double)FUN_01907950();
          dVar26 = (double)FUN_00e7c860();
          FUN_01907b60(local_c8 + (DAT_023b4df8 / local_100) * dVar26);
          plVar20 = local_e8;
          if (local_e0 == '\0') {
            if (local_e8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_e0 = '\0';
          }
          local_58 = plVar20;
          local_50 = '\0';
          uVar25 = FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            uVar25 = FUN_00d50b20();
          }
          if (plVar20 != (longlong *)0x0) {
            uVar25 = FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
            uVar25 = FUN_00d50b20();
          }
        }
        local_78 = pVar17;
        cVar4 = local_31;
        if ((bVar2) && (plVar24 != (longlong *)0x0)) {
          uVar25 = FUN_00d50b20();
          cVar4 = local_31;
        }
      }
      FUN_015ac3a0();
      pVar17 = (pthread_key_t)lVar16;
      pvVar11 = _pthread_getspecific(pVar17);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar25 = FUN_016c30e0();
      local_140 = local_b0;
      local_138 = '\0';
      local_130 = 0;
      local_128 = '\0';
      FUN_016c2780(uVar25,&local_130);
      if (local_90 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pvVar11 = _pthread_getspecific(pVar17);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c1150();
      pvVar11 = _pthread_getspecific(pVar17);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_118 = '\0';
      local_120 = plVar19;
      FUN_016c2ef0();
      if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar11 = _pthread_getspecific(pVar17);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c3130();
      *unaff_RDI = local_90;
      *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x01599ff5:
      if (plVar19 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_b0 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_01599e20:
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if ((cVar4 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



