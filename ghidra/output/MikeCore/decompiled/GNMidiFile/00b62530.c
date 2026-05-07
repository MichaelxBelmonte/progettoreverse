// Function: FUN_00b62530
// Address: 00b62530
// Size: 2992 bytes
// Class: GNMidiFile


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


