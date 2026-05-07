// Function: FUN_00a15638
// Address: 00a15638
// Size: 1611 bytes
// Class: GNString


void FUN_00a15638(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  _Unwind_Exception *exception_object;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong unaff_RSI;
  undefined8 *puVar8;
  longlong *unaff_RDI;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  void *pvVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  lVar2 = unaff_RDI[1];
  lVar7 = unaff_RDI[2];
  lVar9 = lVar7 - lVar2;
  uVar5 = (ulonglong)(lVar9 == 0) + unaff_RSI;
  uVar5 = ((uVar5 >> 0xc) + 1) - (ulonglong)((uVar5 & 0xfff) == 0);
  lVar16 = lVar9 * 0x200 + -1;
  if (lVar9 == 0) {
    lVar16 = 0;
  }
  uVar17 = (ulonglong)(lVar16 - (unaff_RDI[5] + unaff_RDI[4])) >> 0xc;
  if (uVar5 < uVar17) {
    uVar17 = uVar5;
  }
  uVar14 = uVar5 - uVar17;
  if (uVar14 == 0) {
    unaff_RDI[4] = uVar17 * 0x1000 + unaff_RDI[4];
    if (uVar17 != 0) {
      unaff_RDI[2] = lVar7 + -8;
      FUN_009fdb80();
      if (uVar17 != 1) {
        lVar2 = 1 - uVar17;
        do {
          unaff_RDI[2] = unaff_RDI[2] + -8;
          FUN_009fdb80();
          lVar2 = lVar2 + 1;
        } while (lVar2 != 0);
      }
    }
  }
  else {
    lVar16 = unaff_RDI[3] - *unaff_RDI;
    if ((ulonglong)((lVar16 >> 3) - (lVar9 >> 3)) < uVar14) {
      uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar7 == lVar2);
      uVar6 = lVar16 >> 2;
      uVar10 = (lVar9 >> 3) + uVar14;
      if (uVar10 <= uVar6) {
        uVar10 = uVar6;
      }
      if (uVar10 == 0) {
        local_58 = (undefined8 *)0x0;
      }
      else {
        if (0x1fffffffffffffff < uVar10) {
          FUN_00a14cfb();
          exception_object = (_Unwind_Exception *)0x0;
          if ((longlong)local_48 - (longlong)local_50 != 0) {
            exception_object =
                 (_Unwind_Exception *)~(((longlong)local_48 - (longlong)local_50) - 8U >> 3);
          }
          if (local_58 != (undefined8 *)0x0) {
            operator_delete(exception_object);
          }
          __Unwind_Resume(exception_object);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_58 = operator_new((ulong)uVar4);
        uVar4 = CONCAT71((int7)(uVar4 >> 8),lVar7 == lVar2);
      }
      uVar6 = uVar4 & 0xff;
      local_40 = local_58 + uVar10;
      do {
        operator_new((ulong)uVar4);
        FUN_009f1e88();
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      local_48 = local_58;
      local_50 = local_58;
      if (uVar17 == 0) {
        puVar11 = (undefined8 *)unaff_RDI[2];
      }
      else {
        puVar11 = (undefined8 *)unaff_RDI[2];
        do {
          if (local_48 == local_40) {
            if (local_50 < local_58 || (longlong)local_50 - (longlong)local_58 == 0) {
              uVar14 = (longlong)local_40 - (longlong)local_58 >> 2;
              if ((longlong)local_40 - (longlong)local_58 == 0) {
                uVar14 = 1;
              }
              if (0x1fffffffffffffff < uVar14) {
                FUN_00a14cfb();
                goto LAB_00a15caa;
              }
              puVar3 = operator_new((ulong)local_58);
              param_3 = puVar3 + uVar14;
              puVar13 = puVar3 + (uVar14 >> 2);
              lVar2 = (longlong)local_40 - (longlong)local_50;
              local_48 = puVar13;
              if (lVar2 != 0) {
                local_48 = (undefined8 *)((longlong)puVar13 + lVar2);
                lVar7 = 0;
                puVar8 = puVar13;
                do {
                  *puVar8 = *(undefined8 *)((longlong)local_50 + lVar7);
                  puVar8 = (undefined8 *)((longlong)puVar3 + lVar7 + (uVar14 >> 2) * 8 + 8);
                  lVar7 = lVar7 + 8;
                } while ((lVar2 >> 3) * 8 != lVar7);
              }
              bVar18 = local_58 != (undefined8 *)0x0;
              local_58 = puVar3;
              local_50 = puVar13;
              local_40 = param_3;
              if (bVar18) {
                operator_delete(local_48);
              }
            }
            else {
              lVar2 = (longlong)local_50 - (longlong)local_58 >> 3;
              lVar2 = (lVar2 + 1) - (lVar2 + 1 >> 0x3f) >> 1;
              pvVar12 = (void *)((longlong)local_40 - (longlong)local_50);
              if (pvVar12 != (void *)0x0) {
                _memmove(local_50 + -lVar2,pvVar12,(size_t)param_3);
              }
              local_48 = local_50 + -lVar2 + ((longlong)pvVar12 >> 3);
              local_50 = local_50 + -lVar2;
            }
          }
          *local_48 = puVar11[-1];
          local_48 = local_48 + 1;
          puVar11 = (undefined8 *)(unaff_RDI[2] + -8);
          unaff_RDI[2] = (longlong)puVar11;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)unaff_RDI[1];
      if (puVar13 != puVar11) {
        do {
          if (local_48 == local_40) {
            if (local_50 < local_58 || (longlong)local_50 - (longlong)local_58 == 0) {
              uVar17 = (longlong)local_40 - (longlong)local_58 >> 2;
              if ((longlong)local_40 - (longlong)local_58 == 0) {
                uVar17 = 1;
              }
              if (0x1fffffffffffffff < uVar17) {
                FUN_00a14cfb();
LAB_00a15caa:
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              puVar3 = operator_new((ulong)local_48);
              param_3 = puVar3 + uVar17;
              puVar11 = puVar3 + (uVar17 >> 2);
              lVar2 = (longlong)local_40 - (longlong)local_50;
              local_48 = puVar11;
              if (lVar2 != 0) {
                local_48 = (undefined8 *)((longlong)puVar11 + lVar2);
                lVar7 = 0;
                puVar8 = puVar11;
                do {
                  *puVar8 = *(undefined8 *)((longlong)local_50 + lVar7);
                  puVar8 = (undefined8 *)((longlong)puVar3 + lVar7 + (uVar17 >> 2) * 8 + 8);
                  lVar7 = lVar7 + 8;
                } while ((lVar2 >> 3) * 8 != lVar7);
              }
              bVar18 = local_58 != (undefined8 *)0x0;
              local_58 = puVar3;
              local_50 = puVar11;
              local_40 = param_3;
              if (bVar18) {
                operator_delete(local_48);
              }
            }
            else {
              lVar2 = (longlong)local_50 - (longlong)local_58 >> 3;
              pvVar12 = (void *)-(lVar2 + 1 >> 0x3f);
              lVar2 = lVar2 + 1 + (longlong)pvVar12 >> 1;
              pvVar15 = (void *)((longlong)local_40 - (longlong)local_50);
              if (pvVar15 != (void *)0x0) {
                _memmove(pvVar12,pvVar15,(size_t)param_3);
              }
              local_48 = local_50 + (((longlong)pvVar15 >> 3) - lVar2);
              local_50 = local_50 + -lVar2;
            }
          }
          *local_48 = *puVar13;
          local_48 = local_48 + 1;
          puVar13 = puVar13 + 1;
        } while (puVar13 != (undefined8 *)unaff_RDI[2]);
      }
      lVar2 = *unaff_RDI;
      *unaff_RDI = (longlong)local_58;
      unaff_RDI[1] = (longlong)local_50;
      unaff_RDI[2] = (longlong)local_48;
      unaff_RDI[3] = (longlong)local_40;
      unaff_RDI[4] = unaff_RDI[4] + (uVar5 * 0x1000 - uVar6);
      if (lVar2 != 0) {
        operator_delete(local_40);
      }
    }
    else {
      uVar5 = uVar14;
      if (*unaff_RDI != lVar2) {
        do {
          operator_new((ulong)lVar2);
          FUN_009f1d40();
          lVar2 = (unaff_RDI[4] + 0x1000) - (ulonglong)(unaff_RDI[2] - unaff_RDI[1] == 8);
          unaff_RDI[4] = lVar2;
          if (uVar14 == 1) goto LAB_00a15be4;
          uVar14 = uVar14 - 1;
          uVar5 = uVar14;
        } while (unaff_RDI[1] != *unaff_RDI);
      }
      do {
        operator_new((ulong)lVar2);
        FUN_009cfce8();
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      uVar17 = uVar17 + uVar5;
      lVar2 = unaff_RDI[4];
LAB_00a15be4:
      unaff_RDI[4] = uVar17 * 0x1000 + lVar2;
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        unaff_RDI[2] = unaff_RDI[2] + -8;
        FUN_009fdb80();
      }
    }
  }
  return;
}


