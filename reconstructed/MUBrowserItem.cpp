// Reconstructed implementation of MUBrowserItem
// From MikeCore binary — reverse-engineered pseudocode

#include "MUBrowserItem.h"

// ============================================================
// @01c18c70 — 1428 bytes
// str: ""MUBrowserItem""
// str: ""GNString""
// str: ""getTitle""
// str: ""getSortTitle""
// str: ""getObject""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c18c70(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_028b6360 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027043f0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02704340 = FUN_00d4fe50();
          _DAT_02704328 = "MUBrowserItem";
          _DAT_02704330 = 0x28;
          _DAT_02704338 = FUN_0038acc0;
          _DAT_02704348 = 0;
          uRam0000000002704350 = 0;
          _DAT_02704358 = 0;
          uRam0000000002704360 = 0;
          _DAT_02704368 = 0;
          uRam0000000002704370 = 0;
          _DAT_02704378 = 0;
          uRam0000000002704380 = 0;
          _DAT_02704388 = 0;
          uRam0000000002704390 = 0;
          _DAT_02704398 = 0;
          uRam00000000027043a0 = 0;
          _DAT_027043a8 = 0;
          uRam00000000027043b0 = 0;
          _DAT_027043b8 = 0;
          uRam00000000027043c0 = 0;
          _DAT_027043c8 = 0;
          uRam00000000027043d0 = 0;
          _DAT_027043d8 = 0;
          uRam00000000027043e0 = 0;
          _DAT_027043e8 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b6320 = "getTitle";
      _DAT_028b6328 = &DAT_02704328;
      _DAT_028b6330 = 0;
      _DAT_028b6338 = &DAT_027e9138;
      _DAT_028b6340 = FUN_01c19a90;
      _DAT_028b6348 = _DAT_023dc990;
      uRam00000000028b634c = _UNK_023dc994;
      uRam00000000028b6350 = _UNK_023dc998;
      uRam00000000028b6354 = _UNK_023dc99c;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b6358 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b63a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027043f0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02704340 = FUN_00d4fe50();
          _DAT_02704328 = "MUBrowserItem";
          _DAT_02704330 = 0x28;
          _DAT_02704338 = FUN_0038acc0;
          _DAT_02704348 = 0;
          uRam0000000002704350 = 0;
          _DAT_02704358 = 0;
          uRam0000000002704360 = 0;
          _DAT_02704368 = 0;
          uRam0000000002704370 = 0;
          _DAT_02704378 = 0;
          uRam0000000002704380 = 0;
          _DAT_02704388 = 0;
          uRam0000000002704390 = 0;
          _DAT_02704398 = 0;
          uRam00000000027043a0 = 0;
          _DAT_027043a8 = 0;
          uRam00000000027043b0 = 0;
          _DAT_027043b8 = 0;
          uRam00000000027043c0 = 0;
          _DAT_027043c8 = 0;
          uRam00000000027043d0 = 0;
          _DAT_027043d8 = 0;
          uRam00000000027043e0 = 0;
          _DAT_027043e8 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b6368 = "getSortTitle";
      _DAT_028b6370 = &DAT_02704328;
      _DAT_028b6378 = 0;
      _DAT_028b6380 = &DAT_027e9138;
      _DAT_028b6388 = FUN_01c19a90;
      _DAT_028b6390 = _DAT_023dc9d0;
      uRam00000000028b6394 = _UNK_023dc9d4;
      uRam00000000028b6398 = _UNK_023dc9d8;
      uRam00000000028b639c = _UNK_023dc9dc;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b63a0 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b63f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027043f0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02704340 = FUN_00d4fe50();
          _DAT_02704328 = "MUBrowserItem";
          _DAT_02704330 = 0x28;
          _DAT_02704338 = FUN_0038acc0;
          _DAT_02704348 = 0;
          uRam0000000002704350 = 0;
          _DAT_02704358 = 0;
          uRam0000000002704360 = 0;
          _DAT_02704368 = 0;
          uRam0000000002704370 = 0;
          _DAT_02704378 = 0;
          uRam0000000002704380 = 0;
          _DAT_02704388 = 0;
          uRam0000000002704390 = 0;
          _DAT_02704398 = 0;
          uRam00000000027043a0 = 0;
          _DAT_027043a8 = 0;
          uRam00000000027043b0 = 0;
          _DAT_027043b8 = 0;
          uRam00000000027043c0 = 0;
          _DAT_027043c8 = 0;
          uRam00000000027043d0 = 0;
          _DAT_027043d8 = 0;
          uRam00000000027043e0 = 0;
          _DAT_027043e8 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b63b0 = "getObject";
      _DAT_028b63b8 = &DAT_02704328;
      _DAT_028b63c0 = 0;
      _DAT_028b63c8 = &DAT_027e9140;
      _DAT_028b63d0 = FUN_01c19b30;
      _DAT_028b63d8 = _DAT_023dc9b0;
      uRam00000000028b63dc = _UNK_023dc9b4;
      uRam00000000028b63e0 = _UNK_023dc9b8;
      uRam00000000028b63e4 = _UNK_023dc9bc;
      puVar2 = (undefined8 *)FUN_00d4fe50();
      _DAT_028b63e8 = *puVar2;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01c1a5a0 — 756 bytes
// ============================================================

undefined8 FUN_01c1a5a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  uint uVar6;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong *local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  local_90 = param_2;
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) != 1)) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02578b00;
    (*DAT_02578b18)();
    FUN_00d7a0f0(1,0);
    lVar1 = *unaff_RSI;
    if (lVar1 != 0) {
      local_b0._0_1_ = '\0';
      local_98 = 0;
      local_a0 = 0;
      local_a8 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        uVar6 = 0;
        do {
          local_68 = *local_90;
          local_60 = '\0';
          (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar6 * 8) + 0x368))
                    ();
          lVar3 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_50 = '\0';
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            local_50 = '\0';
            local_58 = 0;
            local_48 = lVar3;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_40._4_4_ = 0;
            while( true ) {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar5 = -local_40._4_4_;
                }
                else {
                  iVar5 = (int)local_40 - local_40._4_4_;
                  local_40 = CONCAT44(local_40._4_4_,iVar5);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar5 = 0;
                }
                local_40 = CONCAT44(iVar5,(int)local_40);
              }
              lVar3 = (longlong)(int)local_40;
              iVar5 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar5);
              if (*(int *)(local_48 + 0xc) <= iVar5) break;
              local_88 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
              local_80 = '\0';
              local_58 = local_88;
              FUN_00d7a410();
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_0038d420();
            FUN_00d50b20();
          }
          uVar6 = uVar6 + 1;
          local_a0 = CONCAT44(local_a0._4_4_,uVar6);
        } while ((int)uVar6 < *(int *)(lVar1 + 0xc));
      }
      FUN_01c2d1e0();
    }
    FUN_01c1a9e0();
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d23310();
    plVar4 = &local_58;
    if ((char)local_b0 != '\0') {
      plVar4 = &local_b0;
    }
    local_58 = CONCAT71(local_58._1_7_,(char)local_b0);
    *(undefined1 *)plVar4 = 0;
    if (((char)local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = *local_90;
    local_70 = '\0';
    (**(code **)(*local_b8 + 0x368))();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_58 != '\0') {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}



