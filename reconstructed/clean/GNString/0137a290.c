// Function: FUN_0137a290
// Address: 0137a290
// Size: 3162 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0137a290(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  char cVar5;
  void*puVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  int64_t this_ptr;
  int64_t lVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  uint32_t uVar17;
  uint64_t local_c8;
  uint8_t local_c0;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  float local_50;
  int64_t local_48;
  char local_40;
  float local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025f0d98;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  (*g_025f0db0)();
  if (0 < *(int *)(lVar1 + 0xc)) {
    fVar16 = 0.0;
    lVar13 = 0;
    do {
      lVar14 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar13 * 8);
      lVar8 = lVar1;
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      pVar9 = (void*)lVar8;
      pvVar7 = _pthread_getspecific(pVar9);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar9 = (void*)lVar14;
      }
      FUN_013de560();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_014cc8d0();
      if (cVar5 != '\0') {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014cc890();
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_018c3160();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (0 < *(int *)(local_48 + 0xc)) {
          lVar8 = 0;
          do {
            lVar2 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + lVar8 * 8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            if (3 < (int)*(uint *)(lVar2 + 0x18)) {
              uVar4 = *(uint *)(lVar2 + 0x18) >> 2;
              lVar3 = *(int64_t *)(lVar2 + 0x10);
              if ((uint64_t)uVar4 - 1 < 3) {
                uVar12 = 0;
              }
              else {
                uVar12 = 0;
                do {
                  fVar15 = *(float *)(lVar3 + uVar12 * 4);
                  if (fVar15 <= fVar16) {
                    fVar15 = fVar16;
                  }
                  fVar16 = *(float *)(lVar3 + 4 + uVar12 * 4);
                  if (fVar16 <= fVar15) {
                    fVar16 = fVar15;
                  }
                  fVar15 = *(float *)(lVar3 + 8 + uVar12 * 4);
                  if (fVar15 <= fVar16) {
                    fVar15 = fVar16;
                  }
                  fVar16 = *(float *)(lVar3 + 0xc + uVar12 * 4);
                  if (fVar16 <= fVar15) {
                    fVar16 = fVar15;
                  }
                  uVar12 = uVar12 + 4;
                } while ((uVar4 & 0xfffffffc) != uVar12);
              }
              if ((uint64_t)(uVar4 & 3) != 0) {
                uVar10 = 0;
                do {
                  fVar15 = *(float *)(lVar3 + uVar12 * 4 + uVar10 * 4);
                  if (fVar15 <= fVar16) {
                    fVar15 = fVar16;
                  }
                  fVar16 = fVar15;
                  uVar10 = uVar10 + 1;
                } while ((uVar4 & 3) != uVar10);
              }
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(local_48 + 0xc));
        }
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(lVar1 + 0xc));
    if ((g_02394274 <= fVar16) && (0 < *(int *)(lVar1 + 0xc))) {
      fVar16 = g_02390124 / fVar16;
      lVar13 = 0;
      do {
        lVar14 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar13 * 8);
        lVar8 = lVar1;
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        pVar9 = (void*)lVar8;
        pvVar7 = _pthread_getspecific(pVar9);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar9 = (void*)lVar14;
        }
        FUN_013de560();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_014cc8d0();
        if (cVar5 != '\0') {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014cc890();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_018c3160();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if (0 < *(int *)(local_48 + 0xc)) {
            lVar8 = 0;
            do {
              (**(code **)(g_02786500 + 0x20))(fVar16);
              lVar8 = lVar8 + 1;
            } while (lVar8 < *(int *)(local_48 + 0xc));
          }
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if (lVar14 != 0) {
          FUN_00d50b20();
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(lVar1 + 0xc));
    }
  }
  plVar11 = *(int64_t **)(this_ptr + 0x38);
  pvVar7 = _pthread_getspecific((void*)lVar1);
  if (pvVar7 != (void *)0x0) {
    plVar11 = *(int64_t **)(this_ptr + 0x38);
    lVar13 = FUN_00e8b990();
    if (lVar13 != 0) {
      plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar11 + 0x370))();
  if (0 < *(int *)(lVar1 + 0xc)) {
    lVar13 = 0;
    do {
      lVar14 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar13 * 8);
      lVar8 = lVar1;
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      pVar9 = (void*)lVar8;
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc420();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_80 = 0;
        lVar8 = *(int64_t *)(this_ptr + 200);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        local_80 = '\x01';
        local_88 = lVar8;
        FUN_014d39b0(g_02394240,&local_88);
        if (local_40 != '\0') {
          local_40 = '\0';
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(lVar1 + 0xc));
  }
  lVar13 = *(int64_t *)(this_ptr + 200);
  fVar16 = g_0240d3a8;
  fVar15 = g_0240d3ac;
  if (0 < *(int *)(lVar13 + 0xc)) {
    local_50 = g_0240e358;
    local_38 = g_0240d3b0;
    lVar14 = 0;
    do {
      plVar11 = *(int64_t **)(*(int64_t *)(lVar13 + 0x10) + lVar14 * 8);
      pvVar7 = _pthread_getspecific((void*)lVar13);
      if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
      fVar16 = (float)(**(code **)(*plVar11 + 0x3e0))();
      fVar15 = fVar16;
      if (local_50 <= fVar16) {
        fVar15 = local_50;
      }
      if (fVar16 <= local_38) {
        fVar16 = local_38;
      }
      lVar14 = lVar14 + 1;
      lVar13 = *(int64_t *)(this_ptr + 200);
      local_38 = fVar16;
      local_50 = fVar15;
    } while (lVar14 < *(int *)(lVar13 + 0xc));
    fVar16 = fVar16 + g_0239394c;
    fVar15 = fVar15 + g_02394218;
  }
  FUN_00d64850();
  *(float *)(this_ptr + 0x70) = fVar15;
  FUN_00d64910();
  FUN_00d64850();
  *(float *)(this_ptr + 0x74) = fVar16;
  FUN_00d64910();
  uVar17 = FUN_0137b4c0();
  local_c8 = 0;
  local_c0 = 0;
  FUN_013469e0(uVar17,&local_c8);
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

