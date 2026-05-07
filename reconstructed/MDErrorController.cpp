// Reconstructed implementation of MDErrorController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDErrorController.h"

// ============================================================
// @004b0830 — 2035 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x004b08f8) */
/* WARNING: Removing unreachable block (ram,0x004b0904) */

longlong * FUN_004b0830(longlong *param_1,longlong *param_2,char param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  longlong *local_res8;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  undefined7 uStack_3f;
  char local_38;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  local_48 = param_1;
  if (param_4 == '\0') {
    if (param_3 == '\0') {
      FUN_00d23310();
      plVar10 = local_70;
      plVar7 = (longlong *)&local_40;
      if ((char)local_68 != '\0') {
        plVar7 = &local_68;
      }
      local_40 = (char)local_68;
      *(undefined1 *)plVar7 = 0;
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar7 = *(longlong **)(unaff_RSI + 0x18);
      if (plVar7 == plVar10) {
        if ((local_40 != '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_40 == '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b00();
          plVar7 = *(longlong **)(unaff_RSI + 0x18);
        }
        *(longlong **)(unaff_RSI + 0x18) = plVar10;
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00c8e340();
    }
    else {
      lVar8 = *(longlong *)(unaff_RSI + 0x18);
      if (lVar8 != 0) {
        lVar12 = *(longlong *)(unaff_RSI + 0x10);
        local_80 = 0;
        FUN_00d50b00();
        local_80 = '\x01';
        local_88 = lVar8;
        iVar6 = FUN_00d237a0();
        iVar5 = *(int *)(lVar12 + 0x18);
        lVar8 = (longlong)iVar5;
        iVar4 = iVar5 + 3;
        if (-1 < lVar8) {
          iVar4 = iVar5;
        }
        if (3 < lVar8) {
          iVar4 = iVar4 >> 2;
          lVar11 = 0;
          do {
            if (*(int *)(*(longlong *)(lVar12 + 0x10) + lVar11 * 4) == iVar6) goto LAB_004b0bd7;
            lVar11 = lVar11 + 1;
          } while (iVar4 != (int)lVar11);
        }
        FUN_00c8e340(iVar4,1);
        *(int *)(*(longlong *)(lVar12 + 0x10) + lVar8) = iVar6;
LAB_004b0bd7:
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d23310();
      plVar10 = local_70;
      plVar7 = (longlong *)&local_40;
      if ((char)local_68 != '\0') {
        plVar7 = &local_68;
      }
      local_40 = (char)local_68;
      *(undefined1 *)plVar7 = 0;
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar7 = *(longlong **)(unaff_RSI + 0x18);
      if (plVar7 == plVar10) {
        if ((local_40 != '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_40 == '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b00();
          plVar7 = *(longlong **)(unaff_RSI + 0x18);
        }
        *(longlong **)(unaff_RSI + 0x18) = plVar10;
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      iVar5 = *(int *)(*param_2 + 0xc);
      while (1 < iVar5) {
        FUN_00d23740();
        iVar5 = *(int *)(*param_2 + 0xc);
      }
      iVar5 = *(int *)(unaff_RSI + 0x20);
      if ((-1 < iVar5) && (iVar4 = *(int *)(unaff_RSI + 0x24), iVar5 <= iVar4)) {
        do {
          lVar8 = *(longlong *)(unaff_RSI + 0x10);
          iVar6 = *(int *)(lVar8 + 0x18);
          lVar12 = (longlong)iVar6;
          iVar2 = iVar6 + 3;
          if (-1 < lVar12) {
            iVar2 = iVar6;
          }
          if (3 < lVar12) {
            lVar11 = 0;
            do {
              if (*(int *)(*(longlong *)(lVar8 + 0x10) + lVar11 * 4) == iVar5) goto LAB_004b0d6e;
              lVar11 = lVar11 + 1;
            } while (iVar2 >> 2 != (int)lVar11);
          }
          FUN_00c8e340();
          *(int *)(*(longlong *)(lVar8 + 0x10) + lVar12) = iVar5;
          iVar4 = *(int *)(unaff_RSI + 0x24);
LAB_004b0d6e:
          bVar1 = iVar5 < iVar4;
          iVar5 = iVar5 + 1;
        } while (bVar1);
      }
    }
    *(undefined8 *)(unaff_RSI + 0x20) = 0xffffffffffffffff;
    goto LAB_004b0f34;
  }
  FUN_00d23310();
  plVar10 = local_70;
  local_40 = (char)local_68;
  plVar7 = &local_68;
  if ((char)local_68 == '\0') {
    plVar7 = (longlong *)&local_40;
  }
  *(undefined1 *)plVar7 = 0;
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 == '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_78 = plVar10;
  iVar4 = FUN_00d237a0();
  iVar5 = *(int *)(unaff_RSI + 0x20);
  if ((((iVar5 < 0) || (*(int *)(unaff_RSI + 0x24) < iVar5)) || (iVar4 != iVar5)) ||
     (iVar4 != *(int *)(unaff_RSI + 0x24))) {
    *(undefined4 *)(unaff_RSI + 0x20) = 0xffffffff;
    if (*(longlong *)(unaff_RSI + 0x18) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar8 = *(longlong *)(unaff_RSI + 0x18);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      iVar5 = FUN_00d237a0();
      *(int *)(unaff_RSI + 0x20) = iVar5;
      if (lVar8 != 0) {
        FUN_00d50b20();
        iVar5 = *(int *)(unaff_RSI + 0x20);
      }
      if (-1 < iVar5) goto LAB_004b0df0;
    }
    if ((*local_res8 != 0) && (*local_48 != 0)) {
      local_68._0_1_ = '\0';
      local_70 = (longlong *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = *local_48;
      do {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar5 = -local_58._4_4_;
          }
          else {
            iVar5 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar5);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar5 = 0;
          }
          local_58 = CONCAT44(iVar5,(int)local_58);
        }
        lVar8 = (longlong)(int)local_58;
        iVar5 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar5);
        if (*(int *)(local_60 + 0xc) <= iVar5) goto LAB_004b0dd1;
        local_70 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + lVar8 * 8);
        local_d8 = *local_res8;
        local_d0 = '\0';
        (**(code **)(*local_70 + 0x98))(*(longlong *)(local_60 + 0x10),&local_d8);
        plVar7 = (longlong *)CONCAT71(uStack_3f,local_40);
        FUN_00053ac0();
        plVar10 = &DAT_02802688;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar3 = FUN_00e85ea0();
          plVar10 = (longlong *)&local_40;
          if (cVar3 == '\0') {
            plVar10 = &DAT_02802688;
          }
        }
        lVar8 = *plVar10;
        if ((char)plVar10[1] == '\0') {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(plVar10 + 1) = 0;
        }
        if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          iVar5 = FUN_00d45870();
          if (iVar5 != 0) goto LAB_004b0dbf;
          FUN_00d50b20();
        }
      } while( true );
    }
    goto LAB_004b0de8;
  }
  goto LAB_004b0e51;
LAB_004b0dbf:
  *(int *)(unaff_RSI + 0x20) = local_50 + (int)local_58;
  FUN_00d50b20();
LAB_004b0dd1:
  FUN_00083b20();
  if (*(int *)(unaff_RSI + 0x20) < 0) {
LAB_004b0de8:
    *(undefined4 *)(unaff_RSI + 0x20) = 0;
  }
LAB_004b0df0:
  local_c8 = local_78;
  local_c0 = '\0';
  iVar5 = FUN_00d237a0();
  *(int *)(unaff_RSI + 0x24) = iVar5;
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
    iVar5 = *(int *)(unaff_RSI + 0x24);
  }
  if (iVar5 < 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (local_78 == (longlong *)0x0) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  if (iVar5 < *(int *)(unaff_RSI + 0x20)) {
    *(int *)(unaff_RSI + 0x24) = *(int *)(unaff_RSI + 0x20);
    *(int *)(unaff_RSI + 0x20) = iVar5;
  }
LAB_004b0e51:
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  (*DAT_02572370)();
  lVar8 = *param_2;
  *param_2 = (longlong)puVar9;
  if (((char)param_2[1] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(param_2 + 1) = 1;
  lVar8 = (longlong)*(int *)(unaff_RSI + 0x20);
  if (*(int *)(unaff_RSI + 0x20) <= *(int *)(unaff_RSI + 0x24)) {
    do {
      if (*(int *)(*local_48 + 0xc) <= lVar8) break;
      lVar12 = *(longlong *)(*(longlong *)(*local_48 + 0x10) + lVar8 * 8);
      local_90 = 0;
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      local_98 = lVar12;
      FUN_00d21140();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      bVar1 = lVar8 < *(int *)(unaff_RSI + 0x24);
      lVar8 = lVar8 + 1;
    } while (bVar1);
  }
  plVar10 = local_78;
  local_b8 = local_78;
  local_b0 = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    local_a8 = plVar10;
    local_a0 = '\0';
    FUN_00d240d0();
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_004b0f34:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar8 = *param_2;
  if ((char)param_2[1] == '\0') {
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return unaff_RDI;
}




// ============================================================
// @004b1320 — 1906 bytes
// ============================================================

undefined8 FUN_004b1320(longlong *param_1,int param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  longlong **pplVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong lVar9;
  longlong unaff_RDI;
  uint uVar10;
  longlong *plVar11;
  char local_res8;
  char local_res10;
  longlong local_150;
  undefined1 local_148;
  longlong local_140;
  undefined1 local_138;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong *local_70;
  char local_68 [8];
  longlong local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38 [8];
  
  local_128 = *unaff_RSI;
  if (local_128 == 0) {
    return 0;
  }
  if (*(int *)(local_128 + 0xc) == 0) {
    return 0;
  }
  local_98 = (longlong *)CONCAT44(local_98._4_4_,param_4);
  local_120 = '\0';
  local_150 = *param_1;
  local_148 = 0;
  local_140 = *param_3;
  local_138 = 0;
  local_40 = param_1;
  FUN_004b0830(&local_150,&local_128,local_res8,local_res10);
  plVar11 = (longlong *)*unaff_RSI;
  if (plVar11 == local_70) {
    if (((char)unaff_RSI[1] == '\0') && (local_70 != (longlong *)0x0)) {
      if (local_68[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_004b1460;
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = unaff_RSI[1];
    if (local_68[0] == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_70;
      if (((char)lVar4 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = (longlong)local_70;
      if (((char)lVar4 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_004b1460:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  pcVar6 = local_38;
  if (local_68[0] != '\0') {
    pcVar6 = local_68;
  }
  local_38[0] = local_68[0];
  *pcVar6 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_118 = *param_3;
  local_110 = '\0';
  pplVar7 = &local_90;
  (**(code **)(*local_70 + 0x98))();
  plVar11 = local_90;
  FUN_00053ac0();
  if (plVar11 == (longlong *)0x0) {
LAB_004b1519:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004b1519;
  }
  plVar11 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if (plVar11 == (longlong *)0x0) goto LAB_004b1a88;
  FUN_00d46530();
  local_48 = local_70;
  if ((((local_68[0] == '\0') && (local_70 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*unaff_RSI != 0) {
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = *unaff_RSI;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar8 = -local_58._4_4_;
        }
        else {
          iVar8 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar8);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar8 = 0;
        }
        local_58 = CONCAT44(iVar8,(int)local_58);
      }
      lVar4 = (longlong)(int)local_58;
      iVar8 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar8);
      if (*(int *)(local_60 + 0xc) <= iVar8) break;
      local_70 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + lVar4 * 8);
      local_108 = local_48;
      local_100 = '\0';
      local_f8 = *param_3;
      local_f0 = '\0';
      (**(code **)(*local_70 + 0x90))(*(longlong *)(local_60 + 0x10),&local_f8);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00083b20();
  }
  if (param_2 != 0) {
    local_e0 = '\0';
    local_e8 = plVar11;
    cVar3 = (**(code **)(*local_48 + 0x50))();
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d46530();
      if (plVar11 != local_70) {
        plVar11 = local_70;
        if (local_68[0] != '\0') {
          FUN_00d50b20();
          goto LAB_004b178d;
        }
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_004b178d:
  if ((((local_res10 != '\0') || ((char)local_98 != '\0')) && (iVar8 = FUN_00d45870(), iVar8 != 0))
     && ((local_res8 == '\0' && (lVar4 = *local_40, lVar4 != 0)))) {
    local_68[0] = '\0';
    local_50 = 0;
    local_58 = 0;
    local_98 = param_3;
    local_60 = lVar4;
    local_40 = plVar11;
    if (0 < *(int *)(lVar4 + 0xc)) {
      uVar10 = 0;
      do {
        plVar11 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar10 * 8);
        local_d0 = '\0';
        local_d8 = plVar11;
        cVar3 = FUN_00d23d70();
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          iVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0x18);
          iVar5 = iVar8 + 3;
          if (-1 < iVar8) {
            iVar5 = iVar8;
          }
          if (3 < iVar8) {
            iVar5 = iVar5 >> 2;
            lVar9 = 0;
            do {
              if (*(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10) + lVar9 * 4) ==
                  uVar10) goto LAB_004b180c;
              lVar9 = lVar9 + 1;
            } while (iVar5 != (int)lVar9);
          }
          local_c8 = *local_98;
          local_c0 = '\0';
          (**(code **)(*plVar11 + 0x98))(iVar5,&local_c8);
          plVar1 = local_90;
          FUN_00053ac0();
          pplVar7 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar7 = &local_90;
            if (cVar3 == '\0') {
              pplVar7 = (longlong **)&DAT_02802688;
            }
          }
          plVar1 = *pplVar7;
          if (*(char *)(pplVar7 + 1) == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar7 + 1) = 0;
          }
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            iVar8 = FUN_00d45870();
            iVar5 = FUN_00d45870();
            bVar2 = 1 < iVar5;
            if (iVar8 < 2) {
              bVar2 = iVar8 == iVar5;
            }
            if (bVar2) {
              local_b8 = local_40;
              local_b0 = '\0';
              local_a8 = *local_98;
              local_a0 = '\0';
              (**(code **)(*plVar11 + 0x90))(iVar8 == iVar5,&local_a8);
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
        }
LAB_004b180c:
        uVar10 = uVar10 + 1;
        local_58 = CONCAT44(local_58._4_4_,uVar10);
      } while ((int)uVar10 < *(int *)(lVar4 + 0xc));
    }
    FUN_00083b20();
    plVar11 = local_40;
  }
  if ((param_2 == 0) && (*(int *)(*unaff_RSI + 0xc) < 2)) {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      *(undefined8 *)(unaff_RDI + 0x18) = 0;
      FUN_00d50b20();
    }
    *(undefined8 *)(unaff_RDI + 0x20) = 0xffffffffffffffff;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_004b1a88:
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 0;
}




// ============================================================
// @004aeab0 — 1880 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x004af17e) */
/* WARNING: Removing unreachable block (ram,0x004af18a) */
/* WARNING: Removing unreachable block (ram,0x004af1f1) */
/* WARNING: Removing unreachable block (ram,0x004af1fe) */
/* WARNING: Removing unreachable block (ram,0x004aef3e) */
/* WARNING: Removing unreachable block (ram,0x004aef4a) */
/* WARNING: Removing unreachable block (ram,0x004aeebb) */
/* WARNING: Removing unreachable block (ram,0x004aeec4) */
/* WARNING: Removing unreachable block (ram,0x004aecfa) */
/* WARNING: Removing unreachable block (ram,0x004aecff) */
/* WARNING: Removing unreachable block (ram,0x004aec9f) */
/* WARNING: Removing unreachable block (ram,0x004aeca8) */
/* WARNING: Removing unreachable block (ram,0x004aec4d) */
/* WARNING: Removing unreachable block (ram,0x004aec56) */
/* WARNING: Removing unreachable block (ram,0x004aebc5) */
/* WARNING: Removing unreachable block (ram,0x004aebce) */
/* WARNING: Removing unreachable block (ram,0x004aec2c) */
/* WARNING: Removing unreachable block (ram,0x004aec31) */
/* WARNING: Removing unreachable block (ram,0x004aed1e) */
/* WARNING: Removing unreachable block (ram,0x004aed27) */
/* WARNING: Removing unreachable block (ram,0x004aed52) */
/* WARNING: Removing unreachable block (ram,0x004aef1a) */
/* WARNING: Removing unreachable block (ram,0x004aef23) */
/* WARNING: Removing unreachable block (ram,0x004aef82) */
/* WARNING: Removing unreachable block (ram,0x004aef87) */
/* WARNING: Removing unreachable block (ram,0x004af02e) */
/* WARNING: Removing unreachable block (ram,0x004af037) */
/* WARNING: Removing unreachable block (ram,0x004af0d5) */
/* WARNING: Removing unreachable block (ram,0x004af195) */
/* WARNING: Removing unreachable block (ram,0x004af19e) */
/* WARNING: Removing unreachable block (ram,0x004af092) */
/* WARNING: Removing unreachable block (ram,0x004aefbd) */
/* WARNING: Removing unreachable block (ram,0x004aec00) */
/* WARNING: Removing unreachable block (ram,0x004aec09) */
/* WARNING: Removing unreachable block (ram,0x004af069) */
/* WARNING: Removing unreachable block (ram,0x004af072) */
/* WARNING: Removing unreachable block (ram,0x004af0f3) */
/* WARNING: Removing unreachable block (ram,0x004af0fc) */

bool FUN_004aeab0(undefined8 param_1,char param_2,undefined8 param_3,RSA *param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  RSA *pRVar8;
  uchar *from;
  RSA *pRVar9;
  longlong unaff_RDI;
  int iVar10;
  uint in_stack_ffffffffffffff18;
  undefined8 *local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x80);
  if ((lVar1 != 0) && (param_2 != '\0')) {
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    FUN_00e97840();
    lVar4 = DAT_027092b8;
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
      lVar4 = DAT_027092b8;
    }
    DAT_027092b8 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    FUN_00e97870();
    local_40 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
      local_40 = DAT_027092c0;
      in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffff00;
      if (DAT_027092c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if (((char)in_stack_ffffffffffffff18 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00e97f30();
    if (local_40 != 0) {
      FUN_00d50b00();
      FUN_00d8cbf0();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00170e00();
      pRVar9 = (RSA *)0x0;
      pRVar8 = (RSA *)_PEM_read_bio_RSA_PUBKEY(0,0);
      _BIO_free((BIO *)pRVar9);
      if (pRVar8 == (RSA *)0x0) {
LAB_004aeea1:
        local_58 = (undefined8 *)0x0;
      }
      else {
        iVar5 = _RSA_size(pRVar9);
        local_58 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        pRVar9 = (RSA *)&DAT_025683c0;
        *local_58 = &DAT_025683c0;
        (*DAT_025683d8)();
        FUN_00c92170();
        _RSA_size(pRVar9);
        from = (uchar *)FUN_00e83010();
        if (0 < *(int *)(local_40 + 0x18)) {
          iVar10 = *(int *)(local_40 + 0x18);
          do {
            _RSA_size(pRVar9);
            ___bzero();
            iVar3 = iVar5 + -0xb;
            if (iVar10 < iVar5 + -0xb) {
              iVar3 = iVar10;
            }
            pRVar9 = pRVar8;
            iVar6 = _RSA_public_encrypt((int)pRVar8,from,(uchar *)((longlong)&MACH_HEADER.magic + 1)
                                        ,param_4,in_stack_ffffffffffffff18);
            if (iVar6 == -1) {
              FUN_00e83070();
              _RSA_free(pRVar9);
              if (local_58 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              goto LAB_004aeea1;
            }
            FUN_00c92190();
            iVar6 = iVar10 - iVar3;
            bVar2 = iVar3 <= iVar10;
            iVar10 = iVar6;
          } while (iVar6 != 0 && bVar2);
        }
        FUN_00e83070();
        _RSA_free(pRVar9);
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_027092c8;
      if (local_58 != (undefined8 *)0x0) {
        if (DAT_027092c8 != 0) {
          FUN_00d50b00();
        }
        local_40 = lVar4;
        FUN_00ca0840();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00e978a0();
    if (local_40 != 0) {
      FUN_00e978a0();
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027092d0;
      local_40 = DAT_027092d0;
      if (DAT_027092d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ca91d0();
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    FUN_00d93320();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    lVar4 = DAT_026fceb8;
    if (DAT_026fceb8 != 0) {
      FUN_00d50b00();
    }
    FUN_01ca93d0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return lVar1 != 0;
}




// ============================================================
// @004afe20 — 1763 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x004b00e2) */
/* WARNING: Removing unreachable block (ram,0x004b014c) */
/* WARNING: Removing unreachable block (ram,0x004b0151) */
/* WARNING: Removing unreachable block (ram,0x004b0159) */
/* WARNING: Removing unreachable block (ram,0x004b0170) */
/* WARNING: Removing unreachable block (ram,0x004b015e) */
/* WARNING: Removing unreachable block (ram,0x004b00e8) */
/* WARNING: Removing unreachable block (ram,0x004b016b) */
/* WARNING: Removing unreachable block (ram,0x004b00ed) */

undefined8 FUN_004afe20(longlong *param_1,longlong *param_2,char param_3,uint param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  longlong **pplVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong lVar9;
  longlong unaff_RDI;
  uint uVar10;
  char local_res8;
  longlong local_130;
  undefined1 local_128;
  longlong local_120;
  undefined1 local_118;
  longlong *local_110;
  longlong *local_108;
  char local_100;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  uint local_7c;
  longlong *local_78;
  longlong *local_68;
  char local_60 [8];
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38 [8];
  
  local_f0 = *unaff_RSI;
  if (local_f0 == 0) {
    return 0;
  }
  if (*(int *)(local_f0 + 0xc) == 0) {
    return 0;
  }
  local_e8 = '\0';
  local_130 = *param_2;
  local_128 = 0;
  local_120 = *param_1;
  local_118 = 0;
  local_110 = param_2;
  local_7c = param_4;
  FUN_004b0830(&local_130,&local_f0,param_4 & 0xff,local_res8);
  plVar1 = (longlong *)*unaff_RSI;
  local_78 = param_1;
  if (plVar1 == local_68) {
    if (((char)unaff_RSI[1] == '\0') && (local_68 != (longlong *)0x0)) {
      if (local_60[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_004aff56;
    }
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = unaff_RSI[1];
    if (local_60[0] == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_68;
      if (((char)lVar4 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = (longlong)local_68;
      if (((char)lVar4 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_004aff56:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    param_1 = local_78;
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  pcVar6 = local_38;
  if (local_60[0] != '\0') {
    pcVar6 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar6 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_e0 = *param_1;
  local_d8 = '\0';
  pplVar7 = &local_108;
  (**(code **)(*local_68 + 0x98))();
  plVar1 = local_108;
  FUN_00053ac0();
  if (plVar1 == (longlong *)0x0) {
LAB_004b0012:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004b0012;
  }
  plVar2 = local_78;
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  FUN_00d45ad0();
  FUN_00d46300();
  if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = plVar1;
  if (local_res8 == '\0') {
    lVar9 = *unaff_RSI;
    lVar4 = local_58;
    goto joined_r0x004b0119;
  }
  FUN_00d46300();
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d46300();
  if (plVar1 == local_68) {
joined_r0x004b01b7:
    if ((local_60[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_60[0] == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      local_40 = local_68;
      goto joined_r0x004b01b7;
    }
    local_40 = local_68;
    FUN_00d50b20();
  }
  param_3 = '\x01';
  lVar9 = *unaff_RSI;
  lVar4 = local_58;
joined_r0x004b0119:
  local_58 = lVar9;
  if (local_58 != 0) {
    local_60[0] = '\0';
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar8 = -local_50._4_4_;
        }
        else {
          iVar8 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar8);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar8 = 0;
        }
        local_50 = CONCAT44(iVar8,(int)local_50);
      }
      lVar4 = (longlong)(int)local_50;
      iVar8 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar8);
      if (*(int *)(local_58 + 0xc) <= iVar8) break;
      local_d0 = local_68;
      local_c8 = '\0';
      local_c0 = *plVar2;
      local_b8 = '\0';
      (**(code **)(**(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar4 * 8) + 0x90))
                (*(longlong *)(local_58 + 0x10),&local_c0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00083b20();
    lVar4 = local_58;
  }
  local_58 = lVar4;
  if ((((param_3 != '\0') && (cVar3 = FUN_00d45ad0(), cVar3 != '\0')) && ((char)local_7c == '\0'))
     && (lVar4 = *local_110, lVar4 != 0)) {
    local_60[0] = '\0';
    local_48 = 0;
    local_50 = 0;
    local_58 = lVar4;
    if (0 < *(int *)(lVar4 + 0xc)) {
      uVar10 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar10 * 8);
        local_a8 = '\0';
        local_b0 = plVar1;
        cVar3 = FUN_00d23d70();
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          iVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0x18);
          iVar5 = iVar8 + 3;
          if (-1 < iVar8) {
            iVar5 = iVar8;
          }
          if (3 < iVar8) {
            iVar5 = iVar5 >> 2;
            lVar9 = 0;
            do {
              if (*(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10) + lVar9 * 4) ==
                  uVar10) goto LAB_004b0380;
              lVar9 = lVar9 + 1;
            } while (iVar5 != (int)lVar9);
          }
          local_a0 = local_40;
          local_98 = '\0';
          local_90 = *local_78;
          local_88 = '\0';
          (**(code **)(*plVar1 + 0x90))(iVar5,&local_90);
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_004b0380:
        uVar10 = uVar10 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar10);
      } while ((int)uVar10 < *(int *)(lVar4 + 0xc));
    }
    FUN_00083b20();
  }
  cVar3 = FUN_00d45ad0();
  if ((cVar3 == '\0') && (*(int *)(*unaff_RSI + 0xc) < 2)) {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      *(undefined8 *)(unaff_RDI + 0x18) = 0;
      FUN_00d50b20();
    }
    *(undefined8 *)(unaff_RDI + 0x20) = 0xffffffffffffffff;
  }
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 0;
}




// ============================================================
// @004ac670 — 1501 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ac670(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  undefined8 uVar5;
  double dVar6;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong **)(unaff_RDI + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x920))();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_00292400();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x920))();
    local_100 = DAT_02708f20;
    if (DAT_02708f20 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_f8 = '\x01';
    FUN_01d5e6e0(uVar5,&local_100);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027296a0;
    if (lVar1 != 0) {
      if (DAT_027296a0 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_026de5c0;
      local_f0 = lVar2;
      local_e8 = '\x01';
      if (DAT_026de5c0 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar1;
      local_d8 = '\x01';
      local_d0 = 0;
      local_c8 = '\0';
      FUN_00d31230(&local_d0,&local_e0);
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_01d64eb0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = DAT_02708e90;
    if (DAT_02708e90 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar4 = (ulonglong)(dVar6 * DAT_023907c0);
    dVar6 = dVar6 * DAT_023907c0 - _DAT_023907c8;
    uVar5 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar5 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar5 = FUN_00d50b20();
    }
    bVar3 = (byte)(((longlong)dVar6 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
    local_50 = lVar1;
    local_48 = '\0';
    FUN_000175c0(uVar5,&local_50);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_38 = '\0';
      local_40 = lVar2;
      bVar3 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((lVar2 != 0 & bVar3) != 0) {
      uVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x920))();
      local_c0 = DAT_026de5e8;
      if (DAT_026de5e8 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_b8 = '\x01';
      FUN_01d5e6e0(uVar5,&local_c0);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027296a0;
      if (lVar1 != 0) {
        if (DAT_027296a0 != 0) {
          FUN_00d50b00();
        }
        lVar1 = DAT_02708eb0;
        local_b0 = lVar2;
        local_a8 = '\x01';
        if (DAT_02708eb0 != 0) {
          FUN_00d50b00();
        }
        local_a0 = lVar1;
        local_98 = '\x01';
        local_90 = 0;
        local_88 = '\0';
        FUN_00d31230(&local_90,&local_a0);
        local_60 = local_40;
        local_58 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_58 = '\x01';
        FUN_01d64eb0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @004ac180 — 737 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x004ac2f5) */
/* WARNING: Removing unreachable block (ram,0x004ac2fe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ac180(undefined8 param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong unaff_RDI;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_004aa180();
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar2 + 0x27) = 0;
  plVar2[0x2e] = 0;
  *(undefined4 *)(plVar2 + 0x2f) = 0;
  plVar2[0x30] = 0;
  *(undefined1 *)(plVar2 + 0x31) = 0;
  plVar2[0x28] = 0;
  plVar2[0x29] = 0;
  *(undefined4 *)(plVar2 + 0x2a) = 0;
  plVar2[0x2b] = 0;
  plVar2[0x2c] = 0;
  *(undefined8 *)((longlong)plVar2 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar2 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar2 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar2 + 0x199) = 0;
  plVar2[0x3c] = 0;
  plVar2[0x3d] = 0;
  *(undefined2 *)(plVar2 + 0x3e) = 0;
  plVar2[0x35] = 0;
  plVar2[0x36] = 0;
  plVar2[0x37] = 0;
  plVar2[0x38] = 0;
  plVar2[0x39] = 0;
  plVar2[0x3a] = 0;
  *(undefined4 *)(plVar2 + 0x3b) = 0;
  *plVar2 = (longlong)&DAT_024c6e90;
  plVar2[2] = (longlong)&DAT_024c7960;
  plVar2[0x3f] = 0;
  (*DAT_024c6ea8)();
  auVar5._0_8_ = FUN_01e3f820();
  auVar5._8_8_ = extraout_XMM0_Qb;
  auVar4._4_12_ = auVar5._4_12_;
  auVar4._0_4_ = (float)auVar5._0_8_ + param_2 + DAT_02390d00 + _DAT_023b45d0;
  auVar5 = blendps(auVar4,_DAT_023b45e0,0xe);
  (**(code **)(*plVar2 + 0x4d0))(auVar5._0_8_,_DAT_023b45f0);
  (**(code **)(*plVar2 + 0x558))();
  FUN_01e3b6a0();
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x450))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x570))();
  FUN_01e534b0();
  FUN_00d50b00();
  local_70 = DAT_02703fe0;
  if (DAT_02703fe0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026fce70;
  local_68 = '\x01';
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf690(&local_60,&local_70,&local_50);
  lVar1 = *(longlong *)(unaff_RDI + 0x78);
  lVar3 = lVar1;
  if (lVar1 == local_40) goto LAB_004ac3e7;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar3 = 0;
      goto LAB_004ac3a5;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x78);
    *(longlong *)(unaff_RDI + 0x78) = local_40;
    lVar3 = local_40;
  }
  else {
    local_38 = '\0';
    lVar3 = local_40;
LAB_004ac3a5:
    *(longlong *)(unaff_RDI + 0x78) = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_40;
  }
LAB_004ac3e7:
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @004addb0 — 735 bytes
// str: ""handleClose""
// str: ""copyErrorDeatils""
// str: ""MDErrorController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004addb0(void)

{
  int iVar1;
  
  if (DAT_028096a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270df70 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027092f0 = FUN_00015ff0();
          _DAT_027092d8 = "MDErrorController";
          _DAT_027092e0 = 0xa0;
          _DAT_027092e8 = FUN_004af9d0;
          _DAT_027092f8 = 0;
          uRam0000000002709300 = 0;
          _DAT_02709308 = 0;
          _DAT_02709380 = 0;
          uRam0000000002709388 = 0;
          _DAT_02709390 = 0;
          DAT_02709392 = 2;
          _DAT_02709310 = 0;
          uRam0000000002709318 = 0;
          _DAT_02709320 = 0;
          uRam0000000002709328 = 0;
          _DAT_02709330 = 0;
          uRam0000000002709338 = 0;
          _DAT_02709340 = 0;
          uRam0000000002709348 = 0;
          _DAT_02709350 = 0;
          uRam0000000002709358 = 0;
          _DAT_02709360 = 0;
          uRam0000000002709368 = 0;
          _DAT_02709370 = 0;
          uRam0000000002709378 = 0;
          DAT_0270939b = 0;
          _DAT_02709393 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809668 = "handleClose";
      _DAT_02809670 = &DAT_027092d8;
      _DAT_02809678 = 0;
      _DAT_02809680 = &DAT_027093a0;
      _DAT_02809688 = FUN_004afa20;
      _DAT_02809690 = 0x5c1;
      _DAT_02809698 = 0;
      uRam00000000028096a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028096f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270df70 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027092f0 = FUN_00015ff0();
          _DAT_027092d8 = "MDErrorController";
          _DAT_027092e0 = 0xa0;
          _DAT_027092e8 = FUN_004af9d0;
          _DAT_027092f8 = 0;
          uRam0000000002709300 = 0;
          _DAT_02709308 = 0;
          _DAT_02709380 = 0;
          uRam0000000002709388 = 0;
          _DAT_02709390 = 0;
          DAT_02709392 = 2;
          _DAT_02709310 = 0;
          uRam0000000002709318 = 0;
          _DAT_02709320 = 0;
          uRam0000000002709328 = 0;
          _DAT_02709330 = 0;
          uRam0000000002709338 = 0;
          _DAT_02709340 = 0;
          uRam0000000002709348 = 0;
          _DAT_02709350 = 0;
          uRam0000000002709358 = 0;
          _DAT_02709360 = 0;
          uRam0000000002709368 = 0;
          _DAT_02709370 = 0;
          uRam0000000002709378 = 0;
          DAT_0270939b = 0;
          _DAT_02709393 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028096b0 = "copyErrorDeatils";
      _DAT_028096b8 = &DAT_027092d8;
      _DAT_028096c0 = 0;
      _DAT_028096c8 = &DAT_027093a0;
      _DAT_028096d0 = FUN_004afa20;
      _DAT_028096d8 = 0x5c9;
      _DAT_028096e0 = 0;
      uRam00000000028096e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @004ae680 — 536 bytes
// ============================================================

void FUN_004ae680(undefined8 param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01e534b0();
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x640))();
    (**(code **)(*local_88 + 0x370))();
    FUN_01d44a40(param_1,1);
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_01e12b60();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01e125e0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((*(longlong *)(unaff_RDI + 0x88) != 0) &&
     (lVar1 = *(longlong *)(unaff_RDI + 0x78), lVar1 != 0)) {
    local_50 = 0;
    FUN_00d50b00();
    local_50 = '\x01';
    local_58 = lVar1;
    FUN_01e57260(param_1,&local_58);
    lVar1 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01e125e0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x80) == 0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x478))();
  }
  return;
}



