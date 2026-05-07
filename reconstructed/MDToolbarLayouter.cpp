// Reconstructed implementation of MDToolbarLayouter
// From MikeCore binary — reverse-engineered pseudocode

#include "MDToolbarLayouter.h"

// ============================================================
// @004b61e0 — 3578 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x004b6317) */
/* WARNING: Removing unreachable block (ram,0x004b6634) */
/* WARNING: Removing unreachable block (ram,0x004b6640) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b61e0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  char *pcVar8;
  longlong **pplVar9;
  pthread_key_t pVar10;
  longlong lVar11;
  int iVar12;
  longlong *unaff_RSI;
  longlong *plVar13;
  bool bVar14;
  bool bVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar16;
  longlong *plVar17;
  double dVar18;
  undefined1 local_128 [8];
  undefined1 local_120;
  longlong *local_e8;
  char local_e0;
  longlong *local_d0;
  char local_c8;
  undefined7 uStack_c7;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  char local_61;
  longlong *local_60;
  char local_58 [8];
  double local_50;
  longlong *local_48;
  char local_40;
  undefined7 uStack_3f;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_004b77a0();
  local_98 = (longlong *)*param_2;
  local_61 = *(char *)(param_2 + 1);
  bVar14 = local_61 != '\0';
  bVar15 = local_98 != (longlong *)0x0;
  if (bVar15 && bVar14) {
    FUN_00d50b00();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_90 + 0x450))();
  if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = local_98;
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (longlong)&DAT_02572358;
    (*DAT_02572370)();
    if (bVar15 && bVar14) {
      local_98 = plVar4;
      FUN_00d50b20();
    }
    local_61 = '\x01';
    if ((longlong *)*param_2 != (longlong *)0x0) {
      local_88._0_1_ = '\0';
      local_90 = (longlong *)0x0;
      local_78 = 0xffffffff;
      local_70 = 0;
      local_80 = (longlong *)*param_2;
      while( true ) {
        lVar5 = (longlong)(int)local_78;
        iVar12 = (int)local_78 + 1;
        local_78 = CONCAT44(local_78._4_4_,iVar12);
        if (*(int *)((longlong)local_80 + 0xc) <= iVar12) break;
        lVar11 = local_80[2];
        local_90 = *(longlong **)(lVar11 + 8 + lVar5 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar11);
        pVar10 = (pthread_key_t)lVar11;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar12 = *(int *)((longlong)local_60 + 0xc);
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar12 == 0) {
          local_60 = local_90;
          local_58[0] = '\0';
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          plVar13 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_60 = plVar13;
          local_58[0] = '\0';
          FUN_00d23480();
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (local_78._4_4_ != 0) {
          if (local_78._4_4_ < 1) {
            iVar12 = -local_78._4_4_;
          }
          else {
            local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
            FUN_00d23690();
            local_70 = local_70 + local_78._4_4_;
            iVar12 = 0;
          }
          local_78 = CONCAT44(iVar12,(int)local_78);
        }
      }
      FUN_000be170();
    }
  }
  local_98 = plVar4;
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_a0 = plVar4;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  if (local_98 == (longlong *)0x0) {
    local_a8 = (longlong *)((ulonglong)local_a8._4_4_ << 0x20);
    local_50 = DAT_023b4830;
    local_d0 = DAT_023b2568;
    plVar13 = DAT_026e1810;
  }
  else {
    local_88._0_1_ = '\0';
    local_90 = (longlong *)0x0;
    local_80 = local_98;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_50 = DAT_023b4830;
    local_d0 = DAT_023b2568;
    local_a8 = (longlong *)((ulonglong)local_a8._4_4_ << 0x20);
    local_78._4_4_ = 0;
    while( true ) {
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          iVar12 = -local_78._4_4_;
        }
        else {
          iVar12 = (int)local_78 - local_78._4_4_;
          local_78 = CONCAT44(local_78._4_4_,iVar12);
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          iVar12 = 0;
        }
        local_78 = CONCAT44(iVar12,(int)local_78);
      }
      lVar5 = (longlong)(int)local_78;
      iVar12 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar12);
      if (*(int *)((longlong)local_80 + 0xc) <= iVar12) break;
      local_90 = *(longlong **)(local_80[2] + 8 + lVar5 * 8);
      FUN_003b6860();
      plVar13 = local_60;
      if (local_58[0] == '\0') {
        if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
           (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58[0] = '\0';
      }
      FUN_004b7a60();
      FUN_003b7720();
      FUN_004b5d70(&local_40,&local_48);
      plVar17 = local_60;
      if (local_58[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_004b6701;
        }
      }
      else if (local_60 != (longlong *)0x0) {
LAB_004b6701:
        FUN_00c9fe20();
        plVar4 = local_60;
        local_c8 = local_58[0];
        pcVar8 = local_58;
        if (local_58[0] == '\0') {
          pcVar8 = &local_c8;
        }
        *pcVar8 = '\0';
        if ((local_58[0] != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_58[0] = '\0';
        local_60 = plVar17;
        cVar2 = FUN_00d24090();
        uVar16 = extraout_XMM0_Qa;
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (plVar4 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        plVar4 = local_a0;
        if (cVar2 == '\0') {
          FUN_00c8e2b0(uVar16,0x10);
          plVar1 = local_60;
          if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          uVar16 = FUN_00c92160();
          local_e8 = plVar17;
          local_e0 = '\0';
          FUN_004b7c30(uVar16,&local_e8);
          if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        plVar1 = (longlong *)plVar13[5];
        if (plVar1 != plVar17) {
          FUN_00d50b00();
          plVar13[5] = (longlong)plVar17;
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if (plVar17 == (longlong *)*unaff_RSI) {
          plVar17 = local_48;
          if ((double)local_d0 <= (double)local_48) {
            plVar17 = local_d0;
          }
          local_a8 = (longlong *)
                     CONCAT44(local_a8._4_4_,(int)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1));
          dVar18 = (double)CONCAT71(uStack_3f,local_40);
          local_d0 = plVar17;
          if ((double)CONCAT71(uStack_3f,local_40) <= local_50) goto LAB_004b68a4;
        }
        else {
LAB_004b68a4:
          dVar18 = local_50;
        }
        local_50 = dVar18;
        FUN_00d50b20();
      }
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    plVar13 = DAT_026e1810;
  }
  bVar3 = (byte)plVar4;
  DAT_026e1810 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  FUN_0071a120();
  if (((((char)local_88 == '\0') && (local_90 != (longlong *)0x0)) &&
      (FUN_00d50b00(), (char)local_88 != '\0')) && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_58[0] = '\0';
  local_60 = plVar13;
  FUN_000175c0();
  plVar4 = local_90;
  if ((char)local_88 == '\0') {
    if (((local_90 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_88 != '\0')) &&
       (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88._0_1_ = '\0';
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    local_88._0_1_ = '\0';
    local_90 = plVar4;
    bVar3 = FUN_00c70bc0();
    if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar13 = local_a0;
  if ((plVar4 != (longlong *)0x0 & bVar3) != 0) {
    FUN_00c9fe20();
    plVar4 = local_90;
    pplVar9 = &local_88;
    if ((char)local_88 == '\0') {
      pplVar9 = &local_60;
    }
    local_60 = (longlong *)CONCAT71(local_60._1_7_,(char)local_88);
    *(undefined1 *)pplVar9 = 0;
    if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar12 = *(int *)((longlong)plVar4 + 0xc);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    if (((byte)local_a8 & 1 < iVar12) != 0) {
      FUN_004b5af0();
      plVar4 = local_90;
      if ((char)local_88 == '\0') {
        if (local_90 == (longlong *)0x0) goto LAB_004b6fcb;
        FUN_00d50b00();
      }
      else if (local_90 == (longlong *)0x0) goto LAB_004b6fcb;
      local_88._0_1_ = '\0';
      local_90 = (longlong *)0x0;
      local_a8 = plVar4;
      local_80 = plVar4;
      local_78 = 0xffffffff;
      local_70 = 0;
      local_78._4_4_ = 0;
      bVar14 = false;
      while( true ) {
        if (local_78._4_4_ != 0) {
          if (local_78._4_4_ < 1) {
            iVar12 = -local_78._4_4_;
          }
          else {
            iVar12 = (int)local_78 - local_78._4_4_;
            local_78 = CONCAT44(local_78._4_4_,iVar12);
            FUN_00d23690();
            local_70 = local_70 + local_78._4_4_;
            iVar12 = 0;
          }
          local_78 = CONCAT44(iVar12,(int)local_78);
        }
        lVar5 = (longlong)(int)local_78;
        iVar12 = (int)local_78 + 1;
        local_78 = CONCAT44(local_78._4_4_,iVar12);
        if (*(int *)((longlong)local_80 + 0xc) <= iVar12) break;
        local_90 = *(longlong **)(local_80[2] + 8 + lVar5 * 8);
        FUN_003b79c0();
        if (local_48 == (longlong *)0x0) {
          cVar2 = '\0';
        }
        else {
          FUN_003b79c0();
          plVar4 = (longlong *)CONCAT71(uStack_c7,local_c8);
          if (local_c0 == '\0') {
            if (plVar4 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          local_58[0] = '\0';
          local_60 = plVar4;
          cVar2 = FUN_00ca18c0();
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (CONCAT71(uStack_c7,local_c8) != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_003b79c0();
          plVar13 = local_60;
          plVar4 = (longlong *)*unaff_RSI;
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar13 == plVar4) {
            FUN_003b72f0();
          }
          else {
            uVar16 = FUN_003b79c0();
            local_b8 = local_48;
            local_b0 = 0;
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                uVar16 = FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_b0 = '\x01';
            FUN_004b7ce0(uVar16,&local_b8);
            plVar4 = local_60;
            if (local_58[0] == '\0') {
              if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58[0] = '\0';
            }
            if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (((double)((ulonglong)((double)local_d0 - *(double *)plVar4[2]) & _DAT_023908f0) <
                 _DAT_02391038) &&
               ((double)((ulonglong)(local_50 - ((double *)plVar4[2])[1]) & _DAT_023908f0) <
                _DAT_02391038)) {
              uVar16 = FUN_003b7950();
              plVar4 = local_48;
              if (local_40 == '\0') {
                if (local_48 != (longlong *)0x0) {
                  uVar16 = FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              local_120 = 1;
              FUN_004b5c00(uVar16,local_128);
              plVar13 = local_60;
              if ((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              if (plVar4 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_003b7720();
              bVar14 = true;
              if (plVar13 != (longlong *)0x0) {
                cVar2 = FUN_003b7710();
                if ((cVar2 != '\0') || (cVar2 = FUN_003b7780(), cVar2 != '\0')) {
                  FUN_003b7740();
                }
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
        }
      }
      FUN_00274d30();
      FUN_00d50b20();
      plVar13 = local_a0;
      if (bVar14) {
        FUN_004b5af0();
        plVar4 = local_90;
        if ((char)local_88 == '\0') {
          if (local_90 == (longlong *)0x0) goto LAB_004b6fcb;
          FUN_00d50b00();
        }
        else if (local_90 == (longlong *)0x0) goto LAB_004b6fcb;
        local_88._0_1_ = '\0';
        local_90 = (longlong *)0x0;
        local_80 = plVar4;
        local_70 = 0;
        local_78 = 0;
        if (0 < *(int *)((longlong)plVar4 + 0xc)) {
          lVar5 = 0;
          do {
            local_90 = *(longlong **)(plVar4[2] + lVar5 * 8);
            cVar2 = FUN_003b7710();
            if (cVar2 != '\0') {
              FUN_003b7720();
            }
            lVar5 = lVar5 + 1;
            local_78 = CONCAT44(local_78._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((longlong)plVar4 + 0xc));
        }
        FUN_00274d30();
        FUN_00d50b20();
      }
    }
  }
LAB_004b6fcb:
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_61 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ============================================================
// @004b4640 — 1228 bytes
// ============================================================

void FUN_004b4640(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  char cVar4;
  byte bVar5;
  longlong unaff_RDI;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar14 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 in_XMM1_Qb;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong *local_a8;
  char local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  longlong *local_40;
  char local_38;
  
  FUN_01e53c20();
  FUN_01e3f820();
  uVar13 = param_2;
  uVar20 = in_XMM1_Qb;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  uVar11 = (**(code **)(*local_40 + 0x938))();
  FUN_004b4d40();
  (**(code **)(*local_a8 + 0x938))();
  uVar17 = uVar13;
  uVar21 = uVar20;
  if (local_a0 != '\0') {
    FUN_00d50b20();
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  (**(code **)(*local_40 + 0x938))();
  FUN_004b4d40();
  uVar12 = (**(code **)(*local_a8 + 0x938))();
  if (local_a0 != '\0') {
    FUN_00d50b20();
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  (**(code **)(*local_40 + 0x938))();
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  uVar7 = (**(code **)(*local_40 + 0x938))();
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  local_e8 = (float)uVar11;
  fStack_e4 = (float)((ulonglong)uVar11 >> 0x20);
  fStack_e0 = (float)extraout_XMM0_Qb;
  fStack_dc = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_d8 = (float)uVar13;
  fStack_d4 = (float)((ulonglong)uVar13 >> 0x20);
  fStack_d0 = (float)uVar20;
  fStack_cc = (float)((ulonglong)uVar20 >> 0x20);
  local_108 = (float)param_2;
  fStack_104 = (float)((ulonglong)param_2 >> 0x20);
  fStack_100 = (float)in_XMM1_Qb;
  fStack_fc = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  auVar18._0_4_ = local_108 - (local_e8 + local_d8);
  auVar18._4_4_ = fStack_104 - (fStack_e4 + fStack_d4);
  auVar18._8_4_ = fStack_100 - (fStack_e0 + fStack_d0);
  auVar18._12_4_ = fStack_fc - (fStack_dc + fStack_cc);
  local_98 = (float)uVar17;
  fStack_94 = (float)((ulonglong)uVar17 >> 0x20);
  fStack_90 = (float)uVar21;
  fStack_8c = (float)((ulonglong)uVar21 >> 0x20);
  local_88._0_4_ = (undefined4)uVar12;
  local_88._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
  uStack_80._0_4_ = (float)extraout_XMM0_Qb_00;
  uStack_80._4_4_ = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  auVar14._0_4_ = local_108 - (local_98 + (float)local_88._0_4_);
  auVar14._4_4_ = fStack_104 - (fStack_94 + (float)local_88._4_4_);
  auVar14._8_4_ = fStack_100 - (fStack_90 + (float)uStack_80);
  auVar14._12_4_ = fStack_fc - (fStack_8c + uStack_80._4_4_);
  auVar18 = blendps(auVar18,auVar14,0xd);
  auVar19._4_4_ = extraout_XMM0_Db;
  auVar19._0_4_ = extraout_XMM0_Db;
  auVar19._8_4_ = extraout_XMM0_Dd;
  auVar19._12_4_ = extraout_XMM0_Dd;
  fVar8 = auVar14._0_4_ + extraout_XMM0_Db + DAT_02390d00;
  insertps(auVar19,uVar7,0x1c);
  uVar6 = 0;
  do {
    FUN_00d50b00();
    FUN_0033cd80();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    FUN_0033cd80();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_e8 = auVar18._0_4_;
    FUN_0033cd80();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x4d8))();
    fVar15 = local_e8;
    local_88 = (undefined1  [8])(**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x4d8))();
    uStack_80 = extraout_XMM0_Qb_02;
    fVar16 = fVar15;
    uVar9 = (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x4d8))();
    if (local_e8 <= 0.0) {
LAB_004b4aab:
      if (fVar15 <= 0.0) {
        return;
      }
LAB_004b4ad8:
      if (fVar16 <= 0.0) {
        return;
      }
      bVar5 = FUN_00d054a0();
    }
    else if ((fVar15 <= 0.0) || (cVar4 = FUN_00d054a0(), cVar4 == '\0')) {
joined_r0x004b4acd:
      if (fVar16 <= 0.0) {
        if (fVar15 <= 0.0) {
          return;
        }
        goto LAB_004b4ad8;
      }
      cVar4 = FUN_00d054a0();
      bVar5 = 1;
      if (cVar4 == '\0') goto LAB_004b4aab;
    }
    else {
      fVar1 = SUB84(local_88,0);
      fVar10 = ((float)(~-(uint)(0.0 < fVar16) & (uint)fVar8 | uVar9 & -(uint)(0.0 < fVar16)) -
               (fVar1 + fVar15 + DAT_02390d00)) + DAT_02394210;
      fVar3 = 0.0;
      if (0.0 <= fVar10) {
        fVar3 = fVar10;
      }
      local_118 = (float)uVar13;
      uStack_114 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uStack_110 = (undefined4)extraout_XMM0_Qb_01;
      uStack_10c = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      fVar10 = (local_118 + local_e8 + DAT_02390d00) - fVar1;
      bVar5 = 1;
      if (fVar10 < fVar3) {
        auVar2._4_4_ = uStack_114;
        auVar2._0_4_ = fVar10 + fVar1;
        auVar2._8_4_ = uStack_110;
        auVar2._12_4_ = uStack_10c;
        blendps(_local_88,auVar2,1);
        (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x4d0))();
        goto joined_r0x004b4acd;
      }
    }
    if (bVar5 == 0) {
      return;
    }
    uVar6 = uVar6 + bVar5;
    if (0xf < uVar6) {
      return;
    }
  } while( true );
}




// ============================================================
// @004b8a50 — 970 bytes
// str: ""LayerCollection %I entries""
// str: ""\n[EDT]""
// str: ""\n[REF]""
// str: ""\n[OFF]""
// str: ""[ENB]""
// ============================================================

void FUN_004b8a50(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong local_98;
  char local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  char local_58;
  undefined8 *local_50;
  uint local_48;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025795a8;
  (*DAT_025795c0)();
  if (*(longlong *)(unaff_RSI + 0x10) == 0) {
    FUN_00c9fe20();
    lVar2 = local_88;
    ppuVar6 = &local_60;
    if ((char)local_80 != '\0') {
      ppuVar6 = &local_80;
    }
    local_60._0_1_ = (char)local_80;
    *(undefined1 *)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    local_44 = *(undefined4 *)(lVar2 + 0xc);
    local_48 = 1;
    local_50 = &DAT_024cc6f0;
    FUN_00d94d80(&DAT_024cc6f0,&local_50);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00c9fe20();
    lVar2 = local_88;
    local_60._0_1_ = (char)local_80;
    ppuVar6 = &local_60;
    if ((char)local_80 != '\0') {
      ppuVar6 = &local_80;
    }
    *(undefined1 *)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    local_44 = *(undefined4 *)(lVar2 + 0xc);
    local_48 = 1;
    local_50 = &DAT_024cc6f0;
    FUN_00d94d80(&DAT_024cc6f0,&local_50);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    FUN_00c9fe20();
    lVar2 = local_88;
    ppuVar6 = &local_80;
    if ((char)local_80 == '\0') {
      ppuVar6 = &local_50;
    }
    local_50 = (undefined8 *)CONCAT71(local_50._1_7_,(char)local_80);
    *(undefined1 *)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_50 == '\0') {
      if (lVar2 == 0) goto LAB_004b8e0d;
      FUN_00d50b00();
    }
    else if (lVar2 == 0) goto LAB_004b8e0d;
    local_80._0_1_ = '\0';
    local_88 = 0;
    local_78 = lVar2;
    local_68 = 0;
    local_70 = 0;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        local_98 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
        local_90 = '\0';
        local_88 = local_98;
        FUN_004b7f70(unaff_RSI,&local_98);
        puVar3 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (undefined8 *)0x0) {
            FUN_00d50b00();
            if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        cVar4 = FUN_003b7710();
        if (cVar4 == '\0') {
          cVar4 = FUN_003b7780();
          if (cVar4 == '\0') {
            FUN_00d8db40();
          }
          else {
            FUN_00d8db40();
          }
        }
        else {
          FUN_00d8db40();
        }
        cVar4 = FUN_003b7990();
        if (cVar4 == '\0') {
          FUN_00d8db40();
        }
        else {
          FUN_00d8db40();
        }
        FUN_003b7950();
        lVar1 = CONCAT71(local_60._1_7_,(char)local_60);
        local_48 = 1;
        local_50 = &DAT_024c5048;
        local_38 = 0;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\x01';
        local_40 = lVar1;
        FUN_00d94d80();
        local_50 = &DAT_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_00018280();
    FUN_00d50b20();
  }
LAB_004b8e0d:
  FUN_00d8c7d0();
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @004b5d70 — 932 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x004b5e67) */
/* WARNING: Removing unreachable block (ram,0x004b5e02) */
/* WARNING: Removing unreachable block (ram,0x004b5e0b) */
/* WARNING: Removing unreachable block (ram,0x004b5e70) */
/* WARNING: Removing unreachable block (ram,0x004b5e90) */
/* WARNING: Removing unreachable block (ram,0x004b5e72) */
/* WARNING: Removing unreachable block (ram,0x004b5e92) */

longlong * FUN_004b5d70(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  pthread_key_t pVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_90;
  char local_88 [8];
  longlong local_68;
  char local_60;
  int local_50;
  char local_38 [8];
  
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7210();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_004b5fed;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_004b5fed;
  local_50 = -1;
  bVar1 = false;
  lVar6 = 0;
  while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
    pvVar3 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(local_68 + 0x10));
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    local_38[0] = local_88[0];
    pcVar4 = local_88;
    if (local_88[0] == '\0') {
      pcVar4 = local_38;
    }
    *pcVar4 = '\0';
    if ((local_88[0] != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (local_90 == lVar6) {
      if ((local_38[0] != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (lVar6 != 0) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        if ((local_38[0] != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        FUN_001159b0();
        FUN_00d50b20();
        if (!bVar1) {
          return unaff_RDI;
        }
        goto LAB_004b6109;
      }
      if ((local_38[0] == '\0') && (local_90 != 0)) {
        FUN_00d50b00();
      }
      bVar1 = true;
      lVar6 = local_90;
    }
  }
  FUN_001159b0();
  pVar5 = (pthread_key_t)local_68;
  FUN_00d50b20();
  if (lVar6 != 0) {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01326de0();
    if (iVar2 != 0) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_012ebfe0();
      *param_2 = uVar7;
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_012ebd30();
      *param_1 = uVar7;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar1) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar6;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (!bVar1) {
      return unaff_RDI;
    }
LAB_004b6109:
    FUN_00d50b20();
    return unaff_RDI;
  }
LAB_004b5fed:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}




// ============================================================
// @004b5760 — 679 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x004b5864) */
/* WARNING: Removing unreachable block (ram,0x004b5869) */
/* WARNING: Removing unreachable block (ram,0x004b58cc) */
/* WARNING: Removing unreachable block (ram,0x004b58f0) */
/* WARNING: Removing unreachable block (ram,0x004b57d2) */
/* WARNING: Removing unreachable block (ram,0x004b57d0) */
/* WARNING: Removing unreachable block (ram,0x004b57f0) */
/* WARNING: Removing unreachable block (ram,0x004b57f2) */
/* WARNING: Removing unreachable block (ram,0x004b58ce) */
/* WARNING: Removing unreachable block (ram,0x004b58f2) */

void FUN_004b5760(void)

{
  char cVar1;
  longlong lVar2;
  longlong local_90;
  char local_88;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_004b5af0();
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
    return;
  }
  local_40 = -1;
  do {
    lVar2 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_58 + 0xc) <= local_40) {
      FUN_00274d30();
      FUN_00d50b20();
      return;
    }
    lVar2 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar2 * 8);
    cVar1 = FUN_003b7990();
  } while (cVar1 == '\0');
  FUN_00274d30();
  FUN_00d50b20();
  FUN_004b5af0();
  if (lVar2 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar2 + 0xc)) {
      FUN_003b7950();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_004b5c00();
      if ((local_88 == '\0') && (local_90 != 0)) {
        FUN_00d50b00();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_003b7720();
      if (local_90 != 0) {
        cVar1 = FUN_003b7710();
        if (cVar1 == '\0') {
          cVar1 = FUN_003b7780();
          if (cVar1 == '\0') {
            FUN_003b7290();
          }
          else {
            FUN_003b7740();
          }
        }
        else {
          FUN_003b72f0();
        }
        FUN_00d50b20();
      }
    }
    FUN_00274d30();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @004b8670 — 610 bytes
// ============================================================

void FUN_004b8670(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar4 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar1 = *(longlong *)(unaff_RDI + 0x10);
    *(longlong **)(unaff_RDI + 0x10) = plVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
      plVar4 = *(longlong **)(unaff_RDI + 0x10);
      if (plVar4 == (longlong *)0x0) goto LAB_004b86dd;
    }
LAB_004b86d3:
    FUN_00d50b00();
  }
  else {
    if (plVar4 != (longlong *)0x0) goto LAB_004b86d3;
LAB_004b86dd:
    plVar4 = (longlong *)0x0;
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  FUN_004b7f70(param_1,&local_70);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    return;
  }
  plVar4 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar2 = *(longlong *)(unaff_RDI + 0x10);
    *(longlong **)(unaff_RDI + 0x10) = plVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar4 = *(longlong **)(unaff_RDI + 0x10);
      if (plVar4 == (longlong *)0x0) goto LAB_004b87a9;
    }
LAB_004b879f:
    FUN_00d50b00();
  }
  else {
    if (plVar4 != (longlong *)0x0) goto LAB_004b879f;
LAB_004b87a9:
    plVar4 = (longlong *)0x0;
  }
  local_40 = *unaff_RSI;
  local_38 = '\0';
  FUN_00ca13a0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = *param_2;
  lVar3 = *(longlong *)(lVar1 + 0x10);
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(lVar1 + 0x10) = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  plVar4 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar2 = *(longlong *)(unaff_RDI + 0x10);
    *(longlong **)(unaff_RDI + 0x10) = plVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar4 = *(longlong **)(unaff_RDI + 0x10);
      goto joined_r0x004b8855;
    }
  }
  else {
joined_r0x004b8855:
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_004b8863;
    }
  }
  FUN_00d50b00();
LAB_004b8863:
  local_60 = lVar1;
  local_58 = '\0';
  local_50 = *param_2;
  local_48 = '\0';
  FUN_004b8390(param_1,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @004b5500 — 560 bytes
// str: ""MDToolbarLayouter""
// str: ""MDLayoutAlign""
// str: ""_align""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004b5500(void)

{
  int iVar1;
  
  if (DAT_02709610 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02709600 = 0x100000000;
      _DAT_02709608 = 2;
      DAT_0270960c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_02709648 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02709618 = "MDLayoutAlign";
      _DAT_02709620 = 3;
      DAT_02709624 = DAT_0270960c;
      _DAT_02709628 = &DAT_02709600;
      _DAT_02709630 = &DAT_027095e0;
      _DAT_02709638 = 0;
      uRam0000000002709640 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027095d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02702998 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02709498 = FUN_0006d940();
          _DAT_02709480 = "MDToolbarLayouter";
          _DAT_02709488 = 0x148;
          _DAT_02709490 = FUN_0033dd70;
          _DAT_027094a0 = 0;
          uRam00000000027094a8 = 0;
          _DAT_027094b0 = 0;
          _DAT_02709528 = 0;
          uRam0000000002709530 = 0;
          _DAT_02709538 = 0;
          DAT_0270953a = 1;
          _DAT_027094b8 = 0;
          uRam00000000027094c0 = 0;
          _DAT_027094c8 = 0;
          uRam00000000027094d0 = 0;
          _DAT_027094d8 = 0;
          uRam00000000027094e0 = 0;
          _DAT_027094e8 = 0;
          uRam00000000027094f0 = 0;
          _DAT_027094f8 = 0;
          uRam0000000002709500 = 0;
          _DAT_02709508 = 0;
          uRam0000000002709510 = 0;
          _DAT_02709518 = 0;
          uRam0000000002709520 = 0;
          DAT_02709543 = 0;
          _DAT_0270953b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02709598 = "_align";
      _DAT_027095a0 = &DAT_02709480;
      _DAT_027095a8 = 0;
      _DAT_027095b0 = 0x6500;
      _DAT_027095b8 = "MDLayoutAlign";
      _DAT_027095c0 = &DAT_02709618;
      _DAT_027095c8 = 0;
      uRam00000000027095d0 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_02709598;
}




// ============================================================
// @004b40e0 — 542 bytes
// str: ""MDToolbarLayouter""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b40e0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_178;
  undefined8 *local_30;
  
  if (DAT_02702998 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02709498 = FUN_0006d940();
      _DAT_02709480 = "MDToolbarLayouter";
      _DAT_02709488 = 0x148;
      _DAT_02709490 = FUN_0033dd70;
      _DAT_027094a0 = 0;
      uRam00000000027094a8 = 0;
      _DAT_027094b0 = 0;
      _DAT_02709528 = 0;
      uRam0000000002709530 = 0;
      _DAT_02709538 = 0;
      DAT_0270953a = 1;
      _DAT_027094b8 = 0;
      uRam00000000027094c0 = 0;
      _DAT_027094c8 = 0;
      uRam00000000027094d0 = 0;
      _DAT_027094d8 = 0;
      uRam00000000027094e0 = 0;
      _DAT_027094e8 = 0;
      uRam00000000027094f0 = 0;
      _DAT_027094f8 = 0;
      uRam0000000002709500 = 0;
      _DAT_02709508 = 0;
      uRam0000000002709510 = 0;
      _DAT_02709518 = 0;
      uRam0000000002709520 = 0;
      DAT_02709543 = 0;
      _DAT_0270953b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270953b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_30 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_30 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_30 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_004b5040();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_178 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_30 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}




// ============================================================
// @004b77a0 — 511 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x004b7870) */
/* WARNING: Removing unreachable block (ram,0x004b7879) */

void FUN_004b77a0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  FUN_004b5af0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_004b8550();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    uVar1 = *(uint *)(local_58 + 0xc);
    if (0 < (int)uVar1) {
      lVar2 = *(longlong *)(local_58 + 0x10);
      uVar4 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)(*(longlong *)(lVar2 + uVar5 * 8) + 0x20) = 0;
          *(undefined8 *)(*(longlong *)(lVar2 + 8 + uVar5 * 8) + 0x20) = 0;
          *(undefined8 *)(*(longlong *)(lVar2 + 0x10 + uVar5 * 8) + 0x20) = 0;
          *(undefined8 *)(*(longlong *)(lVar2 + 0x18 + uVar5 * 8) + 0x20) = 0;
          uVar5 = uVar5 + 4;
        } while ((uVar1 & 0xfffffffc) != (uint)uVar5);
      }
      if (uVar4 != 0) {
        uVar5 = uVar5 & 0xffffffff;
        do {
          *(undefined8 *)(*(longlong *)(lVar2 + uVar5 * 8) + 0x20) = 0;
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    FUN_00274d30();
  }
  plVar3 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    lVar2 = *(longlong *)(unaff_RDI + 0x10);
    *(longlong **)(unaff_RDI + 0x10) = plVar3;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar3 = *(longlong **)(unaff_RDI + 0x10);
      goto joined_r0x004b795c;
    }
  }
  else {
joined_r0x004b795c:
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_004b796a;
    }
  }
  FUN_00d50b00();
LAB_004b796a:
  FUN_00ca1340();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_004b81e0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}



