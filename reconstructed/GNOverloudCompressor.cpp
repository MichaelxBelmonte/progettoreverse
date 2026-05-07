// Reconstructed implementation of GNOverloudCompressor
// From MikeCore binary — reverse-engineered pseudocode

#include "GNOverloudCompressor.h"

// ============================================================
// @00c14e80 — 3294 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c15690) */
/* WARNING: Removing unreachable block (ram,0x00c15699) */
/* WARNING: Removing unreachable block (ram,0x00c15aae) */
/* WARNING: Removing unreachable block (ram,0x00c15ab7) */
/* WARNING: Removing unreachable block (ram,0x00c15a0e) */
/* WARNING: Removing unreachable block (ram,0x00c15a17) */
/* WARNING: Removing unreachable block (ram,0x00c1596e) */
/* WARNING: Removing unreachable block (ram,0x00c15977) */
/* WARNING: Removing unreachable block (ram,0x00c158ce) */
/* WARNING: Removing unreachable block (ram,0x00c158d7) */
/* WARNING: Removing unreachable block (ram,0x00c1582e) */
/* WARNING: Removing unreachable block (ram,0x00c15837) */
/* WARNING: Removing unreachable block (ram,0x00c1578e) */
/* WARNING: Removing unreachable block (ram,0x00c15797) */
/* WARNING: Removing unreachable block (ram,0x00c157de) */
/* WARNING: Removing unreachable block (ram,0x00c157e7) */
/* WARNING: Removing unreachable block (ram,0x00c1587e) */
/* WARNING: Removing unreachable block (ram,0x00c15887) */
/* WARNING: Removing unreachable block (ram,0x00c1591e) */
/* WARNING: Removing unreachable block (ram,0x00c15927) */
/* WARNING: Removing unreachable block (ram,0x00c159be) */
/* WARNING: Removing unreachable block (ram,0x00c159c7) */
/* WARNING: Removing unreachable block (ram,0x00c15a5e) */
/* WARNING: Removing unreachable block (ram,0x00c15a67) */
/* WARNING: Removing unreachable block (ram,0x00c15afe) */
/* WARNING: Removing unreachable block (ram,0x00c15b07) */
/* WARNING: Removing unreachable block (ram,0x00c15592) */
/* WARNING: Removing unreachable block (ram,0x00c1559b) */
/* WARNING: Removing unreachable block (ram,0x00c154a2) */
/* WARNING: Removing unreachable block (ram,0x00c154ab) */
/* WARNING: Removing unreachable block (ram,0x00c15402) */
/* WARNING: Removing unreachable block (ram,0x00c1540b) */
/* WARNING: Removing unreachable block (ram,0x00c15362) */
/* WARNING: Removing unreachable block (ram,0x00c1536b) */
/* WARNING: Removing unreachable block (ram,0x00c152c2) */
/* WARNING: Removing unreachable block (ram,0x00c152cb) */
/* WARNING: Removing unreachable block (ram,0x00c15222) */
/* WARNING: Removing unreachable block (ram,0x00c1522b) */
/* WARNING: Removing unreachable block (ram,0x00c15182) */
/* WARNING: Removing unreachable block (ram,0x00c1518b) */
/* WARNING: Removing unreachable block (ram,0x00c150e2) */
/* WARNING: Removing unreachable block (ram,0x00c150eb) */
/* WARNING: Removing unreachable block (ram,0x00c15132) */
/* WARNING: Removing unreachable block (ram,0x00c1513b) */
/* WARNING: Removing unreachable block (ram,0x00c151d2) */
/* WARNING: Removing unreachable block (ram,0x00c151db) */
/* WARNING: Removing unreachable block (ram,0x00c15312) */
/* WARNING: Removing unreachable block (ram,0x00c1531b) */
/* WARNING: Removing unreachable block (ram,0x00c153b2) */
/* WARNING: Removing unreachable block (ram,0x00c153bb) */
/* WARNING: Removing unreachable block (ram,0x00c15452) */
/* WARNING: Removing unreachable block (ram,0x00c1545b) */
/* WARNING: Removing unreachable block (ram,0x00c154f2) */
/* WARNING: Removing unreachable block (ram,0x00c154fb) */
/* WARNING: Removing unreachable block (ram,0x00c15640) */
/* WARNING: Removing unreachable block (ram,0x00c15649) */
/* WARNING: Removing unreachable block (ram,0x00c156e0) */
/* WARNING: Removing unreachable block (ram,0x00c156e9) */
/* WARNING: Removing unreachable block (ram,0x00c15272) */
/* WARNING: Removing unreachable block (ram,0x00c1527b) */
/* WARNING: Removing unreachable block (ram,0x00c15542) */
/* WARNING: Removing unreachable block (ram,0x00c1554b) */

void FUN_00c14e80(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  
  puVar4 = DAT_028a5dd0;
  puVar3 = DAT_028a5dc0;
  puVar5 = DAT_028a5db0;
  if (param_2 == 10) {
    if ((DAT_028a5dd0 == (undefined8 *)0x0) || (DAT_028a5dd9 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5dd0 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5dd0 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5dd0 != (undefined8 *)0x0;
          DAT_028a5dd0 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5dd8 == '\0') {
          DAT_028a5dd8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_027bed58;
        if (DAT_027bed58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c090;
        if (DAT_0276c090 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c098;
        if (DAT_0276c098 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5dd9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5dd9 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5dd0;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c15b44;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c15b46;
  }
  if (param_2 == 5) {
    if ((DAT_028a5dc0 == (undefined8 *)0x0) || (DAT_028a5dc9 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5dc0 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5dc0 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5dc0 != (undefined8 *)0x0;
          DAT_028a5dc0 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5dc8 == '\0') {
          DAT_028a5dc8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d48;
        if (DAT_026d7d48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c008;
        if (DAT_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c010;
        if (DAT_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c018;
        if (DAT_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c020;
        if (DAT_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d40;
        if (DAT_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c030;
        if (DAT_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c038;
        if (DAT_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c040;
        if (DAT_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c048;
        if (DAT_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c050;
        if (DAT_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d38;
        if (DAT_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5dc9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5dc9 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5dc0;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c15b44;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5db0 == (undefined8 *)0x0) || (DAT_028a5db9 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5db0 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5db0 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5db0 != (undefined8 *)0x0;
          DAT_028a5db0 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5db8 == '\0') {
          DAT_028a5db8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c008;
        if (DAT_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c010;
        if (DAT_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c018;
        if (DAT_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c020;
        if (DAT_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d40;
        if (DAT_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c030;
        if (DAT_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c038;
        if (DAT_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c040;
        if (DAT_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c048;
        if (DAT_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c050;
        if (DAT_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d38;
        if (DAT_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c060;
        if (DAT_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c068;
        if (DAT_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c070;
        if (DAT_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c078;
        if (DAT_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c080;
        if (DAT_0276c080 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5db9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5db9 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5db0;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) {
LAB_00c15b44:
        puVar5 = (undefined8 *)0x0;
        goto LAB_00c15b46;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c15b46:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00c16780 — 1440 bytes
// str: ""GNOverloudCompressor1176""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00c16780(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *unaff_RDI;
  longlong **pplVar7;
  longlong local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong *local_48;
  char local_40;
  char local_31;
  
  plVar6 = (longlong *)*param_1;
  if ((DAT_0276dde0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_0276dd30 = FUN_00b10020();
    _DAT_0276dd18 = "GNOverloudCompressor1176";
    _DAT_0276dd20 = 0xd8;
    _DAT_0276dd28 = FUN_00c40ea0;
    _DAT_0276dd38 = 0;
    uRam000000000276dd40 = 0;
    _DAT_0276dd48 = 0;
    uRam000000000276dd50 = 0;
    _DAT_0276dd58 = 0;
    uRam000000000276dd60 = 0;
    _DAT_0276dd68 = 0;
    uRam000000000276dd70 = 0;
    _DAT_0276dd78 = 0;
    uRam000000000276dd80 = 0;
    _DAT_0276dd88 = 0;
    uRam000000000276dd90 = 0;
    _DAT_0276dd98 = 0;
    uRam000000000276dda0 = 0;
    _DAT_0276dda8 = 0;
    uRam000000000276ddb0 = 0;
    _DAT_0276ddb8 = 0;
    uRam000000000276ddc0 = 0;
    _DAT_0276ddc8 = 0;
    uRam000000000276ddd0 = 0;
    _DAT_0276ddd8 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_00c167d6:
    plVar6 = (longlong *)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = param_1;
    if (cVar4 == '\0') goto LAB_00c167d6;
  }
  lVar1 = *plVar6;
  local_31 = (char)plVar6[1];
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  pplVar7 = &local_48;
  FUN_00c16ff0();
  plVar6 = local_48;
  if ((DAT_0276dde0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_0276dd30 = FUN_00b10020();
    _DAT_0276dd18 = "GNOverloudCompressor1176";
    _DAT_0276dd20 = 0xd8;
    _DAT_0276dd28 = FUN_00c40ea0;
    _DAT_0276dd38 = 0;
    uRam000000000276dd40 = 0;
    _DAT_0276dd48 = 0;
    uRam000000000276dd50 = 0;
    _DAT_0276dd58 = 0;
    uRam000000000276dd60 = 0;
    _DAT_0276dd68 = 0;
    uRam000000000276dd70 = 0;
    _DAT_0276dd78 = 0;
    uRam000000000276dd80 = 0;
    _DAT_0276dd88 = 0;
    uRam000000000276dd90 = 0;
    _DAT_0276dd98 = 0;
    uRam000000000276dda0 = 0;
    _DAT_0276dda8 = 0;
    uRam000000000276ddb0 = 0;
    _DAT_0276ddb8 = 0;
    uRam000000000276ddc0 = 0;
    _DAT_0276ddc8 = 0;
    uRam000000000276ddd0 = 0;
    _DAT_0276ddd8 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
    pplVar7 = &DAT_02802688;
    plVar6 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_00c1685a;
LAB_00c16876:
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar7 = &DAT_02802688;
    }
    plVar6 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') goto LAB_00c16876;
LAB_00c1685a:
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0276c408;
  plVar2 = (longlong *)*param_3;
  if (DAT_0276c408 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0276c410;
  if (cVar4 == '\0') {
    if (plVar6 == (longlong *)0x0) {
LAB_00c16a07:
      local_a8 = *param_1;
      local_a0 = 0;
      local_98 = *param_3;
      local_90 = 0;
      FUN_00c17210(&local_a8,param_2,&local_98);
      goto joined_r0x00c16918;
    }
    plVar2 = (longlong *)*param_3;
    if (DAT_0276c410 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar2 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_00c16a07;
    iVar5 = *(int *)(lVar1 + 0xd4);
    if (iVar5 == 0) {
      FUN_00aea610((int)plVar6[0x19]);
      FUN_00d46dc0();
      plVar6 = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_40 != '\0') goto LAB_00c16bbb;
      if (local_48 == (longlong *)0x0) goto LAB_00c16bb9;
      FUN_00d50b00();
      *unaff_RDI = plVar6;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (iVar5 == 1) {
        FUN_00aea610(*(undefined4 *)((longlong)plVar6 + 0xcc));
        FUN_00d46dc0();
        plVar6 = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 == (longlong *)0x0) goto LAB_00c16bb9;
          FUN_00d50b00();
          *unaff_RDI = plVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c16a4d;
        }
      }
      else if (iVar5 == 2) {
        FUN_00aea610((int)plVar6[0x1a]);
        FUN_00d46dc0();
        plVar6 = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            *unaff_RDI = plVar6;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00c16a4d;
          }
LAB_00c16bb9:
          local_48 = (longlong *)0x0;
        }
      }
      else {
        FUN_00d46dc0(0);
        plVar6 = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 == (longlong *)0x0) goto LAB_00c16bb9;
          FUN_00d50b00();
          *unaff_RDI = plVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c16a4d;
        }
      }
LAB_00c16bbb:
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
  }
  else {
    FUN_00d46530();
    plVar2 = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_40 == '\0') {
      if (local_48 == (longlong *)0x0) {
        local_48 = (longlong *)0x0;
        goto LAB_00c16909;
      }
      FUN_00d50b00();
      *unaff_RDI = plVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
LAB_00c16909:
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
joined_r0x00c16918:
    if (plVar6 == (longlong *)0x0) goto LAB_00c16a55;
  }
LAB_00c16a4d:
  FUN_00d50b20();
LAB_00c16a55:
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00c45b00 — 922 bytes
// str: ""GNOverloudCompressor1176""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c45b00(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00b10260();
  *unaff_RDI = &DAT_02556528;
  *(undefined4 *)(unaff_RDI + 0x19) = 0;
  if (DAT_0276dde0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276dd30 = FUN_00b10020();
      _DAT_0276dd18 = "GNOverloudCompressor1176";
      _DAT_0276dd20 = 0xd8;
      _DAT_0276dd28 = FUN_00c40ea0;
      _DAT_0276dd38 = 0;
      uRam000000000276dd40 = 0;
      _DAT_0276dd48 = 0;
      uRam000000000276dd50 = 0;
      _DAT_0276dd58 = 0;
      uRam000000000276dd60 = 0;
      _DAT_0276dd68 = 0;
      uRam000000000276dd70 = 0;
      _DAT_0276dd78 = 0;
      uRam000000000276dd80 = 0;
      _DAT_0276dd88 = 0;
      uRam000000000276dd90 = 0;
      _DAT_0276dd98 = 0;
      uRam000000000276dda0 = 0;
      _DAT_0276dda8 = 0;
      uRam000000000276ddb0 = 0;
      _DAT_0276ddb8 = 0;
      uRam000000000276ddc0 = 0;
      _DAT_0276ddc8 = 0;
      _uRam000000000276ddd0 = 0;
      _DAT_0276ddd8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276ddd3 == '\0') {
    FUN_00c45ed0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xcc) = 0;
  if (DAT_0276dde0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276dd30 = FUN_00b10020();
      _DAT_0276dd18 = "GNOverloudCompressor1176";
      _DAT_0276dd20 = 0xd8;
      _DAT_0276dd28 = FUN_00c40ea0;
      _DAT_0276dd38 = 0;
      uRam000000000276dd40 = 0;
      _DAT_0276dd48 = 0;
      uRam000000000276dd50 = 0;
      _DAT_0276dd58 = 0;
      uRam000000000276dd60 = 0;
      _DAT_0276dd68 = 0;
      uRam000000000276dd70 = 0;
      _DAT_0276dd78 = 0;
      uRam000000000276dd80 = 0;
      _DAT_0276dd88 = 0;
      uRam000000000276dd90 = 0;
      _DAT_0276dd98 = 0;
      uRam000000000276dda0 = 0;
      _DAT_0276dda8 = 0;
      uRam000000000276ddb0 = 0;
      _DAT_0276ddb8 = 0;
      uRam000000000276ddc0 = 0;
      _DAT_0276ddc8 = 0;
      _uRam000000000276ddd0 = 0;
      _DAT_0276ddd8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276ddd3 == '\0') {
    FUN_00c46040();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1a) = 0;
  if (DAT_0276dde0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276dd30 = FUN_00b10020();
      _DAT_0276dd18 = "GNOverloudCompressor1176";
      _DAT_0276dd20 = 0xd8;
      _DAT_0276dd28 = FUN_00c40ea0;
      _DAT_0276dd38 = 0;
      uRam000000000276dd40 = 0;
      _DAT_0276dd48 = 0;
      uRam000000000276dd50 = 0;
      _DAT_0276dd58 = 0;
      uRam000000000276dd60 = 0;
      _DAT_0276dd68 = 0;
      uRam000000000276dd70 = 0;
      _DAT_0276dd78 = 0;
      uRam000000000276dd80 = 0;
      _DAT_0276dd88 = 0;
      uRam000000000276dd90 = 0;
      _DAT_0276dd98 = 0;
      uRam000000000276dda0 = 0;
      _DAT_0276dda8 = 0;
      uRam000000000276ddb0 = 0;
      _DAT_0276ddb8 = 0;
      uRam000000000276ddc0 = 0;
      _DAT_0276ddc8 = 0;
      _uRam000000000276ddd0 = 0;
      _DAT_0276ddd8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276ddd3 == '\0') {
    FUN_00c461b0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xd4) = 0;
  if (DAT_0276dde0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276dd30 = FUN_00b10020();
      _DAT_0276dd18 = "GNOverloudCompressor1176";
      _DAT_0276dd20 = 0xd8;
      _DAT_0276dd28 = FUN_00c40ea0;
      _DAT_0276dd38 = 0;
      uRam000000000276dd40 = 0;
      _DAT_0276dd48 = 0;
      uRam000000000276dd50 = 0;
      _DAT_0276dd58 = 0;
      uRam000000000276dd60 = 0;
      _DAT_0276dd68 = 0;
      uRam000000000276dd70 = 0;
      _DAT_0276dd78 = 0;
      uRam000000000276dd80 = 0;
      _DAT_0276dd88 = 0;
      uRam000000000276dd90 = 0;
      _DAT_0276dd98 = 0;
      uRam000000000276dda0 = 0;
      _DAT_0276dda8 = 0;
      uRam000000000276ddb0 = 0;
      _DAT_0276ddb8 = 0;
      uRam000000000276ddc0 = 0;
      _DAT_0276ddc8 = 0;
      _uRam000000000276ddd0 = 0;
      _DAT_0276ddd8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276ddd3 == '\0') {
    FUN_00c46320();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00bf1e60 — 539 bytes
// str: ""GNOverloudCompressor""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00bf1fa6) */
/* WARNING: Removing unreachable block (ram,0x00bf1fb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf1e60(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_108;
  longlong local_100;
  
  if ((DAT_0276d280 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0276d1d0 = FUN_00b10020();
    _DAT_0276d1b8 = "GNOverloudCompressor";
    _DAT_0276d1c0 = 0xe0;
    _DAT_0276d1c8 = FUN_00c40790;
    _DAT_0276d1d8 = 0;
    uRam000000000276d1e0 = 0;
    _DAT_0276d1e8 = 0;
    uRam000000000276d1f0 = 0;
    _DAT_0276d1f8 = 0;
    uRam000000000276d200 = 0;
    _DAT_0276d208 = 0;
    uRam000000000276d210 = 0;
    _DAT_0276d218 = 0;
    uRam000000000276d220 = 0;
    _DAT_0276d228 = 0;
    uRam000000000276d230 = 0;
    _DAT_0276d238 = 0;
    uRam000000000276d240 = 0;
    _DAT_0276d248 = 0;
    uRam000000000276d250 = 0;
    _DAT_0276d258 = 0;
    uRam000000000276d260 = 0;
    _DAT_0276d268 = 0;
    _uRam000000000276d270 = 0;
    _DAT_0276d278 = 0;
    ___cxa_guard_release();
  }
  if (DAT_0276d273 == '\0') {
    FUN_00af3fa0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00c45240();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_00bff5f0();
    if (local_100 != 0) {
      FUN_00d50b20();
    }
    if (local_108 != 0) {
      FUN_00d50b20();
    }
    FUN_00b10a20();
    FUN_00b10a20();
  }
  return;
}



