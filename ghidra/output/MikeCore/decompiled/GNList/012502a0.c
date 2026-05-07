// Function: FUN_012502a0
// Address: 012502a0
// Size: 3760 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01250fb1) */
/* WARNING: Removing unreachable block (ram,0x01250fbd) */
/* WARNING: Removing unreachable block (ram,0x01250ed7) */
/* WARNING: Removing unreachable block (ram,0x01250ee3) */
/* WARNING: Removing unreachable block (ram,0x01250de0) */
/* WARNING: Removing unreachable block (ram,0x01250dec) */
/* WARNING: Removing unreachable block (ram,0x01250d5c) */
/* WARNING: Removing unreachable block (ram,0x01250d68) */
/* WARNING: Removing unreachable block (ram,0x01250c9b) */
/* WARNING: Removing unreachable block (ram,0x01250ca7) */
/* WARNING: Removing unreachable block (ram,0x012505e8) */
/* WARNING: Removing unreachable block (ram,0x012505f4) */
/* WARNING: Removing unreachable block (ram,0x01250468) */
/* WARNING: Removing unreachable block (ram,0x01250471) */
/* WARNING: Removing unreachable block (ram,0x01250b1b) */
/* WARNING: Removing unreachable block (ram,0x01250b27) */
/* WARNING: Removing unreachable block (ram,0x01250cf6) */
/* WARNING: Removing unreachable block (ram,0x01250d02) */
/* WARNING: Removing unreachable block (ram,0x01250d9e) */
/* WARNING: Removing unreachable block (ram,0x01250daa) */
/* WARNING: Removing unreachable block (ram,0x01250e9c) */
/* WARNING: Removing unreachable block (ram,0x01250ea8) */
/* WARNING: Removing unreachable block (ram,0x01250f12) */
/* WARNING: Removing unreachable block (ram,0x01250f1e) */
/* WARNING: Removing unreachable block (ram,0x01250f5e) */
/* WARNING: Removing unreachable block (ram,0x01250f6a) */
/* WARNING: Removing unreachable block (ram,0x01250b56) */
/* WARNING: Removing unreachable block (ram,0x01250b62) */
/* WARNING: Removing unreachable block (ram,0x0125075f) */
/* WARNING: Removing unreachable block (ram,0x01250768) */
/* WARNING: Removing unreachable block (ram,0x01250e5b) */
/* WARNING: Removing unreachable block (ram,0x01250e64) */
/* WARNING: Removing unreachable block (ram,0x01250b96) */
/* WARNING: Removing unreachable block (ram,0x01250ba6) */

void FUN_012502a0(void *param_1,void *param_2,size_t param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  void *pvVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  size_t sVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  bool bVar24;
  undefined8 local_b8;
  undefined8 local_b0;
  void *local_70;
  int local_68;
  char local_60;
  ulonglong local_58;
  char local_50;
  
  uVar17 = (ulonglong)param_2 >> 0x20;
  if ((uVar17 == 0) && ((ulonglong)param_1 >> 0x20 == 0)) {
LAB_01250300:
    FUN_0124f820();
  }
  else {
    sVar18 = param_3;
    if ((uVar17 != 0) &&
       (((ulonglong)param_1 >> 0x20 != 0 && (cVar5 = FUN_00e7c020(), cVar5 == '\0')))) {
      return;
    }
    iVar9 = *(int *)(unaff_RDI[9] + 0x18);
    iVar19 = iVar9 + 7;
    if (-1 < iVar9) {
      iVar19 = iVar9;
    }
    local_70 = (void *)0x0;
    bVar24 = true;
    bVar6 = 1;
    bVar23 = true;
    local_60 = (char)param_3;
    local_b8 = param_2;
    if (uVar17 != 0) {
      uVar8 = FUN_01251eb0(iVar19,0);
      if ((int)uVar8 < 1) {
        local_58 = FUN_00e7bdb0();
        if (local_58 >> 0x20 != 0) goto LAB_012503b0;
LAB_012503da:
        bVar6 = 0;
        lVar21 = *unaff_RSI;
        if (lVar21 == 0) goto LAB_012503fb;
LAB_012503ed:
        if (local_60 != '\0') goto LAB_012503fb;
      }
      else {
        local_58 = *(ulonglong *)(*(longlong *)(unaff_RDI[9] + 0x10) + (ulonglong)(uVar8 - 1) * 8);
        if (local_58 >> 0x20 == 0) goto LAB_012503da;
LAB_012503b0:
        local_b8._4_4_ = (int)((ulonglong)param_2 >> 0x20);
        if (local_b8._4_4_ == 0) goto LAB_012503da;
        bVar6 = FUN_00e7c000();
        lVar21 = *unaff_RSI;
        if (lVar21 != 0) goto LAB_012503ed;
LAB_012503fb:
        uVar20 = uVar8 - bVar6;
        local_70 = (void *)(ulonglong)uVar20;
        uVar17 = *(ulonglong *)(*(longlong *)(unaff_RDI[10] + 0x10) + (longlong)(int)uVar20 * 8);
        cVar5 = uVar17 == 0;
        if (!(bool)cVar5) {
          FUN_00d50b00();
        }
        if (lVar21 != 0) {
          local_50 = '\0';
          cVar5 = FUN_00d51e10();
          local_58 = uVar17;
        }
        if (uVar17 != 0) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') {
          if ((int)uVar20 < 1) {
            local_b8 = (void *)FUN_00e7bdb0();
          }
          else {
            local_b8 = *(void **)(*(longlong *)(unaff_RDI[9] + 0x10) + (ulonglong)(uVar20 - 1) * 8);
          }
          bVar23 = uVar20 == 0;
          bVar6 = 1;
          goto LAB_012504d5;
        }
      }
      bVar23 = false;
      local_70 = (void *)(ulonglong)uVar8;
    }
LAB_012504d5:
    puVar1 = (ulonglong *)(unaff_RDI + 9);
    iVar19 = iVar19 >> 3;
    iVar9 = iVar19;
    local_b0 = param_1;
    if ((ulonglong)param_1 >> 0x20 == 0) {
LAB_0125064e:
      bVar7 = 1;
      local_68 = iVar9;
      if ((bool)(bVar23 & bVar24)) goto LAB_01250300;
    }
    else {
      iVar9 = FUN_01251eb0();
      if (iVar9 < 1) {
        local_58 = FUN_00e7bdb0();
        if (local_58 >> 0x20 != 0) goto LAB_01250544;
LAB_01250579:
        bVar7 = 0;
        lVar21 = *unaff_RSI;
        local_68 = iVar9;
        if (lVar21 == 0) goto LAB_0125059d;
LAB_01250593:
        if (local_60 != '\0') goto LAB_0125059d;
      }
      else {
        local_58 = *(ulonglong *)(*(longlong *)(unaff_RDI[9] + 0x10) + (ulonglong)(iVar9 - 1) * 8);
        if (local_58 >> 0x20 == 0) goto LAB_01250579;
LAB_01250544:
        local_b0._4_4_ = (int)((ulonglong)param_1 >> 0x20);
        if (local_b0._4_4_ == 0) goto LAB_01250579;
        bVar7 = FUN_00e7c000();
        local_68 = iVar9 - (uint)bVar7;
        lVar21 = *unaff_RSI;
        if (lVar21 != 0) goto LAB_01250593;
LAB_0125059d:
        uVar17 = *(ulonglong *)(*(longlong *)(unaff_RDI[10] + 0x10) + (longlong)iVar9 * 8);
        cVar5 = uVar17 == 0;
        if (!(bool)cVar5) {
          FUN_00d50b00();
        }
        if (lVar21 != 0) {
          local_50 = '\0';
          cVar5 = FUN_00d51e10();
          local_58 = uVar17;
        }
        if (uVar17 != 0) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') {
          iVar12 = *(int *)(*puVar1 + 0x18);
          iVar16 = iVar12 + 7;
          if (-1 < iVar12) {
            iVar16 = iVar12;
          }
          if (iVar9 < iVar16 >> 3) {
            local_b0 = *(void **)(*(longlong *)(*puVar1 + 0x10) + (longlong)iVar9 * 8);
          }
          else {
            local_b0 = (void *)FUN_00e7bdb0();
          }
          bVar24 = iVar9 == iVar19;
          goto LAB_0125064e;
        }
      }
    }
    iVar9 = (int)local_70;
    if (iVar9 < 1) {
      FUN_00e7bdb0();
      uVar17 = *puVar1;
    }
    else {
      uVar17 = unaff_RDI[9];
    }
    iVar12 = *(int *)(uVar17 + 0x18);
    iVar16 = iVar12 + 7;
    if (-1 < iVar12) {
      iVar16 = iVar12;
    }
    if (local_68 < iVar16 >> 3) {
      uVar10 = *(undefined8 *)(*(longlong *)(uVar17 + 0x10) + (longlong)local_68 * 8);
    }
    else {
      uVar10 = FUN_00e7bdb0();
    }
    pvVar13 = local_70;
    FUN_0124f500();
    FUN_00c8e710();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (iVar9 != 0) {
      FUN_00c8e340();
      if (*puVar1 != 0) {
        FUN_00d50b00();
      }
      _memcpy(pvVar13,(void *)(longlong)(iVar9 * 8),sVar18);
      FUN_00d50b20();
    }
    if (bVar6 == 0) {
      iVar12 = *(int *)(local_58 + 0x18);
      FUN_00c8e340();
      *(void **)(*(longlong *)(local_58 + 0x10) + (longlong)iVar12) = local_b8;
      pvVar13 = local_b8;
    }
    if (bVar7 == 0) {
      iVar12 = *(int *)(local_58 + 0x18);
      FUN_00c8e340();
      *(void **)(*(longlong *)(local_58 + 0x10) + (longlong)iVar12) = local_b0;
      pvVar13 = local_b0;
    }
    if (iVar19 - local_68 != 0) {
      FUN_00c8e340();
      if (*puVar1 != 0) {
        FUN_00d50b00();
      }
      _memcpy(pvVar13,(void *)(longlong)((iVar19 - local_68) * 8),sVar18);
      FUN_00d50b20();
    }
    uVar8 = iVar9 - (uint)bVar6;
    puVar11 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d227e0();
    FUN_00d22760();
    FUN_00d227d0();
    FUN_00d21370();
    uVar20 = uVar8 + 1;
    if (-1 < (int)uVar8) {
      uVar17 = 0;
      do {
        lVar21 = *(longlong *)(*(longlong *)(unaff_RDI[10] + 0x10) + uVar17 * 8);
        if (lVar21 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar21 != 0) {
          FUN_00d50b20();
        }
        uVar17 = uVar17 + 1;
      } while (uVar20 != uVar17);
    }
    iVar12 = (uint)bVar7 + local_68 + (uint)(uVar8 == (uint)bVar7 + local_68);
    if ((int)uVar20 < iVar12) {
      lVar21 = (longlong)(int)(uVar8 + 2) + -1;
      bVar24 = false;
      uVar14 = (longlong)(int)uVar20;
      uVar17 = (ulonglong)uVar8;
      do {
        uVar22 = uVar14;
        lVar3 = *(longlong *)(*(longlong *)(unaff_RDI[10] + 0x10) + uVar22 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
          bVar23 = bVar24;
          if (*unaff_RSI == lVar3) {
            bVar23 = true;
            if (bVar24) {
              FUN_00d64850();
              *(int *)(unaff_RDI + 8) = (int)unaff_RDI[8] + -1;
              FUN_00d64910();
              bVar23 = bVar24;
            }
          }
          else {
            if ((int)unaff_RDI[8] != 0) {
              if (-1 < (int)uVar8) {
                uVar14 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(unaff_RDI[10] + 0x10) + uVar14 * 8) == lVar3) {
                    FUN_00d64850();
                    *(int *)(unaff_RDI + 8) = (int)unaff_RDI[8] + -1;
                    FUN_00d64910();
                    goto LAB_01250a11;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar20 != uVar14);
              }
              if ((int)uVar17 + 2 <= iVar19) {
                lVar15 = lVar21;
                do {
                  if (*(longlong *)(*(longlong *)(unaff_RDI[10] + 0x10) + 8 + lVar15 * 8) == lVar3)
                  {
                    FUN_00d64850();
                    *(int *)(unaff_RDI + 8) = (int)unaff_RDI[8] + -1;
                    FUN_00d64910();
                    goto LAB_01250a11;
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar15 < iVar19);
              }
            }
            (**(code **)(*unaff_RDI + 0x378))();
            FUN_00d64d10();
            FUN_00d23f50();
            FUN_00d651a0();
          }
LAB_01250a11:
          FUN_00d50b20();
          bVar24 = bVar23;
        }
        lVar21 = lVar21 + 1;
        uVar14 = uVar22 + 1;
        uVar17 = uVar22;
      } while ((longlong)(uVar22 + 1) < (longlong)iVar12);
    }
    else {
      bVar24 = false;
    }
    FUN_00d21140();
    if ((*unaff_RSI != 0) && (!bVar24)) {
      cVar5 = FUN_00d24090();
      if (cVar5 == '\0') {
        FUN_00d649d0();
        FUN_00d21140();
        FUN_00d64e50();
        (**(code **)(*unaff_RDI + 0x370))();
      }
      else {
        FUN_00d64850();
        *(int *)(unaff_RDI + 8) = (int)unaff_RDI[8] + 1;
        FUN_00d64910();
      }
    }
    if ((iVar9 == local_68 && bVar6 == 0) && bVar7 == 0) {
      uVar17 = *(ulonglong *)(*(longlong *)(unaff_RDI[10] + 0x10) + (longlong)iVar9 * 8);
      if (uVar17 == 0) {
        FUN_00d21140();
      }
      else {
        FUN_00d51d20();
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
        }
        if (local_58 == uVar17) {
          FUN_00d64850();
          *(int *)(unaff_RDI + 8) = (int)unaff_RDI[8] + 1;
          FUN_00d64910();
        }
        else {
          FUN_00d649d0();
          FUN_00d21140();
          FUN_00d64e50();
          (**(code **)(*unaff_RDI + 0x370))();
        }
        FUN_00d21140();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
      }
    }
    uVar2 = *(undefined4 *)((longlong)puVar11 + 0xc);
    if (iVar12 <= iVar19) {
      lVar21 = (longlong)iVar12;
      iVar9 = (iVar19 - iVar12) + 1;
      do {
        lVar3 = *(longlong *)(*(longlong *)(unaff_RDI[10] + 0x10) + lVar21 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar21 = lVar21 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    FUN_00d64850();
    uVar17 = *puVar1;
    if (uVar17 != local_58) {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *puVar1 = local_58;
      if (uVar17 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_00d64850();
    puVar4 = (undefined8 *)unaff_RDI[10];
    if (puVar4 != puVar11) {
      if (puVar11 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      unaff_RDI[10] = (longlong)puVar11;
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_0124f660(local_70,uVar10,uVar2);
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


