// Reconstructed implementation of GNMidiFile
// From MikeCore binary — reverse-engineered pseudocode

#include "GNMidiFile.h"

// ============================================================
// @00b62530 — 2992 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b62df6) */
/* WARNING: Removing unreachable block (ram,0x00b62dff) */
/* WARNING: Removing unreachable block (ram,0x00b62c3f) */
/* WARNING: Removing unreachable block (ram,0x00b62c48) */
/* WARNING: Removing unreachable block (ram,0x00b628f1) */
/* WARNING: Removing unreachable block (ram,0x00b628fa) */
/* WARNING: Removing unreachable block (ram,0x00b62fce) */
/* WARNING: Removing unreachable block (ram,0x00b62fd7) */
/* WARNING: Removing unreachable block (ram,0x00b62bf1) */
/* WARNING: Removing unreachable block (ram,0x00b62bfa) */
/* WARNING: Removing unreachable block (ram,0x00b62a4c) */
/* WARNING: Removing unreachable block (ram,0x00b62a55) */
/* WARNING: Removing unreachable block (ram,0x00b62da8) */
/* WARNING: Removing unreachable block (ram,0x00b62db1) */
/* WARNING: Removing unreachable block (ram,0x00b62ad9) */
/* WARNING: Removing unreachable block (ram,0x00b62ae2) */
/* WARNING: Removing unreachable block (ram,0x00b627d6) */
/* WARNING: Removing unreachable block (ram,0x00b627df) */
/* WARNING: Removing unreachable block (ram,0x00b62b6d) */
/* WARNING: Removing unreachable block (ram,0x00b62b76) */
/* WARNING: Removing unreachable block (ram,0x00b629b4) */
/* WARNING: Removing unreachable block (ram,0x00b629bd) */
/* WARNING: Removing unreachable block (ram,0x00b62e51) */
/* WARNING: Removing unreachable block (ram,0x00b62e5a) */

ulonglong FUN_00b62530(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong unaff_RBX;
  undefined7 uVar13;
  ulonglong uVar12;
  longlong unaff_RDI;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  longlong local_40;
  char local_38;
  
  uVar9 = FUN_00b61b20();
  iVar10 = FUN_00b61c60();
  lVar4 = DAT_027630b8;
  if (*(int *)(unaff_RDI + 0x20) < iVar10) {
    if (DAT_027630b8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    unaff_RBX = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  *(byte *)(unaff_RDI + 0x58) = *(byte *)(unaff_RDI + 0x58) & 0xf;
  FUN_00b61d20();
  lVar4 = DAT_027630c0;
  uVar13 = (undefined7)((ulonglong)unaff_RBX >> 8);
  switch(uVar9) {
  case 0:
    if (iVar10 != 1) {
      if (2 < iVar10) {
        *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
      }
      if ((*(int *)(unaff_RDI + 0x40) == 0) && (*(int *)(unaff_RDI + 0x50) == 0)) {
        if (iVar10 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (uint)**(ushort **)(unaff_RDI + 0x18) << 0x10;
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8;
        }
        uVar3 = *(uint *)(*(longlong *)(unaff_RDI + 0x10) + 0x40);
        if (uVar3 == uVar11) goto LAB_00b62d53;
        if (uVar3 == 0) {
          *(uint *)(*(longlong *)(unaff_RDI + 0x10) + 0x40) = uVar11;
          uVar12 = CONCAT71(uVar13,1);
          goto LAB_00b62d55;
        }
      }
    }
    break;
  case 1:
    uVar6 = *(undefined8 *)(unaff_RDI + 0x48);
    FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00b5d890((double)*(int *)(unaff_RDI + 0x50) * *(double *)(unaff_RDI + 0x38));
    uVar12 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00b62d55;
  case 2:
    if ((*(int *)(unaff_RDI + 0x40) == 0) && (*(int *)(unaff_RDI + 0x50) == 0)) {
      lVar4 = *(longlong *)(unaff_RDI + 0x10);
      if (*(longlong *)(lVar4 + 0x50) == 0) {
        FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        lVar8 = *(longlong *)(lVar4 + 0x50);
        if (lVar8 != local_40) {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *(longlong *)(lVar4 + 0x50) = local_40;
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
        }
        uVar12 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        goto LAB_00b62d55;
      }
      FUN_00d50b00();
      FUN_00d50b20();
    }
    break;
  case 3:
    if (*(int *)(unaff_RDI + 0x50) == 0) {
      FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      if (*(int *)(unaff_RDI + 0x40) == 0) {
        lVar4 = *(longlong *)(unaff_RDI + 0x10);
        if (*(longlong *)(lVar4 + 0x48) == 0) {
          if (local_40 == 0) goto LAB_00b6304c;
          FUN_00d50b00();
          plVar14 = (longlong *)(lVar4 + 0x48);
          goto LAB_00b63039;
        }
        FUN_00d50b00();
        FUN_00d50b20();
LAB_00b62ecc:
        *(int *)(unaff_RDI + 0x24) = *(int *)(unaff_RDI + 0x24) + 1;
        uVar12 = 0;
        if (local_40 == 0) goto LAB_00b62d55;
      }
      else {
        lVar4 = *(longlong *)(unaff_RDI + 0x48);
        if (*(longlong *)(lVar4 + 0x18) != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          goto LAB_00b62ecc;
        }
        if (local_40 == 0) {
LAB_00b6304c:
          uVar12 = 1;
          goto LAB_00b62d55;
        }
        FUN_00d50b00();
        plVar14 = (longlong *)(lVar4 + 0x18);
LAB_00b63039:
        *plVar14 = local_40;
        uVar12 = 1;
      }
      FUN_00d50b20();
      goto LAB_00b62d55;
    }
    break;
  case 4:
    if (*(int *)(unaff_RDI + 0x50) == 0) {
      FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      lVar4 = *(longlong *)(unaff_RDI + 0x48);
      if (*(longlong *)(lVar4 + 0x28) == 0) {
        lVar8 = *(longlong *)(lVar4 + 0x28);
        if (lVar8 != local_40) {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *(longlong *)(lVar4 + 0x28) = local_40;
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d50b00();
        FUN_00c8e5b0();
        FUN_00d50b20();
      }
      uVar12 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00b62d55;
    }
    break;
  case 5:
    uVar6 = *(undefined8 *)(unaff_RDI + 0x48);
    FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00b5db00((double)*(int *)(unaff_RDI + 0x50) * *(double *)(unaff_RDI + 0x38));
    uVar12 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00b62d55;
  case 6:
    if (*(int *)(unaff_RDI + 0x40) == 0) {
      uVar6 = *(undefined8 *)(unaff_RDI + 0x10);
      FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00b61110((double)*(int *)(unaff_RDI + 0x50) * *(double *)(unaff_RDI + 0x38));
      uVar12 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00b62d55;
    }
    break;
  case 7:
    uVar6 = *(undefined8 *)(unaff_RDI + 0x48);
    FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00b5dc80((double)*(int *)(unaff_RDI + 0x50) * *(double *)(unaff_RDI + 0x38));
    uVar12 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00b62d55;
  case 8:
    if (*(int *)(unaff_RDI + 0x50) == 0) {
      FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      lVar4 = *(longlong *)(unaff_RDI + 0x48);
      if (*(longlong *)(lVar4 + 0x30) == 0) {
        lVar8 = *(longlong *)(lVar4 + 0x30);
        if (lVar8 != local_40) {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *(longlong *)(lVar4 + 0x30) = local_40;
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d50b00();
        FUN_00c8e5b0();
        FUN_00d50b20();
      }
      uVar12 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00b62d55;
    }
    break;
  case 9:
    if (*(int *)(unaff_RDI + 0x50) != 0) break;
    lVar4 = *(longlong *)(unaff_RDI + 0x48);
    if (*(longlong *)(lVar4 + 0x38) == 0) {
      FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      lVar8 = *(longlong *)(lVar4 + 0x38);
      if (lVar8 != local_40) {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *(longlong *)(lVar4 + 0x38) = local_40;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      uVar12 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00b62d55;
    }
    FUN_00d50b00();
    *(int *)(unaff_RDI + 0x24) = *(int *)(unaff_RDI + 0x24) + 1;
    FUN_00d50b20();
    goto LAB_00b62d53;
  default:
    *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
    goto LAB_00b62d53;
  case 0x20:
    if (0 < iVar10) {
      if (iVar10 != 1) {
        *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
      }
      if (**(byte **)(unaff_RDI + 0x18) < 0x10) {
        *(byte *)(unaff_RDI + 0x58) = **(byte **)(unaff_RDI + 0x18);
        goto LAB_00b62d53;
      }
    }
    break;
  case 0x2f:
    if (iVar10 != 0) {
      if (DAT_027630c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x60) != 0) {
      *(undefined8 *)(unaff_RDI + 0x60) = 0;
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(unaff_RDI + 0x48);
    if (((((*(longlong *)(lVar4 + 0x10) != 0) || (*(longlong *)(lVar4 + 0x18) != 0)) ||
         (*(longlong *)(lVar4 + 0x20) != 0)) ||
        ((*(longlong *)(lVar4 + 0x28) != 0 || (*(longlong *)(lVar4 + 0x30) != 0)))) ||
       ((*(longlong *)(lVar4 + 0x38) != 0 ||
        ((*(longlong *)(lVar4 + 0x40) != 0 || (*(longlong *)(lVar4 + 0x48) != 0)))))) {
      FUN_00d50b00();
      FUN_00d21140();
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x48) != 0) {
      *(undefined8 *)(unaff_RDI + 0x48) = 0;
      FUN_00d50b20();
    }
    goto LAB_00b62d53;
  case 0x51:
    if (2 < iVar10) {
      if (iVar10 != 3) {
        *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
      }
      if (*(int *)(unaff_RDI + 0x40) == 0) {
        pbVar5 = *(byte **)(unaff_RDI + 0x18);
        dVar15 = (double)((uint)pbVar5[2] | (uint)pbVar5[1] << 8 | (uint)*pbVar5 << 0x10) *
                 DAT_023d7d68;
        dVar16 = 0.0;
        if (0.0 < dVar15) {
          if (*(char *)(unaff_RDI + 0x2c) != '\0') {
            dVar16 = (double)*(int *)(unaff_RDI + 0x50) * *(double *)(unaff_RDI + 0x38);
          }
          FUN_00b5f040((uint)*pbVar5 << 0x10,dVar16);
          *(undefined1 *)(unaff_RDI + 0x2c) = 1;
        }
        else {
          *(int *)(unaff_RDI + 0x24) = *(int *)(unaff_RDI + 0x24) + 1;
        }
        uVar12 = CONCAT71(uVar13,0.0 < dVar15);
        goto LAB_00b62d55;
      }
    }
    break;
  case 0x54:
    if (4 < iVar10) {
      if (iVar10 != 5) {
        *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
      }
      if (((((*(int *)(unaff_RDI + 0x40) == 0) && (*(int *)(unaff_RDI + 0x50) == 0)) &&
           ((pcVar7 = *(char **)(unaff_RDI + 0x18), -1 < *pcVar7 &&
            (((byte)pcVar7[1] < 0x3c && ((byte)pcVar7[2] < 0x3c)))))) && ((byte)pcVar7[3] < 0x1e))
         && ((byte)pcVar7[4] < 100)) {
        dVar15 = (double)(byte)pcVar7[4] * DAT_02391030;
        dVar16 = (double)FUN_00b38380();
        dVar17 = (double)FUN_00b383b0();
        dVar17 = dVar17 + dVar16 * dVar15;
        dVar15 = *(double *)(*(longlong *)(unaff_RDI + 0x10) + 0x18);
        if ((dVar15 == dVar17) && (!NAN(dVar15) && !NAN(dVar17))) goto LAB_00b62d53;
        if ((dVar15 == 0.0) && (!NAN(dVar15))) {
          *(double *)(*(longlong *)(unaff_RDI + 0x10) + 0x18) = dVar17;
          uVar12 = 1;
          goto LAB_00b62d55;
        }
      }
    }
    break;
  case 0x58:
    if (3 < iVar10) {
      if (iVar10 != 4) {
        *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
      }
      if (((*(int *)(unaff_RDI + 0x40) == 0) &&
          (pcVar7 = *(char **)(unaff_RDI + 0x18), *pcVar7 != '\0')) &&
         (bVar1 = pcVar7[1], bVar1 < 10)) {
        if (bVar1 == 0) {
          uVar12 = 1;
        }
        else {
          uVar11 = bVar1 & 7;
          if (bVar1 - 1 < 7) {
            uVar12 = 1;
          }
          else {
            iVar10 = -(bVar1 & 0xfffffff8);
            uVar12 = 1;
            do {
              uVar12 = (ulonglong)(uint)((int)uVar12 << 8);
              iVar10 = iVar10 + 8;
            } while (iVar10 != 0);
          }
          if ((bVar1 & 7) != 0) {
            do {
              uVar12 = (ulonglong)(uint)((int)uVar12 * 2);
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        cVar2 = pcVar7[2];
        if (cVar2 == '\0') {
          *(int *)(unaff_RDI + 0x24) = *(int *)(unaff_RDI + 0x24) + 1;
        }
        else {
          FUN_00e7bcc0();
          FUN_00b60b60((double)*(int *)(unaff_RDI + 0x50) * *(double *)(unaff_RDI + 0x38),uVar12);
        }
        uVar12 = CONCAT71((int7)(uVar12 >> 8),cVar2 != '\0');
        goto LAB_00b62d55;
      }
    }
    break;
  case 0x59:
    if (1 < iVar10) {
      if (iVar10 != 2) {
        *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
      }
      if (*(int *)(unaff_RDI + 0x40) == 0) {
        FUN_00b60dd0((double)*(int *)(unaff_RDI + 0x50) * *(double *)(unaff_RDI + 0x38));
        uVar12 = CONCAT71(uVar13,1);
        goto LAB_00b62d55;
      }
    }
  }
  *(int *)(unaff_RDI + 0x24) = *(int *)(unaff_RDI + 0x24) + 1;
LAB_00b62d53:
  uVar12 = 0;
LAB_00b62d55:
  FUN_00b61bc0();
  return uVar12 & 0xffffffff;
}




// ============================================================
// @00b5fd00 — 2158 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b5fe7c) */
/* WARNING: Removing unreachable block (ram,0x00b5fe85) */
/* WARNING: Removing unreachable block (ram,0x00b5fda1) */
/* WARNING: Removing unreachable block (ram,0x00b5fdaa) */
/* WARNING: Removing unreachable block (ram,0x00b604cc) */
/* WARNING: Removing unreachable block (ram,0x00b604d8) */
/* WARNING: Removing unreachable block (ram,0x00b5fec0) */
/* WARNING: Removing unreachable block (ram,0x00b5fe99) */

undefined8 FUN_00b5fd00(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double local_90;
  longlong local_78;
  char local_70;
  int local_50;
  
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00b63820();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_00d21140();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  lVar3 = *(longlong *)(*param_2 + 0x58);
  if (lVar3 != 0) {
    FUN_00d50b00();
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar3 + 0xc)) {
      FUN_00b64180();
      if ((local_70 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
      }
      if (0 < *(int *)(local_78 + 0xc)) {
        local_70 = '\0';
        FUN_00d21140();
      }
      FUN_00d50b20();
    }
    FUN_00b67020();
    if (puVar8 == (undefined8 *)0x0) {
      dVar15 = 0.0;
      bVar5 = true;
      lVar9 = *param_2;
      iVar14 = *(int *)(lVar9 + 0xc);
      lVar4 = DAT_027630d0;
      goto joined_r0x00b60055;
    }
  }
  if (*(int *)((longlong)puVar8 + 0xc) < 1) {
    dVar15 = 0.0;
  }
  else {
    dVar15 = 0.0;
    uVar12 = 0;
    do {
      lVar9 = *(longlong *)(puVar8[2] + (ulonglong)uVar12 * 8);
      uVar2 = *(uint *)(lVar9 + 0xc);
      if (0 < (int)uVar2) {
        lVar9 = *(longlong *)(lVar9 + 0x10);
        if ((ulonglong)uVar2 - 1 < 3) {
          dVar17 = 0.0;
          uVar13 = 0;
        }
        else {
          dVar17 = 0.0;
          uVar13 = 0;
          do {
            dVar18 = *(double *)(*(longlong *)(lVar9 + uVar13 * 8) + 0x10);
            dVar19 = *(double *)(*(longlong *)(lVar9 + 8 + uVar13 * 8) + 0x10);
            dVar1 = *(double *)(*(longlong *)(lVar9 + 0x10 + uVar13 * 8) + 0x10);
            dVar20 = dVar1 - dVar19;
            dVar19 = dVar19 - dVar18;
            dVar18 = dVar18 - dVar17;
            if (dVar18 <= dVar15) {
              dVar18 = dVar15;
            }
            if (dVar19 <= dVar18) {
              dVar19 = dVar18;
            }
            if (dVar20 <= dVar19) {
              dVar20 = dVar19;
            }
            dVar17 = *(double *)(*(longlong *)(lVar9 + 0x18 + uVar13 * 8) + 0x10);
            dVar15 = dVar17 - dVar1;
            if (dVar15 <= dVar20) {
              dVar15 = dVar20;
            }
            uVar13 = uVar13 + 4;
          } while ((uVar2 & 0xfffffffc) != uVar13);
        }
        if ((ulonglong)(uVar2 & 3) != 0) {
          uVar11 = 0;
          do {
            dVar18 = *(double *)(*(longlong *)(lVar9 + uVar13 * 8 + uVar11 * 8) + 0x10);
            dVar17 = dVar18 - dVar17;
            if (dVar17 <= dVar15) {
              dVar17 = dVar15;
            }
            dVar15 = dVar17;
            uVar11 = uVar11 + 1;
            dVar17 = dVar18;
          } while ((uVar2 & 3) != uVar11);
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)((longlong)puVar8 + 0xc));
  }
  FUN_00b670c0();
  bVar5 = false;
  lVar9 = *param_2;
  iVar14 = *(int *)(lVar9 + 0xc);
  lVar4 = DAT_027630d0;
joined_r0x00b60055:
  DAT_027630d0 = lVar4;
  if (iVar14 == 0) {
    iVar14 = *(int *)(lVar9 + 0x10);
    if (iVar14 == 0) {
      iVar14 = 0x30;
      if ((dVar15 != 0.0) || (NAN(dVar15))) {
        lVar9 = (longlong)(DAT_023d7d60 / dVar15);
        if (lVar9 < 1) {
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (lVar4 != 0) {
            FUN_00d50b20();
            iVar14 = 0x30;
          }
        }
        else if ((((((lVar9 != 1) && (iVar14 = 1, 0x18 < lVar9)) && (iVar14 = 0x18, 0x30 < lVar9))
                  && (((iVar14 = 0x30, 0x60 < lVar9 && (iVar14 = 0x60, 0x78 < lVar9)) &&
                      ((iVar14 = 0x78, 0xc0 < lVar9 &&
                       ((iVar14 = 0xc0, 0xf0 < lVar9 && (iVar14 = 0xf0, 0x1e0 < lVar9)))))))) &&
                 (iVar14 = 0x1e0, 0x3c0 < lVar9)) && (iVar14 = 0x3c0, 0x780 < lVar9)) {
          iVar14 = 0x780;
        }
      }
    }
    local_90 = (double)iVar14;
  }
  else if (iVar14 == 1) {
    iVar14 = 4;
    if ((dVar15 != 0.0) || (NAN(dVar15))) {
      iVar7 = (int)(DAT_023d7d58 / dVar15);
      if (iVar7 < 1) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar4 != 0) {
          FUN_00d50b20();
          iVar14 = 4;
        }
      }
      else if (((((iVar7 != 1) && (iVar14 = 1, 4 < iVar7)) && (iVar14 = 4, 8 < iVar7)) &&
               ((iVar14 = 8, 10 < iVar7 && (iVar14 = 10, 0x28 < iVar7)))) &&
              (iVar14 = 0x28, 0x50 < iVar7)) {
        iVar14 = 0x50;
        if (100 < iVar7) {
          iVar14 = 100;
        }
      }
    }
    local_90 = (double)(iVar14 * 0x19);
  }
  else {
    local_90 = 0.0;
  }
  FUN_00c92190(local_90,10);
  FUN_00b64740();
  FUN_00b64740();
  pcVar6 = DAT_025683d8;
  if (!bVar5) {
    iVar14 = -1;
    while (iVar14 = iVar14 + 1, iVar14 < *(int *)((longlong)puVar8 + 0xc)) {
      lVar9 = *(longlong *)(puVar8[2] + (longlong)iVar14 * 8);
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &DAT_025683c0;
      (*pcVar6)();
      uVar16 = FUN_00c92170();
      uVar12 = *(uint *)(lVar9 + 0xc);
      if (0 < (int)uVar12) {
        uVar13 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + uVar13 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          FUN_00b647f0(*(double *)(lVar4 + 0x10) * local_90 + DAT_023942d0);
          lVar4 = *(longlong *)(lVar4 + 0x18);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          FUN_00c8e5b0();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          uVar16 = FUN_00d50b20();
          uVar13 = uVar13 + 1;
        } while (uVar12 != uVar13);
      }
      FUN_00c92190(uVar16,4);
      FUN_00b648c0();
      uVar16 = FUN_00c8e5b0();
      FUN_00c92190(uVar16,4);
      FUN_00d50b20();
    }
    FUN_00b67160();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return 1;
}




// ============================================================
// @00b63820 — 1518 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b63908) */
/* WARNING: Removing unreachable block (ram,0x00b63911) */
/* WARNING: Removing unreachable block (ram,0x00b639ce) */
/* WARNING: Removing unreachable block (ram,0x00b639d7) */
/* WARNING: Removing unreachable block (ram,0x00b63cd7) */
/* WARNING: Removing unreachable block (ram,0x00b63d00) */
/* WARNING: Removing unreachable block (ram,0x00b63b97) */
/* WARNING: Removing unreachable block (ram,0x00b63bc0) */
/* WARNING: Removing unreachable block (ram,0x00b63a57) */
/* WARNING: Removing unreachable block (ram,0x00b63a80) */
/* WARNING: Removing unreachable block (ram,0x00b63a59) */
/* WARNING: Removing unreachable block (ram,0x00b63a82) */
/* WARNING: Removing unreachable block (ram,0x00b63b99) */
/* WARNING: Removing unreachable block (ram,0x00b63bc2) */
/* WARNING: Removing unreachable block (ram,0x00b63cd9) */
/* WARNING: Removing unreachable block (ram,0x00b63d02) */

undefined8 * FUN_00b63820(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar6;
  double dVar7;
  undefined8 *local_140;
  undefined1 local_138;
  longlong local_130;
  undefined1 local_128;
  undefined8 *local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  longlong local_e0;
  undefined1 local_d8;
  undefined8 *local_d0;
  undefined1 local_c8;
  longlong local_68;
  char local_60;
  int local_40;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02572358;
  uVar6 = (*DAT_02572370)();
  lVar2 = *(longlong *)(*unaff_RSI + 0x50);
  if (lVar2 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_138 = 0;
  local_140 = puVar1;
  FUN_00b65690(uVar6,&local_140);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = *unaff_RSI;
  if (*(int *)(lVar2 + 0x40) != 0) {
    FUN_00b65500();
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
    lVar2 = *unaff_RSI;
  }
  lVar2 = *(longlong *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_128 = 1;
  local_118 = 0;
  local_130 = lVar2;
  local_120 = puVar1;
  FUN_00b65690();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = *unaff_RSI;
  dVar7 = *(double *)(lVar2 + 0x18);
  if ((dVar7 != 0.0) || (NAN(dVar7))) {
    FUN_00b65350();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    dVar7 = (double)FUN_00d21140();
    if (local_68 != 0) {
      dVar7 = (double)FUN_00d50b20();
    }
    lVar2 = *unaff_RSI;
  }
  lVar2 = *(longlong *)(lVar2 + 0x20);
  if (lVar2 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      local_110 = *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar3 * 8);
      local_108 = 0;
      FUN_00b64e00();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      FUN_00b5da10();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    dVar7 = (double)FUN_00b67310();
  }
  lVar3 = *(longlong *)(*unaff_RSI + 0x28);
  if (lVar3 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      local_100 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar4 * 8);
      local_f8 = 0;
      FUN_00b64fc0();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      FUN_00b5da10();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    dVar7 = (double)FUN_00b673b0();
  }
  lVar4 = *(longlong *)(*unaff_RSI + 0x30);
  if (lVar4 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar5 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar4 + 0xc) <= local_40) break;
      local_f0 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 8 + lVar5 * 8);
      local_e8 = 0;
      FUN_00b65220();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      FUN_00b5da10();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    dVar7 = (double)FUN_00b67450();
  }
  lVar5 = *(longlong *)(*unaff_RSI + 0x38);
  if (lVar5 != 0) {
    dVar7 = (double)FUN_00d50b00();
  }
  local_d8 = 1;
  local_c8 = 0;
  local_e0 = lVar5;
  local_d0 = puVar1;
  FUN_00b65770(dVar7,&local_d0);
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00b047f0 — 1159 bytes
// str: ""GNMidiFile""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b047f0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_0253b6b0;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  if (DAT_027631c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027595c8 = FUN_00d4fe50();
      _DAT_027595b0 = "GNMidiFile";
      _DAT_027595b8 = 0x60;
      _DAT_027595c0 = FUN_00b66730;
      _DAT_027595d0 = 0;
      uRam00000000027595d8 = 0;
      _DAT_027595e0 = 0;
      _DAT_02759658 = 0;
      uRam0000000002759660 = 0;
      _DAT_02759668 = 0;
      DAT_0275966a = 1;
      _DAT_027595e8 = 0;
      uRam00000000027595f0 = 0;
      _DAT_027595f8 = 0;
      uRam0000000002759600 = 0;
      _DAT_02759608 = 0;
      uRam0000000002759610 = 0;
      _DAT_02759618 = 0;
      uRam0000000002759620 = 0;
      _DAT_02759628 = 0;
      uRam0000000002759630 = 0;
      _DAT_02759638 = 0;
      uRam0000000002759640 = 0;
      _DAT_02759648 = 0;
      uRam0000000002759650 = 0;
      DAT_02759673 = 0;
      _DAT_0275966b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275966b == '\0') {
    FUN_00b04d60();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  if (DAT_027631c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027595c8 = FUN_00d4fe50();
      _DAT_027595b0 = "GNMidiFile";
      _DAT_027595b8 = 0x60;
      _DAT_027595c0 = FUN_00b66730;
      _DAT_027595d0 = 0;
      uRam00000000027595d8 = 0;
      _DAT_027595e0 = 0;
      _DAT_02759658 = 0;
      uRam0000000002759660 = 0;
      _DAT_02759668 = 0;
      DAT_0275966a = 1;
      _DAT_027595e8 = 0;
      uRam00000000027595f0 = 0;
      _DAT_027595f8 = 0;
      uRam0000000002759600 = 0;
      _DAT_02759608 = 0;
      uRam0000000002759610 = 0;
      _DAT_02759618 = 0;
      uRam0000000002759620 = 0;
      _DAT_02759628 = 0;
      uRam0000000002759630 = 0;
      _DAT_02759638 = 0;
      uRam0000000002759640 = 0;
      _DAT_02759648 = 0;
      uRam0000000002759650 = 0;
      DAT_02759673 = 0;
      _DAT_0275966b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275966b == '\0') {
    FUN_00b04fb0();
    FUN_00e87980();
  }
  unaff_RDI[3] = 0;
  if (DAT_027631c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027595c8 = FUN_00d4fe50();
      _DAT_027595b0 = "GNMidiFile";
      _DAT_027595b8 = 0x60;
      _DAT_027595c0 = FUN_00b66730;
      _DAT_027595d0 = 0;
      uRam00000000027595d8 = 0;
      _DAT_027595e0 = 0;
      _DAT_02759658 = 0;
      uRam0000000002759660 = 0;
      _DAT_02759668 = 0;
      DAT_0275966a = 1;
      _DAT_027595e8 = 0;
      uRam00000000027595f0 = 0;
      _DAT_027595f8 = 0;
      uRam0000000002759600 = 0;
      _DAT_02759608 = 0;
      uRam0000000002759610 = 0;
      _DAT_02759618 = 0;
      uRam0000000002759620 = 0;
      _DAT_02759628 = 0;
      uRam0000000002759630 = 0;
      _DAT_02759638 = 0;
      uRam0000000002759640 = 0;
      _DAT_02759648 = 0;
      uRam0000000002759650 = 0;
      DAT_02759673 = 0;
      _DAT_0275966b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275966b == '\0') {
    FUN_00b05140();
    FUN_00e87980();
  }
  FUN_00b052d0();
  FUN_00b05590();
  FUN_00b05850();
  FUN_00b05b10();
  *(undefined4 *)(unaff_RDI + 8) = 0;
  if (DAT_027631c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027595c8 = FUN_00d4fe50();
      _DAT_027595b0 = "GNMidiFile";
      _DAT_027595b8 = 0x60;
      _DAT_027595c0 = FUN_00b66730;
      _DAT_027595d0 = 0;
      uRam00000000027595d8 = 0;
      _DAT_027595e0 = 0;
      _DAT_02759658 = 0;
      uRam0000000002759660 = 0;
      _DAT_02759668 = 0;
      DAT_0275966a = 1;
      _DAT_027595e8 = 0;
      uRam00000000027595f0 = 0;
      _DAT_027595f8 = 0;
      uRam0000000002759600 = 0;
      _DAT_02759608 = 0;
      uRam0000000002759610 = 0;
      _DAT_02759618 = 0;
      uRam0000000002759620 = 0;
      _DAT_02759628 = 0;
      uRam0000000002759630 = 0;
      _DAT_02759638 = 0;
      uRam0000000002759640 = 0;
      _DAT_02759648 = 0;
      uRam0000000002759650 = 0;
      DAT_02759673 = 0;
      _DAT_0275966b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0275966b == '\0') {
    FUN_00b05dd0();
    FUN_00e87980();
  }
  FUN_00b05f60();
  FUN_00b06220();
  FUN_00b064e0();
  return;
}




// ============================================================
// @00b61330 — 1008 bytes
// ============================================================

void FUN_00b61330(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  longlong unaff_RDI;
  uint uVar11;
  uint uVar12;
  double local_90;
  
  piVar1 = *(int **)(unaff_RDI + 0x18);
  if (((*piVar1 == 0x46464952) && (piVar1[2] == 0x44494d52)) && (piVar1[3] == 0x61746164)) {
    FUN_00b61bc0();
    cVar4 = FUN_00b61b20();
    lVar2 = DAT_027630c8;
  }
  else {
    cVar4 = FUN_00b61b20();
    lVar2 = DAT_027630c8;
  }
  DAT_027630c8 = lVar2;
  if (cVar4 != 'M') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00b61b20();
  lVar2 = DAT_027630c8;
  if (cVar4 != 'T') {
    if (DAT_027630c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00b61b20();
  lVar2 = DAT_027630c8;
  if (cVar4 != 'h') {
    if (DAT_027630c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00b61b20();
  lVar2 = DAT_027630c8;
  if (cVar4 != 'd') {
    if (DAT_027630c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  bVar5 = FUN_00b61b20();
  bVar6 = FUN_00b61b20();
  bVar7 = FUN_00b61b20();
  bVar8 = FUN_00b61b20();
  lVar2 = DAT_027630c0;
  uVar12 = (uint)bVar8 | (uint)bVar7 << 8 | (uint)bVar6 << 0x10 | (uint)bVar5 << 0x18;
  if ((int)uVar12 < 6) {
    if (DAT_027630c0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  uVar9 = FUN_00b61b20();
  uVar10 = FUN_00b61b20();
  *(uint *)(unaff_RDI + 0x30) = (uint)CONCAT11(uVar9,uVar10);
  lVar2 = DAT_027630c8;
  if (1 < CONCAT11(uVar9,uVar10)) {
    if (DAT_027630c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  uVar9 = FUN_00b61b20();
  uVar10 = FUN_00b61b20();
  *(uint *)(unaff_RDI + 0x34) = (uint)CONCAT11(uVar9,uVar10);
  bVar5 = FUN_00b61b20();
  bVar6 = FUN_00b61b20();
  lVar2 = DAT_027630c8;
  uVar11 = (uint)CONCAT11(bVar5,bVar6);
  if (uVar11 < 0x8000) {
    *(double *)(unaff_RDI + 0x38) = DAT_0238fee8 / (double)uVar11;
    lVar2 = *(longlong *)(unaff_RDI + 0x10);
    *(undefined4 *)(lVar2 + 0xc) = 0;
    *(uint *)(lVar2 + 0x10) = uVar11;
  }
  else {
    bVar5 = 0x68 - (bVar5 & 0x7f);
    if ((bVar5 < 7) && ((99U >> (bVar5 & 0x1f) & 1) != 0)) {
      local_90 = *(double *)(&DAT_023d7ec8 + (longlong)(char)bVar5 * 8);
      lVar3 = DAT_027630c0;
    }
    else {
      if (DAT_027630c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      local_90 = 0.0;
      lVar3 = DAT_027630c0;
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar3 = DAT_027630c0;
      }
    }
    DAT_027630c0 = lVar3;
    if (bVar6 == 0) {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    *(double *)(unaff_RDI + 0x38) = DAT_0238fee8 / (local_90 * (double)bVar6);
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x10) + 0xc) = 1;
  }
  if (6 < (int)uVar12) {
    FUN_00b61bc0();
    *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
  }
  return;
}




// ============================================================
// @00b5e5b0 — 985 bytes
// str: ""\n)""
// str: ""(GNMidiFile (sequence %I, timebase %s, starttime offset %.4f, largest timestamp %.4f):\n  tempi:%@,"
// str: ""quarters""
// str: ""seconds""
// str: "",\n  keys:%@""
// ============================================================

void FUN_00b5e5b0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar3;
  char *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined8 *local_78;
  undefined4 local_70;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025795a8;
  (*DAT_025795c0)();
  local_b8 = "seconds";
  if (*(int *)(unaff_RSI + 0xc) == 0) {
    local_b8 = "quarters";
  }
  local_b0 = FUN_00b5ec40();
  local_88 = *(longlong *)(unaff_RSI + 0x20);
  uVar3 = FUN_00b66b80(unaff_RSI + 0x18,&local_b8,&local_b0,&local_88);
  uVar3 = FUN_00d94d80(uVar3,&local_78);
  local_78 = (undefined8 *)&DAT_0253ba60;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  local_78 = (undefined8 *)&DAT_0253ba98;
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x30);
  if (lVar1 != 0) {
    local_70 = 1;
    local_78 = &DAT_024c5048;
    local_60 = 0;
    uVar3 = FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar1;
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &DAT_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar1 != 0) {
    local_70 = 1;
    local_78 = &DAT_024c5048;
    local_60 = 0;
    uVar3 = FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar1;
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &DAT_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x48);
  if (lVar1 != 0) {
    local_a0 = 0;
    uVar3 = FUN_00d50b00();
    local_a0 = '\x01';
    local_a8 = lVar1;
    uVar3 = FUN_00d93320(uVar3,4);
    lVar1 = local_88;
    local_70 = 1;
    local_78 = &DAT_024c5048;
    local_60 = 0;
    if (local_88 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &DAT_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      uVar3 = FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar1 != 0) {
    local_90 = 0;
    uVar3 = FUN_00d50b00();
    local_90 = '\x01';
    local_98 = lVar1;
    uVar3 = FUN_00d93320(uVar3,4);
    lVar1 = local_88;
    local_70 = 1;
    local_78 = &DAT_024c5048;
    local_60 = 0;
    if (local_88 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &DAT_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      uVar3 = FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x58);
  local_70 = 1;
  local_78 = &DAT_024c5048;
  if (lVar1 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar1;
  FUN_00d94d80(uVar3,&local_78);
  local_78 = &DAT_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d8db40();
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00b64180 — 967 bytes
// ============================================================

undefined8 * FUN_00b64180(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar4;
  longlong local_c0;
  char local_b8;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(*unaff_RSI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x20);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x48);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        FUN_00b64970();
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
        }
        FUN_00b5da10();
        if (local_c0 != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00b66ae0();
  }
  lVar2 = *(longlong *)(*unaff_RSI + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00b61800 — 684 bytes
// ============================================================

void FUN_00b61800(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong unaff_RDI;
  int iVar12;
  
  cVar3 = FUN_00b61b20();
  cVar4 = FUN_00b61b20();
  cVar5 = FUN_00b61b20();
  cVar6 = FUN_00b61b20();
  bVar7 = FUN_00b61b20();
  uVar9 = FUN_00b61b20();
  bVar8 = FUN_00b61b20();
  FUN_00b61b20();
  if ((((cVar6 != 'k') || (cVar5 != 'r')) || (cVar4 != 'T')) || (cVar3 != 'M')) {
    *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
    FUN_00b61bc0((uint)bVar8 << 8 | (uint)bVar7 << 0x18 | (uVar9 & 0xff) << 0x10);
    return;
  }
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_0253b338;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  FUN_00d500e0();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x48);
  if (puVar1 == puVar11) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x48) = puVar11;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)(unaff_RDI + 0x50) = 0;
  *(undefined1 *)(unaff_RDI + 0x58) = 0;
  iVar12 = 0;
  do {
    iVar10 = FUN_00b61c60();
    *(int *)(unaff_RDI + 0x50) = *(int *)(unaff_RDI + 0x50) + iVar10;
    lVar2 = DAT_027630c0;
    if (**(char **)(unaff_RDI + 0x18) < '\0') {
      bVar7 = FUN_00b61b20();
      if (((char)bVar7 < '\0') && (bVar7 < 0xf0)) goto LAB_00b619f3;
      bVar8 = bVar7 & 0xf0;
      if (0xef < bVar7) {
        bVar8 = bVar7;
      }
      if ((bVar8 == 0xf0) || (bVar8 == 0xf7)) {
        cVar3 = FUN_00b621b0();
        goto LAB_00b619fb;
      }
      if (bVar8 == 0xff) {
        cVar3 = FUN_00b62530();
        goto LAB_00b619fb;
      }
      iVar10 = FUN_00b61f70();
      lVar2 = DAT_027630c0;
      if ((iVar10 < 0) || (*(int *)(unaff_RDI + 0x20) < iVar10)) {
        if (DAT_027630c0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
        FUN_00b61bc0();
      }
    }
    else {
      bVar7 = *(byte *)(unaff_RDI + 0x58);
      bVar8 = bVar7 & 0xf0;
      if (0xef < bVar7) {
        bVar8 = bVar7;
      }
      if (bVar8 == 0) {
        if (DAT_027630c0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
LAB_00b619f3:
      cVar3 = FUN_00b61dc0();
LAB_00b619fb:
      if (cVar3 != '\0') {
        iVar12 = *(int *)(unaff_RDI + 0x50);
      }
    }
    if (*(longlong *)(unaff_RDI + 0x48) == 0) {
      if (*(int *)(unaff_RDI + 0x54) < iVar12) {
        *(int *)(unaff_RDI + 0x54) = iVar12;
      }
      return;
    }
  } while( true );
}




// ============================================================
// @00b621b0 — 637 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b62359) */
/* WARNING: Removing unreachable block (ram,0x00b62362) */

ulonglong FUN_00b621b0(void)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RBX;
  ulonglong uVar5;
  byte unaff_SIL;
  longlong unaff_RDI;
  undefined4 uVar6;
  longlong local_78;
  char local_70;
  
  iVar3 = FUN_00b61c60();
  puVar4 = DAT_027630b8;
  if (*(int *)(unaff_RDI + 0x20) < iVar3) {
    if (DAT_027630b8 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    unaff_RBX = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *(byte *)(unaff_RDI + 0x58) = *(byte *)(unaff_RDI + 0x58) & 0xf;
  lVar1 = DAT_027630c0;
  bVar2 = unaff_SIL & 0xf0;
  if (0xef < unaff_SIL) {
    bVar2 = unaff_SIL;
  }
  if (bVar2 == 0xf0) {
    FUN_00b61d20();
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025683c0;
    (*DAT_025683d8)();
    uVar6 = FUN_00c92170();
    uVar6 = FUN_00c92190(uVar6,1);
    if (0 < iVar3) {
      FUN_00c92190(uVar6,iVar3);
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &DAT_02539e18;
    (*DAT_02539e30)();
    FUN_00b51c90();
    FUN_00b5d1a0(SUB84((double)*(int *)(unaff_RDI + 0x50) * *(double *)(unaff_RDI + 0x38),0));
    if ((*(char *)((longlong)iVar3 + -1 + *(longlong *)(unaff_RDI + 0x18)) != -9) &&
       (unaff_RBX = *(undefined8 **)(unaff_RDI + 0x60), unaff_RBX != puVar4)) {
      FUN_00d50b00();
      *(undefined8 **)(unaff_RDI + 0x60) = puVar4;
      if (unaff_RBX != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    FUN_00d50b20();
  }
  else {
    if (bVar2 == 0xf7) {
      if (*(longlong *)(unaff_RDI + 0x60) == 0) {
        *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) + 1;
      }
      else if (0 < iVar3) {
        uVar6 = FUN_00b51ee0();
        FUN_00c92190(uVar6,iVar3);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((*(char *)(*(longlong *)(unaff_RDI + 0x18) + (ulonglong)(iVar3 - 1)) == -9) &&
           (*(longlong *)(unaff_RDI + 0x60) != 0)) {
          *(undefined8 *)(unaff_RDI + 0x60) = 0;
          FUN_00d50b20();
        }
      }
    }
    else {
      if (DAT_027630c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    uVar5 = 0;
  }
  FUN_00b61bc0();
  return uVar5 & 0xffffffff;
}




// ============================================================
// @00b64970 — 582 bytes
// ============================================================

undefined8 *
FUN_00b64970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  bool bVar9;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_60;
  char in_stack_ffffffffffffffa8;
  undefined1 uVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00b5b3a0();
  if (in_stack_ffffffffffffffa8 == '\0') {
    if (local_60 == 0) goto LAB_00b64b89;
    FUN_00d50b00();
    if ((in_stack_ffffffffffffffa8 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
LAB_00b64a07:
    uVar10 = 0;
    uVar12 = 0xffffffff;
    iVar13 = 0;
    bVar9 = true;
    iVar8 = 0;
    while( true ) {
      if (iVar8 != 0) {
        if (iVar8 < 1) {
          iVar8 = -iVar8;
        }
        else {
          uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(int)uVar12 - iVar8);
          FUN_00d23690();
          iVar13 = iVar13 + (int)((ulonglong)uVar12 >> 0x20);
          iVar8 = 0;
        }
        uVar12 = CONCAT44(iVar8,(int)uVar12);
      }
      iVar11 = (int)uVar12;
      iVar8 = iVar11 + 1;
      uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),iVar8);
      if (*(int *)(local_60 + 0xc) <= iVar8) break;
      plVar1 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + (longlong)iVar11 * 8);
      cVar4 = FUN_00b51d60();
      uVar5 = extraout_XMM0_Da;
      if ((cVar4 == '\0') ||
         (cVar4 = (**(code **)(*plVar1 + 0x368))(), uVar5 = extraout_XMM0_Da_00, cVar4 != '\0')) {
        if (!bVar9) {
          FUN_00c92190(uVar5,1,param_3,param_4,uVar10,local_60,uVar12,iVar13);
        }
        (**(code **)(*plVar1 + 0x378))();
        uVar5 = (**(code **)(*plVar1 + 0x370))();
        FUN_00c92190(extraout_XMM0_Da_01,uVar5);
        bVar9 = false;
      }
      iVar8 = (int)((ulonglong)uVar12 >> 0x20);
    }
    FUN_00b671d0();
    bVar9 = false;
    bVar3 = bVar9;
    if (*(int *)(puVar6 + 3) < 1) goto LAB_00b64b9a;
LAB_00b64b13:
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_0253a558;
    puVar7[2] = 0;
    puVar7[3] = 0;
    FUN_00d500e0();
    uVar12 = FUN_00b5beb0();
    puVar7[2] = uVar12;
    puVar2 = (undefined8 *)puVar7[3];
    if (puVar2 != puVar6) {
      FUN_00d50b00();
      puVar7[3] = puVar6;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    *unaff_RDI = puVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (bVar9) goto LAB_00b64bb6;
  }
  else {
    if (local_60 != 0) goto LAB_00b64a07;
LAB_00b64b89:
    bVar9 = true;
    bVar3 = true;
    if (0 < *(int *)(puVar6 + 3)) goto LAB_00b64b13;
LAB_00b64b9a:
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (bVar3) goto LAB_00b64bb6;
  }
  FUN_00d50b20();
LAB_00b64bb6:
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @00b5ec40 — 576 bytes
// ============================================================

double FUN_00b5ec40(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  double dVar5;
  double local_38;
  double local_30;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar1 == 0) {
    local_30 = 0.0;
  }
  else {
    FUN_00d50b00();
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_30 = 0.0;
    }
    else {
      local_30 = 0.0;
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8);
        local_38 = 0.0;
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          local_38 = (double)FUN_00b5de00();
        }
        if ((*(longlong *)(lVar2 + 0x40) != 0) && (dVar5 = (double)FUN_00b5dec0(), local_38 < dVar5)
           ) {
          local_38 = (double)FUN_00b5dec0();
        }
        if ((*(longlong *)(lVar2 + 0x48) != 0) && (dVar5 = (double)FUN_00b5dec0(), local_38 < dVar5)
           ) {
          local_38 = (double)FUN_00b5dec0();
        }
        if (local_30 < local_38) {
          if (*(longlong *)(lVar2 + 0x10) == 0) {
            local_30 = 0.0;
            lVar3 = *(longlong *)(lVar2 + 0x40);
          }
          else {
            local_30 = (double)FUN_00b5de00();
            lVar3 = *(longlong *)(lVar2 + 0x40);
          }
          if ((lVar3 != 0) && (dVar5 = (double)FUN_00b5dec0(), local_30 < dVar5)) {
            local_30 = (double)FUN_00b5dec0();
          }
          if ((*(longlong *)(lVar2 + 0x48) != 0) &&
             (dVar5 = (double)FUN_00b5dec0(), local_30 < dVar5)) {
            local_30 = (double)FUN_00b5dec0();
          }
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00b67020();
  }
  dVar5 = (double)FUN_00b60820();
  if (local_30 < dVar5) {
    local_30 = (double)FUN_00b60820();
  }
  dVar5 = (double)FUN_00b608b0();
  if (local_30 < dVar5) {
    local_30 = (double)FUN_00b608b0();
  }
  if ((*(longlong *)(unaff_RDI + 0x30) != 0) && (dVar5 = (double)FUN_00b60940(), local_30 < dVar5))
  {
    local_30 = (double)FUN_00b60940();
  }
  if ((*(longlong *)(unaff_RDI + 0x38) != 0) && (dVar5 = (double)FUN_00b5dec0(), local_30 < dVar5))
  {
    local_30 = (double)FUN_00b5dec0();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return local_30;
}




// ============================================================
// @00b04d60 — 550 bytes
// str: ""GNMidiFile""
// str: ""GNMidiFileTimeBase""
// str: ""_timeBase""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00b04d60(void)

{
  int iVar1;
  
  if (DAT_027aaed8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027aaec8 = 0x100000000;
      DAT_027aaed0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027aaf10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027aaee0 = "GNMidiFileTimeBase";
      _DAT_027aaee8 = 2;
      DAT_027aaeec = DAT_027aaed0;
      _DAT_027aaef0 = &DAT_027aaec8;
      _DAT_027aaef8 = &DAT_027aaeb0;
      _DAT_027aaf00 = 0;
      uRam00000000027aaf08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027596c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027631c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027595c8 = FUN_00d4fe50();
          _DAT_027595b0 = "GNMidiFile";
          _DAT_027595b8 = 0x60;
          _DAT_027595c0 = FUN_00b66730;
          _DAT_027595d0 = 0;
          uRam00000000027595d8 = 0;
          _DAT_027595e0 = 0;
          _DAT_02759658 = 0;
          uRam0000000002759660 = 0;
          _DAT_02759668 = 0;
          DAT_0275966a = 1;
          _DAT_027595e8 = 0;
          uRam00000000027595f0 = 0;
          _DAT_027595f8 = 0;
          uRam0000000002759600 = 0;
          _DAT_02759608 = 0;
          uRam0000000002759610 = 0;
          _DAT_02759618 = 0;
          uRam0000000002759620 = 0;
          _DAT_02759628 = 0;
          uRam0000000002759630 = 0;
          _DAT_02759638 = 0;
          uRam0000000002759640 = 0;
          _DAT_02759648 = 0;
          uRam0000000002759650 = 0;
          DAT_02759673 = 0;
          _DAT_0275966b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02759680 = "_timeBase";
      _DAT_02759688 = &DAT_027595b0;
      _DAT_02759690 = 0;
      _DAT_02759698 = 0x6500;
      _DAT_027596a0 = "GNMidiFileTimeBase";
      _DAT_027596a8 = &DAT_027aaee0;
      _DAT_027596b0 = 0;
      uRam00000000027596b8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_02759680;
}



