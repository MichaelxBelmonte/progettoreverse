// Function: FUN_018ba360
// Address: 018ba360
// Size: 1454 bytes
// Class: GNString
// String references:
//   "%lld"
//   " + %lld"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_018ba360(void* param_1)

{
  int64_t *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  uint64_t uVar8;
  void* pVar9;
  code *pcVar10;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar11;
  int64_t lVar12;
  int64_t local_c8;
  char local_c0;
  void*local_90;
  uint32_t local_88;
  uint64_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  void*local_38;
  
  lVar11 = *(int64_t *)(arg1 + 0x60);
  if ((lVar11 != 0) || (lVar11 = *(int64_t *)(arg1 + 0x58), lVar11 != 0)) {
    FUN_00d50b00();
  }
  if ((lVar11 != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
    plVar1 = *(int64_t **)(arg1 + 0x80);
    FUN_01152ba0();
    lVar12 = g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      lVar12 = g_02802688;
      if (cVar3 != '\0') {
        lVar12 = *(int64_t *)(arg1 + 0x80);
      }
    }
    if (lVar12 != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017d3de0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018c71e0();
      if ((local_c0 == '\0') && (local_c8 != 0)) {
        FUN_00d50b00();
      }
      if (((char)local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pcVar2 = g_025795c0;
      if (local_c8 != 0) {
        local_48 = lVar11;
        if (*(int *)(local_c8 + 0xc) < 1) {
          local_40 = 0;
          local_38 = (void*)0x0;
        }
        else {
          lVar11 = 0;
          local_38 = (void*)0x0;
          local_40 = 0;
          pcVar10 = g_025795c0;
          do {
            lVar12 = *(int64_t *)(*(int64_t *)(local_c8 + 0x10) + lVar11 * 8);
            pvVar5 = _pthread_getspecific((void*)pcVar10);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            }
            plVar1 = *(int64_t **)(lVar12 + 0x80);
            FUN_01152ba0();
            if (plVar1 == (int64_t *)0x0) {
LAB_018ba616:
              pVar9 = (void*)pcVar10;
              lVar12 = g_02802688;
            }
            else {
              (**(code **)(*plVar1 + 0x360))();
              cVar3 = FUN_00e85ea0();
              pVar9 = (void*)pcVar10;
              if (cVar3 == '\0') goto LAB_018ba616;
              lVar12 = *(int64_t *)(lVar12 + 0x80);
            }
            if (lVar12 != 0) {
              if (local_38 == (void*)0x0) {
                puVar7 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar7 = &g_025795a8;
                (*pcVar2)();
                local_38 = puVar7;
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_80 = FUN_017cac30();
                local_88 = 1;
                pcVar10 = &g_024da828;
                local_90 = &g_024da828;
                FUN_00d8cb40(&g_024da828,&local_90);
                local_78 = local_58;
                local_70 = 0;
                if (local_50 == '\0') {
                  if (local_58 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_50 = '\0';
                }
                local_70 = '\x01';
                uVar8 = FUN_00d93870();
                if ((local_70 != '\0') && (local_78 != 0)) {
                  uVar8 = FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != 0)) {
                  uVar8 = FUN_00d50b20();
                }
                local_40 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
              }
              else {
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_80 = FUN_017cac30();
                local_88 = 1;
                pcVar10 = &g_024da828;
                local_90 = &g_024da828;
                FUN_00d8cb40(&g_024da828,&local_90);
                local_68 = local_58;
                local_60 = 0;
                if (local_50 == '\0') {
                  if (local_58 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_50 = '\0';
                }
                local_60 = '\x01';
                FUN_00d93870();
                if ((local_60 != '\0') && (local_68 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < *(int *)(local_c8 + 0xc));
        }
        FUN_018bc370();
        FUN_00d50b20();
        uVar8 = local_40;
        lVar11 = local_48;
        if (local_38 != (void*)0x0) {
          FUN_00d8c7d0();
        }
        puVar7 = local_38;
        *(void*)(this_ptr + 1) = 0;
        if (((char)uVar8 == '\0') && (local_38 != (void*)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_018ba857;
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  puVar7 = (void*)0x0;
LAB_018ba857:
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

