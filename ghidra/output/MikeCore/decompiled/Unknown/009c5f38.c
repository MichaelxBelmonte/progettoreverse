// Function: FUN_009c5f38
// Address: 009c5f38
// Size: 1750 bytes
// Class: Unknown


void FUN_009c5f38(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined8 *puVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  void *pvVar12;
  void *pvVar13;
  bool bVar14;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  
  puVar10 = (undefined8 *)unaff_RDI[1];
  puVar9 = (undefined8 *)unaff_RDI[2];
  uVar3 = (ulonglong)((longlong)puVar9 - (longlong)puVar10 == 0) + unaff_RSI;
  uVar11 = ((uVar3 >> 9) + 1) - (ulonglong)((uVar3 & 0x1ff) == 0);
  uVar3 = (ulonglong)unaff_RDI[4] >> 9;
  if (uVar11 < uVar3) {
    uVar3 = uVar11;
  }
  uVar11 = uVar11 - uVar3;
  if (uVar11 == 0) {
    unaff_RDI[4] = unaff_RDI[4] + uVar3 * -0x200;
    if (uVar3 != 0) {
      while( true ) {
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        unaff_RDI[1] = (longlong)puVar10;
        puVar4 = (undefined8 *)unaff_RDI[3];
        if (puVar9 == puVar4) {
          puVar5 = (undefined8 *)*unaff_RDI;
          if (puVar10 < puVar5 || (longlong)puVar10 - (longlong)puVar5 == 0) {
            uVar11 = (longlong)puVar4 - (longlong)puVar5 >> 2;
            if ((longlong)puVar4 - (longlong)puVar5 == 0) {
              uVar11 = 1;
            }
            if (0x1fffffffffffffff < uVar11) goto LAB_009c6604;
            pvVar12 = operator_new((ulong)puVar5);
            puVar1 = (undefined8 *)((longlong)pvVar12 + (uVar11 >> 2) * 8);
            param_3 = (undefined8 *)((longlong)pvVar12 + uVar11 * 8);
            lVar6 = (longlong)puVar4 - (longlong)puVar10;
            puVar9 = puVar1;
            if (lVar6 != 0) {
              lVar7 = 0;
              do {
                *puVar9 = *(undefined8 *)((longlong)puVar10 + lVar7);
                puVar9 = (undefined8 *)((longlong)pvVar12 + lVar7 + (uVar11 >> 2) * 8 + 8);
                lVar7 = lVar7 + 8;
              } while ((lVar6 >> 3) * 8 != lVar7);
              puVar5 = (undefined8 *)*unaff_RDI;
              puVar9 = (undefined8 *)((longlong)puVar1 + lVar6);
            }
            *unaff_RDI = (longlong)pvVar12;
            unaff_RDI[1] = (longlong)puVar1;
            unaff_RDI[2] = (longlong)puVar9;
            unaff_RDI[3] = (longlong)param_3;
            if (puVar5 != (undefined8 *)0x0) {
              operator_delete(puVar9);
              puVar9 = (undefined8 *)unaff_RDI[2];
            }
          }
          else {
            lVar6 = (longlong)puVar10 - (longlong)puVar5 >> 3;
            pvVar12 = (void *)-(lVar6 + 1 >> 0x3f);
            lVar6 = lVar6 + 1 + (longlong)pvVar12 >> 1;
            pvVar13 = (void *)((longlong)puVar4 - (longlong)puVar10);
            puVar4 = puVar10;
            if (pvVar13 != (void *)0x0) {
              _memmove(pvVar12,pvVar13,(size_t)param_3);
              puVar4 = (undefined8 *)unaff_RDI[1];
            }
            puVar9 = puVar10 + (((longlong)pvVar13 >> 3) - lVar6);
            unaff_RDI[2] = (longlong)puVar9;
            unaff_RDI[1] = (longlong)(puVar4 + -lVar6);
          }
        }
        *puVar9 = uVar2;
        puVar9 = (undefined8 *)(unaff_RDI[2] + 8);
        unaff_RDI[2] = (longlong)puVar9;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) break;
        puVar10 = (undefined8 *)unaff_RDI[1];
      }
    }
  }
  else {
    lVar7 = unaff_RDI[3] - *unaff_RDI;
    lVar6 = (longlong)puVar9 - (longlong)puVar10 >> 3;
    if ((ulonglong)((lVar7 >> 3) - lVar6) < uVar11) {
      uVar8 = lVar7 >> 2;
      if (uVar8 < lVar6 + uVar11) {
        uVar8 = lVar6 + uVar11;
      }
      if (uVar8 == 0) {
        local_68 = (undefined8 *)0x0;
      }
      else {
        if (0x1fffffffffffffff < uVar8) {
LAB_009c6604:
                    /* WARNING: Subroutine does not return */
          FUN_009c0cd9();
        }
        local_68 = operator_new(0xffffffff);
      }
      puStack_60 = local_68 + (lVar6 - uVar3);
      puStack_50 = local_68 + uVar8;
      puVar9 = puStack_60;
      do {
        operator_new((ulong)puVar9);
        FUN_009c59f6();
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      local_58 = puStack_60;
      if (uVar3 != 0) {
        puVar9 = (undefined8 *)unaff_RDI[1];
        uVar11 = uVar3;
        do {
          if (local_58 == puStack_50) {
            if (puStack_60 < local_68 || (longlong)puStack_60 - (longlong)local_68 == 0) {
              uVar8 = (longlong)puStack_50 - (longlong)local_68 >> 2;
              if ((longlong)puStack_50 - (longlong)local_68 == 0) {
                uVar8 = 1;
              }
              if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_009c0cd9();
              }
              puVar4 = operator_new((ulong)local_68);
              param_3 = puVar4 + uVar8;
              puVar10 = puVar4 + (uVar8 >> 2);
              lVar6 = (longlong)puStack_50 - (longlong)puStack_60;
              local_58 = puVar10;
              if (lVar6 != 0) {
                local_58 = (undefined8 *)((longlong)puVar10 + lVar6);
                lVar7 = 0;
                puVar5 = puVar10;
                do {
                  *puVar5 = *(undefined8 *)((longlong)puStack_60 + lVar7);
                  puVar5 = (undefined8 *)((longlong)puVar4 + lVar7 + (uVar8 >> 2) * 8 + 8);
                  lVar7 = lVar7 + 8;
                } while ((lVar6 >> 3) * 8 != lVar7);
              }
              bVar14 = local_68 != (undefined8 *)0x0;
              local_68 = puVar4;
              puStack_60 = puVar10;
              puStack_50 = param_3;
              if (bVar14) {
                operator_delete(local_58);
              }
            }
            else {
              lVar6 = (longlong)puStack_60 - (longlong)local_68 >> 3;
              lVar6 = (lVar6 + 1) - (lVar6 + 1 >> 0x3f) >> 1;
              pvVar12 = (void *)((longlong)puStack_50 - (longlong)puStack_60);
              if (pvVar12 != (void *)0x0) {
                _memmove(puStack_60 + -lVar6,pvVar12,(size_t)param_3);
              }
              local_58 = puStack_60 + -lVar6 + ((longlong)pvVar12 >> 3);
              puStack_60 = puStack_60 + -lVar6;
            }
          }
          *local_58 = *puVar9;
          local_58 = local_58 + 1;
          puVar9 = (undefined8 *)(unaff_RDI[1] + 8);
          unaff_RDI[1] = (longlong)puVar9;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      for (lVar6 = unaff_RDI[2]; lVar6 != unaff_RDI[1]; lVar6 = lVar6 + -8) {
        FUN_009c5b5a();
      }
      lVar6 = *unaff_RDI;
      *unaff_RDI = (longlong)local_68;
      unaff_RDI[1] = (longlong)puStack_60;
      pvVar12 = (void *)unaff_RDI[2];
      unaff_RDI[2] = (longlong)local_58;
      unaff_RDI[3] = (longlong)puStack_50;
      unaff_RDI[4] = unaff_RDI[4] + uVar3 * -0x200;
      if (lVar6 != 0) {
        operator_delete(pvVar12);
      }
    }
    else {
      uVar8 = uVar11;
      if ((undefined8 *)unaff_RDI[3] != puVar9) {
        do {
          operator_new((ulong)puVar9);
          FUN_009c574a();
          if (uVar11 == 1) {
            lVar6 = unaff_RDI[4];
            goto LAB_009c646d;
          }
          uVar11 = uVar11 - 1;
          uVar8 = uVar11;
        } while (unaff_RDI[3] != unaff_RDI[2]);
      }
      do {
        operator_new((ulong)puVar9);
        FUN_009c58ae();
        puVar9 = (undefined8 *)unaff_RDI[4];
        lVar6 = (longlong)puVar9 + (0x200 - (ulonglong)(unaff_RDI[2] - unaff_RDI[1] == 8));
        unaff_RDI[4] = lVar6;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      uVar3 = uVar3 + uVar8;
LAB_009c646d:
      unaff_RDI[4] = lVar6 + uVar3 * -0x200;
      if (uVar3 != 0) {
        puVar9 = (undefined8 *)unaff_RDI[2];
        do {
          puVar10 = (undefined8 *)unaff_RDI[3];
          uVar2 = *(undefined8 *)unaff_RDI[1];
          puVar4 = (undefined8 *)unaff_RDI[1] + 1;
          unaff_RDI[1] = (longlong)puVar4;
          if (puVar9 == puVar10) {
            puVar5 = (undefined8 *)*unaff_RDI;
            if (puVar4 < puVar5 || (longlong)puVar4 - (longlong)puVar5 == 0) {
              uVar11 = (longlong)puVar10 - (longlong)puVar5 >> 2;
              if ((longlong)puVar10 - (longlong)puVar5 == 0) {
                uVar11 = 1;
              }
              if (0x1fffffffffffffff < uVar11) goto LAB_009c6604;
              pvVar12 = operator_new((ulong)puVar5);
              puVar1 = (undefined8 *)((longlong)pvVar12 + (uVar11 >> 2) * 8);
              param_3 = (undefined8 *)((longlong)pvVar12 + uVar11 * 8);
              lVar6 = (longlong)puVar10 - (longlong)puVar4;
              puVar9 = puVar1;
              if (lVar6 != 0) {
                lVar7 = 0;
                do {
                  *puVar9 = *(undefined8 *)((longlong)puVar4 + lVar7);
                  puVar9 = (undefined8 *)((longlong)pvVar12 + lVar7 + (uVar11 >> 2) * 8 + 8);
                  lVar7 = lVar7 + 8;
                } while ((lVar6 >> 3) * 8 != lVar7);
                puVar5 = (undefined8 *)*unaff_RDI;
                puVar9 = (undefined8 *)((longlong)puVar1 + lVar6);
              }
              *unaff_RDI = (longlong)pvVar12;
              unaff_RDI[1] = (longlong)puVar1;
              unaff_RDI[2] = (longlong)puVar9;
              unaff_RDI[3] = (longlong)param_3;
              if (puVar5 != (undefined8 *)0x0) {
                operator_delete(puVar9);
                puVar9 = (undefined8 *)unaff_RDI[2];
              }
            }
            else {
              lVar6 = (longlong)puVar4 - (longlong)puVar5 >> 3;
              pvVar12 = (void *)-(lVar6 + 1 >> 0x3f);
              lVar6 = lVar6 + 1 + (longlong)pvVar12 >> 1;
              pvVar13 = (void *)((longlong)puVar10 - (longlong)puVar4);
              puVar10 = puVar4;
              if (pvVar13 != (void *)0x0) {
                _memmove(pvVar12,pvVar13,(size_t)param_3);
                puVar10 = (undefined8 *)unaff_RDI[1];
              }
              puVar9 = puVar4 + (((longlong)pvVar13 >> 3) - lVar6);
              unaff_RDI[2] = (longlong)puVar9;
              unaff_RDI[1] = (longlong)(puVar10 + -lVar6);
            }
          }
          *puVar9 = uVar2;
          puVar9 = (undefined8 *)(unaff_RDI[2] + 8);
          unaff_RDI[2] = (longlong)puVar9;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  return;
}


