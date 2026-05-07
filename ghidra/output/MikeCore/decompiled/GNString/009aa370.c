// Function: FUN_009aa370
// Address: 009aa370
// Size: 1754 bytes
// Class: GNString


void FUN_009aa370(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong unaff_RSI;
  undefined8 *puVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  void *pvVar13;
  void *pvVar14;
  bool bVar15;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  
  puVar11 = (undefined8 *)unaff_RDI[1];
  puVar10 = (undefined8 *)unaff_RDI[2];
  uVar4 = (ulonglong)((longlong)puVar10 - (longlong)puVar11 == 0) + unaff_RSI;
  uVar12 = ((uVar4 >> 0xc) + 1) - (ulonglong)((uVar4 & 0xfff) == 0);
  uVar4 = (ulonglong)unaff_RDI[4] >> 0xc;
  if (uVar12 < uVar4) {
    uVar4 = uVar12;
  }
  uVar12 = uVar12 - uVar4;
  if (uVar12 == 0) {
    unaff_RDI[4] = unaff_RDI[4] + uVar4 * -0x1000;
    if (uVar4 != 0) {
      while( true ) {
        uVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        unaff_RDI[1] = (longlong)puVar11;
        puVar5 = (undefined8 *)unaff_RDI[3];
        if (puVar10 == puVar5) {
          puVar6 = (undefined8 *)*unaff_RDI;
          if (puVar11 < puVar6 || (longlong)puVar11 - (longlong)puVar6 == 0) {
            uVar12 = (longlong)puVar5 - (longlong)puVar6 >> 2;
            if ((longlong)puVar5 - (longlong)puVar6 == 0) {
              uVar12 = 1;
            }
            if (0x1fffffffffffffff < uVar12) goto LAB_009aaa3c;
            pvVar13 = operator_new((ulong)puVar6);
            puVar1 = (undefined8 *)((longlong)pvVar13 + (uVar12 >> 2) * 8);
            param_3 = (undefined8 *)((longlong)pvVar13 + uVar12 * 8);
            lVar7 = (longlong)puVar5 - (longlong)puVar11;
            puVar10 = puVar1;
            if (lVar7 != 0) {
              lVar8 = 0;
              do {
                *puVar10 = *(undefined8 *)((longlong)puVar11 + lVar8);
                puVar10 = (undefined8 *)((longlong)pvVar13 + lVar8 + (uVar12 >> 2) * 8 + 8);
                lVar8 = lVar8 + 8;
              } while ((lVar7 >> 3) * 8 != lVar8);
              puVar6 = (undefined8 *)*unaff_RDI;
              puVar10 = (undefined8 *)((longlong)puVar1 + lVar7);
            }
            *unaff_RDI = (longlong)pvVar13;
            unaff_RDI[1] = (longlong)puVar1;
            unaff_RDI[2] = (longlong)puVar10;
            unaff_RDI[3] = (longlong)param_3;
            if (puVar6 != (undefined8 *)0x0) {
              operator_delete(puVar10);
              puVar10 = (undefined8 *)unaff_RDI[2];
            }
          }
          else {
            lVar7 = (longlong)puVar11 - (longlong)puVar6 >> 3;
            pvVar13 = (void *)-(lVar7 + 1 >> 0x3f);
            lVar7 = lVar7 + 1 + (longlong)pvVar13 >> 1;
            pvVar14 = (void *)((longlong)puVar5 - (longlong)puVar11);
            puVar5 = puVar11;
            if (pvVar14 != (void *)0x0) {
              _memmove(pvVar13,pvVar14,(size_t)param_3);
              puVar5 = (undefined8 *)unaff_RDI[1];
            }
            puVar10 = puVar11 + (((longlong)pvVar14 >> 3) - lVar7);
            unaff_RDI[2] = (longlong)puVar10;
            unaff_RDI[1] = (longlong)(puVar5 + -lVar7);
          }
        }
        *puVar10 = uVar2;
        puVar10 = (undefined8 *)(unaff_RDI[2] + 8);
        unaff_RDI[2] = (longlong)puVar10;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) break;
        puVar11 = (undefined8 *)unaff_RDI[1];
      }
    }
  }
  else {
    lVar8 = unaff_RDI[3] - *unaff_RDI;
    lVar7 = (longlong)puVar10 - (longlong)puVar11 >> 3;
    if ((ulonglong)((lVar8 >> 3) - lVar7) < uVar12) {
      uVar9 = lVar8 >> 2;
      if (uVar9 < lVar7 + uVar12) {
        uVar9 = lVar7 + uVar12;
      }
      if (uVar9 == 0) {
        local_68 = (undefined8 *)0x0;
      }
      else {
        if (0x1fffffffffffffff < uVar9) {
LAB_009aaa3c:
          FUN_009a7f66();
LAB_009aaa41:
          FUN_009a7f66();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_68 = operator_new(0xffffffff);
      }
      puStack_60 = local_68 + (lVar7 - uVar4);
      puStack_50 = local_68 + uVar9;
      puVar10 = puStack_60;
      do {
        operator_new((ulong)puVar10);
        FUN_009f1e88();
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      local_58 = puStack_60;
      if (uVar4 != 0) {
        puVar10 = (undefined8 *)unaff_RDI[1];
        uVar12 = uVar4;
        do {
          if (local_58 == puStack_50) {
            if (puStack_60 < local_68 || (longlong)puStack_60 - (longlong)local_68 == 0) {
              uVar9 = (longlong)puStack_50 - (longlong)local_68 >> 2;
              if ((longlong)puStack_50 - (longlong)local_68 == 0) {
                uVar9 = 1;
              }
              if (0x1fffffffffffffff < uVar9) goto LAB_009aaa41;
              puVar5 = operator_new((ulong)local_68);
              param_3 = puVar5 + uVar9;
              puVar11 = puVar5 + (uVar9 >> 2);
              lVar7 = (longlong)puStack_50 - (longlong)puStack_60;
              local_58 = puVar11;
              if (lVar7 != 0) {
                local_58 = (undefined8 *)((longlong)puVar11 + lVar7);
                lVar8 = 0;
                puVar6 = puVar11;
                do {
                  *puVar6 = *(undefined8 *)((longlong)puStack_60 + lVar8);
                  puVar6 = (undefined8 *)((longlong)puVar5 + lVar8 + (uVar9 >> 2) * 8 + 8);
                  lVar8 = lVar8 + 8;
                } while ((lVar7 >> 3) * 8 != lVar8);
              }
              bVar15 = local_68 != (undefined8 *)0x0;
              local_68 = puVar5;
              puStack_60 = puVar11;
              puStack_50 = param_3;
              if (bVar15) {
                operator_delete(local_58);
              }
            }
            else {
              lVar7 = (longlong)puStack_60 - (longlong)local_68 >> 3;
              lVar7 = (lVar7 + 1) - (lVar7 + 1 >> 0x3f) >> 1;
              pvVar13 = (void *)((longlong)puStack_50 - (longlong)puStack_60);
              if (pvVar13 != (void *)0x0) {
                _memmove(puStack_60 + -lVar7,pvVar13,(size_t)param_3);
              }
              local_58 = puStack_60 + -lVar7 + ((longlong)pvVar13 >> 3);
              puStack_60 = puStack_60 + -lVar7;
            }
          }
          *local_58 = *puVar10;
          local_58 = local_58 + 1;
          puVar10 = (undefined8 *)(unaff_RDI[1] + 8);
          unaff_RDI[1] = (longlong)puVar10;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      for (lVar7 = unaff_RDI[2]; lVar7 != unaff_RDI[1]; lVar7 = lVar7 + -8) {
        FUN_009cfe58();
      }
      lVar7 = *unaff_RDI;
      *unaff_RDI = (longlong)local_68;
      unaff_RDI[1] = (longlong)puStack_60;
      pvVar13 = (void *)unaff_RDI[2];
      unaff_RDI[2] = (longlong)local_58;
      unaff_RDI[3] = (longlong)puStack_50;
      unaff_RDI[4] = unaff_RDI[4] + uVar4 * -0x1000;
      if (lVar7 != 0) {
        operator_delete(pvVar13);
      }
    }
    else {
      uVar9 = uVar12;
      if ((undefined8 *)unaff_RDI[3] != puVar10) {
        do {
          operator_new((ulong)puVar10);
          FUN_009cfce8();
          if (uVar12 == 1) {
            lVar7 = unaff_RDI[4];
            goto LAB_009aa8a5;
          }
          uVar12 = uVar12 - 1;
          uVar9 = uVar12;
        } while (unaff_RDI[3] != unaff_RDI[2]);
      }
      do {
        operator_new((ulong)puVar10);
        FUN_009f1d40();
        puVar10 = (undefined8 *)unaff_RDI[4];
        lVar7 = (longlong)puVar10 + (0x1000 - (ulonglong)(unaff_RDI[2] - unaff_RDI[1] == 8));
        unaff_RDI[4] = lVar7;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      uVar4 = uVar4 + uVar9;
LAB_009aa8a5:
      unaff_RDI[4] = lVar7 + uVar4 * -0x1000;
      if (uVar4 != 0) {
        puVar10 = (undefined8 *)unaff_RDI[2];
        do {
          puVar11 = (undefined8 *)unaff_RDI[3];
          uVar2 = *(undefined8 *)unaff_RDI[1];
          puVar5 = (undefined8 *)unaff_RDI[1] + 1;
          unaff_RDI[1] = (longlong)puVar5;
          if (puVar10 == puVar11) {
            puVar6 = (undefined8 *)*unaff_RDI;
            if (puVar5 < puVar6 || (longlong)puVar5 - (longlong)puVar6 == 0) {
              uVar12 = (longlong)puVar11 - (longlong)puVar6 >> 2;
              if ((longlong)puVar11 - (longlong)puVar6 == 0) {
                uVar12 = 1;
              }
              if (0x1fffffffffffffff < uVar12) goto LAB_009aaa3c;
              pvVar13 = operator_new((ulong)puVar6);
              puVar1 = (undefined8 *)((longlong)pvVar13 + (uVar12 >> 2) * 8);
              param_3 = (undefined8 *)((longlong)pvVar13 + uVar12 * 8);
              lVar7 = (longlong)puVar11 - (longlong)puVar5;
              puVar10 = puVar1;
              if (lVar7 != 0) {
                lVar8 = 0;
                do {
                  *puVar10 = *(undefined8 *)((longlong)puVar5 + lVar8);
                  puVar10 = (undefined8 *)((longlong)pvVar13 + lVar8 + (uVar12 >> 2) * 8 + 8);
                  lVar8 = lVar8 + 8;
                } while ((lVar7 >> 3) * 8 != lVar8);
                puVar6 = (undefined8 *)*unaff_RDI;
                puVar10 = (undefined8 *)((longlong)puVar1 + lVar7);
              }
              *unaff_RDI = (longlong)pvVar13;
              unaff_RDI[1] = (longlong)puVar1;
              unaff_RDI[2] = (longlong)puVar10;
              unaff_RDI[3] = (longlong)param_3;
              if (puVar6 != (undefined8 *)0x0) {
                operator_delete(puVar10);
                puVar10 = (undefined8 *)unaff_RDI[2];
              }
            }
            else {
              lVar7 = (longlong)puVar5 - (longlong)puVar6 >> 3;
              pvVar13 = (void *)-(lVar7 + 1 >> 0x3f);
              lVar7 = lVar7 + 1 + (longlong)pvVar13 >> 1;
              pvVar14 = (void *)((longlong)puVar11 - (longlong)puVar5);
              puVar11 = puVar5;
              if (pvVar14 != (void *)0x0) {
                _memmove(pvVar13,pvVar14,(size_t)param_3);
                puVar11 = (undefined8 *)unaff_RDI[1];
              }
              puVar10 = puVar5 + (((longlong)pvVar14 >> 3) - lVar7);
              unaff_RDI[2] = (longlong)puVar10;
              unaff_RDI[1] = (longlong)(puVar11 + -lVar7);
            }
          }
          *puVar10 = uVar2;
          puVar10 = (undefined8 *)(unaff_RDI[2] + 8);
          unaff_RDI[2] = (longlong)puVar10;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
  }
  return;
}


