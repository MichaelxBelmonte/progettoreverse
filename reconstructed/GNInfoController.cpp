// Reconstructed implementation of GNInfoController
// From MikeCore binary — reverse-engineered pseudocode

#include "GNInfoController.h"

// ============================================================
// @01f46240 — 2025 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f46373) */
/* WARNING: Removing unreachable block (ram,0x01f4637c) */

undefined8 * FUN_01f46240(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_90 = param_2;
  FUN_00d30620();
  if (local_40 == (longlong *)0x0) {
    bVar5 = false;
  }
  else {
    FUN_00d30620();
    FUN_00d305f0();
    bVar5 = local_50 != 0;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = local_40;
  if (bVar5) {
    FUN_00d30620();
    FUN_00d305f0();
    local_80 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_80 = '\x01';
    local_88 = local_50;
    (**(code **)(*unaff_RSI + 0x618))(param_1,&local_88);
    if (local_40 == (longlong *)0x0) {
      bVar4 = 1;
      plVar3 = (longlong *)0x0;
      bVar5 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = 0;
      bVar5 = true;
    }
    else {
      local_38 = '\0';
      bVar5 = true;
      bVar4 = 0;
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x3a0))();
    if (cVar1 == '\0') goto LAB_01f464de;
    local_c0 = *local_90;
    local_b8 = '\0';
    (**(code **)(*plVar3 + 0x400))(param_1,&local_c0);
    if (local_40 == plVar3) {
      bVar6 = bVar5;
      if ((bool)(bVar4 & local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_01f46441;
        FUN_00d50b00();
        bVar6 = true;
      }
LAB_01f4648d:
      bVar5 = bVar6;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar6 = true;
        plVar3 = local_40;
        if (bVar5) {
          FUN_00d50b20();
        }
        goto LAB_01f4648d;
      }
      plVar3 = local_40;
      if (bVar5) {
        FUN_00d50b20();
      }
LAB_01f46441:
      local_38 = '\0';
      bVar5 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x398))();
    if (cVar1 == '\0') goto LAB_01f464de;
LAB_01f4695d:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar5) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    bVar5 = false;
    plVar3 = (longlong *)0x0;
LAB_01f464de:
    FUN_00d30660();
    FUN_00d305f0();
    local_70 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_70 = '\x01';
    local_78 = local_50;
    (**(code **)(*unaff_RSI + 0x618))(param_1,&local_78);
    if (local_40 == plVar3) {
      bVar6 = bVar5;
      if ((!bVar5) && (local_40 != (longlong *)0x0)) {
        plVar2 = plVar3;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01f465a4;
        }
        goto LAB_01f46573;
      }
joined_r0x01f465b3:
      plVar2 = plVar3;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar6 = true;
        if ((bVar5) && (plVar3 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar3 = local_40;
LAB_01f465a4:
          bVar6 = true;
          goto joined_r0x01f465b3;
        }
      }
      else {
        if ((bVar5) && (plVar3 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f46573:
        local_38 = '\0';
        bVar6 = true;
      }
    }
    plVar3 = plVar2;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x3a0))();
    if (cVar1 != '\0') {
      local_b0 = *local_90;
      local_a8 = '\0';
      (**(code **)(*plVar3 + 0x400))(param_1,&local_b0);
      if (local_40 == plVar3) {
        if ((!bVar6) && (local_40 != (longlong *)0x0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01f466f3;
          }
          goto LAB_01f46720;
        }
joined_r0x01f469d5:
        bVar5 = bVar6;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (bVar6) {
          FUN_00d50b20();
          plVar3 = local_40;
LAB_01f466f3:
          bVar6 = true;
          goto joined_r0x01f469d5;
        }
        plVar3 = local_40;
        bVar5 = true;
      }
      else {
        plVar3 = local_40;
        if (bVar6) {
          FUN_00d50b20();
        }
LAB_01f46720:
        local_38 = '\0';
        bVar5 = true;
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      cVar1 = (**(code **)(*plVar3 + 0x398))();
      bVar6 = bVar5;
      if (cVar1 != '\0') goto LAB_01f4695d;
    }
    (**(code **)(*unaff_RSI + 0x610))();
    if (local_40 == plVar3) {
      bVar5 = bVar6;
      if ((bVar6) || (local_40 == (longlong *)0x0)) {
joined_r0x01f468c9:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar5 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01f467da;
        }
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar5 = true;
      plVar3 = local_40;
      if (bVar6) {
        FUN_00d50b20();
LAB_01f467da:
        bVar5 = true;
        goto joined_r0x01f468c9;
      }
    }
    else {
      bVar5 = true;
      plVar3 = local_40;
      if (bVar6) {
        FUN_00d50b20();
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x3a0))();
    if (cVar1 != '\0') {
      local_a0 = *local_90;
      local_98 = '\0';
      (**(code **)(*plVar3 + 0x400))(param_1,&local_a0);
      if (local_40 == plVar3) {
        if ((!bVar5) && (local_40 != (longlong *)0x0)) {
          if (local_38 != '\0') goto LAB_01f4692b;
          bVar5 = true;
          FUN_00d50b00();
        }
LAB_01f468d7:
        bVar6 = local_38 == '\0';
joined_r0x01f46a0e:
        if ((!bVar6) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (bVar5) {
            FUN_00d50b20();
            bVar5 = true;
            plVar3 = local_40;
            goto LAB_01f468d7;
          }
          bVar5 = true;
          bVar6 = true;
          plVar3 = local_40;
          goto joined_r0x01f46a0e;
        }
        plVar3 = local_40;
        if (bVar5) {
          FUN_00d50b20();
        }
LAB_01f4692b:
        bVar5 = true;
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      cVar1 = (**(code **)(*plVar3 + 0x398))();
      if (cVar1 != '\0') goto LAB_01f4695d;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}




// ============================================================
// @006559b0 — 856 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00655c2b) */
/* WARNING: Removing unreachable block (ram,0x00655c34) */
/* WARNING: Removing unreachable block (ram,0x00655bf8) */
/* WARNING: Removing unreachable block (ram,0x00655c01) */
/* WARNING: Removing unreachable block (ram,0x00655aeb) */
/* WARNING: Removing unreachable block (ram,0x00655b02) */
/* WARNING: Removing unreachable block (ram,0x00655b07) */
/* WARNING: Removing unreachable block (ram,0x00655b0f) */
/* WARNING: Removing unreachable block (ram,0x00655b19) */
/* WARNING: Removing unreachable block (ram,0x00655c08) */
/* WARNING: Removing unreachable block (ram,0x00655b33) */
/* WARNING: Removing unreachable block (ram,0x00655b40) */
/* WARNING: Removing unreachable block (ram,0x00655b52) */
/* WARNING: Removing unreachable block (ram,0x00655b5f) */
/* WARNING: Removing unreachable block (ram,0x00655c0e) */
/* WARNING: Removing unreachable block (ram,0x00655cd8) */
/* WARNING: Removing unreachable block (ram,0x00655ce1) */
/* WARNING: Removing unreachable block (ram,0x00655bc5) */
/* WARNING: Removing unreachable block (ram,0x00655bce) */
/* WARNING: Removing unreachable block (ram,0x00655a78) */
/* WARNING: Removing unreachable block (ram,0x00655a81) */
/* WARNING: Removing unreachable block (ram,0x00655a02) */
/* WARNING: Removing unreachable block (ram,0x00655a0b) */
/* WARNING: Removing unreachable block (ram,0x00655b85) */
/* WARNING: Removing unreachable block (ram,0x00655b92) */
/* WARNING: Removing unreachable block (ram,0x00655cb0) */
/* WARNING: Removing unreachable block (ram,0x00655cb9) */

void FUN_006559b0(undefined8 param_1)

{
  bool bVar1;
  longlong *unaff_RDI;
  longlong lVar2;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x5e0))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_0063f230();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_00655c86;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_00655c86;
  FUN_0021c9b0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00752180();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00655aa4;
    }
  }
  else {
LAB_00655aa4:
    if ((local_40 == 0) || (local_40 == 0)) {
LAB_00655c5e:
      if (local_40 == 0) goto LAB_00655c6f;
    }
    else {
      FUN_00d3ecf0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00108380();
      if (local_40 == 0) {
        bVar1 = false;
        lVar2 = 0;
      }
      else {
        bVar1 = true;
        lVar2 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_00108e20(param_1,0);
      if (lVar2 == 0) goto LAB_00655c5e;
      FUN_00637870();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_00655cbe;
        }
      }
      else if (local_40 != 0) {
LAB_00655cbe:
        FUN_006e32e0();
        FUN_00d50b20();
      }
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
LAB_00655c6f:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00655c86:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01f44ac0 — 820 bytes
// ============================================================

undefined4 FUN_01f44ac0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *unaff_RSI;
  longlong local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
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
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  cVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x478))();
  uVar6 = 2;
  if (cVar5 != '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 0x468))();
    plVar4 = local_50;
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02725a70;
    if (plVar4 == (longlong *)0x0) {
      if (DAT_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_028001b0;
      local_80 = lVar1;
      local_78 = '\x01';
      if (DAT_028001b0 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_01f6ca30();
      uVar6 = (**(code **)(*local_50 + 0x5e0))();
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(longlong *)*unaff_RSI + 0x468))();
      (**(code **)(*local_c0 + 0x388))();
      lVar1 = DAT_02800148;
      if (DAT_02800148 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar1;
      FUN_00083ea0(2,&local_d8);
      FUN_000b4da0();
      lVar3 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = '\0';
      }
      local_50 = (longlong *)&DAT_0253d630;
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02725a70;
      if (DAT_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_028001a8;
      local_b0 = lVar1;
      local_a8 = '\x01';
      if (DAT_028001a8 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar2;
      local_98 = '\x01';
      FUN_01f6ca30();
      local_90 = lVar3;
      local_88 = '\0';
      uVar6 = (**(code **)(*local_50 + 0x5d8))();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar6;
}




// ============================================================
// @01f44020 — 725 bytes
// ============================================================

void FUN_01f44020(void)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong lVar6;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  *(undefined1 *)(unaff_RDI + 0xd8) = 1;
  FUN_01f2fbe0();
  plVar5 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  for (iVar3 = *(int *)((longlong)plVar5 + 0xc); 0 < iVar3; iVar3 = iVar3 + -1) {
    FUN_01e5e340();
  }
  for (uVar4 = (ulonglong)*(uint *)(*(longlong *)(unaff_RDI + 0x38) + 0xc); 0 < (int)uVar4;
      uVar4 = uVar4 - 1) {
    (**(code **)(**(longlong **)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + -8 + uVar4 * 8) + 0x4f0)
    )();
  }
  FUN_01f2fbe0();
  plVar2 = local_40;
  if (plVar5 == local_40) {
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if (plVar5 == (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)plVar2 + 0xc);
      goto joined_r0x01f441c2;
    }
    FUN_00d50b20();
    plVar5 = plVar2;
  }
  else {
    if (plVar5 == (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)local_40 + 0xc);
      goto joined_r0x01f441c2;
    }
    FUN_00d50b20();
    plVar5 = plVar2;
  }
  uVar1 = *(uint *)((longlong)plVar5 + 0xc);
joined_r0x01f441c2:
  if (0 < (int)uVar1) {
    lVar6 = (ulonglong)uVar1 + 1;
    do {
      FUN_01e5c650();
      plVar5 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_01e5c650();
        (**(code **)(*local_40 + 0x5b0))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  FUN_00d403d0();
  lVar6 = DAT_02800198;
  if (DAT_02800198 != 0) {
    FUN_00d50b00();
  }
  local_48 = 0;
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  local_50 = unaff_RDI;
  FUN_00d40470(&local_60,&local_50,3,3);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d71400();
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    *(undefined8 *)(unaff_RDI + 0x28) = 0;
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00655410 — 644 bytes
// str: ""GNInfoController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00655410(undefined4 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong unaff_RDI;
  longlong *local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  lVar2 = DAT_02725a20;
  if (param_2 == 0) {
    return 1;
  }
  if (*(longlong *)(unaff_RDI + 0x80) == 0) {
    FUN_01f27fe0();
    (**(code **)(*local_70 + 0x5e0))();
    FUN_01f7e230();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_68 == '\0') {
      return 1;
    }
    if (local_70 == (longlong *)0x0) {
      return 1;
    }
    FUN_00d50b20();
    return 1;
  }
  if (DAT_02725a20 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_50 = 0;
  local_48 = '\0';
  pplVar5 = &local_30;
  FUN_01e51a60(param_1,&local_50);
  plVar1 = local_30;
  if ((DAT_0270fbd0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026eddd8 = FUN_00015ff0();
    _DAT_026eddc0 = "GNInfoController";
    _DAT_026eddc8 = 0xa8;
    _DAT_026eddd0 = FUN_001d1e30;
    _DAT_026edde0 = 0;
    uRam00000000026edde8 = 0;
    _DAT_026eddf0 = 0;
    uRam00000000026eddf8 = 0;
    _DAT_026ede00 = 0;
    uRam00000000026ede08 = 0;
    _DAT_026ede10 = 0;
    uRam00000000026ede18 = 0;
    _DAT_026ede20 = 0;
    uRam00000000026ede28 = 0;
    _DAT_026ede30 = 0;
    uRam00000000026ede38 = 0;
    _DAT_026ede40 = 0;
    uRam00000000026ede48 = 0;
    _DAT_026ede50 = 0;
    uRam00000000026ede58 = 0;
    _DAT_026ede60 = 0;
    uRam00000000026ede68 = 0;
    _DAT_026ede70 = 0;
    uRam00000000026ede78 = 0;
    _DAT_026ede80 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_006554af;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_006554af:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01e561b0();
    local_40 = local_30;
    local_38 = 0;
    if (local_28 == '\0') {
      if (local_30 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_38 = '\x01';
    FUN_01f7e1a0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @01f44640 — 640 bytes
// ============================================================

undefined4 FUN_01f44640(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *unaff_RSI;
  longlong local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x478))();
  uVar5 = 2;
  if (cVar4 != '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 0x468))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 == (longlong *)0x0) {
      uVar5 = 1;
    }
    else {
      (**(code **)(*(longlong *)*unaff_RSI + 0x468))();
      (**(code **)(*local_a0 + 0x388))();
      lVar1 = DAT_02800148;
      if (DAT_02800148 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar1;
      FUN_00083ea0(2,&local_b8);
      FUN_000b4da0();
      lVar3 = local_30;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          if ((local_28 != '\0') && (local_30 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_28 = '\0';
      }
      local_60 = (longlong *)&DAT_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &DAT_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02725a70;
      if (DAT_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_028001a0;
      local_90 = lVar1;
      local_88 = '\x01';
      if (DAT_028001a0 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar2;
      local_78 = '\x01';
      FUN_01f6ca30();
      local_70 = lVar3;
      local_68 = '\0';
      uVar5 = (**(code **)(*local_60 + 0x5d8))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar5;
}




// ============================================================
// @01f45960 — 612 bytes
// ============================================================

void FUN_01f45960(void)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar4 = DAT_028001c0;
  if (unaff_RDI[0xc] != 0) goto LAB_01f45b8a;
  if (DAT_028001c0 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar4;
  local_90 = '\x01';
  FUN_01e328d0();
  local_48 = local_58;
  local_40 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_40 = '\x01';
  (**(code **)(*unaff_RDI + 0x5f0))(&local_48,&local_98);
  lVar4 = local_38;
  if (local_38 == 0) {
    bVar2 = true;
    lVar4 = 0;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
      bVar2 = false;
      if ((local_30 == '\0') || (local_38 == 0)) goto LAB_01f45a35;
      FUN_00d50b20();
    }
    else {
      local_30 = '\0';
    }
    bVar2 = false;
  }
LAB_01f45a35:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_028001c0;
  if (!bVar2) {
    if (DAT_028001c0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar1;
    local_80 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    local_68 = 0;
    local_60 = '\0';
    FUN_01e4fcf0(&local_68,&local_78);
    lVar1 = unaff_RDI[0xc];
    lVar3 = lVar1;
    if (lVar1 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar3 = 0;
          goto LAB_01f45ae0;
        }
        FUN_00d50b00();
        lVar1 = unaff_RDI[0xc];
        unaff_RDI[0xc] = local_38;
        lVar3 = local_38;
      }
      else {
        local_30 = '\0';
        lVar3 = local_38;
LAB_01f45ae0:
        unaff_RDI[0xc] = lVar3;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar3 = local_38;
      }
    }
    if ((local_30 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar2 && lVar4 != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xc] == 0) {
    return;
  }
LAB_01f45b8a:
  FUN_01e56750();
  FUN_01e5d9c0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01f47190 — 604 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f47373) */
/* WARNING: Removing unreachable block (ram,0x01f4727a) */
/* WARNING: Removing unreachable block (ram,0x01f47283) */
/* WARNING: Removing unreachable block (ram,0x01f4720a) */
/* WARNING: Removing unreachable block (ram,0x01f47213) */
/* WARNING: Removing unreachable block (ram,0x01f4723e) */
/* WARNING: Removing unreachable block (ram,0x01f47247) */
/* WARNING: Removing unreachable block (ram,0x01f47330) */
/* WARNING: Removing unreachable block (ram,0x01f473d5) */
/* WARNING: Removing unreachable block (ram,0x01f473de) */

void FUN_01f47190(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_025736a8;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    (*DAT_025736c0)();
    puVar1 = *(undefined8 **)(unaff_RDI + 0xa8);
    if (puVar1 == puVar2) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0xa8) = puVar2;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_026ba058;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_00d500e0();
  FUN_01f6c7d0();
  FUN_01f6c800();
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x368))();
  FUN_00d21140();
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x378))();
  if ((*(longlong *)(unaff_RDI + 0xb0) == 0) && (FUN_00da5ad0(), *(char *)(puVar1 + 3) != '\0')) {
    FUN_01e1eb80((int)DAT_02422df0,0);
    puVar2 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar2 != puVar1) {
      if (puVar1 == (undefined8 *)0x0) {
        *(undefined8 *)(unaff_RDI + 0xb0) = 0;
      }
      else {
        FUN_00d50b00();
        puVar2 = *(undefined8 **)(unaff_RDI + 0xb0);
        *(undefined8 **)(unaff_RDI + 0xb0) = puVar1;
      }
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01f43950 — 557 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f43b48) */
/* WARNING: Removing unreachable block (ram,0x01f43ada) */
/* WARNING: Removing unreachable block (ram,0x01f43a9c) */
/* WARNING: Removing unreachable block (ram,0x01f43aa5) */
/* WARNING: Removing unreachable block (ram,0x01f43ad1) */
/* WARNING: Removing unreachable block (ram,0x01f43b34) */
/* WARNING: Removing unreachable block (ram,0x01f43b3d) */
/* WARNING: Removing unreachable block (ram,0x01f43b51) */
/* WARNING: Removing unreachable block (ram,0x01f4399c) */
/* WARNING: Removing unreachable block (ram,0x01f439a5) */
/* WARNING: Removing unreachable block (ram,0x01f439e1) */
/* WARNING: Removing unreachable block (ram,0x01f439ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f43950(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x478))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_01d64cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01f43b66;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_01f43b66;
  iVar1 = FUN_01d5b230();
  if (0 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_01f50d20();
    FUN_01f51370();
    FUN_01ede360(0,0,0);
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5ef60(_DAT_02422dc0,DAT_023dcce4);
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f43b66:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01f45680 — 555 bytes
// str: ""GNInfoController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f45680(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar7;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_02725a20;
  lVar6 = *(longlong *)(unaff_RSI + 0x58);
  if (lVar6 != 0) goto LAB_01f457d4;
  if (DAT_02725a20 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar3;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  local_40 = 0;
  local_38 = '\0';
  pplVar7 = &local_70;
  FUN_01e4fcf0(&local_40,&local_50);
  plVar2 = local_70;
  if ((DAT_0270fbd0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026eddd8 = FUN_00015ff0();
    _DAT_026eddc0 = "GNInfoController";
    _DAT_026eddc8 = 0xa8;
    _DAT_026eddd0 = FUN_001d1e30;
    _DAT_026edde0 = 0;
    uRam00000000026edde8 = 0;
    _DAT_026eddf0 = 0;
    uRam00000000026eddf8 = 0;
    _DAT_026ede00 = 0;
    uRam00000000026ede08 = 0;
    _DAT_026ede10 = 0;
    uRam00000000026ede18 = 0;
    _DAT_026ede20 = 0;
    uRam00000000026ede28 = 0;
    _DAT_026ede30 = 0;
    uRam00000000026ede38 = 0;
    _DAT_026ede40 = 0;
    uRam00000000026ede48 = 0;
    _DAT_026ede50 = 0;
    uRam00000000026ede58 = 0;
    _DAT_026ede60 = 0;
    uRam00000000026ede68 = 0;
    _DAT_026ede70 = 0;
    uRam00000000026ede78 = 0;
    _DAT_026ede80 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_01f45727:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01f45727;
  }
  plVar1 = *(longlong **)(unaff_RSI + 0x58);
  plVar2 = *pplVar7;
  if (plVar1 != plVar2) {
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar2 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RSI + 0x58) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RSI + 0x58);
        *(longlong **)(unaff_RSI + 0x58) = *pplVar7;
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
      *(longlong **)(unaff_RSI + 0x58) = plVar2;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *(longlong *)(unaff_RSI + 0x58);
LAB_01f457d4:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



