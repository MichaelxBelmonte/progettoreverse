// Reconstructed implementation of MDTooltipsPrefCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDTooltipsPrefCtrl.h"

// ============================================================
// @00177f10 — 1614 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00178208) */
/* WARNING: Removing unreachable block (ram,0x00178211) */
/* WARNING: Removing unreachable block (ram,0x0017822c) */
/* WARNING: Removing unreachable block (ram,0x00178234) */
/* WARNING: Removing unreachable block (ram,0x00178282) */
/* WARNING: Removing unreachable block (ram,0x0017828e) */
/* WARNING: Removing unreachable block (ram,0x00178293) */
/* WARNING: Removing unreachable block (ram,0x00178299) */
/* WARNING: Removing unreachable block (ram,0x001782a1) */
/* WARNING: Removing unreachable block (ram,0x0017830b) */
/* WARNING: Removing unreachable block (ram,0x00178310) */
/* WARNING: Removing unreachable block (ram,0x00178318) */
/* WARNING: Removing unreachable block (ram,0x001782cb) */
/* WARNING: Removing unreachable block (ram,0x00178320) */
/* WARNING: Removing unreachable block (ram,0x00178336) */
/* WARNING: Removing unreachable block (ram,0x0017833f) */
/* WARNING: Removing unreachable block (ram,0x00178344) */
/* WARNING: Removing unreachable block (ram,0x0017834a) */
/* WARNING: Removing unreachable block (ram,0x00178353) */
/* WARNING: Removing unreachable block (ram,0x00178358) */
/* WARNING: Removing unreachable block (ram,0x0017835e) */
/* WARNING: Removing unreachable block (ram,0x00178366) */

void FUN_00177f10(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong local_e0;
  char local_d8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RDI + 0x98) != 0) {
    FUN_00643590();
    FUN_00d23310();
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      cVar4 = FUN_00212c70();
      lVar1 = DAT_027259a0;
      if (cVar4 != '\0') {
        if (DAT_027259a0 != 0) {
          FUN_00d50b00();
        }
        lVar3 = DAT_026fe4a0;
        if (DAT_026fe4a0 != 0) {
          FUN_00d50b00();
        }
        FUN_01f6ca30();
        iVar5 = (**(code **)(*local_48 + 0x5e0))();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (iVar5 != 0) {
          FUN_00d50b20();
          return;
        }
      }
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar1 = DAT_026e4838;
  if (DAT_026e4838 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d40470(&local_e0,&stack0xffffffffffffff68,3,3);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(unaff_RDI + 0x80) + 0x10) + (longlong)unaff_ESI * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00176c40();
  FUN_000b51b0();
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = local_48;
  FUN_01e53c20();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x88) = unaff_ESI;
  FUN_00176c40();
  FUN_01e53c20();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_000b52a0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar2 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0xa40))();
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_c0 = DAT_027257f0;
  if (DAT_027257f0 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  FUN_00d50b00();
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d40470(&local_b0,&stack0xffffffffffffff78,1,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0017a670 — 1611 bytes
// ============================================================

void FUN_0017a670(undefined8 param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  longlong *in_RDX;
  longlong unaff_RDI;
  longlong *plVar11;
  longlong **pplVar12;
  longlong *plVar13;
  bool bVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong local_a0;
  char local_98;
  longlong *local_60;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  if (*in_RDX == 0) {
    return;
  }
  FUN_01e53c20();
  plVar5 = local_48;
  if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar10 = FUN_01d3a5a0();
  if (iVar10 == 1) {
    iVar10 = FUN_01d3b630();
    bVar14 = iVar10 == 1;
  }
  else {
    bVar14 = false;
  }
  iVar10 = FUN_00655800();
  bVar3 = true;
  if (iVar10 == 0) {
    local_60 = *(longlong **)(unaff_RDI + 0x70);
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0017a751;
    }
  }
  else if (iVar10 == 1) {
    local_60 = *(longlong **)(unaff_RDI + 0x78);
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0017a751;
    }
  }
  else if ((iVar10 == 2) &&
          (local_60 = *(longlong **)(unaff_RDI + 0x80), local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
LAB_0017a751:
    bVar3 = false;
    goto LAB_0017a75c;
  }
  local_60 = (longlong *)0x0;
LAB_0017a75c:
  FUN_01e561b0();
  FUN_01d8c6e0();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != (longlong *)0x0) {
    FUN_01e3f820();
    uVar17 = FUN_01e46ed0();
    FUN_01e3f820();
    uVar18 = FUN_01e46ed0();
    param_2 = (float)((ulonglong)uVar17 >> 0x20) - (float)((ulonglong)uVar18 >> 0x20);
    FUN_01e5bd60((float)uVar17 - (float)uVar18,param_2);
  }
  local_38 = (longlong *)0x0;
  FUN_01e5d9c0();
  local_38 = (longlong *)0x0;
  FUN_01e5d070();
  local_38 = (longlong *)0x0;
  bVar1 = false;
  plVar11 = (longlong *)0x0;
  bVar2 = false;
  while (*in_RDX != 0) {
    FUN_01e42030();
    plVar13 = local_48;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 == (longlong *)0x0) break;
    FUN_01d3abf0();
    uVar15 = FUN_01e466c0();
    fVar16 = (float)FUN_01e3f820();
    cVar8 = FUN_00d05410(uVar15,fVar16,param_2);
    if (cVar8 == '\0') {
      param_2 = fVar16;
      if (plVar11 != (longlong *)0x0) {
        if (bVar2) {
          FUN_00d50b20();
        }
        bVar2 = false;
        param_2 = fVar16;
      }
      plVar11 = (longlong *)0x0;
      plVar13 = local_38;
      if (local_38 != (longlong *)0x0) goto LAB_0017aa34;
    }
    else {
      (**(code **)(*plVar5 + 0x490))(uVar15);
      plVar13 = local_48;
      FUN_000f5df0();
      pplVar12 = (longlong **)&DAT_02802688;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar9 = FUN_00e85ea0();
        pplVar12 = &local_48;
        if (cVar9 == '\0') {
          pplVar12 = (longlong **)&DAT_02802688;
        }
      }
      plVar13 = *pplVar12;
      if (plVar11 == plVar13) {
        param_2 = fVar16;
        if ((!bVar2) && (plVar11 != (longlong *)0x0)) {
          plVar13 = plVar11;
          if (*(char *)(pplVar12 + 1) != '\0') goto LAB_0017a98e;
          FUN_00d50b00();
          goto joined_r0x0017aa14;
        }
      }
      else {
        if (*(char *)(pplVar12 + 1) == '\0') {
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((bVar2) && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_0017a98e:
          *(undefined1 *)(pplVar12 + 1) = 0;
        }
joined_r0x0017aa14:
        bVar2 = true;
        plVar11 = plVar13;
        param_2 = fVar16;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar13 = local_38;
      if (plVar11 != local_38) {
LAB_0017aa34:
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x918))();
        }
        if ((bVar2) && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if ((bVar1) && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar13 = plVar11;
        bVar1 = bVar2;
        if (plVar11 == (longlong *)0x0) {
          if (local_60 != (longlong *)0x0) goto LAB_0017aaaf;
          local_38 = (longlong *)0x0;
          plVar13 = local_38;
        }
        else {
          (**(code **)(*plVar11 + 0x918))();
          if (local_60 != (longlong *)0x0) {
LAB_0017aaaf:
            (**(code **)(*local_60 + 0x918))();
            if (local_60 != plVar11) {
              bVar14 = true;
            }
          }
        }
      }
    }
    local_38 = plVar13;
    (**(code **)(*plVar5 + 0x658))();
    plVar7 = local_48;
    plVar13 = (longlong *)*in_RDX;
    if (plVar13 == local_48) {
      if (((char)in_RDX[1] == '\0') && (local_48 != (longlong *)0x0)) {
        if (local_40 != '\0') goto LAB_0017ab31;
        FUN_00d50b00();
        goto LAB_0017ab7b;
      }
LAB_0017ab83:
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar4 = in_RDX[1];
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *in_RDX = (longlong)plVar7;
        if (((char)lVar4 != '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_0017ab7b:
        *(undefined1 *)(in_RDX + 1) = 1;
        goto LAB_0017ab83;
      }
      *in_RDX = (longlong)local_48;
      if (((char)lVar4 != '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_0017ab31:
      *(undefined1 *)(in_RDX + 1) = 1;
    }
    if (((*in_RDX == 0) ||
        (((bVar14 && (iVar10 = FUN_01d3a5a0(), iVar10 == 6)) && (cVar8 == '\x01')))) ||
       (iVar10 = FUN_01d3a5a0(), iVar10 == 1)) break;
  }
  if (local_38 != (longlong *)0x0) {
    FUN_01d11e80();
  }
  FUN_01d7c320();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar3 && local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00177220 — 1487 bytes
// ============================================================

void FUN_00177220(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  float fVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  longlong unaff_RDI;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar10;
  undefined8 uVar11;
  undefined8 in_XMM1_Qb;
  undefined1 auVar12 [16];
  float fVar13;
  float local_128;
  float fStack_124;
  float local_118;
  float fStack_114;
  float local_f8;
  float fStack_f4;
  float local_e8;
  float fStack_e4;
  char local_d8;
  undefined7 uStack_d7;
  char local_d0 [8];
  undefined1 local_c8 [24];
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  undefined8 local_70;
  longlong *local_68;
  char local_60 [8];
  longlong local_58;
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  char local_38 [8];
  
  uVar8 = DAT_023dcce4;
  fVar3 = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  if (*(char *)(unaff_RDI + 0xa0) == '\0') {
    local_70 = DAT_023dcce4;
    local_40 = DAT_023dcce4;
    FUN_00176c40();
    uVar7 = (**(code **)(*local_68 + 0x938))();
    uVar11 = param_2;
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_00176c40();
    (**(code **)(*local_68 + 0x4d8))();
    local_b0 = uVar11;
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    if (*(char *)(unaff_RDI + 0xb0) == '\0') {
      if ((longlong)*(int *)(unaff_RDI + 0x88) == -1) {
        local_a8 = ZEXT816(0);
        _local_88 = ZEXT816(0);
        auVar12 = ZEXT816(0);
        local_98._0_4_ = 0.0;
      }
      else {
        lVar4 = *(longlong *)
                 (*(longlong *)(*(longlong *)(unaff_RDI + 0x80) + 0x10) +
                 (longlong)*(int *)(unaff_RDI + 0x88) * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_01e53c20();
        plVar1 = local_68;
        pcVar5 = &local_d8;
        if (local_60[0] != '\0') {
          pcVar5 = local_60;
        }
        local_d8 = local_60[0];
        *pcVar5 = '\0';
        if ((local_60[0] != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        local_40 = (**(code **)(*plVar1 + 0x530))();
        uStack_80 = extraout_XMM0_Qb_00;
        local_88 = (undefined1  [8])local_40;
        local_98 = (undefined1  [8])(**(code **)(*plVar1 + 0x528))();
        uStack_90 = extraout_XMM0_Qb_01;
        if (local_d8 != '\0') {
          FUN_00d50b20();
        }
        local_a8._4_4_ = local_88._4_4_;
        local_a8._0_4_ = local_88._4_4_;
        local_a8._8_4_ = uStack_80._4_4_;
        local_a8._12_4_ = uStack_80._4_4_;
        auVar12._4_4_ = local_98._4_4_;
        auVar12._0_4_ = local_98._4_4_;
        auVar12._8_4_ = uStack_90._4_4_;
        auVar12._12_4_ = uStack_90._4_4_;
      }
    }
    else {
      local_98._0_4_ = (undefined4)uVar8;
      _local_88 = ZEXT416((uint)local_98._0_4_);
      auVar12 = ZEXT416((uint)((ulonglong)uVar8 >> 0x20));
      local_a8 = auVar12;
      if (*(longlong *)(unaff_RDI + 0x80) != 0) {
        local_60[0] = '\0';
        local_68 = (longlong *)0x0;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        local_c8._0_16_ = auVar12;
        _local_98 = _local_88;
        local_58 = *(longlong *)(unaff_RDI + 0x80);
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar6 = -local_50._4_4_;
            }
            else {
              iVar6 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar6);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar6 = 0;
            }
            local_50 = CONCAT44(iVar6,(int)local_50);
          }
          lVar4 = (longlong)(int)local_50;
          iVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
          if (*(int *)(local_58 + 0xc) <= iVar6) break;
          local_68 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar4 * 8);
          FUN_01e53c20();
          local_38[0] = local_d0[0];
          pcVar5 = local_d0;
          if (local_d0[0] == '\0') {
            pcVar5 = local_38;
          }
          plVar1 = (longlong *)CONCAT71(uStack_d7,local_d8);
          *pcVar5 = '\0';
          if ((local_d0[0] != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            uVar8 = (**(code **)(*plVar1 + 0x530))();
            uVar9 = (**(code **)(*plVar1 + 0x528))();
            local_128 = (float)uVar8;
            fStack_124 = (float)((ulonglong)uVar8 >> 0x20);
            if ((float)local_98._0_4_ <= (float)uVar9) {
              local_98._0_4_ = (float)uVar9;
            }
            fVar10 = (float)((ulonglong)uVar9 >> 0x20);
            if ((float)local_c8._0_4_ <= fVar10) {
              local_c8._0_4_ = fVar10;
            }
            if ((float)local_88._0_4_ <= local_128) {
              local_88._0_4_ = local_128;
            }
            if ((float)local_a8._0_4_ <= fStack_124) {
              local_a8._0_4_ = fStack_124;
            }
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
          }
        }
        local_40 = CONCAT44(local_a8._0_4_,local_88._0_4_);
        FUN_000ad7a0();
        auVar12 = local_c8._0_16_;
      }
    }
    local_e8 = (float)uVar7;
    fStack_e4 = (float)((ulonglong)uVar7 >> 0x20);
    local_118 = (float)param_2;
    fStack_114 = (float)((ulonglong)param_2 >> 0x20);
    fVar10 = local_e8 + local_118 + 0.0;
    fVar13 = (float)local_98._0_4_ + fVar10;
    local_98._0_4_ = fStack_e4 + fStack_114 + 0.0;
    local_98._4_4_ = fStack_e4 + fStack_114;
    uStack_90._0_4_ = extraout_XMM0_Dd + fVar3;
    uStack_90._4_4_ = extraout_XMM0_Dd + fVar3;
    local_70 = CONCAT44(auVar12._0_4_ + (float)local_98._0_4_,fVar13);
    FUN_00176c40();
    plVar1 = local_68;
    local_c8._8_8_ = 0;
    local_c8._0_8_ = local_70;
    FUN_01e4cf40();
    if ((local_60[0] != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    fVar10 = fVar10 + (float)local_88._0_4_;
    fVar3 = (float)local_c8._0_4_;
    if ((float)local_c8._0_4_ <= fVar10) {
      fVar3 = fVar10;
    }
    fVar10 = (float)local_c8._4_4_;
    if ((float)local_c8._4_4_ <= (float)local_98._0_4_ + (float)local_a8._0_4_) {
      fVar10 = (float)local_98._0_4_ + (float)local_a8._0_4_;
    }
    local_40 = CONCAT44(fVar10,fVar3);
    FUN_00176c40();
    uStack_80 = 0;
    local_88 = (undefined1  [8])local_40;
    (**(code **)(*local_68 + 0x9b8))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_00176c40();
    cVar2 = (**(code **)(*local_68 + 0x9e8))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    fVar3 = local_88._0_4_;
    local_f8 = fVar3;
    if ((cVar2 != '\0') && (local_f8 = (float)uVar11, local_f8 <= fVar3)) {
      local_f8 = fVar3;
    }
    local_b0 = CONCAT44(local_b0._4_4_,local_f8);
    FUN_00176c40();
    cVar2 = (**(code **)(*local_68 + 0x9e0))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    fStack_f4 = (float)local_88._4_4_;
    if ((cVar2 != '\0') &&
       (fStack_f4 = (float)((ulonglong)uVar11 >> 0x20), fStack_f4 <= (float)local_88._4_4_)) {
      fStack_f4 = (float)local_88._4_4_;
    }
    local_b0 = CONCAT44(fStack_f4,(undefined4)local_b0);
    FUN_00176c40();
    (**(code **)(*local_68 + 0x4d0))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00176c40();
    local_88 = (undefined1  [8])(**(code **)(*local_68 + 0x4d8))();
    uStack_80 = extraout_XMM0_Qb;
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_00176c40();
    plVar1 = local_68;
    FUN_01e4cf40();
    if ((local_60[0] != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00176c40();
    (**(code **)(*local_68 + 0x4d0))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00175e90 — 741 bytes
// str: ""handlePrefsChanged""
// str: ""handleToggleShowTooltips""
// str: ""MDTooltipsPrefCtrl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00175e90(void)

{
  int iVar1;
  
  if (DAT_02804600 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271f6d0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e4768 = FUN_00015ff0();
          _DAT_026e4750 = "MDTooltipsPrefCtrl";
          _DAT_026e4758 = 0x80;
          _DAT_026e4760 = FUN_00176810;
          _DAT_026e4770 = 0;
          uRam00000000026e4778 = 0;
          _DAT_026e4780 = 0;
          _DAT_026e47f8 = 0;
          uRam00000000026e4800 = 0;
          _DAT_026e4808 = 0;
          DAT_026e480a = 1;
          _DAT_026e4788 = 0;
          uRam00000000026e4790 = 0;
          _DAT_026e4798 = 0;
          uRam00000000026e47a0 = 0;
          _DAT_026e47a8 = 0;
          uRam00000000026e47b0 = 0;
          _DAT_026e47b8 = 0;
          uRam00000000026e47c0 = 0;
          _DAT_026e47c8 = 0;
          uRam00000000026e47d0 = 0;
          _DAT_026e47d8 = 0;
          uRam00000000026e47e0 = 0;
          _DAT_026e47e8 = 0;
          uRam00000000026e47f0 = 0;
          DAT_026e4813 = 0;
          _DAT_026e480b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028045c0 = "handlePrefsChanged";
      _DAT_028045c8 = &DAT_026e4750;
      _DAT_028045d0 = 0;
      _DAT_028045d8 = &DAT_026e4818;
      _DAT_028045e0 = FUN_00176850;
      _DAT_028045e8 = FUN_001763f0;
      _DAT_028045f0 = 0;
      uRam00000000028045f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02804648 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271f6d0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e4768 = FUN_00015ff0();
          _DAT_026e4750 = "MDTooltipsPrefCtrl";
          _DAT_026e4758 = 0x80;
          _DAT_026e4760 = FUN_00176810;
          _DAT_026e4770 = 0;
          uRam00000000026e4778 = 0;
          _DAT_026e4780 = 0;
          _DAT_026e47f8 = 0;
          uRam00000000026e4800 = 0;
          _DAT_026e4808 = 0;
          DAT_026e480a = 1;
          _DAT_026e4788 = 0;
          uRam00000000026e4790 = 0;
          _DAT_026e4798 = 0;
          uRam00000000026e47a0 = 0;
          _DAT_026e47a8 = 0;
          uRam00000000026e47b0 = 0;
          _DAT_026e47b8 = 0;
          uRam00000000026e47c0 = 0;
          _DAT_026e47c8 = 0;
          uRam00000000026e47d0 = 0;
          _DAT_026e47d8 = 0;
          uRam00000000026e47e0 = 0;
          _DAT_026e47e8 = 0;
          uRam00000000026e47f0 = 0;
          DAT_026e4813 = 0;
          _DAT_026e480b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02804608 = "handleToggleShowTooltips";
      _DAT_02804610 = &DAT_026e4750;
      _DAT_02804618 = 0;
      _DAT_02804620 = &DAT_026e481b;
      _DAT_02804628 = FUN_001768d0;
      _DAT_02804630 = FUN_00176470;
      _DAT_02804638 = 0;
      uRam0000000002804640 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @0017b240 — 690 bytes
// ============================================================

void FUN_0017b240(void)

{
  FUN_0017b500();
  FUN_0017b880();
  FUN_0017bae0();
  FUN_0017bda0();
  FUN_000205c0();
  FUN_0017bf50();
  FUN_0017c120();
  FUN_0017c430();
  FUN_0017c670();
  FUN_0017c810();
  FUN_0017ca80();
  FUN_0017cc50();
  FUN_0017ced0();
  FUN_0017d050();
  FUN_0017d200();
  FUN_0017d430();
  FUN_0017d5b0();
  FUN_0017d750();
  FUN_0017d920();
  FUN_0017b880();
  FUN_0017db90();
  FUN_0017dd50();
  FUN_0017e010();
  FUN_0017e150();
  FUN_0017e420();
  FUN_0017e720();
  FUN_0017e980();
  FUN_000f5b20();
  FUN_0017ebf0();
  FUN_0017eec0();
  FUN_0017f1a0();
  FUN_0017f3b0();
  FUN_0017f5f0();
  FUN_0017f910();
  FUN_000f60b0();
  FUN_0017fbd0();
  FUN_0017fe40();
  FUN_00180020();
  FUN_00180230();
  FUN_00180450();
  FUN_00180730();
  FUN_00180900();
  FUN_00180aa0();
  FUN_00180b70();
  FUN_00180e50();
  FUN_00181090();
  FUN_00181330();
  FUN_00181400();
  FUN_001814d0();
  FUN_001817d0();
  FUN_00181a30();
  FUN_00181db0();
  FUN_00182050();
  FUN_001823c0();
  FUN_00182650();
  FUN_001827f0();
  FUN_00182aa0();
  FUN_00182c80();
  FUN_00182e30();
  FUN_00183080();
  FUN_00183360();
  FUN_00183530();
  FUN_00183700();
  FUN_001839c0();
  FUN_00183d30();
  FUN_00183f90();
  FUN_001841f0();
  FUN_001844f0();
  FUN_00184740();
  FUN_00184990();
  FUN_00184b30();
  FUN_00184d20();
  FUN_00184f70();
  FUN_001852e0();
  FUN_001855d0();
  FUN_00185780();
  FUN_00185850();
  FUN_001859f0();
  FUN_00185c50();
  FUN_00185d10();
  FUN_00185f30();
  FUN_001860f0();
  FUN_001862a0();
  FUN_00186450();
  FUN_001865e0();
  FUN_00186840();
  FUN_00186b40();
  FUN_00186ce0();
  FUN_00186dd0();
  FUN_00173550();
  FUN_00186f70();
  FUN_001871b0();
  FUN_001875e0();
  FUN_00187900();
  FUN_00187ab0();
  FUN_00187ca0();
  FUN_00187e40();
  FUN_00188160();
  FUN_00188310();
  FUN_0017bf50();
  FUN_001883f0();
  FUN_00188720();
  FUN_00188950();
  FUN_00188a20();
  FUN_00188cb0();
  FUN_00188e80();
  FUN_001890e0();
  FUN_00189280();
  FUN_00189480();
  FUN_001895f0();
  FUN_00189790();
  FUN_001899f0();
  FUN_00189d30();
  FUN_00189f00();
  FUN_0018a150();
  FUN_0018a3b0();
  FUN_0018a670();
  FUN_0018a830();
  FUN_0018aaa0();
  FUN_0018ac60();
  FUN_0018ae20();
  FUN_0018b060();
  FUN_0018b300();
  FUN_0018b550();
  FUN_0018b7a0();
  FUN_0018b960();
  FUN_0018bc80();
  FUN_0018be40();
  FUN_0018bfe0();
  FUN_0018c180();
  FUN_0018c430();
  FUN_000a31d0();
  FUN_0018c500();
  FUN_0018c660();
  FUN_0018c7f0();
  FUN_0018c900();
  FUN_0018cbe0();
  return;
}




// ============================================================
// @00179040 — 575 bytes
// str: ""%@ [Module]""
// str: ""%@ [Header]""
// ============================================================

void FUN_00179040(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  FUN_00176c40();
  puVar3 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00176c40();
    local_40 = *unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    FUN_00d8cb40(param_1,&local_50);
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    FUN_003b6200();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar2;
    FUN_00d8cb40(param_1,&local_50);
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_003b6200();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00177bb0 — 556 bytes
// ============================================================

void FUN_00177bb0(void)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  iVar3 = (int)unaff_RDI[0x11];
  if ((unaff_ESI < 1) || (iVar3 != unaff_ESI)) {
    if ((iVar3 == 0 && unaff_ESI == 0) && (1 < *(int *)(unaff_RDI[0x10] + 0xc))) {
      (**(code **)(*unaff_RDI + 0x5e0))();
      bVar2 = true;
    }
    else if (iVar3 == unaff_ESI) {
      plVar1 = *(longlong **)(*(longlong *)(unaff_RDI[0x10] + 0x10) + (longlong)unaff_ESI * 8);
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x4f0))();
      FUN_00176c40();
      FUN_01e53c20();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      (**(code **)(*local_60 + 0x470))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != '\0') {
        FUN_00d50b20();
      }
      bVar2 = true;
      FUN_00d50b20();
    }
    else {
      bVar2 = unaff_ESI < iVar3;
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x5e0))();
    bVar2 = false;
  }
  FUN_00d23620();
  if (unaff_RDI[0x12] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = (longlong *)unaff_RDI[0x12];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0xa60))();
    FUN_00d50b20();
    plVar1 = (longlong *)unaff_RDI[0x12];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    iVar3 = (**(code **)(*plVar1 + 0xaa0))();
    FUN_00d50b20();
    if (iVar3 == 0) {
      plVar1 = (longlong *)unaff_RDI[0x12];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x478))();
      FUN_00d50b20();
      if (unaff_RDI[0x12] != 0) {
        unaff_RDI[0x12] = 0;
        FUN_00d50b20();
      }
    }
  }
  if (bVar2) {
    *(int *)(unaff_RDI + 0x11) = (int)unaff_RDI[0x11] + -1;
  }
  return;
}




// ============================================================
// @005657d0 — 522 bytes
// str: ""MDTooltipsPrefCtrl""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x005658e6) */
/* WARNING: Removing unreachable block (ram,0x005658f7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005657d0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_28;
  longlong local_20;
  
  if ((DAT_0271f6d0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026e4768 = FUN_00015ff0();
    _DAT_026e4750 = "MDTooltipsPrefCtrl";
    _DAT_026e4758 = 0x80;
    _DAT_026e4760 = FUN_00176810;
    _DAT_026e4770 = 0;
    uRam00000000026e4778 = 0;
    _DAT_026e4780 = 0;
    _DAT_026e47f8 = 0;
    uRam00000000026e4800 = 0;
    _DAT_026e4808 = 0;
    DAT_026e480a = 1;
    _DAT_026e4788 = 0;
    uRam00000000026e4790 = 0;
    _DAT_026e4798 = 0;
    uRam00000000026e47a0 = 0;
    _DAT_026e47a8 = 0;
    uRam00000000026e47b0 = 0;
    _DAT_026e47b8 = 0;
    uRam00000000026e47c0 = 0;
    _DAT_026e47c8 = 0;
    uRam00000000026e47d0 = 0;
    _DAT_026e47d8 = 0;
    uRam00000000026e47e0 = 0;
    _DAT_026e47e8 = 0;
    uRam00000000026e47f0 = 0;
    DAT_026e4813 = 0;
    _DAT_026e480b = 0;
    ___cxa_guard_release();
  }
  if (DAT_026e480b == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_0005aa20();
    FUN_005e8340();
    FUN_005e8670();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00175e90();
    FUN_00e87920(uVar2,0);
    if (local_20 != 0) {
      FUN_00d50b20();
    }
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}




// ============================================================
// @00179a50 — 515 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00179b16) */
/* WARNING: Removing unreachable block (ram,0x00179b20) */
/* WARNING: Removing unreachable block (ram,0x00179b40) */
/* WARNING: Removing unreachable block (ram,0x00179b22) */
/* WARNING: Removing unreachable block (ram,0x00179b42) */

undefined8 FUN_00179a50(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int local_68;
  longlong local_50;
  char local_48;
  
  if ((*(longlong *)(unaff_RDI + 0xa8) == 0) || (lVar1 = *unaff_RSI, *(int *)(lVar1 + 0xc) == 0)) {
LAB_00179c4e:
    uVar7 = 0;
  }
  else {
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar9 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar9 * 8);
        lVar3 = *(longlong *)(unaff_RDI + 0xa8);
        if (lVar3 == 0) {
LAB_00179c42:
          FUN_00115910();
          goto LAB_00179c4e;
        }
        local_68 = -1;
        do {
          lVar6 = (longlong)local_68;
          local_68 = local_68 + 1;
          if (*(int *)(lVar3 + 0xc) <= local_68) {
            FUN_00136a40();
            goto LAB_00179c42;
          }
          plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8 + lVar6 * 8);
          (**(code **)(*plVar2 + 0x370))();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          cVar5 = (**(code **)(*plVar4 + 0x50))();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        } while (cVar5 == '\0');
        FUN_00136a40();
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_00115910();
    uVar7 = 1;
  }
  return uVar7;
}



