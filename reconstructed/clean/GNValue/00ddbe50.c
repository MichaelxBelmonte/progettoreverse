// Function: FUN_00ddbe50
// Address: 00ddbe50
// Size: 1117 bytes
// Class: GNValue

uint64_t FUN_00ddbe50(void*param_1,void*param_2)

{
  void*puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void*puVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t local_a8;
  char local_a0;
  int64_t local_58;
  int local_34;
  
  lVar5 = this_ptr[4];
  cVar6 = (**(code **)(*this_ptr + 0x388))();
  if (cVar6 == '\0') {
    lVar8 = *arg1;
    if (0 < *(int *)(lVar8 + 0xc)) {
      local_34 = -1;
      lVar13 = 0;
      lVar12 = 0;
      bVar2 = false;
      local_58 = 0;
      bVar4 = false;
      do {
        lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar13 * 8);
        if (lVar12 == lVar8) {
          if ((!bVar2) && (lVar12 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar12 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar12 = lVar8;
          }
          else {
            bVar2 = true;
            lVar12 = lVar8;
          }
        }
        (**(code **)(*this_ptr + 0x370))();
        (**(code **)(*this_ptr + 0x380))();
        (**(code **)(*this_ptr + 0x390))();
        (**(code **)(*this_ptr + 0x380))();
        FUN_00e7b4e0();
        uVar9 = FUN_00d906a0();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        iVar11 = (int)uVar9;
        lVar8 = local_58;
        bVar3 = bVar4;
        if (((iVar11 != -1) && (iVar7 = FUN_00d8c7a0(), iVar7 == (int)((uint64_t)uVar9 >> 0x20)))
           && ((local_34 == -1 || (iVar11 < local_34)))) {
          local_34 = iVar11;
          if (local_58 == lVar12) {
            if (((bVar2) && (!bVar4)) && (lVar12 != 0)) {
              FUN_00d50b00();
              bVar3 = true;
            }
          }
          else {
            if ((bVar2) && (lVar12 != 0)) {
              FUN_00d50b00();
            }
            lVar8 = lVar12;
            bVar3 = bVar2;
            if ((bVar4) && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        local_58 = lVar8;
        lVar13 = lVar13 + 1;
        lVar8 = *arg1;
        bVar4 = bVar3;
      } while (lVar13 < *(int *)(lVar8 + 0xc));
      if (local_34 == -1) {
        uVar14 = 0;
        local_34 = (int)lVar5;
      }
      else {
        if (param_2 != (void*)0x0) {
          puVar10 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &g_025795a8;
          (*g_025795c0)();
          puVar1 = (void*)*param_2;
          if (puVar1 == puVar10) {
            if (*(char *)(param_2 + 1) == '\0') goto LAB_00ddc18a;
            FUN_00d50b20();
          }
          else {
            *param_2 = puVar10;
            if ((*(char *)(param_2 + 1) != '\0') && (puVar1 != (void*)0x0)) {
              FUN_00d50b20();
            }
LAB_00ddc18a:
            *(void*)(param_2 + 1) = 1;
          }
          lVar13 = FUN_00d8d520();
          (**(code **)(*this_ptr + 0x380))();
          FUN_00d8ea20();
          FUN_00d8c7d0();
        }
        uVar14 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
        if (param_1 != (void*)0x0) {
          puVar10 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &g_025795a8;
          (*g_025795c0)();
          puVar1 = (void*)*param_1;
          if (puVar1 == puVar10) {
            if (*(char *)(param_1 + 1) == '\0') goto LAB_00ddc242;
            FUN_00d50b20();
          }
          else {
            *param_1 = puVar10;
            if ((*(char *)(param_1 + 1) != '\0') && (puVar1 != (void*)0x0)) {
              FUN_00d50b20();
            }
LAB_00ddc242:
            *(void*)(param_1 + 1) = 1;
          }
          FUN_00d8dbf0();
          FUN_00d8c7d0();
        }
      }
      *(int *)(this_ptr + 4) = local_34;
      if ((bVar3) && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (lVar12 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00ddc157;
    }
    *(int *)(this_ptr + 4) = (int)lVar5;
  }
  uVar14 = 0;
LAB_00ddc157:
  return uVar14 & 0xffffffff;
}

