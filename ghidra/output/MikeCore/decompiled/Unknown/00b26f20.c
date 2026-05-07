// Function: FUN_00b26f20
// Address: 00b26f20
// Size: 1796 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00b26f20(uint *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong unaff_RSI;
  longlong lVar14;
  uint unaff_EDI;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  
  if (0x3f < unaff_EDI - 1) {
    return (uint *)0x0;
  }
  if (0x2b10f0 < unaff_RSI - 0x10U) {
    return (uint *)0x0;
  }
  puVar3 = _malloc((size_t)param_1);
  if (puVar3 == (uint *)0x0) {
    return (uint *)0x0;
  }
  puVar4 = _malloc((size_t)param_1);
  *(undefined8 **)(puVar3 + 4) = puVar4;
  if (puVar4 == (undefined8 *)0x0) goto LAB_00b274fa;
  puVar3[1] = unaff_EDI;
  uVar15 = (ulonglong)unaff_EDI;
  puVar5 = _malloc((size_t)param_1);
  puVar4[4] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    if (unaff_EDI == 4) {
      *(undefined4 *)puVar5 = 1;
      lVar6 = 3;
      param_1 = (uint *)((longlong)&MACH_HEADER.magic + 2);
      uVar12 = 2;
      lVar14 = 1;
LAB_00b27010:
      *(undefined4 *)((longlong)puVar5 + lVar14 * 4) = uVar12;
      *(undefined4 *)((longlong)puVar5 + (longlong)param_1 * 4) = 4;
      *(undefined4 *)((longlong)puVar5 + lVar6 * 4) = 5;
    }
    else {
      if (unaff_EDI == 5) {
        *puVar5 = 0x200000001;
        lVar6 = 4;
        param_1 = (uint *)((longlong)&MACH_HEADER.magic + 3);
        uVar12 = 3;
        lVar14 = 2;
        goto LAB_00b27010;
      }
      uVar11 = 0;
      param_1 = &switchD_00b270fa::switchdataD_00b27624;
      do {
        switch(uVar11) {
        case 0:
          *(undefined4 *)puVar5 = 1;
          break;
        case 1:
          *(undefined4 *)((longlong)puVar5 + 4) = 2;
          break;
        case 2:
          *(undefined4 *)(puVar5 + 1) = 3;
          break;
        case 3:
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          break;
        case 4:
          *(undefined4 *)(puVar5 + 2) = 4;
          break;
        case 5:
          *(undefined4 *)((longlong)puVar5 + 0x14) = 5;
          break;
        default:
          *(undefined4 *)((longlong)puVar5 + uVar11 * 4) = 0;
        }
        uVar11 = uVar11 + 1;
      } while (uVar15 != uVar11);
    }
    pvVar7 = _malloc((size_t)param_1);
    puVar4[0x1d] = pvVar7;
    if (pvVar7 != (void *)0x0) {
      pvVar8 = _malloc((size_t)param_1);
      puVar4[0x1e] = pvVar8;
      if (pvVar8 != (void *)0x0) {
        pvVar9 = _malloc((size_t)param_1);
        puVar4[0x1f] = pvVar9;
        if (pvVar9 != (void *)0x0) {
          pvVar10 = _malloc((size_t)param_1);
          puVar4[0x20] = pvVar10;
          if (pvVar10 != (void *)0x0) {
            if (unaff_EDI != 0) {
              if (unaff_EDI < 4) {
                uVar11 = 0;
              }
              else {
                uVar11 = (ulonglong)(unaff_EDI & 0xfffffffc);
                uVar13 = (uVar11 - 4 >> 2) + 1;
                if (uVar11 - 4 == 0) {
                  lVar6 = 0;
                }
                else {
                  lVar14 = -(uVar13 & 0xfffffffffffffffe);
                  lVar6 = 0;
                  do {
                    puVar5 = (undefined8 *)((longlong)pvVar7 + lVar6 * 8);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar7 + lVar6 * 8 + 0x10);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar8 + lVar6 * 8);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar8 + lVar6 * 8 + 0x10);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar9 + lVar6 * 8);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar9 + lVar6 * 8 + 0x10);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar10 + lVar6 * 8);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar10 + lVar6 * 8 + 0x10);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar7 + lVar6 * 8 + 0x20);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar7 + lVar6 * 8 + 0x30);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar8 + lVar6 * 8 + 0x20);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar8 + lVar6 * 8 + 0x30);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar9 + lVar6 * 8 + 0x20);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar9 + lVar6 * 8 + 0x30);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar10 + lVar6 * 8 + 0x20);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    puVar5 = (undefined8 *)((longlong)pvVar10 + lVar6 * 8 + 0x30);
                    *puVar5 = 0;
                    puVar5[1] = 0;
                    lVar6 = lVar6 + 8;
                    lVar14 = lVar14 + 2;
                  } while (lVar14 != 0);
                }
                if ((uVar13 & 1) != 0) {
                  puVar5 = (undefined8 *)((longlong)pvVar7 + lVar6 * 8);
                  *puVar5 = 0;
                  puVar5[1] = 0;
                  puVar5 = (undefined8 *)((longlong)pvVar7 + lVar6 * 8 + 0x10);
                  *puVar5 = 0;
                  puVar5[1] = 0;
                  puVar5 = (undefined8 *)((longlong)pvVar8 + lVar6 * 8);
                  *puVar5 = 0;
                  puVar5[1] = 0;
                  puVar5 = (undefined8 *)((longlong)pvVar8 + lVar6 * 8 + 0x10);
                  *puVar5 = 0;
                  puVar5[1] = 0;
                  puVar5 = (undefined8 *)((longlong)pvVar9 + lVar6 * 8);
                  *puVar5 = 0;
                  puVar5[1] = 0;
                  puVar5 = (undefined8 *)((longlong)pvVar9 + lVar6 * 8 + 0x10);
                  *puVar5 = 0;
                  puVar5[1] = 0;
                  puVar5 = (undefined8 *)((longlong)pvVar10 + lVar6 * 8);
                  *puVar5 = 0;
                  puVar5[1] = 0;
                  puVar5 = (undefined8 *)((longlong)pvVar10 + lVar6 * 8 + 0x10);
                  *puVar5 = 0;
                  puVar5[1] = 0;
                }
                if (uVar11 == uVar15) goto LAB_00b2724a;
              }
              do {
                *(undefined8 *)((longlong)pvVar7 + uVar11 * 8) = 0;
                *(undefined8 *)((longlong)pvVar8 + uVar11 * 8) = 0;
                *(undefined8 *)((longlong)pvVar9 + uVar11 * 8) = 0;
                *(undefined8 *)((longlong)pvVar10 + uVar11 * 8) = 0;
                uVar11 = uVar11 + 1;
              } while (uVar15 != uVar11);
            }
LAB_00b2724a:
            *(uint *)(puVar4 + 0x19) = param_2 >> 6 & 1;
            puVar4[0x27] = 0xffffffffffffffff;
            *(longlong *)(puVar3 + 2) = unaff_RSI;
            param_1 = (uint *)((unaff_RSI + 5U) / 10);
            puVar4[5] = param_1;
            *puVar3 = param_2;
            lVar6 = 3000;
            if (((~param_2 & 3) == 0) || (lVar6 = 400, (param_2 & 1) != 0)) {
              puVar4[0x26] = lVar6;
              uVar11 = (ulonglong)(lVar6 * unaff_RSI) / 1000;
              if (((uVar11 | (ulonglong)param_1) & 0x1fffffff00000000) == 0) {
                uVar13 = (uVar11 & 0xffffffff) % ((ulonglong)param_1 & 0xffffffff);
              }
              else {
                uVar13 = uVar11 % (ulonglong)param_1;
              }
              param_1 = (uint *)((longlong)param_1 - uVar13);
              if (uVar13 == 0) {
                param_1 = (uint *)0x0;
              }
              lVar6 = uVar11 + (longlong)param_1;
              puVar4[1] = lVar6;
              pvVar7 = _malloc((size_t)param_1);
              *puVar4 = pvVar7;
              if (pvVar7 != (void *)0x0) {
                if (lVar6 * uVar15 != 0) {
                  ___bzero();
                }
                iVar2 = FUN_00b27640();
                if (iVar2 == 0) {
                  if (*(int *)(puVar4 + 0x19) == 0) {
                    puVar4[0x1a] = 0;
                    puVar4[0x1b] = 0;
LAB_00b273d1:
                    puVar4[0x11] = 0;
                    puVar4[0x12] = puVar4 + 0x11;
                    puVar4[0x14] = 0;
                    puVar4[0x15] = 0;
                    param_1 = (uint *)puVar4[0x27];
                    puVar4[0x13] = (ulonglong)param_1 / 100;
                    puVar4[0x16] = puVar4 + 0x15;
                    puVar4[0x18] = 0;
                    puVar4[0x17] = (ulonglong)param_1 / 3000;
                    puVar4[0x1c] = 0;
                    iVar2 = FUN_00b27880();
                    if (iVar2 == 0) {
                      puVar4[3] = puVar4[5] << 2;
                      puVar4[2] = 0;
                      _DAT_028a0ea0 = 0x3fb999999999999a;
                      _DAT_028a0ea8 = 0x3f847ae147ae147b;
                      _DAT_028a0eb0 = 0x3e7f791ec6e1d5b7;
                      if (*(int *)(puVar4 + 0x19) != 0) {
                        puVar4 = &DAT_028a2e00;
                        uVar15 = 0;
                        dVar16 = _DAT_0241eeb8;
                        dVar17 = DAT_023d5940;
                        do {
                          uVar1 = ___exp10(SUB84(((double)(uVar15 & 0xffffffff) / dVar16 +
                                                  _DAT_023d5938 + dVar17) / dVar16,0));
                          dVar16 = _DAT_0241eeb8;
                          dVar17 = DAT_023d5940;
                          *puVar4 = uVar1;
                          uVar15 = uVar15 + 1;
                          puVar4 = puVar4 + 1;
                        } while (uVar15 != 1000);
                        uVar15 = 1;
                        do {
                          uVar1 = ___exp10(SUB84(((double)(uVar15 & 0xffffffff) / dVar16 +
                                                  _DAT_023d5948 + dVar17) / dVar16,0));
                          dVar16 = _DAT_0241eeb8;
                          dVar17 = DAT_023d5940;
                          *(undefined8 *)(&DAT_028a0eb0 + uVar15 * 8) = uVar1;
                          uVar15 = uVar15 + 1;
                        } while (uVar15 != 0x3e9);
                        return puVar3;
                      }
                      _DAT_028a0ea0 = 0x3fb999999999999a;
                      _DAT_028a0ea8 = 0x3f847ae147ae147b;
                      _DAT_028a0eb0 = 0x3e7f791ec6e1d5b7;
                      return puVar3;
                    }
                    _free(param_1);
LAB_00b27481:
                    _free(param_1);
                  }
                  else {
                    pvVar7 = _malloc((size_t)param_1);
                    puVar4[0x1a] = pvVar7;
                    if (pvVar7 != (void *)0x0) {
                      ___bzero();
                      pvVar7 = _malloc((size_t)param_1);
                      puVar4[0x1b] = pvVar7;
                      if (pvVar7 != (void *)0x0) {
                        ___bzero();
                        goto LAB_00b273d1;
                      }
                      goto LAB_00b27481;
                    }
                  }
                  _free(param_1);
                }
                _free(param_1);
              }
            }
            _free(param_1);
          }
          _free(param_1);
        }
        _free(param_1);
      }
      _free(param_1);
    }
    _free(param_1);
  }
  _free(param_1);
LAB_00b274fa:
  _free(param_1);
  return (uint *)0x0;
}


