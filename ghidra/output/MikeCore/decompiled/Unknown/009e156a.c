// Function: FUN_009e156a
// Address: 009e156a
// Size: 1770 bytes
// Class: Unknown
// String references:
//   "Encountered an infinite recursion."


void FUN_009e156a(uint *param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int *piVar8;
  void *pvVar9;
  uint *puVar10;
  uint *unaff_RSI;
  uint *puVar11;
  longlong *unaff_RDI;
  size_t sVar12;
  ulonglong uVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  byte local_98;
  undefined1 local_80 [32];
  uint *local_60;
  uint *local_58;
  uint local_4c;
  longlong *local_48;
  byte *local_40;
  byte local_31;
  
  local_40 = param_2;
code_r0x009e156a:
  if (unaff_RSI == (uint *)0x0) {
    return;
  }
  bVar3 = (byte)param_3;
  uVar13 = CONCAT71((int7)(param_3 >> 8),(char)unaff_RDI[3]);
  puVar11 = (uint *)0x0;
  iVar16 = 1;
  local_58 = (uint *)0x0;
  uVar15 = 0;
  pbVar14 = local_40;
  local_48 = unaff_RDI;
  do {
    sVar12 = (size_t)uVar13;
    uVar2 = *unaff_RSI;
    if (0x20 < (ulonglong)uVar2) goto switchD_009e15c7_caseD_3;
    puVar7 = (undefined1 *)
             ((longlong)&switchD_009e15c7::switchdataD_009e1c84 +
             (longlong)(int)(&switchD_009e15c7::switchdataD_009e1c84)[uVar2]);
    bVar5 = (byte)uVar13;
    switch(uVar2) {
    case 0:
      if (unaff_RSI[4] != 0xfffffffd) goto switchD_009e15c7_caseD_3;
      puVar10 = *(uint **)(*(longlong *)(unaff_RSI + 2) + 8);
      break;
    case 1:
      uVar2 = unaff_RSI[4];
      lVar6 = (longlong)(int)uVar2;
      if (lVar6 < 0) {
        if (pbVar14 != (byte *)0x0) {
          if (*pbVar14 == 0) goto LAB_009e1935;
          *pbVar14 = *pbVar14 | bVar3;
          lVar6 = 1;
          do {
            pbVar14[lVar6] = pbVar14[lVar6] | bVar3;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x100);
          goto LAB_009e1930;
        }
        goto switchD_009e15c7_caseD_c;
      }
      if (((uVar15 == 0) || (puVar11 == (uint *)0x0)) || (uVar15 != uVar2)) {
        if ((uVar2 != 0) && (*(char *)(*unaff_RDI + 400) != '\0')) {
          for (piVar8 = *(int **)(*unaff_RDI + 0x48); piVar8 != (int *)0x0;
              piVar8 = *(int **)(piVar8 + 2)) {
            if (((*piVar8 == 0x1d) && (**(int **)(piVar8 + 4) == 0)) &&
               ((*(int **)(piVar8 + 4))[4] == uVar2)) {
              bVar1 = *(byte *)(unaff_RDI[7] + lVar6);
              if ((bVar1 & 2) == 0) {
                *(byte *)(unaff_RDI[7] + lVar6) = bVar1 | 2;
                uVar13 = param_3 & 0xff;
                local_60 = param_1;
                local_4c = uVar15;
                local_31 = bVar5;
                FUN_009e156a(param_1,pbVar14,uVar13);
                uVar13 = CONCAT71((int7)(uVar13 >> 8),local_31);
                unaff_RDI = local_48;
                pbVar14 = local_40;
                param_1 = local_60;
                uVar15 = local_4c;
              }
              break;
            }
          }
        }
        puVar10 = *(uint **)(unaff_RSI + 2);
      }
      else {
        puVar11 = (uint *)0x0;
        puVar10 = local_58;
      }
      break;
    case 2:
      if (pbVar14 == (byte *)0x0) {
        return;
      }
      *pbVar14 = *pbVar14 | 4;
      uVar15 = unaff_RSI[6];
      lVar6 = 0;
      do {
        if ((uVar13 & 1) == 0) {
          cVar4 = (char)lVar6;
        }
        else {
          uVar13 = uVar13 & 0xffffffff;
          cVar4 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))();
          unaff_RDI = local_48;
          pbVar14 = local_40;
        }
        if (cVar4 == (char)uVar15) {
          pbVar14[lVar6] = pbVar14[lVar6] | bVar3;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x100);
      return;
    default:
      goto switchD_009e15c7_caseD_3;
    case 4:
      goto switchD_009e15c7_caseD_4;
    case 5:
      goto switchD_009e15c7_caseD_5;
    case 6:
    case 0x1f:
      if (pbVar14 == (byte *)0x0) goto switchD_009e15c7_caseD_c;
      if (*pbVar14 != 0) {
        *pbVar14 = *pbVar14 | bVar3;
        lVar6 = 1;
        do {
          pbVar14[lVar6] = pbVar14[lVar6] | bVar3;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x100);
        goto LAB_009e1930;
      }
LAB_009e1935:
      _memset(puVar7,0x100,sVar12);
      goto LAB_009e1953;
    case 9:
      FUN_009e156a(param_1,pbVar14,param_3 & 0xff);
      if (local_40 == (byte *)0x0) {
        return;
      }
      *local_40 = *local_40 | 4;
      lVar6 = 0;
      do {
        cVar4 = FUN_009df118(local_48,(int)local_48[10]);
        if (cVar4 == '\0') {
          local_40[lVar6] = local_40[lVar6] & ~bVar3;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x100);
      return;
    case 10:
      FUN_009e156a(param_1,pbVar14,param_3 & 0xff);
      if (local_40 == (byte *)0x0) {
        return;
      }
      *local_40 = *local_40 | 4;
      lVar6 = 0;
      do {
        cVar4 = FUN_009df118(local_48,(int)local_48[10]);
        if (cVar4 != '\0') {
          local_40[lVar6] = local_40[lVar6] & ~bVar3;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x100);
      return;
    case 0xc:
      goto switchD_009e15c7_caseD_c;
    case 0xd:
      goto switchD_009e15c7_caseD_d;
    case 0xe:
      if (pbVar14 == (byte *)0x0) {
        return;
      }
      bVar1 = *pbVar14;
      if (*(char *)((longlong)unaff_RSI + 0x25) != '\0') {
        *pbVar14 = bVar1 | 4;
        lVar6 = 0;
        local_58 = (uint *)CONCAT44(local_58._4_4_,(uint)(bVar5 & 1));
        do {
          local_80[0] = (undefined1)lVar6;
          puVar7 = (undefined1 *)FUN_009e2013(*unaff_RDI,unaff_RSI,(ulonglong)local_58 & 0xffffffff)
          ;
          if (local_80 != puVar7) {
            local_40[lVar6] = local_40[lVar6] | bVar3;
          }
          lVar6 = lVar6 + 1;
          unaff_RDI = local_48;
        } while (lVar6 != 0x100);
        return;
      }
      if (bVar1 == 0) goto LAB_009e1c29;
      *pbVar14 = bVar1 | bVar3;
      lVar6 = 1;
      do {
        pbVar14[lVar6] = pbVar14[lVar6] | bVar3;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x100);
      goto LAB_009e18da;
    case 0xf:
      if (pbVar14 == (byte *)0x0) {
        return;
      }
      *pbVar14 = *pbVar14 | 4;
      lVar6 = 0;
      do {
        if ((uVar13 & 1) == 0) {
          bVar5 = (byte)lVar6;
        }
        else {
          uVar13 = uVar13 & 0xffffffff;
          bVar5 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))();
          unaff_RDI = local_48;
          pbVar14 = local_40;
        }
        if (*(char *)((longlong)unaff_RSI + (ulonglong)bVar5 + 0x10) != '\0') {
          pbVar14[lVar6] = pbVar14[lVar6] | bVar3;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x100);
      return;
    case 0x10:
      iVar16 = -1;
      puVar10 = *(uint **)(unaff_RSI + 4);
      break;
    case 0x11:
    case 0x12:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
      if ((unaff_RSI[6] & 4) != 0) {
        if (pbVar14 != (byte *)0x0) {
          *pbVar14 = *pbVar14 | 4;
          lVar6 = 0;
          do {
            if ((*(byte *)((longlong)unaff_RSI + lVar6 + 0x18) & 3) != 0) {
              pbVar14[lVar6] = pbVar14[lVar6] | bVar3;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x100);
        }
        if (param_1 == (uint *)0x0) {
          return;
        }
        if ((unaff_RSI[0x46] & 3) == 0) {
          return;
        }
        goto LAB_009e1961;
      }
      if ((uVar2 - 0x16 < 4) || (uVar2 == 0x12)) {
        puVar7 = (undefined1 *)(ulonglong)unaff_RSI[0x4c];
        if (puVar7 < &segment_command_00000020.vmsize) {
          uVar13 = unaff_RDI[5];
          if ((uVar13 >> ((ulonglong)puVar7 & 0x3f) & 1) == 0) {
            if ((uVar2 - 0x16 < 4) || (uVar2 == 0x12)) {
              unaff_RDI[5] = uVar13 | 1L << ((byte)unaff_RSI[0x4c] & 0x3f);
            }
            goto LAB_009e1bb4;
          }
        }
        sVar12 = (size_t)uVar13;
        if (pbVar14 == (byte *)0x0) goto switchD_009e15c7_caseD_c;
        if (*pbVar14 == 0) goto LAB_009e1935;
        *pbVar14 = *pbVar14 | bVar3;
        lVar6 = 1;
        do {
          pbVar14[lVar6] = pbVar14[lVar6] | bVar3;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x100);
LAB_009e1930:
        bVar3 = *pbVar14;
        local_40 = pbVar14;
LAB_009e1953:
        *local_40 = bVar3 | 4;
switchD_009e15c7_caseD_c:
        if (param_1 == (uint *)0x0) {
          return;
        }
LAB_009e1961:
        *param_1 = *param_1 | (uint)param_3 & 0xff;
        return;
      }
LAB_009e1bb4:
      FUN_009e156a(param_1,pbVar14,param_3 & 0xff);
      if (((*unaff_RSI != 0x11) && (iVar16 != 0)) && (*(longlong *)(unaff_RSI + 0x48) != 0)) {
        return;
      }
      unaff_RSI = *(uint **)(unaff_RSI + 4);
      unaff_RDI = local_48;
      goto LAB_009e1bf3;
    case 0x14:
      if (pbVar14 != (byte *)0x0) {
        *pbVar14 = *pbVar14 | 4;
        pbVar14[10] = pbVar14[10] | bVar3;
        pbVar14[0xd] = pbVar14[0xd] | bVar3;
      }
      goto switchD_009e15c7_caseD_c;
    case 0x1c:
      uVar13 = CONCAT71((int7)(uVar13 >> 8),(char)unaff_RSI[4]);
      goto switchD_009e15c7_caseD_3;
    case 0x1d:
      puVar10 = *(uint **)(unaff_RSI + 4);
      uVar15 = puVar10[4];
      puVar7 = (undefined1 *)unaff_RDI[7];
      if ((puVar7[(int)uVar15] & 1) == 0) {
        if (puVar11 == (uint *)0x0) {
          local_58 = *(uint **)(unaff_RSI + 2);
          puVar7[(int)uVar15] = puVar7[(int)uVar15] | 1;
          puVar11 = unaff_RSI;
          break;
        }
      }
      else {
        lVar6 = *unaff_RDI;
        if (*(int *)(lVar6 + 0x2c) == 0) {
          *(undefined4 *)(lVar6 + 0x2c) = 2;
        }
        *(undefined8 *)(lVar6 + 0x38) = 0;
        *(undefined8 *)(lVar6 + 0x30) = 0;
        if ((*(byte *)(lVar6 + 0x2a) & 4) == 0) {
          FUN_009d5ed0();
          pvVar9 = (void *)0x0;
          FUN_00acde90(0,2);
          FUN_00acdf00();
          FUN_00acded0();
          if ((local_98 & 1) != 0) {
            operator_delete(pvVar9);
          }
          puVar7 = (undefined1 *)local_48[7];
          pbVar14 = local_40;
        }
      }
      puVar7[(int)uVar15] = puVar7[(int)uVar15] | 1;
switchD_009e15c7_caseD_d:
      if (param_1 != (uint *)0x0) {
        *param_1 = *param_1 | (uint)param_3 & 0xff;
      }
switchD_009e15c7_caseD_5:
      if (pbVar14 == (byte *)0x0) {
        return;
      }
      if (*pbVar14 == 0) {
LAB_009e1c29:
        _memset(puVar7,0x100,sVar12);
      }
      else {
        *pbVar14 = *pbVar14 | bVar3;
        lVar6 = 1;
        do {
          pbVar14[lVar6] = pbVar14[lVar6] | bVar3;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x100);
LAB_009e18da:
        bVar3 = *pbVar14;
        local_40 = pbVar14;
      }
      *local_40 = bVar3 | 4;
      return;
    case 0x20:
      if (pbVar14 != (byte *)0x0) {
        if (*pbVar14 == 0) {
          local_60 = puVar11;
          local_4c = uVar15;
          local_31 = bVar5;
          _memset(puVar7,0x100,sVar12);
          uVar13 = CONCAT71((int7)(uVar13 >> 8),local_31);
          puVar11 = local_60;
          unaff_RDI = local_48;
          pbVar14 = local_40;
          bVar5 = bVar3;
          uVar15 = local_4c;
        }
        else {
          *pbVar14 = *pbVar14 | bVar3;
          lVar6 = 1;
          do {
            pbVar14[lVar6] = pbVar14[lVar6] | bVar3;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x100);
          bVar5 = *pbVar14;
        }
        *pbVar14 = bVar5 | 4;
      }
switchD_009e15c7_caseD_3:
      puVar10 = *(uint **)(unaff_RSI + 2);
    }
    iVar16 = iVar16 + 1;
    unaff_RSI = puVar10;
    if (puVar10 == (uint *)0x0) {
      return;
    }
  } while( true );
switchD_009e15c7_caseD_4:
  if (pbVar14 != (byte *)0x0) {
    *pbVar14 = *pbVar14 | 4;
    pbVar14[10] = pbVar14[10] | bVar3;
    pbVar14[0xd] = pbVar14[0xd] | bVar3;
    pbVar14[0xc] = pbVar14[0xc] | bVar3;
    pbVar14[0x85] = pbVar14[0x85] | bVar3;
  }
  if (param_1 == (uint *)0x0) {
    return;
  }
  unaff_RSI = *(uint **)(unaff_RSI + 2);
  local_40 = (byte *)0x0;
LAB_009e1bf3:
  param_3 = param_3 & 0xff;
  goto code_r0x009e156a;
}


