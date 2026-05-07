// Reconstructed implementation of GNPullDownButton
// From MikeCore binary — reverse-engineered pseudocode

#include "GNPullDownButton.h"

// ============================================================
// @007f6970 — 1790 bytes
// ============================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_007f6970(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong *in_RDX;
  longlong unaff_RDI;
  longlong *plVar12;
  longlong *plVar13;
  longlong **pplVar14;
  bool bVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong local_a8;
  char local_a0;
  longlong *local_68;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  if (*in_RDX == 0) {
    return;
  }
  FUN_01e53c20();
  plVar6 = local_48;
  if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = (longlong *)0x0;
  iVar10 = FUN_01d3a5a0();
  if (iVar10 == 1) {
    local_38 = (longlong *)0x0;
    iVar10 = FUN_01d3b630();
    bVar15 = iVar10 == 1;
    plVar1 = *(longlong **)(unaff_RDI + 0x70);
  }
  else {
    bVar15 = false;
    plVar1 = *(longlong **)(unaff_RDI + 0x70);
  }
  if (plVar1 == (longlong *)0x0) {
LAB_007f6a7c:
    bVar4 = false;
    local_38 = (longlong *)0x0;
  }
  else {
    local_38 = (longlong *)0x0;
    iVar10 = (**(code **)(*plVar1 + 0x920))();
    if (iVar10 == 0) {
      bVar4 = false;
      local_38 = (longlong *)0x0;
      lVar5 = *(longlong *)(unaff_RDI + 0x70);
    }
    else {
      plVar1 = *(longlong **)(unaff_RDI + 0x70);
      if (plVar1 == (longlong *)0x0) goto LAB_007f6a7c;
      local_38 = (longlong *)0x0;
      FUN_00d50b00();
      bVar4 = true;
      lVar5 = *(longlong *)(unaff_RDI + 0x70);
      local_38 = plVar1;
    }
    if (lVar5 != 0) {
      iVar11 = (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x920))();
      if (iVar11 != 0) {
        plVar1 = *(longlong **)(unaff_RDI + 0x78);
        if (plVar1 == local_38) {
          if ((iVar10 == 0) && (plVar1 != (longlong *)0x0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (iVar10 == 0 || local_38 == (longlong *)0x0) {
            bVar4 = true;
            local_38 = plVar1;
          }
          else {
            local_38 = plVar1;
            FUN_00d50b20();
            bVar4 = true;
          }
        }
      }
    }
  }
  FUN_01e561b0();
  FUN_01d8c6e0();
  plVar1 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != (longlong *)0x0) {
    FUN_01e3f820();
    uVar18 = FUN_01e46ed0();
    FUN_01e3f820();
    uVar19 = FUN_01e46ed0();
    param_2 = (float)((ulonglong)uVar18 >> 0x20) - (float)((ulonglong)uVar19 >> 0x20);
    FUN_01e5bd60((float)uVar18 - (float)uVar19,param_2);
  }
  FUN_01e5d9c0();
  FUN_01e5d070();
  local_68 = (longlong *)0x0;
  bVar2 = false;
  plVar12 = (longlong *)0x0;
  bVar3 = false;
  while( true ) {
    FUN_01e42030();
    plVar13 = local_48;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 == (longlong *)0x0) break;
    FUN_01d3abf0();
    uVar16 = FUN_01e466c0();
    fVar17 = (float)FUN_01e3f820();
    cVar8 = FUN_00d05410(uVar16,fVar17,param_2);
    if (cVar8 == '\0') {
      param_2 = fVar17;
      if (plVar12 != (longlong *)0x0) {
        if (bVar3) {
          FUN_00d50b20();
        }
        bVar3 = false;
        param_2 = fVar17;
      }
      plVar12 = (longlong *)0x0;
      if (local_68 != (longlong *)0x0) goto LAB_007f6dd4;
    }
    else {
      (**(code **)(*plVar6 + 0x490))(uVar16);
      plVar13 = local_48;
      FUN_000f5df0();
      pplVar14 = (longlong **)&DAT_02802688;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar9 = FUN_00e85ea0();
        pplVar14 = &local_48;
        if (cVar9 == '\0') {
          pplVar14 = (longlong **)&DAT_02802688;
        }
      }
      plVar13 = *pplVar14;
      if (plVar12 == plVar13) {
        param_2 = fVar17;
        if ((!bVar3) && (plVar12 != (longlong *)0x0)) {
          plVar13 = plVar12;
          if (*(char *)(pplVar14 + 1) != '\0') goto LAB_007f6d2e;
          FUN_00d50b00();
          goto joined_r0x007f6db4;
        }
      }
      else {
        if (*(char *)(pplVar14 + 1) == '\0') {
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((bVar3) && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_007f6d2e:
          *(undefined1 *)(pplVar14 + 1) = 0;
        }
joined_r0x007f6db4:
        bVar3 = true;
        plVar12 = plVar13;
        param_2 = fVar17;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 != local_68) {
LAB_007f6dd4:
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x918))();
        }
        if ((bVar3) && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_68 = plVar12;
        bVar2 = bVar3;
        if (plVar12 == (longlong *)0x0) {
          if (local_38 != (longlong *)0x0) goto LAB_007f6e4f;
          local_68 = (longlong *)0x0;
        }
        else {
          (**(code **)(*plVar12 + 0x918))();
          if (local_38 != (longlong *)0x0) {
LAB_007f6e4f:
            plVar13 = local_38;
            (**(code **)(*local_38 + 0x918))();
            if (plVar13 != plVar12) {
              bVar15 = true;
            }
          }
        }
      }
    }
    (**(code **)(*plVar6 + 0x658))();
    plVar7 = local_48;
    plVar13 = (longlong *)*in_RDX;
    if (plVar13 == local_48) {
      if (((char)in_RDX[1] != '\0') || (local_48 == (longlong *)0x0)) goto LAB_007f6f23;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_007f6f1b;
      }
LAB_007f6ed1:
      *(undefined1 *)(in_RDX + 1) = 1;
    }
    else {
      lVar5 = in_RDX[1];
      if (local_40 != '\0') {
        *in_RDX = (longlong)local_48;
        if (((char)lVar5 != '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_007f6ed1;
      }
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *in_RDX = (longlong)plVar7;
      if (((char)lVar5 != '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_007f6f1b:
      *(undefined1 *)(in_RDX + 1) = 1;
LAB_007f6f23:
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((*in_RDX == 0) ||
        (((bVar15 && (iVar10 = FUN_01d3a5a0(), iVar10 == 6)) && (cVar8 == '\x01')))) ||
       (iVar10 = FUN_01d3a5a0(), iVar10 == 1)) break;
  }
  if (local_68 != (longlong *)0x0) {
    FUN_01d11e80();
  }
  FUN_01d7c320();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @001e7990 — 1256 bytes
// str: ""GNPullDownButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e7990(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000fabd0();
  *unaff_RDI = &DAT_02687f80;
  unaff_RDI[2] = &DAT_02688a68;
  unaff_RDI[0x39] = &DAT_02688aa8;
  FUN_001e7f20();
  *(undefined1 *)(unaff_RDI + 0x45) = 0;
  if (DAT_026f08a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f07f8 = FUN_000f5df0();
      _DAT_026f07e0 = "GNPullDownButton";
      _DAT_026f07e8 = 600;
      _DAT_026f07f0 = FUN_001e7840;
      _DAT_026f0800 = 0;
      uRam00000000026f0808 = 0;
      _DAT_026f0810 = 0;
      uRam00000000026f0818 = 0;
      _DAT_026f0820 = 0;
      uRam00000000026f0828 = 0;
      _DAT_026f0830 = 0;
      uRam00000000026f0838 = 0;
      _DAT_026f0840 = 0;
      uRam00000000026f0848 = 0;
      _DAT_026f0850 = 0;
      uRam00000000026f0858 = 0;
      _DAT_026f0860 = 0;
      uRam00000000026f0868 = 0;
      _DAT_026f0870 = 0;
      uRam00000000026f0878 = 0;
      _DAT_026f0880 = 0;
      uRam00000000026f0888 = 0;
      _DAT_026f0890 = 0;
      _uRam00000000026f0898 = 0;
      _DAT_026f08a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f089b == '\0') {
    FUN_001e8210();
    FUN_00e87980();
  }
  FUN_001e8380();
  *(undefined1 *)(unaff_RDI + 0x47) = 0;
  if (DAT_026f08a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f07f8 = FUN_000f5df0();
      _DAT_026f07e0 = "GNPullDownButton";
      _DAT_026f07e8 = 600;
      _DAT_026f07f0 = FUN_001e7840;
      _DAT_026f0800 = 0;
      uRam00000000026f0808 = 0;
      _DAT_026f0810 = 0;
      uRam00000000026f0818 = 0;
      _DAT_026f0820 = 0;
      uRam00000000026f0828 = 0;
      _DAT_026f0830 = 0;
      uRam00000000026f0838 = 0;
      _DAT_026f0840 = 0;
      uRam00000000026f0848 = 0;
      _DAT_026f0850 = 0;
      uRam00000000026f0858 = 0;
      _DAT_026f0860 = 0;
      uRam00000000026f0868 = 0;
      _DAT_026f0870 = 0;
      uRam00000000026f0878 = 0;
      _DAT_026f0880 = 0;
      uRam00000000026f0888 = 0;
      _DAT_026f0890 = 0;
      _uRam00000000026f0898 = 0;
      _DAT_026f08a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f089b == '\0') {
    FUN_001e8670();
    FUN_00e87980();
  }
  FUN_001e87e0();
  *(undefined1 *)(unaff_RDI + 0x49) = 0;
  if (DAT_026f08a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f07f8 = FUN_000f5df0();
      _DAT_026f07e0 = "GNPullDownButton";
      _DAT_026f07e8 = 600;
      _DAT_026f07f0 = FUN_001e7840;
      _DAT_026f0800 = 0;
      uRam00000000026f0808 = 0;
      _DAT_026f0810 = 0;
      uRam00000000026f0818 = 0;
      _DAT_026f0820 = 0;
      uRam00000000026f0828 = 0;
      _DAT_026f0830 = 0;
      uRam00000000026f0838 = 0;
      _DAT_026f0840 = 0;
      uRam00000000026f0848 = 0;
      _DAT_026f0850 = 0;
      uRam00000000026f0858 = 0;
      _DAT_026f0860 = 0;
      uRam00000000026f0868 = 0;
      _DAT_026f0870 = 0;
      uRam00000000026f0878 = 0;
      _DAT_026f0880 = 0;
      uRam00000000026f0888 = 0;
      _DAT_026f0890 = 0;
      _uRam00000000026f0898 = 0;
      _DAT_026f08a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f089b == '\0') {
    FUN_001e8ad0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24c) = 0;
  if (DAT_026f08a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f07f8 = FUN_000f5df0();
      _DAT_026f07e0 = "GNPullDownButton";
      _DAT_026f07e8 = 600;
      _DAT_026f07f0 = FUN_001e7840;
      _DAT_026f0800 = 0;
      uRam00000000026f0808 = 0;
      _DAT_026f0810 = 0;
      uRam00000000026f0818 = 0;
      _DAT_026f0820 = 0;
      uRam00000000026f0828 = 0;
      _DAT_026f0830 = 0;
      uRam00000000026f0838 = 0;
      _DAT_026f0840 = 0;
      uRam00000000026f0848 = 0;
      _DAT_026f0850 = 0;
      uRam00000000026f0858 = 0;
      _DAT_026f0860 = 0;
      uRam00000000026f0868 = 0;
      _DAT_026f0870 = 0;
      uRam00000000026f0878 = 0;
      _DAT_026f0880 = 0;
      uRam00000000026f0888 = 0;
      _DAT_026f0890 = 0;
      _uRam00000000026f0898 = 0;
      _DAT_026f08a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f089b == '\0') {
    FUN_001e8c40();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x4a) = 0;
  if (DAT_026f08a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f07f8 = FUN_000f5df0();
      _DAT_026f07e0 = "GNPullDownButton";
      _DAT_026f07e8 = 600;
      _DAT_026f07f0 = FUN_001e7840;
      _DAT_026f0800 = 0;
      uRam00000000026f0808 = 0;
      _DAT_026f0810 = 0;
      uRam00000000026f0818 = 0;
      _DAT_026f0820 = 0;
      uRam00000000026f0828 = 0;
      _DAT_026f0830 = 0;
      uRam00000000026f0838 = 0;
      _DAT_026f0840 = 0;
      uRam00000000026f0848 = 0;
      _DAT_026f0850 = 0;
      uRam00000000026f0858 = 0;
      _DAT_026f0860 = 0;
      uRam00000000026f0868 = 0;
      _DAT_026f0870 = 0;
      uRam00000000026f0878 = 0;
      _DAT_026f0880 = 0;
      uRam00000000026f0888 = 0;
      _DAT_026f0890 = 0;
      _uRam00000000026f0898 = 0;
      _DAT_026f08a0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f089b == '\0') {
    FUN_001e8db0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @001871b0 — 766 bytes
// str: ""GNPullDownButton""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x001873d5) */
/* WARNING: Removing unreachable block (ram,0x001873c7) */
/* WARNING: Removing unreachable block (ram,0x001873e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001871b0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_2b8;
  longlong local_2a8;
  longlong local_298;
  
  if ((DAT_026f08a8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026f07f8 = FUN_000f5df0();
    _DAT_026f07e0 = "GNPullDownButton";
    _DAT_026f07e8 = 600;
    _DAT_026f07f0 = FUN_001e7840;
    _DAT_026f0800 = 0;
    uRam00000000026f0808 = 0;
    _DAT_026f0810 = 0;
    uRam00000000026f0818 = 0;
    _DAT_026f0820 = 0;
    uRam00000000026f0828 = 0;
    _DAT_026f0830 = 0;
    uRam00000000026f0838 = 0;
    _DAT_026f0840 = 0;
    uRam00000000026f0848 = 0;
    _DAT_026f0850 = 0;
    uRam00000000026f0858 = 0;
    _DAT_026f0860 = 0;
    uRam00000000026f0868 = 0;
    _DAT_026f0870 = 0;
    uRam00000000026f0878 = 0;
    _DAT_026f0880 = 0;
    uRam00000000026f0888 = 0;
    _DAT_026f0890 = 0;
    _uRam00000000026f0898 = 0;
    _DAT_026f08a0 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026f089b == '\0') {
    FUN_000f5b20();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001e7990();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01d76930();
    FUN_00e87920(uVar2,0);
    FUN_01d76ae0();
    if (local_298 != 0) {
      FUN_00d50b20();
    }
    if (local_2a8 != 0) {
      FUN_00d50b20();
    }
    if (local_2b8 != 0) {
      FUN_00d50b20();
    }
    FUN_000fba40();
    FUN_000fba40();
  }
  return;
}




// ============================================================
// @007f6250 — 643 bytes
// str: ""GNPullDownButton""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x007f629f) */
/* WARNING: Removing unreachable block (ram,0x007f62a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007f6250(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar6 = FUN_007f4cf0();
  (**(code **)(&UNK_000015a8 + *local_48))(uVar6,param_2);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if ((char)param_2 != '\0') {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar5 = unaff_RDI;
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_48 == plVar5) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_007f6347;
        }
      }
      else {
        plVar5 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_007f6347:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026f08a8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_026f07f8 = FUN_000f5df0();
        _DAT_026f07e0 = "GNPullDownButton";
        _DAT_026f07e8 = 600;
        _DAT_026f07f0 = FUN_001e7840;
        _DAT_026f0800 = 0;
        uRam00000000026f0808 = 0;
        _DAT_026f0810 = 0;
        uRam00000000026f0818 = 0;
        _DAT_026f0820 = 0;
        uRam00000000026f0828 = 0;
        _DAT_026f0830 = 0;
        uRam00000000026f0838 = 0;
        _DAT_026f0840 = 0;
        uRam00000000026f0848 = 0;
        _DAT_026f0850 = 0;
        uRam00000000026f0858 = 0;
        _DAT_026f0860 = 0;
        uRam00000000026f0868 = 0;
        _DAT_026f0870 = 0;
        uRam00000000026f0878 = 0;
        _DAT_026f0880 = 0;
        uRam00000000026f0888 = 0;
        _DAT_026f0890 = 0;
        uRam00000000026f0898 = 0;
        _DAT_026f08a0 = 0;
        ___cxa_guard_release();
      }
      plVar4 = &DAT_02802688;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (longlong *)&stack0xffffffffffffffa8;
        if (cVar1 == '\0') {
          plVar4 = &DAT_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if (unaff_RDI == (longlong *)0x0) goto LAB_007f64b5;
        goto LAB_007f64b0;
      }
    } while (plVar5 != (longlong *)0x0);
    plVar5 = (longlong *)0x0;
    if (unaff_RDI != (longlong *)0x0) {
LAB_007f64b0:
      FUN_00d50b20();
    }
LAB_007f64b5:
    FUN_01d7c320();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}




// ============================================================
// @007f5ec0 — 643 bytes
// str: ""GNPullDownButton""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x007f5f0f) */
/* WARNING: Removing unreachable block (ram,0x007f5f18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007f5ec0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar6 = FUN_007f4cf0();
  (**(code **)(&UNK_00001590 + *local_48))(uVar6,param_2);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if ((char)param_2 != '\0') {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar5 = unaff_RDI;
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_48 == plVar5) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_007f5fb7;
        }
      }
      else {
        plVar5 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_007f5fb7:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026f08a8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_026f07f8 = FUN_000f5df0();
        _DAT_026f07e0 = "GNPullDownButton";
        _DAT_026f07e8 = 600;
        _DAT_026f07f0 = FUN_001e7840;
        _DAT_026f0800 = 0;
        uRam00000000026f0808 = 0;
        _DAT_026f0810 = 0;
        uRam00000000026f0818 = 0;
        _DAT_026f0820 = 0;
        uRam00000000026f0828 = 0;
        _DAT_026f0830 = 0;
        uRam00000000026f0838 = 0;
        _DAT_026f0840 = 0;
        uRam00000000026f0848 = 0;
        _DAT_026f0850 = 0;
        uRam00000000026f0858 = 0;
        _DAT_026f0860 = 0;
        uRam00000000026f0868 = 0;
        _DAT_026f0870 = 0;
        uRam00000000026f0878 = 0;
        _DAT_026f0880 = 0;
        uRam00000000026f0888 = 0;
        _DAT_026f0890 = 0;
        uRam00000000026f0898 = 0;
        _DAT_026f08a0 = 0;
        ___cxa_guard_release();
      }
      plVar4 = &DAT_02802688;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (longlong *)&stack0xffffffffffffffa8;
        if (cVar1 == '\0') {
          plVar4 = &DAT_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if (unaff_RDI == (longlong *)0x0) goto LAB_007f6125;
        goto LAB_007f6120;
      }
    } while (plVar5 != (longlong *)0x0);
    plVar5 = (longlong *)0x0;
    if (unaff_RDI != (longlong *)0x0) {
LAB_007f6120:
      FUN_00d50b20();
    }
LAB_007f6125:
    FUN_01d7c320();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}




// ============================================================
// @007f65e0 — 643 bytes
// str: ""GNPullDownButton""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x007f6635) */
/* WARNING: Removing unreachable block (ram,0x007f663e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007f65e0(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    uVar6 = FUN_007f4cf0();
    (**(code **)("/System/Library/Frameworks/AppKit.framework/Versions/C/AppKit" + *local_48 + 0x18)
    )(uVar6,1);
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar5 = unaff_RDI;
    do {
      (**(code **)(*plVar5 + 0x370))();
      if (local_48 == plVar5) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_007f66d7;
        }
      }
      else {
        plVar5 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar3 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar3 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_007f66d7:
          local_38[0] = '\x01';
          pcVar3 = local_40;
        }
        *pcVar3 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026f08a8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_026f07f8 = FUN_000f5df0();
        _DAT_026f07e0 = "GNPullDownButton";
        _DAT_026f07e8 = 600;
        _DAT_026f07f0 = FUN_001e7840;
        _DAT_026f0800 = 0;
        uRam00000000026f0808 = 0;
        _DAT_026f0810 = 0;
        uRam00000000026f0818 = 0;
        _DAT_026f0820 = 0;
        uRam00000000026f0828 = 0;
        _DAT_026f0830 = 0;
        uRam00000000026f0838 = 0;
        _DAT_026f0840 = 0;
        uRam00000000026f0848 = 0;
        _DAT_026f0850 = 0;
        uRam00000000026f0858 = 0;
        _DAT_026f0860 = 0;
        uRam00000000026f0868 = 0;
        _DAT_026f0870 = 0;
        uRam00000000026f0878 = 0;
        _DAT_026f0880 = 0;
        uRam00000000026f0888 = 0;
        _DAT_026f0890 = 0;
        uRam00000000026f0898 = 0;
        _DAT_026f08a0 = 0;
        ___cxa_guard_release();
      }
      plVar4 = &DAT_02802688;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x360))();
        cVar1 = FUN_00e85ea0();
        plVar4 = (longlong *)&stack0xffffffffffffffa8;
        if (cVar1 == '\0') {
          plVar4 = &DAT_02802688;
        }
      }
      if (*plVar4 != 0) {
        if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if (unaff_RDI == (longlong *)0x0) goto LAB_007f6845;
        goto LAB_007f6840;
      }
    } while (plVar5 != (longlong *)0x0);
    plVar5 = (longlong *)0x0;
    if (unaff_RDI != (longlong *)0x0) {
LAB_007f6840:
      FUN_00d50b20();
    }
LAB_007f6845:
    FUN_01d7c320();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return 1;
}




// ============================================================
// @00501c20 — 514 bytes
// str: ""GNPullDownButton""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00501d2c) */
/* WARNING: Removing unreachable block (ram,0x00501d35) */
/* WARNING: Removing unreachable block (ram,0x00501d40) */
/* WARNING: Removing unreachable block (ram,0x00501d49) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00501c20(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *unaff_RDI;
  longlong **pplVar5;
  longlong *local_40;
  char local_38;
  
  if (param_2 == 0) {
LAB_00501d63:
    uVar4 = 1;
  }
  else {
    FUN_0197b900();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00501c81;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_00501c81:
      pplVar5 = &local_40;
      (**(code **)(*unaff_RDI + 0x950))();
      plVar1 = local_40;
      if ((DAT_026f08a8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_026f07f8 = FUN_000f5df0();
        _DAT_026f07e0 = "GNPullDownButton";
        _DAT_026f07e8 = 600;
        _DAT_026f07f0 = FUN_001e7840;
        _DAT_026f0800 = 0;
        uRam00000000026f0808 = 0;
        _DAT_026f0810 = 0;
        uRam00000000026f0818 = 0;
        _DAT_026f0820 = 0;
        uRam00000000026f0828 = 0;
        _DAT_026f0830 = 0;
        uRam00000000026f0838 = 0;
        _DAT_026f0840 = 0;
        uRam00000000026f0848 = 0;
        _DAT_026f0850 = 0;
        uRam00000000026f0858 = 0;
        _DAT_026f0860 = 0;
        uRam00000000026f0868 = 0;
        _DAT_026f0870 = 0;
        uRam00000000026f0878 = 0;
        _DAT_026f0880 = 0;
        uRam00000000026f0888 = 0;
        _DAT_026f0890 = 0;
        uRam00000000026f0898 = 0;
        _DAT_026f08a0 = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (longlong *)0x0) {
LAB_00501cca:
        pplVar5 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_00501cca;
      }
      plVar1 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar5 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_007f4c40();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar1 != (longlong *)0x0) goto LAB_00501d63;
    }
    uVar4 = 0;
  }
  return uVar4;
}




// ============================================================
// @00501f20 — 505 bytes
// ============================================================

ulonglong FUN_00501f20(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  ulonglong uVar6;
  longlong *local_40;
  char local_38;
  
  if (param_2 == 0) {
    pplVar5 = &local_40;
    FUN_01d98320();
    plVar1 = local_40;
    FUN_00275460();
    if (plVar1 == (longlong *)0x0) {
LAB_00501f7a:
      pplVar5 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00501f7a;
    }
    plVar1 = *pplVar5;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) goto LAB_00501fa1;
    FUN_01caeae0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_005020f4;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_005020f4:
      FUN_01d66ab0();
      FUN_00d50b20();
    }
  }
  else {
LAB_00501fa1:
    pplVar5 = &local_40;
    FUN_01d98320();
    plVar1 = local_40;
    FUN_00275460();
    if (plVar1 == (longlong *)0x0) {
LAB_00501fdc:
      pplVar5 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00501fdc;
    }
    plVar2 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      if ((char)param_2 == '\0') {
        FUN_01caeae0();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_005020a6;
          }
        }
        else if (local_40 != (longlong *)0x0) {
LAB_005020a6:
          FUN_01b18580();
          FUN_01d66ab0();
          FUN_00d50b20();
        }
      }
      else {
        iVar4 = FUN_01b18580();
        FUN_00502230(param_1,iVar4 != 1);
      }
      uVar6 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      FUN_00d50b20();
      goto LAB_00502108;
    }
  }
  uVar6 = 0;
LAB_00502108:
  return uVar6 & 0xffffffff;
}



