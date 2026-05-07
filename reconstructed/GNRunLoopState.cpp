// Reconstructed implementation of GNRunLoopState
// From MikeCore binary — reverse-engineered pseudocode

#include "GNRunLoopState.h"

// ============================================================
// @00e880e0 — 1213 bytes
// str: ""GNRunLoopState""
// str: ""ode.app/""
// str: ""/Applications/Xc?GNRunLoopWillDispatchEvent""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e880e0(void)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  ulonglong local_60;
  
  FUN_00003020();
  if ((DAT_027890f0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027890c0 = _DAT_0238fcc0;
    uRam00000000027890c8 = _UNK_0238fcc8;
    _DAT_027890d0 = _DAT_0238ff10;
    uRam00000000027890d8 = _UNK_0238ff18;
    _DAT_027890e0 = 0x900000008;
    _DAT_027890e8 = 10;
    DAT_027890ec = 1;
    ___cxa_guard_release();
  }
  if ((DAT_02789128 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027890f8 = "GNRunLoopState";
    _DAT_02789100 = 0xb;
    DAT_02789104 = DAT_027890ec;
    _DAT_02789108 = &DAT_027890c0;
    _DAT_02789110 = &DAT_02789060;
    _DAT_02789118 = (undefined1  [16])0x0;
    ___cxa_guard_release();
  }
  FUN_00d4ff60();
  FUN_00d50c00();
  uVar7 = 0;
  do {
    uVar2 = __dyld_image_count();
    if ((uVar2 <= uVar7) || ((DAT_02802648 != 0 && (DAT_02802638 != 0)))) {
      if ((DAT_02802638 == 0) ||
         (((DAT_02802648 == 0 || (DAT_02802668 == 0)) || (DAT_02802678 == 0)))) {
        FUN_00e82970();
      }
      if (DAT_02802658 == 0) {
        FUN_00e82970();
      }
      FUN_00d4ffb0();
      return;
    }
    lVar4 = __dyld_get_image_header();
    pauVar5 = (undefined1 (*) [16])__dyld_get_image_name();
    if (((*(longlong *)*pauVar5 != 0x2f6d65747379532f) &&
        ((*pauVar5)[4] != '/' || *(int *)*pauVar5 != 0x7273752f)) &&
       ((auVar12._8_8_ = 0, auVar12._0_8_ = *(ulonglong *)pauVar5[1],
        auVar12 != _s_ode_app__023e1760 ||
        *pauVar5 != s__Applications_Xc_GNRunLoopWillDi_023e1770._0_16_ &&
        (*(int *)(lVar4 + 0x10) != 0)))) {
      piVar10 = (int *)(lVar4 + 0x20);
      uVar2 = 0;
      do {
        if (((DAT_02802648 != 0) && (DAT_02802638 != 0)) && (DAT_02802678 != 0)) break;
        if (*piVar10 == 0x19) {
          lVar1 = *(longlong *)(piVar10 + 6);
          lVar6 = __dyld_get_image_vmaddr_slide();
          uVar9 = lVar6 + lVar1;
          if (((uVar9 <= local_60) && (local_60 < *(longlong *)(piVar10 + 8) + uVar9)) &&
             (piVar10[0x10] != 0)) {
            plVar8 = (longlong *)(piVar10 + 0x12);
            uVar11 = 0;
            do {
              if (*plVar8 == 0x74736e6f635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                DAT_02802648 = lVar6 + lVar1;
                DAT_02802650 = DAT_02802648 + plVar8[5] + -1;
                if (DAT_02802658 != 0) break;
              }
              if (*(int *)((longlong)plVar8 + 3) == 0x617461 && (int)*plVar8 == 0x61645f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                DAT_02802658 = lVar6 + lVar1;
                DAT_02802660 = DAT_02802658 + plVar8[5] + -1;
              }
              uVar11 = uVar11 + 1;
              plVar8 = plVar8 + 10;
            } while (uVar11 < (uint)piVar10[0x10]);
          }
          if (((uVar9 < 0xe880e1) && (FUN_00e880e0 < (code *)(uVar9 + *(longlong *)(piVar10 + 8))))
             && (piVar10[0x10] != 0)) {
            plVar8 = (longlong *)(piVar10 + 0x12);
            uVar9 = 0;
            do {
              if (*(int *)((longlong)plVar8 + 3) == 0x747865 && (int)*plVar8 == 0x65745f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                DAT_02802638 = lVar6 + lVar1;
                DAT_02802640 = DAT_02802638 + plVar8[5] + -1;
                if ((DAT_02802668 != 0) && (DAT_02802678 != 0)) break;
              }
              if ((short)plVar8[1] == 0x67 && *plVar8 == 0x6e69727473635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                DAT_02802668 = lVar6 + lVar1;
                DAT_02802670 = DAT_02802668 + plVar8[5] + -1;
                if ((DAT_02802638 != 0) && (DAT_02802678 != 0)) break;
              }
              if (*plVar8 == 0x74736e6f635f5f) {
                lVar1 = plVar8[4];
                lVar6 = __dyld_get_image_vmaddr_slide();
                DAT_02802678 = lVar6 + lVar1;
                DAT_02802680 = DAT_02802678 + plVar8[5] + -1;
                if ((DAT_02802638 != 0) && (DAT_02802668 != 0)) break;
              }
              uVar9 = uVar9 + 1;
              plVar8 = plVar8 + 10;
            } while (uVar9 < (uint)piVar10[0x10]);
          }
        }
        piVar10 = (int *)((longlong)piVar10 + (ulonglong)(uint)piVar10[1]);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(lVar4 + 0x10));
    }
    uVar7 = uVar7 + 1;
  } while( true );
}




// ============================================================
// @00e89400 — 786 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e8955a) */
/* WARNING: Removing unreachable block (ram,0x00e89563) */
/* WARNING: Removing unreachable block (ram,0x00e894b7) */
/* WARNING: Removing unreachable block (ram,0x00e894c0) */

undefined8 FUN_00e89400(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  do {
    lVar3 = FUN_00dac670();
    iVar2 = FUN_00dac670();
    iVar2 = iVar2 - (int)*(undefined8 *)(unaff_RDI + 0x18);
    iVar2 = (iVar2 + 7U & 0xfffffff8) - iVar2;
    if ((0 < iVar2) && (lVar4 = FUN_00dac6d0(), iVar2 + lVar3 < lVar4)) {
      FUN_00dac5e0();
    }
    FUN_00dabdf0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_00e89709;
      FUN_00d50b00();
    }
    else if (local_40 == 0) goto LAB_00e89709;
    lVar3 = FUN_00dac670();
    iVar2 = FUN_00dac670();
    iVar2 = iVar2 - (int)*(undefined8 *)(unaff_RDI + 0x18);
    iVar2 = (iVar2 + 7U & 0xfffffff8) - iVar2;
    if ((0 < iVar2) && (lVar4 = FUN_00dac6d0(), iVar2 + lVar3 < lVar4)) {
      FUN_00dac5e0();
    }
    cVar1 = FUN_00dab880();
    lVar3 = DAT_02789428;
    if (cVar1 == '\0') {
      if (DAT_02789428 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_02789450;
      if (DAT_02789450 != 0) {
        FUN_00d50b00();
      }
      FUN_00e972c0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      iVar2 = 1;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else if (local_48 == 0) {
      iVar2 = 3;
      if (*(int *)(*(longlong *)(unaff_RDI + 0x28) + 0xc) == 0) {
        if (DAT_02789428 != 0) {
          FUN_00d50b00();
        }
        lVar4 = DAT_02789458;
        if (DAT_02789458 != 0) {
          FUN_00d50b00();
        }
        FUN_00e972c0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        iVar2 = 1;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar5 = FUN_00dac670();
      local_38 = '\0';
      FUN_00d21140();
      lVar3 = *(longlong *)(unaff_RDI + 0x30);
      iVar2 = *(int *)(lVar3 + 0x18);
      FUN_00c8e340();
      *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2) = uVar5;
      lVar3 = *(longlong *)(unaff_RDI + 0x38);
      iVar2 = *(int *)(lVar3 + 0x18);
      FUN_00c8e340();
      *(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2) = local_48;
      iVar2 = 0;
      FUN_00dac5e0();
    }
    FUN_00d50b20();
  } while (iVar2 == 0);
  if (iVar2 == 1) {
    uVar5 = 0;
  }
  else {
LAB_00e89709:
    *(undefined1 *)(unaff_RDI + 0x40) = 1;
    uVar5 = 1;
  }
  return uVar5;
}




// ============================================================
// @00e88fc0 — 731 bytes
// ============================================================

undefined4 FUN_00e88fc0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong unaff_RDI;
  char local_27;
  char local_26;
  char local_25;
  char local_24;
  char local_23;
  char local_22;
  char local_21;
  
  cVar4 = FUN_00dac2f0(0,6);
  lVar2 = DAT_02789438;
  lVar1 = DAT_02789428;
  if (cVar4 == '\0') {
    if (DAT_02789428 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_02789430;
    if (DAT_02789430 != 0) {
      FUN_00d50b00();
    }
    FUN_00e972c0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else if ((((local_27 == 'G') && (local_26 == 'N')) && (local_25 == 'B')) &&
          (((local_24 == 'C' && (local_23 == 'F')) && (local_22 == 'A')))) {
    cVar4 = FUN_00dabce0();
    if (cVar4 != '\0') {
      *(int *)(unaff_RDI + 0x20) = (int)local_21;
      lVar1 = DAT_02789438;
      if (local_21 == 1) {
        uVar5 = FUN_00dabce0();
        if ((char)uVar5 == '\0') {
          return uVar5;
        }
        FUN_00daa990();
        return uVar5;
      }
      if (DAT_02789438 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02789448;
      if (DAT_02789448 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027d2068;
      if (DAT_027d2068 != 0) {
        FUN_00d50b00();
        FUN_00d50b00();
      }
      FUN_00e972c0();
      if (lVar3 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (DAT_02789438 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02789440;
    if (DAT_02789440 != 0) {
      FUN_00d50b00();
    }
    FUN_00e972c0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return 0;
}




// ============================================================
// @00e89df0 — 603 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e89f39) */
/* WARNING: Removing unreachable block (ram,0x00e89f42) */
/* WARNING: Removing unreachable block (ram,0x00e89e7a) */
/* WARNING: Removing unreachable block (ram,0x00e89e83) */
/* WARNING: Removing unreachable block (ram,0x00e89fdd) */
/* WARNING: Removing unreachable block (ram,0x00e89fe6) */
/* WARNING: Removing unreachable block (ram,0x00e89f25) */
/* WARNING: Removing unreachable block (ram,0x00e89f2e) */

void FUN_00e89df0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  lVar2 = FUN_00e89a30(param_3,param_1,param_4);
  if (lVar2 == -1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00dac760();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00e89e88;
    }
  }
  else if (local_40 != 0) {
LAB_00e89e88:
    FUN_00daa910();
    if (local_40 == 0) {
      local_40 = 0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    FUN_00d50b20();
    goto LAB_00e89f4f;
  }
  FUN_00dac790();
  (**(code **)(*local_80 + 0x370))();
  (**(code **)(*local_90 + 0x4d8))();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00daa940();
  if (local_40 == 0) {
    local_40 = 0;
    bVar1 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
  }
  else {
    bVar1 = true;
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00e89f4f:
  FUN_00dac5e0();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar1) && (local_40 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00e88a90 — 569 bytes
// ============================================================

void FUN_00e88a90(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
  local_98 = DAT_027c24d8;
  if (cVar4 == '\0') {
    if (DAT_027c24d8 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02789420;
    local_90 = '\x01';
    if (DAT_02789420 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_027c24e8;
    local_88 = lVar1;
    local_80 = '\x01';
    if (DAT_027c24e8 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar2;
    local_a0 = *unaff_RSI;
    FUN_00083ea0(2,&local_a0);
    FUN_00e972c0();
    local_78 = (undefined8 *)&DAT_0253d630;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &DAT_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
    local_38 = local_48;
    local_30 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_30 = '\x01';
    FUN_00daa940();
    puVar3 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != (undefined8 *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
         (local_78 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e88ea0();
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00e89a30 — 524 bytes
// ============================================================

undefined8 FUN_00e89a30(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  iVar3 = FUN_00e89860();
  local_50 = DAT_02789460;
  if (iVar3 == -1) {
    if (DAT_02789460 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02789468;
    local_48 = '\x01';
    if (DAT_02789468 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_02789470;
    local_40 = lVar1;
    local_38 = '\x01';
    if (DAT_02789470 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027d2068;
    if (DAT_027d2068 != 0) {
      FUN_00d50b00();
    }
    local_a8 = *unaff_RSI;
    local_a0 = lVar1;
    FUN_002bd7b0(&local_a0,&local_a8,4);
    local_98 = (undefined8 *)&DAT_02670890;
    local_58 = param_2;
    FUN_00e972c0();
    local_98 = (undefined8 *)&DAT_025df260;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (undefined8 *)&DAT_0253d630;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_98 = &DAT_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = 0xffffffffffffffff;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + (longlong)iVar3 * 8);
    }
    uVar4 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x30) + 0x10) + (longlong)iVar3 * 8);
    FUN_00dac5e0();
  }
  return uVar4;
}



