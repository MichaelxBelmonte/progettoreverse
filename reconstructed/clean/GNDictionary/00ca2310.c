// Function: FUN_00ca2310
// Address: 00ca2310
// Size: 918 bytes
// Class: GNDictionary

int64_t * FUN_00ca2310(void)

{
  uint16_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  void*puVar9;
  void*puVar10;
  void*puVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar14;
  void*puVar15;
  void*local_78;
  void*local_70;
  void*local_68;
  void*local_60;
  int64_t local_58;
  char local_50;
  void*local_40;
  
  lVar8 = FUN_00d8d520();
  iVar6 = FUN_00d8c7a0();
  if ((*arg1 == 0) || (iVar7 = FUN_00d8c7a0(), iVar7 == 0)) {
    FUN_00d8ede0();
  }
  else {
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92120();
    puVar15 = (void*)puVar9[2];
    if (0 < iVar6) {
      lVar14 = 0;
      puVar10 = (void*)0x0;
      local_78 = (void*)0x0;
      local_70 = (void*)0x0;
      local_68 = (void*)0x0;
      local_60 = (void*)0x0;
      local_40 = puVar15;
      iVar7 = iVar6;
      do {
        lVar5 = g_02773318;
        lVar4 = g_02773310;
        lVar3 = g_02773308;
        lVar2 = g_02773300;
        lVar13 = g_027732f8;
        uVar1 = *(void*)(lVar8 + lVar14 * 2);
        switch(uVar1) {
        case 0x22:
          if (local_78 == (void*)0x0) {
            if (g_02773310 != 0) {
              FUN_00d50b00();
            }
            local_78 = (void*)FUN_00d8d520();
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          *(void*)(puVar15 + 1) = *(void*)(local_78 + 1);
          uVar12 = *local_78;
          goto LAB_00ca25a9;
        default:
          *(void*)puVar15 = uVar1;
          puVar15 = (void*)((int64_t)puVar15 + 2);
          break;
        case 0x26:
          if (local_60 == (void*)0x0) {
            if (g_027732f8 != 0) {
              FUN_00d50b00();
            }
            local_60 = (void*)FUN_00d8d520();
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
          *(void*)(puVar15 + 1) = *(void*)(local_60 + 1);
          *puVar15 = *local_60;
          puVar15 = (void*)((int64_t)puVar15 + 10);
          break;
        case 0x27:
          if (puVar10 == (void*)0x0) {
            if (g_02773318 != 0) {
              FUN_00d50b00();
            }
            puVar10 = (void*)FUN_00d8d520();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
          }
          *(void*)(puVar15 + 1) = *(void*)(puVar10 + 1);
          uVar12 = *puVar10;
LAB_00ca25a9:
          *puVar15 = uVar12;
          puVar15 = (void*)((int64_t)puVar15 + 0xc);
          break;
        case 0x3c:
          puVar11 = local_68;
          if (local_68 == (void*)0x0) {
            if (g_02773300 != 0) {
              FUN_00d50b00();
            }
            puVar11 = (void*)FUN_00d8d520();
            local_68 = puVar11;
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          goto LAB_00ca25f0;
        case 0x3e:
          puVar11 = local_70;
          if (local_70 == (void*)0x0) {
            if (g_02773308 != 0) {
              FUN_00d50b00();
            }
            puVar11 = (void*)FUN_00d8d520();
            local_70 = puVar11;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
LAB_00ca25f0:
          *puVar15 = *puVar11;
          puVar15 = puVar15 + 1;
        }
        lVar13 = (int64_t)puVar15 - (int64_t)local_40 >> 1;
        if (iVar7 <= lVar13) {
          FUN_00c92120();
          iVar7 = iVar7 * 2;
          local_40 = (void*)puVar9[2];
          puVar15 = (void*)((int64_t)local_40 + lVar13 * 2);
        }
        lVar14 = lVar14 + 1;
      } while (iVar6 != (int)lVar14);
    }
    FUN_00d920f0();
    if (local_58 != 0) {
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      *(void*)(this_ptr + 1) = 0;
    }
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

