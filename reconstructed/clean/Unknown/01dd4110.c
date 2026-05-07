// Function: FUN_01dd4110
// Address: 01dd4110
// Size: 1289 bytes
// Class: Unknown

void FUN_01dd4110(uint64_t param_1,uint32_t param_2,uint64_t param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int iVar7;
  int unaff_ESI;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int64_t *this_ptr;
  uint uVar11;
  uint uVar12;
  int64_t lVar13;
  uint uVar14;
  bool bVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint32_t uVar18;
  int64_t local_48;
  char local_40;
  
  if (((int)this_ptr[0x36] != -1) && (this_ptr[0x34] != 0)) {
    lVar13 = this_ptr[0x35];
    if (lVar13 != 0) {
      FUN_00d50b00();
    }
    FUN_00c8e4f0();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
    iVar7 = (int)this_ptr[0x36];
    if (iVar7 < unaff_ESI) {
      do {
        iVar3 = *(int *)(local_48 + 0x18);
        lVar13 = (int64_t)iVar3;
        iVar2 = iVar3 + 3;
        if (-1 < lVar13) {
          iVar2 = iVar3;
        }
        if (3 < lVar13) {
          lVar5 = 0;
          do {
            if (*(int *)(*(int64_t *)(local_48 + 0x10) + lVar5 * 4) == iVar7) goto LAB_01dd41d0;
            lVar5 = lVar5 + 1;
          } while (iVar2 >> 2 != (int)lVar5);
        }
        FUN_00c8e340();
        *(int *)(*(int64_t *)(local_48 + 0x10) + lVar13) = iVar7;
LAB_01dd41d0:
        uVar11 = (uint)param_3;
        bVar15 = iVar7 != unaff_ESI;
        iVar7 = iVar7 + 1;
      } while (bVar15);
    }
    else {
      do {
        iVar3 = *(int *)(local_48 + 0x18);
        lVar13 = (int64_t)iVar3;
        iVar2 = iVar3 + 3;
        if (-1 < lVar13) {
          iVar2 = iVar3;
        }
        if (3 < lVar13) {
          lVar5 = 0;
          do {
            if (*(int *)(*(int64_t *)(local_48 + 0x10) + lVar5 * 4) == unaff_ESI)
            goto LAB_01dd4230;
            lVar5 = lVar5 + 1;
          } while (iVar2 >> 2 != (int)lVar5);
        }
        FUN_00c8e340();
        *(int *)(*(int64_t *)(local_48 + 0x10) + lVar13) = unaff_ESI;
        iVar7 = (int)this_ptr[0x36];
LAB_01dd4230:
        uVar11 = (uint)param_3;
        bVar15 = unaff_ESI < iVar7;
        unaff_ESI = unaff_ESI + 1;
      } while (bVar15);
    }
    uVar14 = 0xffffffff;
    if (local_48 == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar8 = *(uint *)(local_48 + 0x18);
      uVar11 = uVar8 + 3;
      if (-1 < (int)uVar8) {
        uVar11 = uVar8;
      }
      uVar12 = 0xffffffff;
      if (3 < (int)uVar8) {
        uVar11 = (int)uVar11 >> 2;
        lVar13 = *(int64_t *)(local_48 + 0x10);
        iVar7 = *(int *)(this_ptr[0x34] + 0x18);
        iVar3 = iVar7 + 3;
        if (-1 < iVar7) {
          iVar3 = iVar7;
        }
        if (iVar7 < 4) {
          if ((uVar8 & 0xfffffffc) == 4) {
            uVar8 = 0xffffffff;
            uVar6 = 0;
            uVar14 = 0xffffffff;
          }
          else {
            uVar8 = 0xffffffff;
            uVar6 = 0;
            uVar14 = 0xffffffff;
            do {
              uVar12 = *(uint *)(lVar13 + uVar6 * 4);
              uVar9 = uVar8;
              if ((int)uVar12 < (int)uVar8) {
                uVar9 = uVar12;
              }
              if (uVar8 == 0xffffffff) {
                uVar9 = uVar12;
              }
              uVar1 = *(uint *)(lVar13 + 4 + uVar6 * 4);
              uVar10 = uVar14;
              if ((int)uVar14 < (int)uVar12) {
                uVar10 = uVar12;
              }
              if (uVar14 == 0xffffffff) {
                uVar10 = uVar12;
              }
              uVar8 = uVar1;
              if ((int)uVar9 <= (int)uVar1) {
                uVar8 = uVar9;
              }
              if (uVar9 == 0xffffffff) {
                uVar8 = uVar1;
              }
              uVar14 = uVar1;
              if ((int)uVar1 <= (int)uVar10) {
                uVar14 = uVar10;
              }
              if (uVar10 == 0xffffffff) {
                uVar14 = uVar1;
              }
              uVar6 = uVar6 + 2;
            } while ((uVar11 & 0xfffffffe) != (uint)uVar6);
          }
          uVar12 = uVar8;
          if ((uVar11 & 1) != 0) {
            uVar9 = *(uint *)(lVar13 + (uVar6 & 0xffffffff) * 4);
            uVar1 = uVar14;
            if ((int)uVar14 < (int)uVar9) {
              uVar1 = uVar9;
            }
            bVar15 = uVar14 == 0xffffffff;
            uVar14 = uVar1;
            if (bVar15) {
              uVar14 = uVar9;
            }
            if ((int)uVar9 < (int)uVar8) {
              uVar12 = uVar9;
            }
            if (uVar8 == 0xffffffff) {
              uVar12 = uVar9;
            }
          }
        }
        else {
          uVar12 = 0xffffffff;
          uVar6 = 0;
          uVar14 = 0xffffffff;
          do {
            uVar8 = *(uint *)(lVar13 + uVar6 * 4);
            lVar5 = 0;
            do {
              if (*(uint *)(*(int64_t *)(this_ptr[0x34] + 0x10) + lVar5 * 4) == uVar8)
              goto LAB_01dd4310;
              lVar5 = lVar5 + 1;
            } while (iVar3 >> 2 != (int)lVar5);
            uVar9 = uVar12;
            if ((int)uVar8 < (int)uVar12) {
              uVar9 = uVar8;
            }
            bVar15 = uVar12 == 0xffffffff;
            uVar12 = uVar9;
            if (bVar15) {
              uVar12 = uVar8;
            }
            uVar9 = uVar14;
            if ((int)uVar14 < (int)uVar8) {
              uVar9 = uVar8;
            }
            bVar15 = uVar14 == 0xffffffff;
            uVar14 = uVar9;
            if (bVar15) {
              uVar14 = uVar8;
            }
LAB_01dd4310:
            uVar8 = (int)uVar6 + 1;
            uVar6 = (uint64_t)uVar8;
          } while ((int)uVar8 < (int)uVar11);
        }
      }
    }
    pvVar4 = (void *)this_ptr[0x34];
    uVar8 = uVar12;
    if (pvVar4 != (void *)0x0) {
      uVar9 = *(uint *)((int64_t)pvVar4 + 0x18);
      uVar11 = uVar9 + 3;
      if (-1 < (int)uVar9) {
        uVar11 = uVar9;
      }
      if (3 < (int)uVar9) {
        uVar11 = (int)uVar11 >> 2;
        lVar13 = *(int64_t *)((int64_t)pvVar4 + 0x10);
        uVar8 = *(uint *)(local_48 + 0x18);
        uVar1 = uVar8 + 3;
        if (-1 < (int)uVar8) {
          uVar1 = uVar8;
        }
        if ((int)uVar8 < 4) {
          if ((uVar9 & 0xfffffffc) == 4) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            do {
              uVar1 = *(uint *)(lVar13 + lVar5 * 4);
              uVar8 = uVar12;
              if ((int)uVar1 < (int)uVar12) {
                uVar8 = uVar1;
              }
              if (uVar12 == 0xffffffff) {
                uVar8 = uVar1;
              }
              uVar9 = *(uint *)(lVar13 + 4 + lVar5 * 4);
              uVar10 = uVar14;
              if ((int)uVar14 < (int)uVar1) {
                uVar10 = uVar1;
              }
              if (uVar14 == 0xffffffff) {
                uVar10 = uVar1;
              }
              uVar12 = uVar9;
              if ((int)uVar8 <= (int)uVar9) {
                uVar12 = uVar8;
              }
              if (uVar8 == 0xffffffff) {
                uVar12 = uVar9;
              }
              uVar14 = uVar9;
              if ((int)uVar9 <= (int)uVar10) {
                uVar14 = uVar10;
              }
              if (uVar10 == 0xffffffff) {
                uVar14 = uVar9;
              }
              lVar5 = lVar5 + 2;
            } while ((uVar11 & 0xfffffffe) != (uint)lVar5);
          }
          pvVar4 = (void *)(uint64_t)uVar1;
          uVar8 = uVar12;
          if ((uVar11 & 1) != 0) {
            uVar9 = *(uint *)(lVar13 + lVar5 * 4);
            uVar1 = uVar14;
            if ((int)uVar14 < (int)uVar9) {
              uVar1 = uVar9;
            }
            bVar15 = uVar14 == 0xffffffff;
            uVar14 = uVar1;
            if (bVar15) {
              uVar14 = uVar9;
            }
            pvVar4 = (void *)(uint64_t)uVar14;
            if ((int)uVar9 < (int)uVar12) {
              uVar8 = uVar9;
            }
            if (uVar12 == 0xffffffff) {
              uVar8 = uVar9;
            }
          }
        }
        else {
          uVar9 = 0;
          do {
            uVar8 = *(uint *)(lVar13 + (uint64_t)uVar9 * 4);
            pvVar4 = (void *)0x0;
            do {
              if (*(uint *)(*(int64_t *)(local_48 + 0x10) + (int64_t)pvVar4 * 4) == uVar8)
              goto LAB_01dd43f0;
              pvVar4 = (void *)((int64_t)pvVar4 + 1);
            } while ((int)uVar1 >> 2 != (int)pvVar4);
            uVar10 = uVar12;
            if ((int)uVar8 < (int)uVar12) {
              uVar10 = uVar8;
            }
            bVar15 = uVar12 == 0xffffffff;
            uVar12 = uVar10;
            if (bVar15) {
              uVar12 = uVar8;
            }
            pvVar4 = (void *)(uint64_t)uVar12;
            uVar10 = uVar14;
            if ((int)uVar14 < (int)uVar8) {
              uVar10 = uVar8;
            }
            bVar15 = uVar14 == 0xffffffff;
            uVar14 = uVar10;
            if (bVar15) {
              uVar14 = uVar8;
            }
LAB_01dd43f0:
            uVar9 = uVar9 + 1;
            uVar8 = uVar12;
          } while ((int)uVar9 < (int)uVar11);
        }
      }
    }
    FUN_00c8e340(pvVar4,0);
    _memcpy(pvVar4,(void *)(int64_t)*(int *)(local_48 + 0x18),uVar11);
    if ((uVar8 != 0xffffffff) && (uVar14 != 0xffffffff)) {
      uVar16 = FUN_01dcf710();
      uVar18 = param_2;
      uVar17 = FUN_01dcf710();
      FUN_00d052e0(uVar16,param_2,uVar17,uVar18);
      (**(code **)(*this_ptr + 0x618))();
    }
    (**(code **)(*this_ptr + 0x400))();
    FUN_00d50b20();
  }
  return;
}

