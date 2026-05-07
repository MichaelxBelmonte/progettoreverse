// Function: FUN_01857980
// Address: 01857980
// Size: 1823 bytes
// Class: Unknown

void* FUN_01857980(uint64_t param_1,int64_t *param_2,uint64_t param_3)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  void*puVar8;
  int64_t *plVar9;
  void*puVar10;
  void* pVar11;
  int iVar12;
  uint uVar13;
  int64_t *plVar14;
  char cVar15;
  uint uVar16;
  int64_t arg1;
  uint64_t uVar17;
  uint64_t uVar18;
  void*this_ptr;
  int iVar19;
  int64_t lVar20;
  uint64_t uVar21;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  void*local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  code *local_90;
  void*local_88;
  int64_t local_80;
  char local_78;
  
  *(void*)(arg1 + 0x80) = 0;
  local_98 = param_2;
  FUN_0186be40();
  uVar16 = *(uint *)(*(int64_t *)(arg1 + 0x88) + 0x18);
  uVar5 = uVar16 + 7;
  if (-1 < (int)uVar16) {
    uVar5 = uVar16;
  }
  uVar21 = (uint64_t)uVar5;
  iVar12 = -1;
  pVar11 = uVar5;
  if (param_1 >> 0x20 != 0) {
    pvVar7 = _pthread_getspecific(uVar5);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016caaa0();
    FUN_00e7b970();
    iVar6 = FUN_00e7cea0();
    pVar11 = (void*)uVar21;
    uVar16 = *(uint *)(*(int64_t *)(arg1 + 0x88) + 0x18);
    if (7 < (int)uVar16) {
      uVar16 = uVar16 >> 3;
      lVar2 = *(int64_t *)(*(int64_t *)(arg1 + 0x88) + 0x10);
      if (uVar16 == 1) {
        iVar12 = -1;
        uVar17 = 0;
      }
      else {
        uVar18 = 0xffffffff;
        uVar17 = 0;
        do {
          iVar12 = *(int *)(lVar2 + uVar17 * 8);
          if (iVar6 < iVar12) {
            iVar12 = *(int *)(lVar2 + 8 + uVar17 * 8);
          }
          else {
            if (iVar6 < iVar12 + *(int *)(lVar2 + 4 + uVar17 * 8)) {
              uVar18 = uVar17 & 0xffffffff;
            }
            iVar12 = *(int *)(lVar2 + 8 + uVar17 * 8);
          }
          if (iVar12 <= iVar6) {
            uVar13 = (int)uVar17 + 1;
            uVar21 = (uint64_t)uVar13;
            if (iVar6 < iVar12 + *(int *)(lVar2 + 0xc + uVar17 * 8)) {
              uVar18 = (uint64_t)uVar13;
            }
          }
          iVar12 = (int)uVar18;
          pVar11 = (void*)uVar21;
          uVar17 = uVar17 + 2;
        } while ((uVar16 & 0xfffffffe) != uVar17);
      }
      if ((((uVar16 & 1) != 0) &&
          (pVar11 = *(void* *)(lVar2 + uVar17 * 8), (int)pVar11 <= iVar6)) &&
         (pVar11 = pVar11 + *(int *)(lVar2 + 4 + uVar17 * 8), iVar6 < (int)pVar11)) {
        iVar12 = (int)uVar17;
      }
    }
  }
  if (param_3 >> 0x20 == 0) {
LAB_01857b43:
    iVar6 = 0;
    if (iVar12 != -1) {
      iVar6 = iVar12;
    }
LAB_01857b4e:
    iVar19 = (int)uVar5 >> 3;
  }
  else {
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016caaa0();
    FUN_00e7b970();
    iVar6 = FUN_00e7cea0();
    uVar16 = *(uint *)(*(int64_t *)(arg1 + 0x88) + 0x18);
    if ((int)uVar16 < 8) goto LAB_01857b43;
    uVar16 = uVar16 >> 3;
    lVar2 = *(int64_t *)(*(int64_t *)(arg1 + 0x88) + 0x10);
    if (uVar16 == 1) {
      iVar19 = -1;
      uVar18 = 0;
    }
    else {
      uVar21 = 0xffffffff;
      uVar18 = 0;
      do {
        iVar19 = *(int *)(lVar2 + uVar18 * 8);
        if (iVar6 < iVar19) {
          iVar19 = *(int *)(lVar2 + 8 + uVar18 * 8);
        }
        else {
          if (iVar6 < iVar19 + *(int *)(lVar2 + 4 + uVar18 * 8)) {
            uVar21 = uVar18 & 0xffffffff;
          }
          iVar19 = *(int *)(lVar2 + 8 + uVar18 * 8);
        }
        if ((iVar19 <= iVar6) && (iVar6 < iVar19 + *(int *)(lVar2 + 0xc + uVar18 * 8))) {
          uVar21 = (uint64_t)((int)uVar18 + 1);
        }
        iVar19 = (int)uVar21;
        uVar18 = uVar18 + 2;
      } while ((uVar16 & 0xfffffffe) != uVar18);
    }
    if ((((uVar16 & 1) != 0) && (iVar1 = *(int *)(lVar2 + uVar18 * 8), iVar1 <= iVar6)) &&
       (iVar6 < iVar1 + *(int *)(lVar2 + 4 + uVar18 * 8))) {
      iVar19 = (int)uVar18;
    }
    iVar6 = 0;
    if (iVar12 != -1) {
      iVar6 = iVar12;
    }
    if (iVar19 == -1) goto LAB_01857b4e;
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  local_88 = &g_02572358;
  *puVar8 = &g_02572358;
  local_90 = g_02572370;
  (*g_02572370)();
  plVar9 = (int64_t *)FUN_0187cb40();
  (**(code **)(*plVar9 + 0x18))();
  *(int *)((int64_t)plVar9 + 0xc) = iVar6;
  *(int *)(plVar9 + 2) = iVar19;
  FUN_00d21140();
  lVar2 = *(int64_t *)(arg1 + 0x60);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_e0 = 1;
  lVar20 = *(int64_t *)(arg1 + 0x68);
  local_e8 = lVar2;
  if (lVar20 != 0) {
    FUN_00d50b00();
  }
  local_d0 = 1;
  lVar3 = *(int64_t *)(arg1 + 0x88);
  local_d8 = lVar20;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_c0 = 1;
  plVar14 = &local_d8;
  local_c8 = lVar3;
  FUN_01874d20(plVar14,&local_e8,&local_c8,1);
  pVar11 = (void*)plVar14;
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar20 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_b0 = 0;
  local_b8 = puVar8;
  FUN_018753f0();
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = local_88;
  (*local_90)();
  if (*(int *)((int64_t)puVar8 + 0xc) == 0) {
    *this_ptr = puVar10;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar2 = *(int64_t *)(*(int64_t *)puVar8[2] + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017874a0();
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar20 = 0;
      do {
        FUN_01876c50();
        lVar3 = local_a8;
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        lVar4 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar20 * 8);
        iVar12 = *(int *)(lVar4 + 0xc) * 7;
        iVar12 = iVar12 + (((uint)(iVar12 / 6 + (iVar12 >> 0x1f)) >> 1) - (iVar12 >> 0x1f)) * -0xc;
        cVar15 = ((byte)(iVar12 >> 0x1f) & 0xc) + (char)iVar12 + '\x06';
        uVar16 = cVar15 * 0x2b;
        cVar15 = cVar15 + ((char)((uVar16 & 0xffff) >> 0xf) + (char)(uVar16 >> 9)) * -0xc;
        iVar6 = *(int *)(lVar4 + 0x10) * 7;
        iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
        iVar12 = cVar15 + 0xc;
        if (-1 < cVar15) {
          iVar12 = (int)cVar15;
        }
        iVar12 = iVar12 + (iVar6 >> 0x1f & 0xcU) + iVar6;
        iVar6 = iVar12 + -6;
        if (9 < iVar6) {
          iVar6 = 10;
        }
        uVar16 = (iVar12 - iVar6) + 5;
        iVar6 = (uVar16 % 0xc - uVar16) + iVar12 + -6;
        iVar12 = -5;
        if (-5 < iVar6) {
          iVar12 = iVar6;
        }
        uVar16 = (uint)(iVar12 - iVar6 != 0);
        local_80 = *local_98;
        local_78 = '\0';
        FUN_01735d80(&local_80,iVar6 + (((iVar12 - iVar6) - uVar16) / 0xc + uVar16) * 0xc);
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d21140();
          FUN_00d50b20();
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(int *)(lVar2 + 0xc));
    }
    FUN_00d50b20();
    *this_ptr = puVar10;
    *(void*)(this_ptr + 1) = 1;
    if (plVar9 == (int64_t *)0x0) goto LAB_01857ff0;
  }
  FUN_00d50b20();
LAB_01857ff0:
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

