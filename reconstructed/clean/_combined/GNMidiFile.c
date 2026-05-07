// ===================================================================
// GNMidiFile — Complete reconstructed pseudocode
// 12 functions
// ===================================================================

// Registered properties (1):
//   GNMidiFileTimeBase _timeBase


// ============================================================
// 00b62530
// ============================================================
// Function: FUN_00b62530
// Address: 00b62530
// Size: 2992 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


uint64_t FUN_00b62530(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int64_t lVar4;
  byte *pbVar5;
  uint64_t uVar6;
  char *pcVar7;
  int64_t lVar8;
  uint8_t uVar9;
  int iVar10;
  uint uVar11;
  int64_t unaff_RBX;
  undefined7 uVar13;
  uint64_t uVar12;
  int64_t this_ptr;
  int64_t *plVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int64_t local_40;
  char local_38;
  
  uVar9 = FUN_00b61b20();
  iVar10 = FUN_00b61c60();
  lVar4 = g_027630b8;
  if (*(int *)(this_ptr + 0x20) < iVar10) {
    if (g_027630b8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    unaff_RBX = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  *(byte *)(this_ptr + 0x58) = *(byte *)(this_ptr + 0x58) & 0xf;
  FUN_00b61d20();
  lVar4 = g_027630c0;
  uVar13 = (undefined7)((uint64_t)unaff_RBX >> 8);
  switch(uVar9) {
  case 0:
    if (iVar10 != 1) {
      if (2 < iVar10) {
        *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
      }
      if ((*(int *)(this_ptr + 0x40) == 0) && (*(int *)(this_ptr + 0x50) == 0)) {
        if (iVar10 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (uint)**(ushort **)(this_ptr + 0x18) << 0x10;
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8;
        }
        uVar3 = *(uint *)(*(int64_t *)(this_ptr + 0x10) + 0x40);
        if (uVar3 == uVar11) goto LAB_00b62d53;
        if (uVar3 == 0) {
          *(uint *)(*(int64_t *)(this_ptr + 0x10) + 0x40) = uVar11;
          uVar12 = CONCAT71(uVar13,1);
          goto LAB_00b62d55;
        }
      }
    }
    break;
  case 1:
    uVar6 = *(void*)(this_ptr + 0x48);
    FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00b5d890((double)*(int *)(this_ptr + 0x50) * *(double *)(this_ptr + 0x38));
    uVar12 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00b62d55;
  case 2:
    if ((*(int *)(this_ptr + 0x40) == 0) && (*(int *)(this_ptr + 0x50) == 0)) {
      lVar4 = *(int64_t *)(this_ptr + 0x10);
      if (*(int64_t *)(lVar4 + 0x50) == 0) {
        FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        lVar8 = *(int64_t *)(lVar4 + 0x50);
        if (lVar8 != local_40) {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *(int64_t *)(lVar4 + 0x50) = local_40;
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
        }
        uVar12 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
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
    if (*(int *)(this_ptr + 0x50) == 0) {
      FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      if (*(int *)(this_ptr + 0x40) == 0) {
        lVar4 = *(int64_t *)(this_ptr + 0x10);
        if (*(int64_t *)(lVar4 + 0x48) == 0) {
          if (local_40 == 0) goto LAB_00b6304c;
          FUN_00d50b00();
          plVar14 = (int64_t *)(lVar4 + 0x48);
          goto LAB_00b63039;
        }
        FUN_00d50b00();
        FUN_00d50b20();
LAB_00b62ecc:
        *(int *)(this_ptr + 0x24) = *(int *)(this_ptr + 0x24) + 1;
        uVar12 = 0;
        if (local_40 == 0) goto LAB_00b62d55;
      }
      else {
        lVar4 = *(int64_t *)(this_ptr + 0x48);
        if (*(int64_t *)(lVar4 + 0x18) != 0) {
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
        plVar14 = (int64_t *)(lVar4 + 0x18);
LAB_00b63039:
        *plVar14 = local_40;
        uVar12 = 1;
      }
      FUN_00d50b20();
      goto LAB_00b62d55;
    }
    break;
  case 4:
    if (*(int *)(this_ptr + 0x50) == 0) {
      FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      lVar4 = *(int64_t *)(this_ptr + 0x48);
      if (*(int64_t *)(lVar4 + 0x28) == 0) {
        lVar8 = *(int64_t *)(lVar4 + 0x28);
        if (lVar8 != local_40) {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *(int64_t *)(lVar4 + 0x28) = local_40;
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
      uVar12 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00b62d55;
    }
    break;
  case 5:
    uVar6 = *(void*)(this_ptr + 0x48);
    FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00b5db00((double)*(int *)(this_ptr + 0x50) * *(double *)(this_ptr + 0x38));
    uVar12 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00b62d55;
  case 6:
    if (*(int *)(this_ptr + 0x40) == 0) {
      uVar6 = *(void*)(this_ptr + 0x10);
      FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00b61110((double)*(int *)(this_ptr + 0x50) * *(double *)(this_ptr + 0x38));
      uVar12 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00b62d55;
    }
    break;
  case 7:
    uVar6 = *(void*)(this_ptr + 0x48);
    FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00b5dc80((double)*(int *)(this_ptr + 0x50) * *(double *)(this_ptr + 0x38));
    uVar12 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00b62d55;
  case 8:
    if (*(int *)(this_ptr + 0x50) == 0) {
      FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      lVar4 = *(int64_t *)(this_ptr + 0x48);
      if (*(int64_t *)(lVar4 + 0x30) == 0) {
        lVar8 = *(int64_t *)(lVar4 + 0x30);
        if (lVar8 != local_40) {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *(int64_t *)(lVar4 + 0x30) = local_40;
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
      uVar12 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00b62d55;
    }
    break;
  case 9:
    if (*(int *)(this_ptr + 0x50) != 0) break;
    lVar4 = *(int64_t *)(this_ptr + 0x48);
    if (*(int64_t *)(lVar4 + 0x38) == 0) {
      FUN_00c8e2b0(&switchD_00b625d1::switchdataD_00b636b0,iVar10);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      lVar8 = *(int64_t *)(lVar4 + 0x38);
      if (lVar8 != local_40) {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *(int64_t *)(lVar4 + 0x38) = local_40;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      uVar12 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00b62d55;
    }
    FUN_00d50b00();
    *(int *)(this_ptr + 0x24) = *(int *)(this_ptr + 0x24) + 1;
    FUN_00d50b20();
    goto LAB_00b62d53;
  default:
    *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
    goto LAB_00b62d53;
  case 0x20:
    if (0 < iVar10) {
      if (iVar10 != 1) {
        *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
      }
      if (**(byte **)(this_ptr + 0x18) < 0x10) {
        *(byte *)(this_ptr + 0x58) = **(byte **)(this_ptr + 0x18);
        goto LAB_00b62d53;
      }
    }
    break;
  case 0x2f:
    if (iVar10 != 0) {
      if (g_027630c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x60) != 0) {
      *(void*)(this_ptr + 0x60) = 0;
      FUN_00d50b20();
    }
    lVar4 = *(int64_t *)(this_ptr + 0x48);
    if (((((*(int64_t *)(lVar4 + 0x10) != 0) || (*(int64_t *)(lVar4 + 0x18) != 0)) ||
         (*(int64_t *)(lVar4 + 0x20) != 0)) ||
        ((*(int64_t *)(lVar4 + 0x28) != 0 || (*(int64_t *)(lVar4 + 0x30) != 0)))) ||
       ((*(int64_t *)(lVar4 + 0x38) != 0 ||
        ((*(int64_t *)(lVar4 + 0x40) != 0 || (*(int64_t *)(lVar4 + 0x48) != 0)))))) {
      FUN_00d50b00();
      FUN_00d21140();
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x48) != 0) {
      *(void*)(this_ptr + 0x48) = 0;
      FUN_00d50b20();
    }
    goto LAB_00b62d53;
  case 0x51:
    if (2 < iVar10) {
      if (iVar10 != 3) {
        *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
      }
      if (*(int *)(this_ptr + 0x40) == 0) {
        pbVar5 = *(byte **)(this_ptr + 0x18);
        dVar15 = (double)((uint)pbVar5[2] | (uint)pbVar5[1] << 8 | (uint)*pbVar5 << 0x10) *
                 g_023d7d68;
        dVar16 = 0.0;
        if (0.0 < dVar15) {
          if (*(char *)(this_ptr + 0x2c) != '\0') {
            dVar16 = (double)*(int *)(this_ptr + 0x50) * *(double *)(this_ptr + 0x38);
          }
          FUN_00b5f040((uint)*pbVar5 << 0x10,dVar16);
          *(void*)(this_ptr + 0x2c) = 1;
        }
        else {
          *(int *)(this_ptr + 0x24) = *(int *)(this_ptr + 0x24) + 1;
        }
        uVar12 = CONCAT71(uVar13,0.0 < dVar15);
        goto LAB_00b62d55;
      }
    }
    break;
  case 0x54:
    if (4 < iVar10) {
      if (iVar10 != 5) {
        *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
      }
      if (((((*(int *)(this_ptr + 0x40) == 0) && (*(int *)(this_ptr + 0x50) == 0)) &&
           ((pcVar7 = *(char **)(this_ptr + 0x18), -1 < *pcVar7 &&
            (((byte)pcVar7[1] < 0x3c && ((byte)pcVar7[2] < 0x3c)))))) && ((byte)pcVar7[3] < 0x1e))
         && ((byte)pcVar7[4] < 100)) {
        dVar15 = (double)(byte)pcVar7[4] * g_02391030;
        dVar16 = (double)FUN_00b38380();
        dVar17 = (double)FUN_00b383b0();
        dVar17 = dVar17 + dVar16 * dVar15;
        dVar15 = *(double *)(*(int64_t *)(this_ptr + 0x10) + 0x18);
        if ((dVar15 == dVar17) && (!NAN(dVar15) && !NAN(dVar17))) goto LAB_00b62d53;
        if ((dVar15 == 0.0) && (!NAN(dVar15))) {
          *(double *)(*(int64_t *)(this_ptr + 0x10) + 0x18) = dVar17;
          uVar12 = 1;
          goto LAB_00b62d55;
        }
      }
    }
    break;
  case 0x58:
    if (3 < iVar10) {
      if (iVar10 != 4) {
        *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
      }
      if (((*(int *)(this_ptr + 0x40) == 0) &&
          (pcVar7 = *(char **)(this_ptr + 0x18), *pcVar7 != '\0')) &&
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
              uVar12 = (uint64_t)(uint)((int)uVar12 << 8);
              iVar10 = iVar10 + 8;
            } while (iVar10 != 0);
          }
          if ((bVar1 & 7) != 0) {
            do {
              uVar12 = (uint64_t)(uint)((int)uVar12 * 2);
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        cVar2 = pcVar7[2];
        if (cVar2 == '\0') {
          *(int *)(this_ptr + 0x24) = *(int *)(this_ptr + 0x24) + 1;
        }
        else {
          FUN_00e7bcc0();
          FUN_00b60b60((double)*(int *)(this_ptr + 0x50) * *(double *)(this_ptr + 0x38),uVar12);
        }
        uVar12 = CONCAT71((int7)(uVar12 >> 8),cVar2 != '\0');
        goto LAB_00b62d55;
      }
    }
    break;
  case 0x59:
    if (1 < iVar10) {
      if (iVar10 != 2) {
        *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
      }
      if (*(int *)(this_ptr + 0x40) == 0) {
        FUN_00b60dd0((double)*(int *)(this_ptr + 0x50) * *(double *)(this_ptr + 0x38));
        uVar12 = CONCAT71(uVar13,1);
        goto LAB_00b62d55;
      }
    }
  }
  *(int *)(this_ptr + 0x24) = *(int *)(this_ptr + 0x24) + 1;
LAB_00b62d53:
  uVar12 = 0;
LAB_00b62d55:
  FUN_00b61bc0();
  return uVar12 & 0xffffffff;
}



// ============================================================
// 00b5fd00
// ============================================================
// Function: FUN_00b5fd00
// Address: 00b5fd00
// Size: 2158 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


uint64_t FUN_00b5fd00(uint64_t param_1,int64_t *param_2)

{
  double dVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  void*puVar8;
  int64_t lVar9;
  void*puVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  int iVar14;
  double dVar15;
  uint64_t uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double local_90;
  int64_t local_78;
  char local_70;
  int local_50;
  
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*g_02572370)();
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
  lVar3 = *(int64_t *)(*param_2 + 0x58);
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
    if (puVar8 == (void*)0x0) {
      dVar15 = 0.0;
      bVar5 = true;
      lVar9 = *param_2;
      iVar14 = *(int *)(lVar9 + 0xc);
      lVar4 = g_027630d0;
      goto joined_r0x00b60055;
    }
  }
  if (*(int *)((int64_t)puVar8 + 0xc) < 1) {
    dVar15 = 0.0;
  }
  else {
    dVar15 = 0.0;
    uVar12 = 0;
    do {
      lVar9 = *(int64_t *)(puVar8[2] + (uint64_t)uVar12 * 8);
      uVar2 = *(uint *)(lVar9 + 0xc);
      if (0 < (int)uVar2) {
        lVar9 = *(int64_t *)(lVar9 + 0x10);
        if ((uint64_t)uVar2 - 1 < 3) {
          dVar17 = 0.0;
          uVar13 = 0;
        }
        else {
          dVar17 = 0.0;
          uVar13 = 0;
          do {
            dVar18 = *(double *)(*(int64_t *)(lVar9 + uVar13 * 8) + 0x10);
            dVar19 = *(double *)(*(int64_t *)(lVar9 + 8 + uVar13 * 8) + 0x10);
            dVar1 = *(double *)(*(int64_t *)(lVar9 + 0x10 + uVar13 * 8) + 0x10);
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
            dVar17 = *(double *)(*(int64_t *)(lVar9 + 0x18 + uVar13 * 8) + 0x10);
            dVar15 = dVar17 - dVar1;
            if (dVar15 <= dVar20) {
              dVar15 = dVar20;
            }
            uVar13 = uVar13 + 4;
          } while ((uVar2 & 0xfffffffc) != uVar13);
        }
        if ((uint64_t)(uVar2 & 3) != 0) {
          uVar11 = 0;
          do {
            dVar18 = *(double *)(*(int64_t *)(lVar9 + uVar13 * 8 + uVar11 * 8) + 0x10);
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
    } while ((int)uVar12 < *(int *)((int64_t)puVar8 + 0xc));
  }
  FUN_00b670c0();
  bVar5 = false;
  lVar9 = *param_2;
  iVar14 = *(int *)(lVar9 + 0xc);
  lVar4 = g_027630d0;
joined_r0x00b60055:
  g_027630d0 = lVar4;
  if (iVar14 == 0) {
    iVar14 = *(int *)(lVar9 + 0x10);
    if (iVar14 == 0) {
      iVar14 = 0x30;
      if ((dVar15 != 0.0) || (NAN(dVar15))) {
        lVar9 = (int64_t)(g_023d7d60 / dVar15);
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
      iVar7 = (int)(g_023d7d58 / dVar15);
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
  pcVar6 = g_025683d8;
  if (!bVar5) {
    iVar14 = -1;
    while (iVar14 = iVar14 + 1, iVar14 < *(int *)((int64_t)puVar8 + 0xc)) {
      lVar9 = *(int64_t *)(puVar8[2] + (int64_t)iVar14 * 8);
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &g_025683c0;
      (*pcVar6)();
      uVar16 = FUN_00c92170();
      uVar12 = *(uint *)(lVar9 + 0xc);
      if (0 < (int)uVar12) {
        uVar13 = 0;
        do {
          lVar4 = *(int64_t *)(*(int64_t *)(lVar9 + 0x10) + uVar13 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          FUN_00b647f0(*(double *)(lVar4 + 0x10) * local_90 + g_023942d0);
          lVar4 = *(int64_t *)(lVar4 + 0x18);
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
// 00b63820
// ============================================================
// Function: FUN_00b63820
// Address: 00b63820
// Size: 1518 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void* FUN_00b63820(void)

{
  void*puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar6;
  double dVar7;
  void*local_140;
  uint8_t local_138;
  int64_t local_130;
  uint8_t local_128;
  void*local_120;
  uint8_t local_118;
  uint64_t local_110;
  uint8_t local_108;
  uint64_t local_100;
  uint8_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8;
  int64_t local_e0;
  uint8_t local_d8;
  void*local_d0;
  uint8_t local_c8;
  int64_t local_68;
  char local_60;
  int local_40;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02572358;
  uVar6 = (*g_02572370)();
  lVar2 = *(int64_t *)(*arg1 + 0x50);
  if (lVar2 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_138 = 0;
  local_140 = puVar1;
  FUN_00b65690(uVar6,&local_140);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = *arg1;
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
    lVar2 = *arg1;
  }
  lVar2 = *(int64_t *)(lVar2 + 0x48);
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
  lVar2 = *arg1;
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
    lVar2 = *arg1;
  }
  lVar2 = *(int64_t *)(lVar2 + 0x20);
  if (lVar2 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      local_110 = *(void*)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar3 * 8);
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
  lVar3 = *(int64_t *)(*arg1 + 0x28);
  if (lVar3 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      local_100 = *(void*)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar4 * 8);
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
  lVar4 = *(int64_t *)(*arg1 + 0x30);
  if (lVar4 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar5 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar4 + 0xc) <= local_40) break;
      local_f0 = *(void*)(*(int64_t *)(lVar4 + 0x10) + 8 + lVar5 * 8);
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
  lVar5 = *(int64_t *)(*arg1 + 0x38);
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
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00b5e5b0
// ============================================================
// Function: FUN_00b5e5b0
// Address: 00b5e5b0
// Size: 985 bytes
// Class: GNMidiFile
// String references:
//   "\n)"
//   "(GNMidiFile (sequence %I, timebase %s, starttime offset %.4f, largest timestamp %.4f):\n  tempi:%@,...
//   "quarters"
//   "seconds"
//   ",\n  keys:%@"
//   ",\n  markers:%@"
//   ",\n  sequencename:%@"
//   ",\n  copyright:%@"
//   "\n  tracks:%@"
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void FUN_00b5e5b0(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar3;
  char *local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  void*local_78;
  uint32_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025795a8;
  (*g_025795c0)();
  local_b8 = "seconds";
  if (*(int *)(arg1 + 0xc) == 0) {
    local_b8 = "quarters";
  }
  local_b0 = FUN_00b5ec40();
  local_88 = *(int64_t *)(arg1 + 0x20);
  uVar3 = FUN_00b66b80(arg1 + 0x18,&local_b8,&local_b0,&local_88);
  uVar3 = FUN_00d94d80(uVar3,&local_78);
  local_78 = (void*)&g_0253ba60;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  local_78 = (void*)&g_0253ba98;
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(arg1 + 0x30);
  if (lVar1 != 0) {
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = 0;
    uVar3 = FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar1;
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &g_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x38);
  if (lVar1 != 0) {
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = 0;
    uVar3 = FUN_00d50b00();
    local_60 = '\x01';
    local_68 = lVar1;
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &g_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar3 = FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(arg1 + 0x48);
  if (lVar1 != 0) {
    local_a0 = 0;
    uVar3 = FUN_00d50b00();
    local_a0 = '\x01';
    local_a8 = lVar1;
    uVar3 = FUN_00d93320(uVar3,4);
    lVar1 = local_88;
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = 0;
    if (local_88 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &g_024c5048;
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
  lVar1 = *(int64_t *)(arg1 + 0x50);
  if (lVar1 != 0) {
    local_90 = 0;
    uVar3 = FUN_00d50b00();
    local_90 = '\x01';
    local_98 = lVar1;
    uVar3 = FUN_00d93320(uVar3,4);
    lVar1 = local_88;
    local_70 = 1;
    local_78 = &g_024c5048;
    local_60 = 0;
    if (local_88 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    uVar3 = FUN_00d94d80(uVar3,&local_78);
    local_78 = &g_024c5048;
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
  lVar1 = *(int64_t *)(arg1 + 0x58);
  local_70 = 1;
  local_78 = &g_024c5048;
  if (lVar1 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar1;
  FUN_00d94d80(uVar3,&local_78);
  local_78 = &g_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d8db40();
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00b61330
// ============================================================
// Function: FUN_00b61330
// Address: 00b61330
// Size: 1008 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void FUN_00b61330(void)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint8_t uVar9;
  uint8_t uVar10;
  int64_t this_ptr;
  uint uVar11;
  uint uVar12;
  double local_90;
  
  piVar1 = *(int **)(this_ptr + 0x18);
  if (((*piVar1 == 0x46464952) && (piVar1[2] == 0x44494d52)) && (piVar1[3] == 0x61746164)) {
    FUN_00b61bc0();
    cVar4 = FUN_00b61b20();
    lVar2 = g_027630c8;
  }
  else {
    cVar4 = FUN_00b61b20();
    lVar2 = g_027630c8;
  }
  g_027630c8 = lVar2;
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
  lVar2 = g_027630c8;
  if (cVar4 != 'T') {
    if (g_027630c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00b61b20();
  lVar2 = g_027630c8;
  if (cVar4 != 'h') {
    if (g_027630c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00b61b20();
  lVar2 = g_027630c8;
  if (cVar4 != 'd') {
    if (g_027630c8 != 0) {
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
  lVar2 = g_027630c0;
  uVar12 = (uint)bVar8 | (uint)bVar7 << 8 | (uint)bVar6 << 0x10 | (uint)bVar5 << 0x18;
  if ((int)uVar12 < 6) {
    if (g_027630c0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  uVar9 = FUN_00b61b20();
  uVar10 = FUN_00b61b20();
  *(uint *)(this_ptr + 0x30) = (uint)CONCAT11(uVar9,uVar10);
  lVar2 = g_027630c8;
  if (1 < CONCAT11(uVar9,uVar10)) {
    if (g_027630c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  uVar9 = FUN_00b61b20();
  uVar10 = FUN_00b61b20();
  *(uint *)(this_ptr + 0x34) = (uint)CONCAT11(uVar9,uVar10);
  bVar5 = FUN_00b61b20();
  bVar6 = FUN_00b61b20();
  lVar2 = g_027630c8;
  uVar11 = (uint)CONCAT11(bVar5,bVar6);
  if (uVar11 < 0x8000) {
    *(double *)(this_ptr + 0x38) = g_0238fee8 / (double)uVar11;
    lVar2 = *(int64_t *)(this_ptr + 0x10);
    *(void*)(lVar2 + 0xc) = 0;
    *(uint *)(lVar2 + 0x10) = uVar11;
  }
  else {
    bVar5 = 0x68 - (bVar5 & 0x7f);
    if ((bVar5 < 7) && ((99U >> (bVar5 & 0x1f) & 1) != 0)) {
      local_90 = *(double *)(&g_023d7ec8 + (int64_t)(char)bVar5 * 8);
      lVar3 = g_027630c0;
    }
    else {
      if (g_027630c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      local_90 = 0.0;
      lVar3 = g_027630c0;
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar3 = g_027630c0;
      }
    }
    g_027630c0 = lVar3;
    if (bVar6 == 0) {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    *(double *)(this_ptr + 0x38) = g_0238fee8 / (local_90 * (double)bVar6);
    *(void*)(*(int64_t *)(this_ptr + 0x10) + 0xc) = 1;
  }
  if (6 < (int)uVar12) {
    FUN_00b61bc0();
    *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
  }
  return;
}



// ============================================================
// 00b64970
// ============================================================
// Function: FUN_00b64970
// Address: 00b64970
// Size: 582 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void*
FUN_00b64970(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  void*puVar2;
  bool bVar3;
  char cVar4;
  uint32_t uVar5;
  void*puVar6;
  void*puVar7;
  int iVar8;
  bool bVar9;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_60;
  char in_stack_ffffffffffffffa8;
  uint8_t uVar10;
  int iVar11;
  uint64_t uVar12;
  int iVar13;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025683c0;
  (*g_025683d8)();
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
          uVar12 = CONCAT44((int)((uint64_t)uVar12 >> 0x20),(int)uVar12 - iVar8);
          FUN_00d23690();
          iVar13 = iVar13 + (int)((uint64_t)uVar12 >> 0x20);
          iVar8 = 0;
        }
        uVar12 = CONCAT44(iVar8,(int)uVar12);
      }
      iVar11 = (int)uVar12;
      iVar8 = iVar11 + 1;
      uVar12 = CONCAT44((int)((uint64_t)uVar12 >> 0x20),iVar8);
      if (*(int *)(local_60 + 0xc) <= iVar8) break;
      plVar1 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + (int64_t)iVar11 * 8);
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
      iVar8 = (int)((uint64_t)uVar12 >> 0x20);
    }
    FUN_00b671d0();
    bVar9 = false;
    bVar3 = bVar9;
    if (*(int *)(puVar6 + 3) < 1) goto LAB_00b64b9a;
LAB_00b64b13:
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_0253a558;
    puVar7[2] = 0;
    puVar7[3] = 0;
    FUN_00d500e0();
    uVar12 = FUN_00b5beb0();
    puVar7[2] = uVar12;
    puVar2 = (void*)puVar7[3];
    if (puVar2 != puVar6) {
      FUN_00d50b00();
      puVar7[3] = puVar6;
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
    if (bVar9) goto LAB_00b64bb6;
  }
  else {
    if (local_60 != 0) goto LAB_00b64a07;
LAB_00b64b89:
    bVar9 = true;
    bVar3 = true;
    if (0 < *(int *)(puVar6 + 3)) goto LAB_00b64b13;
LAB_00b64b9a:
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
    if (bVar3) goto LAB_00b64bb6;
  }
  FUN_00d50b20();
LAB_00b64bb6:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 00b61800
// ============================================================
// Function: FUN_00b61800
// Address: 00b61800
// Size: 684 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void FUN_00b61800(void)

{
  void*puVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  void*puVar11;
  int64_t this_ptr;
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
    *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
    FUN_00b61bc0((uint)bVar8 << 8 | (uint)bVar7 << 0x18 | (uVar9 & 0xff) << 0x10);
    return;
  }
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &g_0253b338;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  FUN_00d500e0();
  puVar1 = *(void**)(this_ptr + 0x48);
  if (puVar1 == puVar11) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x48) = puVar11;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x50) = 0;
  *(void*)(this_ptr + 0x58) = 0;
  iVar12 = 0;
  do {
    iVar10 = FUN_00b61c60();
    *(int *)(this_ptr + 0x50) = *(int *)(this_ptr + 0x50) + iVar10;
    lVar2 = g_027630c0;
    if (**(char **)(this_ptr + 0x18) < '\0') {
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
      lVar2 = g_027630c0;
      if ((iVar10 < 0) || (*(int *)(this_ptr + 0x20) < iVar10)) {
        if (g_027630c0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
        FUN_00b61bc0();
      }
    }
    else {
      bVar7 = *(byte *)(this_ptr + 0x58);
      bVar8 = bVar7 & 0xf0;
      if (0xef < bVar7) {
        bVar8 = bVar7;
      }
      if (bVar8 == 0) {
        if (g_027630c0 != 0) {
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
        iVar12 = *(int *)(this_ptr + 0x50);
      }
    }
    if (*(int64_t *)(this_ptr + 0x48) == 0) {
      if (*(int *)(this_ptr + 0x54) < iVar12) {
        *(int *)(this_ptr + 0x54) = iVar12;
      }
      return;
    }
  } while( true );
}



// ============================================================
// 00b621b0
// ============================================================
// Function: FUN_00b621b0
// Address: 00b621b0
// Size: 637 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


uint64_t FUN_00b621b0(void)

{
  int64_t lVar1;
  byte bVar2;
  int iVar3;
  void*puVar4;
  void*unaff_RBX;
  uint64_t uVar5;
  byte unaff_SIL;
  int64_t this_ptr;
  uint32_t uVar6;
  int64_t local_78;
  char local_70;
  
  iVar3 = FUN_00b61c60();
  puVar4 = g_027630b8;
  if (*(int *)(this_ptr + 0x20) < iVar3) {
    if (g_027630b8 != (void*)0x0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    unaff_RBX = puVar4;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *(byte *)(this_ptr + 0x58) = *(byte *)(this_ptr + 0x58) & 0xf;
  lVar1 = g_027630c0;
  bVar2 = unaff_SIL & 0xf0;
  if (0xef < unaff_SIL) {
    bVar2 = unaff_SIL;
  }
  if (bVar2 == 0xf0) {
    FUN_00b61d20();
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_025683c0;
    (*g_025683d8)();
    uVar6 = FUN_00c92170();
    uVar6 = FUN_00c92190(uVar6,1);
    if (0 < iVar3) {
      FUN_00c92190(uVar6,iVar3);
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &g_02539e18;
    (*g_02539e30)();
    FUN_00b51c90();
    FUN_00b5d1a0(SUB84((double)*(int *)(this_ptr + 0x50) * *(double *)(this_ptr + 0x38),0));
    if ((*(char *)((int64_t)iVar3 + -1 + *(int64_t *)(this_ptr + 0x18)) != -9) &&
       (unaff_RBX = *(void**)(this_ptr + 0x60), unaff_RBX != puVar4)) {
      FUN_00d50b00();
      *(void**)(this_ptr + 0x60) = puVar4;
      if (unaff_RBX != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    uVar5 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    FUN_00d50b20();
  }
  else {
    if (bVar2 == 0xf7) {
      if (*(int64_t *)(this_ptr + 0x60) == 0) {
        *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
      }
      else if (0 < iVar3) {
        uVar6 = FUN_00b51ee0();
        FUN_00c92190(uVar6,iVar3);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((*(char *)(*(int64_t *)(this_ptr + 0x18) + (uint64_t)(iVar3 - 1)) == -9) &&
           (*(int64_t *)(this_ptr + 0x60) != 0)) {
          *(void*)(this_ptr + 0x60) = 0;
          FUN_00d50b20();
        }
      }
    }
    else {
      if (g_027630c0 != 0) {
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
// 00b5ec40
// ============================================================
// Function: FUN_00b5ec40
// Address: 00b5ec40
// Size: 576 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


double FUN_00b5ec40(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  double dVar5;
  double local_38;
  double local_30;
  
  lVar1 = *(int64_t *)(this_ptr + 0x58);
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
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
        local_38 = 0.0;
        if (*(int64_t *)(lVar2 + 0x10) != 0) {
          local_38 = (double)FUN_00b5de00();
        }
        if ((*(int64_t *)(lVar2 + 0x40) != 0) && (dVar5 = (double)FUN_00b5dec0(), local_38 < dVar5)
           ) {
          local_38 = (double)FUN_00b5dec0();
        }
        if ((*(int64_t *)(lVar2 + 0x48) != 0) && (dVar5 = (double)FUN_00b5dec0(), local_38 < dVar5)
           ) {
          local_38 = (double)FUN_00b5dec0();
        }
        if (local_30 < local_38) {
          if (*(int64_t *)(lVar2 + 0x10) == 0) {
            local_30 = 0.0;
            lVar3 = *(int64_t *)(lVar2 + 0x40);
          }
          else {
            local_30 = (double)FUN_00b5de00();
            lVar3 = *(int64_t *)(lVar2 + 0x40);
          }
          if ((lVar3 != 0) && (dVar5 = (double)FUN_00b5dec0(), local_30 < dVar5)) {
            local_30 = (double)FUN_00b5dec0();
          }
          if ((*(int64_t *)(lVar2 + 0x48) != 0) &&
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
  if ((*(int64_t *)(this_ptr + 0x30) != 0) && (dVar5 = (double)FUN_00b60940(), local_30 < dVar5))
  {
    local_30 = (double)FUN_00b60940();
  }
  if ((*(int64_t *)(this_ptr + 0x38) != 0) && (dVar5 = (double)FUN_00b5dec0(), local_30 < dVar5))
  {
    local_30 = (double)FUN_00b5dec0();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return local_30;
}



// ============================================================
// 00b64180
// ============================================================
// Function: FUN_00b64180
// Address: 00b64180
// Size: 967 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void* FUN_00b64180(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  void*this_ptr;
  int iVar4;
  int64_t local_c0;
  char local_b8;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(*arg1 + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x20);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x48);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x10);
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
  lVar2 = *(int64_t *)(*arg1 + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00b047f0
// ============================================================
// Function: FUN_00b047f0
// Address: 00b047f0
// Size: 1159 bytes
// Class: GNMidiFile
// String references:
//   "GNMidiFile"
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void FUN_00b047f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0253b6b0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275966b == '\0') {
    FUN_00b04d60();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275966b == '\0') {
    FUN_00b04fb0();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_0275966b == '\0') {
    FUN_00b05140();
    FUN_00e87980();
  }
  FUN_00b052d0();
  FUN_00b05590();
  FUN_00b05850();
  FUN_00b05b10();
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275966b == '\0') {
    FUN_00b05dd0();
    FUN_00e87980();
  }
  FUN_00b05f60();
  FUN_00b06220();
  FUN_00b064e0();
  return;
}



// ============================================================
// 00b04d60
// ============================================================
// Function: FUN_00b04d60
// Address: 00b04d60
// Size: 550 bytes
// Class: GNMidiFile
// String references:
//   "GNMidiFile"
//   "GNMidiFileTimeBase"
//   "_timeBase"
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void* FUN_00b04d60(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_02759680 = "_timeBase";
      g_02759688 = &g_027595b0;
      g_02759690 = 0;
      g_02759698 = 0x6500;
      g_027596a0 = "GNMidiFileTimeBase";
      g_027596a8 = &g_027aaee0;
      g_027596b0 = 0;
      ram_00000000027596b8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02759680;
}

