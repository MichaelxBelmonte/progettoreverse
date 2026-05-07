// Reconstructed implementation of GNMidiFileTrack
// From MikeCore binary — reverse-engineered pseudocode

#include "GNMidiFileTrack.h"

// ============================================================
// @00b5b410 — 1807 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b5b73b) */
/* WARNING: Removing unreachable block (ram,0x00b5b748) */
/* WARNING: Removing unreachable block (ram,0x00b5b8b0) */
/* WARNING: Removing unreachable block (ram,0x00b5b8bd) */
/* WARNING: Removing unreachable block (ram,0x00b5b83b) */
/* WARNING: Removing unreachable block (ram,0x00b5b848) */
/* WARNING: Removing unreachable block (ram,0x00b5b9bc) */
/* WARNING: Removing unreachable block (ram,0x00b5b9c9) */
/* WARNING: Removing unreachable block (ram,0x00b5bb3b) */
/* WARNING: Removing unreachable block (ram,0x00b5bb44) */
/* WARNING: Removing unreachable block (ram,0x00b5b4be) */
/* WARNING: Removing unreachable block (ram,0x00b5b4c7) */

void FUN_00b5b410(void)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  longlong lVar15;
  longlong unaff_RDI;
  byte bVar16;
  longlong lVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined4 uVar20;
  
  pbVar2 = *(byte **)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
  iVar6 = *(int *)(*(longlong *)(unaff_RDI + 0x18) + 0x18);
  lVar17 = (longlong)iVar6;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  pcVar4 = DAT_02539aa0;
  if (*pbVar2 == 0xf0) {
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = &DAT_02539e18;
    uVar20 = (*DAT_02539e30)();
    FUN_00b51bd0(uVar20,iVar6);
    FUN_00d21140();
    bVar3 = true;
  }
  else if (iVar6 < 1) {
    bVar3 = false;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    pbVar9 = pbVar2 + lVar17 + -1;
    bVar13 = *(byte *)(unaff_RDI + 0x28);
    bVar16 = bVar13 & 0xf0;
    if (0xef < bVar13) {
      bVar16 = bVar13;
    }
    pbVar1 = pbVar2 + lVar17 + -1;
    bVar3 = false;
    pbVar19 = pbVar2;
    puVar11 = (undefined8 *)0x0;
    do {
      if (bVar16 == 0) {
        while( true ) {
          if (puVar11 != (undefined8 *)0x0) {
            if (bVar3) {
              FUN_00d50b20();
            }
            bVar3 = false;
          }
          bVar16 = *pbVar19;
          if ((char)bVar16 < '\0') break;
          pbVar19 = pbVar19 + 1;
          puVar11 = (undefined8 *)0x0;
          puVar8 = (undefined8 *)0x0;
          if (pbVar9 < pbVar19) goto LAB_00b5bb18;
        }
LAB_00b5b589:
        pbVar19 = pbVar19 + 1;
        bVar12 = bVar16;
      }
      else {
        if (puVar11 != (undefined8 *)0x0) {
          if (bVar3) {
            FUN_00d50b20();
          }
          bVar3 = false;
        }
        bVar16 = *pbVar19;
        bVar12 = bVar13;
        if ((char)bVar16 < '\0') goto LAB_00b5b589;
      }
      iVar6 = FUN_00b61f70();
      if (iVar6 == 2) {
        if (pbVar9 <= pbVar19) goto LAB_00b5b860;
        lVar15 = (longlong)pbVar1 - (longlong)pbVar19;
        puVar11 = (undefined8 *)0x0;
        do {
          bVar16 = *pbVar19;
          pbVar10 = pbVar19;
          puVar8 = puVar11;
          if (bVar16 < 0xf8) goto LAB_00b5b8d6;
          puVar8 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar8 = &DAT_02539a88;
          puVar8[2] = 0;
          (*pcVar4)();
          if (puVar8 == puVar11) {
            if (bVar3) {
              FUN_00d50b20();
              puVar8 = puVar11;
              bVar5 = bVar3;
            }
            else {
              puVar8 = puVar11;
              bVar5 = true;
            }
          }
          else {
            bVar5 = true;
            if ((bVar3) && (puVar11 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          bVar3 = bVar5;
          FUN_00b51b40();
          FUN_00d21140();
          pbVar19 = pbVar19 + 1;
          lVar15 = lVar15 + -1;
          puVar11 = puVar8;
        } while (lVar15 != 0);
        bVar16 = *pbVar1;
        pbVar10 = pbVar1;
LAB_00b5b8d6:
        pbVar19 = pbVar10 + 1;
        if (pbVar19 <= pbVar9) {
          pbVar18 = pbVar19;
          if (pbVar19 < pbVar9) {
            pbVar10 = pbVar2 + ((lVar17 + -2) - (longlong)pbVar10);
            puVar11 = puVar8;
            do {
              bVar14 = *pbVar19;
              pbVar18 = pbVar19;
              if (bVar14 < 0xf8) goto LAB_00b5ba5e;
              puVar8 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar8 = &DAT_02539a88;
              puVar8[2] = 0;
              (*pcVar4)();
              if (puVar8 == puVar11) {
                puVar8 = puVar11;
                if (bVar3) {
                  FUN_00d50b20();
                  bVar5 = bVar3;
                }
                else {
                  bVar5 = true;
                }
              }
              else {
                bVar5 = true;
                if ((bVar3) && (puVar11 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
              }
              bVar3 = bVar5;
              FUN_00b51b40();
              FUN_00d21140();
              pbVar19 = pbVar19 + 1;
              pbVar10 = pbVar10 + -1;
              pbVar18 = pbVar1;
              puVar11 = puVar8;
            } while (pbVar10 != (byte *)0x0);
          }
          bVar14 = *pbVar18;
          puVar11 = puVar8;
LAB_00b5ba5e:
          pbVar19 = pbVar18 + 1;
          puVar8 = puVar11;
          if ((-1 < (char)bVar16) && (-1 < (char)bVar14)) {
            puVar8 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar8 = &DAT_02539a88;
            puVar8[2] = 0;
            (*pcVar4)();
            if (puVar8 == puVar11) {
              if (bVar3) {
                FUN_00d50b20();
                puVar8 = puVar11;
                bVar5 = bVar3;
              }
              else {
                puVar8 = puVar11;
                bVar5 = true;
              }
            }
            else {
              bVar5 = true;
              if ((bVar3) && (puVar11 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar5;
            FUN_00b51ba0(bVar14,bVar16);
          }
        }
      }
      else if (iVar6 == 1) {
        if (pbVar9 < pbVar19) goto LAB_00b5b860;
        if (pbVar19 < pbVar9) {
          lVar15 = (longlong)pbVar1 - (longlong)pbVar19;
          puVar11 = (undefined8 *)0x0;
          do {
            bVar16 = *pbVar19;
            pbVar10 = pbVar19;
            puVar8 = puVar11;
            if (bVar16 < 0xf8) goto LAB_00b5b9da;
            puVar8 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar8 = &DAT_02539a88;
            puVar8[2] = 0;
            (*pcVar4)();
            if (puVar8 == puVar11) {
              if (bVar3) {
                FUN_00d50b20();
                puVar8 = puVar11;
                bVar5 = bVar3;
              }
              else {
                puVar8 = puVar11;
                bVar5 = true;
              }
            }
            else {
              bVar5 = true;
              if ((bVar3) && (puVar11 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar5;
            FUN_00b51b40();
            FUN_00d21140();
            pbVar19 = pbVar19 + 1;
            lVar15 = lVar15 + -1;
            pbVar10 = pbVar1;
            puVar11 = puVar8;
          } while (lVar15 != 0);
        }
        else {
          puVar8 = (undefined8 *)0x0;
          pbVar10 = pbVar19;
        }
        bVar16 = *pbVar10;
LAB_00b5b9da:
        pbVar19 = pbVar10 + 1;
        if (-1 < (char)bVar16) {
          puVar11 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar11 = &DAT_02539a88;
          puVar11[2] = 0;
          uVar20 = (*pcVar4)();
          if (puVar11 == puVar8) {
            puVar11 = puVar8;
            if (bVar3) {
              uVar20 = FUN_00d50b20();
              bVar5 = bVar3;
            }
            else {
              bVar5 = true;
            }
          }
          else {
            bVar5 = true;
            if ((bVar3) && (puVar8 != (undefined8 *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
          }
          bVar3 = bVar5;
          FUN_00b51b70(uVar20,bVar16);
          puVar8 = puVar11;
        }
      }
      else if (iVar6 == 0) {
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_02539a88;
        puVar8[2] = 0;
        (*pcVar4)();
        FUN_00b51b40();
        bVar3 = true;
      }
      else {
LAB_00b5b860:
        puVar8 = (undefined8 *)0x0;
      }
      bVar16 = bVar12;
      if (0xef < bVar12) {
        bVar16 = bVar13;
      }
      if (-1 < (char)bVar12) {
        bVar16 = bVar13;
      }
      bVar13 = bVar16;
      if ((bVar12 & 0xf8) == 0xf0) {
        bVar13 = 0;
      }
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d21140();
      }
      bVar16 = bVar13 & 0xf0;
      if (0xef < bVar13) {
        bVar16 = bVar13;
      }
      puVar11 = puVar8;
    } while (pbVar19 <= pbVar9);
  }
LAB_00b5bb18:
  FUN_00d243f0();
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (puVar8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00b5c850 — 1313 bytes
// str: ""(GNMidiFileTrack:\n""
// str: ""  name:%@,\n""
// str: ""  texts:%@,\n""
// str: ""  instrument:%@,\n""
// str: ""  program:%@,\n""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b5cd37) */
/* WARNING: Removing unreachable block (ram,0x00b5cd40) */

void FUN_00b5c850(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  char local_48;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d8db40();
  lVar1 = *(longlong *)(unaff_RSI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x20);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d93320();
    local_48 = '\x01';
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x40);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x48);
  if (lVar1 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong **)(unaff_RSI + 0x10) == (longlong *)0x0) {
    FUN_00d8db40();
  }
  else {
    (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 400))();
    if ((local_48 == '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d8db40();
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00b5dfe0 — 892 bytes
// ============================================================

void FUN_00b5dfe0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
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
  longlong local_30;
  char local_28;
  
  plVar5 = DAT_028a52e8;
  if ((DAT_028a52e8 == (longlong *)0x0) || (DAT_028a52f1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a52e8 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_028a52e8 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = DAT_028a52e8 != (longlong *)0x0;
        DAT_028a52e8 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a52f0 == '\0') {
        DAT_028a52f0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0275e490;
      if (DAT_0275e490 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_02763080;
      if (DAT_02763080 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar4;
      local_98 = '\x01';
      FUN_00df16f0(param_1,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02763088;
      if (DAT_02763088 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar3;
      local_88 = '\x01';
      FUN_00df1690();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02763090;
      if (DAT_02763090 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar3;
      local_78 = '\x01';
      FUN_00df1570();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02763098;
      if (DAT_02763098 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_00df1570();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027630a0;
      if (DAT_027630a0 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar3;
      local_58 = '\x01';
      FUN_00df1570();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027630a8;
      if (DAT_027630a8 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar3;
      local_48 = '\x01';
      FUN_00df1570();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027630b0;
      if (DAT_027630b0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1600();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026e1828;
      if (DAT_026e1828 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1600();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      DAT_028a52f1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a52f1 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = DAT_028a52e8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_00b5e33f;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b5e33f:
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00b5d1a0 — 622 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b5d2ca) */
/* WARNING: Removing unreachable block (ram,0x00b5d2d3) */
/* WARNING: Removing unreachable block (ram,0x00b5d3f1) */
/* WARNING: Removing unreachable block (ram,0x00b5d3fa) */
/* WARNING: Removing unreachable block (ram,0x00b5d34a) */
/* WARNING: Removing unreachable block (ram,0x00b5d353) */
/* WARNING: Removing unreachable block (ram,0x00b5d306) */
/* WARNING: Removing unreachable block (ram,0x00b5d316) */

void FUN_00b5d1a0(double param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  double dVar6;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar1 == 0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    puVar3 = *(undefined8 **)(unaff_RDI + 0x10);
    if (puVar3 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x10) = puVar4;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00b5a6a0(param_1);
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00d21140();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      while( true ) {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
        dVar6 = (double)FUN_00b5beb0();
        if ((dVar6 == param_1) && (!NAN(dVar6) && !NAN(param_1))) break;
        if ((param_1 <= dVar6) || (lVar5 = lVar5 + 1, *(int *)(lVar1 + 0xc) <= lVar5))
        goto LAB_00b5d365;
      }
      if (lVar2 != 0) {
        FUN_00d50b00();
        FUN_00b5be00();
        FUN_00d50b20();
        return;
      }
    }
LAB_00b5d365:
    FUN_00b5a6a0(param_1);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00b5d580();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00b5af60 — 536 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b5afaa) */
/* WARNING: Removing unreachable block (ram,0x00b5b03a) */
/* WARNING: Removing unreachable block (ram,0x00b5b043) */
/* WARNING: Removing unreachable block (ram,0x00b5b090) */
/* WARNING: Removing unreachable block (ram,0x00b5b0b0) */
/* WARNING: Removing unreachable block (ram,0x00b5b092) */
/* WARNING: Removing unreachable block (ram,0x00b5b0b2) */
/* WARNING: Removing unreachable block (ram,0x00b5afb0) */
/* WARNING: Removing unreachable block (ram,0x00b5afd0) */
/* WARNING: Removing unreachable block (ram,0x00b5afb2) */
/* WARNING: Removing unreachable block (ram,0x00b5afd2) */

void FUN_00b5af60(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong unaff_RDI;
  longlong *local_58;
  int local_40;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (*(int *)(lVar1 + 0xc) == 0) {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      *(undefined8 *)(unaff_RDI + 0x18) = 0;
      FUN_00d50b20();
      return;
    }
  }
  else {
    local_58 = (longlong *)0x0;
    local_40 = -1;
    while( true ) {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      local_58 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      (**(code **)(*local_58 + 0x370))();
    }
    FUN_00b671d0();
    FUN_00c8e690();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    lVar1 = *(longlong *)(unaff_RDI + 0x10);
    if (lVar1 != 0) {
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        pvVar5 = *(void **)(lVar1 + 0x10);
        plVar2 = *(longlong **)((longlong)pvVar5 + lVar4 * 8 + 8);
        iVar3 = (**(code **)(*plVar2 + 0x370))();
        (**(code **)(*plVar2 + 0x378))();
        _memcpy(pvVar5,(void *)(longlong)iVar3,param_3);
      }
      FUN_00b671d0();
    }
    plVar2 = *(longlong **)(unaff_RDI + 0x18);
    if (plVar2 != local_58) {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x18) = local_58;
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



