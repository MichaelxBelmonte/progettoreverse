// Function: FUN_017921e0
// Address: 017921e0
// Size: 4292 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01793258) */
/* WARNING: Removing unreachable block (ram,0x0179253e) */
/* WARNING: Removing unreachable block (ram,0x01792564) */
/* WARNING: Removing unreachable block (ram,0x01792574) */
/* WARNING: Removing unreachable block (ram,0x01792292) */
/* WARNING: Removing unreachable block (ram,0x0179229e) */
/* WARNING: Removing unreachable block (ram,0x01792241) */
/* WARNING: Removing unreachable block (ram,0x0179224d) */
/* WARNING: Removing unreachable block (ram,0x01792318) */
/* WARNING: Removing unreachable block (ram,0x01792324) */
/* WARNING: Removing unreachable block (ram,0x01792498) */
/* WARNING: Removing unreachable block (ram,0x017924be) */
/* WARNING: Removing unreachable block (ram,0x017924ce) */
/* WARNING: Removing unreachable block (ram,0x01793264) */

longlong * FUN_017921e0(ulonglong param_1,longlong *param_2,undefined4 param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  longlong *unaff_RSI;
  uint uVar15;
  longlong *unaff_RDI;
  char cVar16;
  longlong lVar17;
  char cVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  longlong local_c0;
  char local_b8;
  undefined4 local_ac;
  longlong local_88;
  char local_80;
  uint local_74;
  int local_70;
  int local_6c;
  longlong local_58;
  char local_50;
  longlong local_40;
  
  local_6c = (int)param_1;
  local_ac = param_3;
  if (*param_2 == 0) {
    FUN_017936d0(param_1,param_1 & 0xffffffff);
    return unaff_RDI;
  }
  iVar9 = FUN_017173c0();
  FUN_01716260();
  lVar3 = local_88;
  local_40 = local_88;
  if ((((local_80 == '\0') && (local_88 != 0)) && (FUN_00d50b00(), local_80 != '\0')) &&
     (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_80 = '\0';
  local_88 = 0;
  iVar10 = FUN_017916d0(&local_88,local_6c);
  iVar11 = FUN_01715480();
  iVar12 = FUN_01715480();
  bVar4 = FUN_01716c00();
  cVar5 = FUN_017176e0();
  if (cVar5 != '\0') {
    FUN_01715480();
    FUN_017939b0();
    bVar20 = false;
    goto LAB_0179324f;
  }
  cVar5 = FUN_01717570();
  local_70 = (uint)(bVar4 ^ 1) + (uint)(bVar4 ^ 1) * 2 + (iVar11 - iVar12) + 9;
  local_70 = local_70 +
             (((uint)(local_70 / 6 + (local_70 >> 0x1f)) >> 1) - (local_70 >> 0x1f)) * -0xc;
  local_70 = (local_70 >> 0x1f & 0xcU) + local_70;
  lVar17 = local_58;
  if (cVar5 == '\0') {
LAB_01792463:
    if (iVar10 - 1U < 4) {
      if (local_70 != 0xb) {
        FUN_01717530();
      }
      lVar17 = *param_2;
      if (lVar17 == 0) {
        lVar17 = 0;
        cVar5 = '\0';
      }
      else {
        cVar5 = (char)param_2[1];
        if (cVar5 != '\0') {
          FUN_00d50b00();
        }
      }
      if (local_6c == 1) {
        if (iVar9 == 2) {
          FUN_01715480();
          FUN_017939b0();
          if (local_58 == lVar17) {
            if ((cVar5 == '\0') && (local_58 != 0)) {
              cVar5 = '\x01';
              if (local_50 == '\0') {
                FUN_00d50b00();
              }
            }
            else if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            if ((cVar5 == '\0') || (lVar17 == 0)) goto LAB_01792b62;
            FUN_00d50b20();
            lVar17 = local_58;
            cVar5 = '\x01';
          }
          else if ((cVar5 == '\0') || (lVar17 == 0)) {
LAB_01792b62:
            lVar17 = local_58;
            cVar5 = '\x01';
          }
          else {
            FUN_00d50b20();
            lVar17 = local_58;
            cVar5 = '\x01';
          }
        }
        else if (iVar9 == 1) {
          if (local_70 == 0xb) {
            FUN_01715480();
            FUN_017939b0();
            if (local_58 == lVar17) {
              if ((cVar5 == '\0') && (lVar17 != 0)) {
                cVar5 = '\x01';
                if (local_50 == '\0') {
                  FUN_00d50b00();
                }
              }
              else if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              if ((cVar5 == '\0') || (lVar17 == 0)) goto LAB_01792b62;
              FUN_00d50b20();
              lVar17 = local_58;
              cVar5 = '\x01';
            }
            else {
              if ((cVar5 == '\0') || (lVar17 == 0)) goto LAB_01792b62;
              FUN_00d50b20();
              lVar17 = local_58;
              cVar5 = '\x01';
            }
          }
          else if (local_70 == 1) {
            FUN_01715480();
            FUN_017939b0();
            if (local_58 == lVar17) {
              if ((cVar5 == '\0') && (lVar17 != 0)) {
                cVar5 = '\x01';
                if (local_50 == '\0') {
                  FUN_00d50b00();
                }
              }
              else if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              if ((cVar5 == '\0') || (lVar17 == 0)) goto LAB_01792b62;
              FUN_00d50b20();
              lVar17 = local_58;
              cVar5 = '\x01';
            }
            else {
              if ((cVar5 == '\0') || (lVar17 == 0)) goto LAB_01792b62;
              FUN_00d50b20();
              lVar17 = local_58;
              cVar5 = '\x01';
            }
          }
          else {
            FUN_01715480();
            FUN_017939b0();
            if (local_58 == lVar17) {
              if ((cVar5 == '\0') && (lVar17 != 0)) {
                cVar5 = '\x01';
                if (local_50 == '\0') {
                  FUN_00d50b00();
                }
              }
              else if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              if ((cVar5 == '\0') || (lVar17 == 0)) goto LAB_01792b62;
              FUN_00d50b20();
              lVar17 = local_58;
              cVar5 = '\x01';
            }
            else {
              if ((cVar5 == '\0') || (lVar17 == 0)) goto LAB_01792b62;
              FUN_00d50b20();
              lVar17 = local_58;
              cVar5 = '\x01';
            }
          }
        }
      }
    }
    else if (iVar10 == 5) {
      FUN_01717530();
      if ((local_6c == 1) && (local_70 != 1)) {
        FUN_01715480();
        FUN_017939b0();
        if (local_58 == 0) {
LAB_01792758:
          lVar17 = 0;
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
          if (local_50 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else {
        FUN_01715480();
        FUN_017939b0();
        if (local_58 == 0) goto LAB_01792758;
        cVar5 = '\x01';
        if (local_50 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    else {
      FUN_017936d0();
      if (local_58 == 0) {
        bVar4 = 1;
        bVar8 = 0;
        cVar5 = '\0';
        lVar17 = 0;
      }
      else {
        if (local_50 == '\0') {
          FUN_00d50b00();
        }
        bVar4 = 0;
        bVar8 = 1;
        cVar5 = '\x01';
      }
      if (local_6c == 1) {
        if (iVar9 == 1) {
          FUN_01715480();
          FUN_017939b0();
          if (local_58 == lVar17) {
            if ((bool)(bVar4 & lVar17 != 0)) {
              cVar5 = '\x01';
              if (local_50 == '\0') {
                FUN_00d50b00();
              }
            }
            else if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            cVar5 = '\x01';
            if (!(bool)(bVar8 & lVar17 != 0)) goto LAB_01792b62;
            FUN_00d50b20();
            lVar17 = local_58;
          }
          else {
            cVar5 = '\x01';
            if (!(bool)(bVar8 & lVar17 != 0)) goto LAB_01792b62;
            FUN_00d50b20();
            lVar17 = local_58;
          }
        }
        else {
          FUN_01715480();
          FUN_017939b0();
          if (local_58 == lVar17) {
            if ((bool)(bVar4 & local_58 != 0)) {
              cVar5 = '\x01';
              if (local_50 == '\0') {
                FUN_00d50b00();
              }
            }
            else if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            cVar5 = '\x01';
            if (!(bool)(bVar8 & lVar17 != 0)) goto LAB_01792b62;
            FUN_00d50b20();
            lVar17 = local_58;
          }
          else {
            cVar5 = '\x01';
            if (!(bool)(bVar8 & lVar17 != 0)) goto LAB_01792b62;
            FUN_00d50b20();
            lVar17 = local_58;
          }
        }
      }
    }
  }
  else {
    FUN_01715480();
    FUN_017939b0();
    if (local_58 == 0) goto LAB_01792463;
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    cVar5 = '\x01';
  }
  cVar6 = FUN_01716c00();
  local_74 = 0;
  uVar19 = 0;
  do {
    uVar15 = uVar19;
    if (cVar6 != '\0') {
      uVar15 = (uint)(byte)((char)(uVar19 + 3) + ((byte)((uVar19 + 3 & 0xff) / 3) & 0xfc) * -3);
    }
    if ((~(uint)(*(ulonglong *)(lVar17 + 0x18) >> ((char)uVar15 * '\x04' & 0x3fU)) & 0xf) != 0) {
      iVar9 = FUN_01715480();
      iVar11 = FUN_01715480();
      iVar12 = FUN_01715480();
      iVar12 = (iVar9 + uVar15) - iVar12;
      iVar12 = iVar12 + (((uint)(iVar12 / 6 + (iVar12 >> 0x1f)) >> 1) - (iVar12 >> 0x1f)) * -0xc;
      iVar12 = (iVar12 >> 0x1f & 0xcU) + iVar12;
      if (iVar12 == 2) {
        iVar12 = FUN_01716ee0();
        iVar13 = FUN_01716ee0();
        bVar20 = iVar12 == 1;
        bVar21 = iVar13 == 3;
      }
      else if (iVar12 == 5) {
        iVar12 = FUN_01716ee0();
        iVar13 = FUN_01716ee0();
        bVar20 = iVar12 == 4;
        bVar21 = iVar13 == 6;
      }
      else if (iVar12 == 9) {
        iVar12 = FUN_01716ee0();
        iVar13 = FUN_01716ee0();
        bVar20 = iVar12 == 8;
        bVar21 = iVar13 == 10;
      }
      else {
        bVar20 = false;
        bVar21 = false;
      }
      iVar11 = (iVar9 + uVar15) - iVar11;
      iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
      iVar11 = (iVar11 >> 0x1f & 0xcU) + iVar11;
      uVar1 = *(ulonglong *)(lVar3 + 0x18);
      cVar16 = (char)iVar11;
      if ((~(uint)(uVar1 >> (cVar16 * '\x04' & 0x3fU)) & 0xf) == 0) {
        uVar15 = (char)(cVar16 + '\x01') * 0x2b;
        bVar4 = cVar16 + '\x01' + ((char)((uVar15 & 0xffff) >> 0xf) + (char)(uVar15 >> 9)) * -0xc;
        uVar15 = bVar4 + 0xc;
        if (-1 < (char)bVar4) {
          uVar15 = (uint)bVar4;
        }
        iVar9 = uVar15 << 2;
        if ((~(uint)(uVar1 >> ((byte)iVar9 & 0x3f)) & 0xf) != 0) {
          uVar15 = (char)(cVar16 + -1) * 0x2b;
          bVar4 = cVar16 + -1 + ((char)((uVar15 & 0xffff) >> 0xf) + (char)(uVar15 >> 9)) * -0xc;
          uVar15 = bVar4 + 0xc;
          if (-1 < (char)bVar4) {
            uVar15 = (uint)bVar4;
          }
          iVar9 = uVar15 << 2;
          if ((~(uint)(uVar1 >> ((byte)iVar9 & 0x3f)) & 0xf) != 0) goto LAB_01792be0;
        }
        if ((~*(uint *)(*unaff_RSI + 0x18) & 0xf0000000) != 0) {
          if (iVar11 == 4) {
            uVar15 = ~(uint)uVar1 & 0xf000;
          }
          else {
            if (iVar11 != 3) goto LAB_01792e24;
            uVar15 = ~(uint)uVar1 & 0xf0000;
          }
          if (uVar15 != 0) goto LAB_01792be0;
        }
LAB_01792e24:
        if (!bVar20 && !bVar21) {
          local_74 = (uint)CONCAT71((uint7)(uint3)(~*(uint *)(*unaff_RSI + 0x18) >> 8),1);
          FUN_01715d40(iVar9,0);
        }
      }
    }
LAB_01792be0:
    uVar19 = uVar19 + 1;
  } while (uVar19 != 0xc);
  iVar9 = 0xc;
  cVar18 = -1;
  cVar6 = '\x01';
  cVar16 = '\0';
  uVar19 = 0;
  do {
    cVar14 = '\f';
    if ((byte)(((byte)((uVar19 & 0xff) / 3) & 0xfc) * '\x03' + cVar16) == '\0') {
      cVar14 = '\0';
    }
    uVar1 = *(ulonglong *)(lVar3 + 0x18);
    bVar4 = (cVar16 + (char)(uVar19 / 0xc) * '\f' + cVar14) * '\x04';
    if (((~(uint)(uVar1 >> (bVar4 & 0x3f)) & 0xf) != 0) &&
       ((~(uint)(*(ulonglong *)(*unaff_RSI + 0x18) >> (bVar4 & 0x3f)) & 0xf) == 0)) {
      cVar2 = (char)(uVar19 / 0xc) * '\f';
      cVar7 = cVar6 + cVar2 + cVar14;
      bVar8 = cVar7 + ((char)((uint)(int)(short)(cVar7 * 0x2b) >> 9) - (cVar7 >> 7)) * -0xc;
      bVar4 = bVar8 + 0xc;
      if (-1 < (char)bVar8) {
        bVar4 = bVar8;
      }
      if ((~(uint)(uVar1 >> ((bVar4 & 0xf) << 2)) & 0xf) != 0) {
        cVar14 = cVar14 + cVar2 + cVar18;
        bVar4 = cVar14 + ((char)((uint)(int)(short)(cVar14 * 0x2b) >> 9) - (cVar14 >> 7)) * -0xc;
        uVar15 = bVar4 + 0xc;
        if (-1 < (char)bVar4) {
          uVar15 = (uint)bVar4;
        }
        if ((~(uint)(uVar1 >> ((byte)(uVar15 << 2) & 0x3f)) & 0xf) != 0) {
          local_74 = 1;
          FUN_01715d40(uVar15 << 2,0xffffffff);
        }
      }
    }
    cVar16 = cVar16 + -7;
    uVar19 = uVar19 + 7;
    cVar18 = cVar18 + -7;
    cVar6 = cVar6 + -7;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if ((local_74 & 1) != 0) {
    FUN_01716e60();
  }
  if ((local_6c == 1) || (local_70 != 8)) {
    if (local_70 == 0) {
      iVar9 = FUN_01794030();
      if (iVar9 == 8) {
        FUN_01715480();
        FUN_017939b0();
        if (lVar3 == local_58) {
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          local_40 = local_58;
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
          local_40 = local_58;
        }
      }
    }
    else if (((local_70 == 5) && (cVar6 = FUN_01716c00(), cVar6 != '\0')) &&
            (cVar6 = FUN_01717530(), cVar6 == '\0')) {
      FUN_01715480();
      FUN_017939b0();
      if (lVar3 == local_58) {
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_40 = local_58;
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
        local_40 = local_58;
      }
    }
  }
  else {
    bVar4 = FUN_01716be0();
    if ((bVar4 & iVar10 != 5) == 1) {
      FUN_01715480();
      FUN_017939b0();
      if (lVar3 == local_58) {
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_40 = local_58;
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
        local_40 = local_58;
      }
    }
  }
  if ((char)local_ac != '\0') {
    local_c0 = local_40;
    local_b8 = '\0';
    iVar9 = FUN_01794120(&local_c0,local_6c);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((iVar9 != -1) &&
       ((~(uint)(*(ulonglong *)(*unaff_RSI + 0x18) >> ((byte)(iVar9 * 4) & 0x3f)) & 0xf) == 0)) {
      FUN_01715d40(iVar9 * 4,0xffffffff);
    }
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  bVar20 = true;
  if ((cVar5 != '\0') && (lVar17 != 0)) {
    FUN_00d50b20();
  }
LAB_0179324f:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar20 && local_40 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


