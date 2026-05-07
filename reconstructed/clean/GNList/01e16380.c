// Function: FUN_01e16380
// Address: 01e16380
// Size: 2998 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01e16380(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint in_EDX;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar11;
  uint64_t uVar12;
  uint uVar13;
  uint7 uVar14;
  uint64_t uVar15;
  uint8_t auVar16 [16];
  float fVar19;
  uint8_t auVar17 [16];
  float fVar20;
  uint32_t uVar21;
  uint8_t auVar18 [16];
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  
  fVar20 = (float)((uint64_t)param_2 >> 0x20);
  if ((char)this_ptr[0x2a] == '\0') {
    return 0;
  }
  if ((in_EDX & 2) != 0) {
    return 0;
  }
  *(void*)((int64_t)this_ptr + 0x1cc) = 0xffffffff;
  plVar2 = (int64_t *)this_ptr[0x38];
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_98 = *arg1;
    local_90 = '\0';
    cVar5 = (**(code **)(*plVar2 + 0x18))(in_EDX,&local_98);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      return 1;
    }
  }
  uVar10 = 0;
  if ((char)in_EDX < '\0') {
    return 0;
  }
  uVar7 = *(uint *)((int64_t)this_ptr + 0x164);
  uVar12 = (uint64_t)uVar7;
  uVar1 = *(uint *)(this_ptr + 0x2d);
  if ((in_EDX & 0x1000) == 0) {
    if ((in_EDX & 0x4000) != 0) {
      uVar7 = (uint)(0 < (int)uVar7);
      if (uVar1 != 0) {
        uVar7 = uVar1;
      }
      if ((int)uVar7 < 1) {
        return 1;
      }
      uVar15 = FUN_00d8ede0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          uVar15 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      local_78 = local_40;
      FUN_01e15f00(uVar15,&local_78);
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = *this_ptr;
LAB_01e168a2:
      (**(code **)(lVar9 + 0x968))();
      return 1;
    }
    if ((in_EDX & 0x100) == 0) {
      if ((in_EDX & 0x200) == 0) {
        if ((in_EDX & 0x800) == 0) {
          if ((in_EDX & 0x400) == 0) {
            iVar6 = FUN_00d8c7a0();
            if (iVar6 == 1) {
              uVar7 = FUN_00d8cbc0();
              uVar10 = (uint64_t)uVar7;
              uVar14 = (uint7)(uint3)(uVar7 >> 8);
              if (*(char *)((int64_t)this_ptr + 0x174) == '\0') {
                if (((*(char *)((int64_t)this_ptr + 0x1b9) != '\0') &&
                    (cVar5 = FUN_00d9bcb0(), cVar5 != '\0')) && ((in_EDX & 8) == 0)) {
                  FUN_01d3a560();
                  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b00();
                  }
                  uVar10 = FUN_01d3b590();
                  if ((uVar10 & 4) == 0) {
                    (**(code **)(*this_ptr + 0x880))();
                    if (local_40 == (int64_t *)0x0) goto LAB_01e16f1d;
                    if (local_38 == '\0') {
                      FUN_00d50b00();
                    }
                    (**(code **)(*local_40 + 0x8c0))();
                  }
                  else {
                    (**(code **)(*this_ptr + 0x888))();
                    if (local_40 == (int64_t *)0x0) goto LAB_01e16f1d;
                    if (local_38 == '\0') {
                      FUN_00d50b00();
                    }
                    (**(code **)(*local_40 + 0x8c0))();
                  }
                  FUN_00d50b20();
LAB_01e16f1d:
                  if (local_40 == (int64_t *)0x0) {
                    return CONCAT71(uVar14,1);
                  }
                  FUN_00d50b20();
                  return CONCAT71(uVar14,1);
                }
              }
              else {
                cVar5 = FUN_00d9bc90();
                if (cVar5 != '\0') {
                  uVar15 = CONCAT71(uVar14,1);
                  if (this_ptr[6] == 0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (local_40 == (int64_t *)0x0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  (**(code **)(*local_40 + 0xaf0))();
                  if (local_38 == '\0') {
                    return uVar15;
                  }
                  if (local_40 == (int64_t *)0x0) {
                    return uVar15;
                  }
                  FUN_00d50b20();
                  return uVar15;
                }
                cVar5 = FUN_00d9bcb0();
                if (cVar5 != '\0') {
                  uVar15 = CONCAT71(uVar14,1);
                  if (this_ptr[6] == 0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (local_40 == (int64_t *)0x0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  (**(code **)(*local_40 + 0xaf0))();
                  if (local_38 == '\0') {
                    return uVar15;
                  }
                  if (local_40 == (int64_t *)0x0) {
                    return uVar15;
                  }
                  FUN_00d50b20();
                  return uVar15;
                }
                if ((short)uVar7 == 0x1b) {
                  uVar15 = CONCAT71(uVar14,1);
                  if (this_ptr[6] == 0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (local_40 == (int64_t *)0x0) {
                    return uVar15;
                  }
                  FUN_01e40eb0();
                  (**(code **)(*local_40 + 0xaf0))();
                  if (local_38 == '\0') {
                    return uVar15;
                  }
                  if (local_40 == (int64_t *)0x0) {
                    return uVar15;
                  }
                  FUN_00d50b20();
                  return uVar15;
                }
              }
            }
            FUN_01e42030();
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_01e16e5e;
              }
            }
            else if (local_40 != (int64_t *)0x0) {
LAB_01e16e5e:
              cVar5 = FUN_01d8b240();
              if (cVar5 == '\0') {
                FUN_01e42030();
                FUN_01d8b760();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                for (iVar6 = 0; iVar8 = FUN_00d8c7a0(), iVar6 < iVar8; iVar6 = iVar6 + 1) {
                  FUN_00d8cbc0();
                  FUN_01e175a0();
                }
              }
              FUN_00d50b20();
              return CONCAT71((int7)(uVar10 >> 8),1);
            }
            goto LAB_01e16c08;
          }
          (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar6 == 0) {
            return 1;
          }
          (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar6 <= (int)(uVar1 + uVar7)) {
            (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
            FUN_00d8c7a0();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          auVar17._0_8_ = FUN_01eabd30();
          auVar17._8_8_ = extraout_XMM0_Qb_00;
          fVar20 = (float)((uint64_t)auVar17._0_8_ >> 0x20);
          uVar21 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
          auVar3._4_4_ = fVar20;
          auVar3._0_4_ = fVar20 + g_02390d00;
          auVar3._8_4_ = uVar21;
          auVar3._12_4_ = uVar21;
          auVar18 = insertps(auVar17,auVar3,0x10);
          FUN_01eacf20(auVar18._0_8_);
        }
        else {
          (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar6 == 0) {
            return 1;
          }
          (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar6 <= (int)(uVar1 + uVar7)) {
            (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
            FUN_00d8c7a0();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          auVar16._0_8_ = FUN_01eabd30();
          auVar16._8_8_ = extraout_XMM0_Qb;
          fVar19 = (float)((uint64_t)auVar16._0_8_ >> 0x20);
          uVar21 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
          auVar18._4_4_ = fVar19;
          auVar18._0_4_ = fVar19 + fVar20 + g_02390124;
          auVar18._8_4_ = uVar21;
          auVar18._12_4_ = uVar21;
          auVar18 = insertps(auVar16,auVar18,0x10);
          iVar6 = FUN_01eacf20(auVar18._0_8_);
          if (iVar6 == -1) {
            (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
            FUN_00d8c7a0();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar9 = *this_ptr;
        goto LAB_01e168a2;
      }
      uVar10 = 0;
      if ((in_EDX & 8) != 0) {
        uVar13 = uVar1 + uVar7;
        bVar11 = false;
        while( true ) {
          uVar10 = (uint64_t)uVar13;
          (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar6 <= (int)uVar13) break;
          (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
          FUN_00d8cbc0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d95590();
          cVar5 = FUN_00d90d50();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          bVar4 = true;
          if ((cVar5 != '\0') && (bVar4 = bVar11, bVar11)) break;
          bVar11 = bVar4;
          uVar13 = uVar13 + 1;
        }
      }
      if ((in_EDX & 4) == 0) {
        if ((int)uVar1 < 1) {
          (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
          iVar6 = FUN_00d8c7a0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((int)uVar7 < iVar6) && ((in_EDX & 8) == 0)) {
            uVar10 = (uint64_t)(uVar7 + 1);
          }
        }
      }
      else {
        (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
        iVar6 = FUN_00d8c7a0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar13 = (int)uVar10 - uVar7;
        if ((in_EDX & 8) == 0) {
          uVar13 = uVar1 + ((int)(uVar1 + uVar7) < iVar6);
        }
        uVar10 = (uint64_t)uVar13;
      }
    }
    else if (((in_EDX & 8) != 0) && (uVar7 != 0)) {
      bVar11 = false;
      do {
        uVar7 = (int)uVar12 - 1;
        uVar12 = (uint64_t)uVar7;
        (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
        FUN_00d8cbc0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d95590();
        cVar5 = FUN_00d90d50();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar4 = true;
        uVar10 = uVar12;
      } while (((cVar5 == '\0') || (bVar4 = bVar11, !bVar11)) && (bVar11 = bVar4, uVar7 != 0));
    }
    lVar9 = *this_ptr;
  }
  else {
    if (uVar1 == 0) {
      (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
      iVar6 = FUN_00d8c7a0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar6 <= (int)uVar7) {
        return 1;
      }
    }
    else if ((int)uVar1 < 1) goto LAB_01e16c08;
    uVar10 = 0;
    uVar15 = FUN_00d8ede0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    local_88 = local_40;
    FUN_01e15f00(uVar15,&local_88);
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar9 = *this_ptr;
  }
  (**(code **)(lVar9 + 0x968))();
LAB_01e16c08:
  return CONCAT71((int7)(uVar10 >> 8),1);
}

