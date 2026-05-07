// ===================================================================
// MUScalePanel — Complete reconstructed pseudocode
// 13 functions
// ===================================================================

// Registered properties (4):
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


// ============================================================
// 01acbed0
// ============================================================
// Function: FUN_01acbed0
// Address: 01acbed0
// Size: 2934 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01acbed0(uint64_t param_1,char param_2)

{
  void* pVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  uint64_t uVar7;
  char cVar8;
  void *pvVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  void* pVar13;
  void* pVar14;
  int64_t lVar15;
  uint64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t local_a0;
  char local_98;
  int local_88;
  uint64_t local_60;
  char local_58;
  uint64_t local_40;
  char local_38;
  
  if ((arg1 >> 0x20 != 0) && (lVar2 = *this_ptr, lVar2 != 0)) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      pVar13 = 0;
      do {
        lVar6 = local_a0;
        pVar14 = pVar13;
        pvVar9 = _pthread_getspecific(pVar13);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if ((local_98 == '\0') && (local_a0 != 0)) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar14);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar14 = (void*)local_a0;
        }
        FUN_013dfcb0();
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 != 0) {
          local_98 = '\0';
          local_a0 = 0;
          local_88 = -1;
LAB_01acc11b:
          while( true ) {
            uVar7 = local_40;
            lVar10 = (int64_t)local_88;
            local_88 = local_88 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_88) break;
            lVar15 = *(int64_t *)(lVar6 + 0x10);
            local_a0 = *(int64_t *)(lVar15 + 8 + lVar10 * 8);
            pvVar9 = _pthread_getspecific((void*)lVar15);
            pVar14 = (void*)lVar15;
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if (local_38 == '\0') goto LAB_01acc1d0;
            if (local_40 != 0) goto LAB_01acc200;
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        pVar13 = pVar13 + 1;
      } while ((int)pVar13 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  return;
LAB_01acc1d0:
  if (local_40 == 0) goto LAB_01acc11b;
  FUN_00d50b00();
LAB_01acc200:
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) goto LAB_01acc110;
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012640f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012641c0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pVar1 = (void*)local_40;
  if (local_40 == 0) {
LAB_01acc3f0:
    uVar16 = 0;
    bVar5 = false;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_01acc3f0;
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_40 == 0) {
      bVar5 = false;
      uVar16 = 0;
    }
    else {
      uVar16 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar5 = true;
      }
      else {
        local_38 = '\0';
        bVar5 = true;
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 == 0) {
LAB_01acc550:
    uVar17 = 0;
    bVar4 = false;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_01acc550;
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_40 == 0) {
      bVar4 = false;
      uVar17 = 0;
    }
    else {
      uVar17 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar4 = true;
      }
      else {
        local_38 = '\0';
        bVar4 = true;
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar10 = FUN_01507970();
  FUN_00e7b820();
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_01508610();
  local_60._4_4_ = (int)((uint64_t)lVar10 >> 0x20);
  if (param_2 == '\0') {
    bVar3 = false;
    if ((uVar11 >> 0x20 != 0) && (bVar3 = false, local_60._4_4_ != 0)) {
      cVar8 = FUN_00e7c020();
      if (cVar8 == '\0') goto LAB_01acc775;
      bVar3 = false;
    }
  }
  else {
LAB_01acc775:
    FUN_00e7b820();
    bVar3 = true;
  }
  if (uVar16 == 0) {
LAB_01acc820:
    if (uVar17 != 0) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_01508610();
      local_40._4_4_ = (int)(uVar11 >> 0x20);
      if (((local_40._4_4_ != 0) && (uVar12 >> 0x20 != 0)) &&
         (cVar8 = FUN_00e7c020(), cVar8 == '\0')) goto LAB_01acc9c2;
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015084d0();
    if (uVar16 != 0) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015085a0();
    }
    if (bVar3) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015085a0();
      if (uVar17 != 0) {
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015084d0();
      }
    }
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar12 = FUN_01507970();
    if (((local_60._4_4_ == 0) || (uVar12 >> 0x20 == 0)) || (cVar8 = FUN_00e7c020(), cVar8 != '\0'))
    goto LAB_01acc820;
  }
LAB_01acc9c2:
  if (uVar7 != 0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (uVar17 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (uVar16 != 0)) {
    FUN_00d50b20();
  }
  local_60 = lVar10;
  local_40 = uVar11;
  if (uVar7 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_01acc110:
  FUN_00d50b20();
  goto LAB_01acc11b;
}



// ============================================================
// 01acce90
// ============================================================
// Function: FUN_01acce90
// Address: 01acce90
// Size: 2934 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01acce90(uint64_t param_1,char param_2)

{
  void* pVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  uint64_t uVar7;
  char cVar8;
  void *pvVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  void* pVar13;
  void* pVar14;
  int64_t lVar15;
  uint64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t local_a0;
  char local_98;
  int local_88;
  uint64_t local_60;
  char local_58;
  uint64_t local_40;
  char local_38;
  
  if ((arg1 >> 0x20 != 0) && (lVar2 = *this_ptr, lVar2 != 0)) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      pVar13 = 0;
      do {
        lVar6 = local_a0;
        pVar14 = pVar13;
        pvVar9 = _pthread_getspecific(pVar13);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if ((local_98 == '\0') && (local_a0 != 0)) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar14);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar14 = (void*)local_a0;
        }
        FUN_013dfcb0();
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 != 0) {
          local_98 = '\0';
          local_a0 = 0;
          local_88 = -1;
LAB_01acd0db:
          while( true ) {
            uVar7 = local_40;
            lVar10 = (int64_t)local_88;
            local_88 = local_88 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_88) break;
            lVar15 = *(int64_t *)(lVar6 + 0x10);
            local_a0 = *(int64_t *)(lVar15 + 8 + lVar10 * 8);
            pvVar9 = _pthread_getspecific((void*)lVar15);
            pVar14 = (void*)lVar15;
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if (local_38 == '\0') goto LAB_01acd190;
            if (local_40 != 0) goto LAB_01acd1c0;
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        pVar13 = pVar13 + 1;
      } while ((int)pVar13 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  return;
LAB_01acd190:
  if (local_40 == 0) goto LAB_01acd0db;
  FUN_00d50b00();
LAB_01acd1c0:
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) goto LAB_01acd0d0;
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012640f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012641c0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pVar1 = (void*)local_40;
  if (local_40 == 0) {
LAB_01acd3b0:
    uVar16 = 0;
    bVar5 = false;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_01acd3b0;
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_40 == 0) {
      bVar5 = false;
      uVar16 = 0;
    }
    else {
      uVar16 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar5 = true;
      }
      else {
        local_38 = '\0';
        bVar5 = true;
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 == 0) {
LAB_01acd510:
    uVar17 = 0;
    bVar4 = false;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_01acd510;
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_40 == 0) {
      bVar4 = false;
      uVar17 = 0;
    }
    else {
      uVar17 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar4 = true;
      }
      else {
        local_38 = '\0';
        bVar4 = true;
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar10 = FUN_01508610();
  FUN_00e7b820();
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_01507970();
  local_60._4_4_ = (int)((uint64_t)lVar10 >> 0x20);
  if (param_2 == '\0') {
    bVar3 = false;
    if ((local_60._4_4_ != 0) && (uVar11 >> 0x20 != 0)) {
      cVar8 = FUN_00e7c020();
      if (cVar8 == '\0') goto LAB_01acd735;
      bVar3 = false;
    }
  }
  else {
LAB_01acd735:
    bVar3 = true;
    FUN_00e7b820();
  }
  if (uVar16 == 0) {
LAB_01acd7e0:
    if (uVar17 != 0) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_01508610();
      if (((local_60._4_4_ != 0) && (uVar12 >> 0x20 != 0)) &&
         (cVar8 = FUN_00e7c020(), cVar8 == '\0')) goto LAB_01acd982;
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015085a0();
    if (uVar17 != 0) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015084d0();
    }
    if (bVar3) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015084d0();
      if (uVar16 != 0) {
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015085a0();
      }
    }
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar12 = FUN_01507970();
    local_40._4_4_ = (int)(uVar11 >> 0x20);
    if (((local_40._4_4_ == 0) || (uVar12 >> 0x20 == 0)) || (cVar8 = FUN_00e7c020(), cVar8 != '\0'))
    goto LAB_01acd7e0;
  }
LAB_01acd982:
  if (uVar7 != 0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (uVar17 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (uVar16 != 0)) {
    FUN_00d50b20();
  }
  local_60 = lVar10;
  local_40 = uVar11;
  if (uVar7 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_01acd0d0:
  FUN_00d50b20();
  goto LAB_01acd0db;
}



// ============================================================
// 01ad2000
// ============================================================
// Function: FUN_01ad2000
// Address: 01ad2000
// Size: 1440 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01ad2000(void)

{
  int64_t lVar1;
  char cVar2;
  uint8_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_30;
  char local_28;
  
  FUN_01a1cd40();
  *(void*)(this_ptr + 0x180) = 0x3f800000;
  *(void*)(this_ptr + 400) = 0xfff0bdc0fff0bdc0;
  *(void*)(this_ptr + 0x29c) = 0x42fa0000;
  *(void*)(this_ptr + 0x1d9) = 0;
  uVar5 = FUN_00e7b4e0();
  *(void*)(this_ptr + 0x140) = uVar5;
  *(void*)(this_ptr + 0x1dc) = 0x7fc00000;
  *(void*)(this_ptr + 0x18c) = 0;
  FUN_00d6f370();
  lVar1 = g_027e3b20;
  if (g_027e3b20 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d70700();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d6f370();
    lVar1 = g_027e3b20;
    if (g_027e3b20 != 0) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00d708a0();
    *(void*)(this_ptr + 0x18c) = uVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x1b8) = 1;
  *(void*)(this_ptr + 0x1bc) = 0x4b0;
  *(void*)(this_ptr + 0x1c4) = 12000;
  FUN_00d6f370();
  lVar1 = g_027e3b28;
  if (g_027e3b28 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d70700();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d6f370();
    lVar1 = g_027e3b28;
    if (g_027e3b28 != 0) {
      FUN_00d50b00();
    }
    uVar3 = FUN_00d70f90();
    *(void*)(this_ptr + 0x288) = uVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = g_027e3b30;
  if (g_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = g_027f1430;
  if (g_027f1430 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = g_027e3b40;
  if (g_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_90 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d41430(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x310) = 0x80000000;
  *(void*)(this_ptr + 0x314) = 0x100;
  *(void*)(this_ptr + 0x316) = 1;
  return;
}



// ============================================================
// 01ace020
// ============================================================
// Function: FUN_01ace020
// Address: 01ace020
// Size: 1018 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


uint64_t FUN_01ace020(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  char *pcVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  uint32_t local_58;
  uint32_t uStack_54;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a58dc0();
  (**(code **)(*(int64_t *)CONCAT44(uStack_54,local_58) + 0xe20))();
  plVar3 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    uVar6 = 0;
    goto LAB_01ace406;
  }
  if ((*(int *)((int64_t)plVar3 + 0xc) == 1) &&
     (cVar2 = (**(code **)(*this_ptr + 0x488))(), cVar2 != '\0')) {
    FUN_01a58dc0();
    pplVar7 = &local_48;
    (**(code **)(*(int64_t *)CONCAT44(uStack_54,local_58) + 0xd40))();
    plVar3 = local_48;
    FUN_00083c20();
    if (plVar3 == (int64_t *)0x0) {
      pplVar7 = &g_02802688;
      plVar3 = g_02802688;
      if (g_02802690 != '\0') goto LAB_01ace133;
LAB_01ace18a:
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') {
        pplVar7 = &g_02802688;
      }
      plVar3 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') goto LAB_01ace18a;
LAB_01ace133:
      *(void*)(pplVar7 + 1) = 0;
    }
    plVar5 = (int64_t *)(uint64_t)param_2;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((plVar3 != (int64_t *)0x0) && ((char)param_2 != '\0')) {
      FUN_01caec40();
      lVar1 = g_027e1e88;
      if (g_027e1e88 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == (int64_t *)0x0) {
        local_48 = (int64_t *)FUN_01acdea0();
        FUN_00e7c2a0();
        FUN_00d23310();
        plVar5 = local_48;
        pcVar4 = local_38;
        if (local_40[0] != '\0') {
          pcVar4 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01ace610();
        FUN_01acbed0();
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = (int64_t *)FUN_01acdea0();
        FUN_00e7c2a0();
        FUN_00d23310();
        plVar5 = local_48;
        pcVar4 = local_38;
        if (local_40[0] != '\0') {
          pcVar4 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01ace610();
        FUN_01acce90();
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (plVar3 == (int64_t *)0x0) goto LAB_01ace3fc;
    uVar6 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
    FUN_00d50b20();
  }
  else {
LAB_01ace3fc:
    uVar6 = 0;
  }
  FUN_00d50b20();
LAB_01ace406:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 01ace990
// ============================================================
// Function: FUN_01ace990
// Address: 01ace990
// Size: 1018 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


uint64_t FUN_01ace990(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  char *pcVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  uint32_t local_58;
  uint32_t uStack_54;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a58dc0();
  (**(code **)(*(int64_t *)CONCAT44(uStack_54,local_58) + 0xe20))();
  plVar3 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    uVar6 = 0;
    goto LAB_01aced76;
  }
  if ((*(int *)((int64_t)plVar3 + 0xc) == 1) &&
     (cVar2 = (**(code **)(*this_ptr + 0x488))(), cVar2 != '\0')) {
    FUN_01a58dc0();
    pplVar7 = &local_48;
    (**(code **)(*(int64_t *)CONCAT44(uStack_54,local_58) + 0xd40))();
    plVar3 = local_48;
    FUN_00083c20();
    if (plVar3 == (int64_t *)0x0) {
      pplVar7 = &g_02802688;
      plVar3 = g_02802688;
      if (g_02802690 != '\0') goto LAB_01aceaa3;
LAB_01aceafa:
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') {
        pplVar7 = &g_02802688;
      }
      plVar3 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') goto LAB_01aceafa;
LAB_01aceaa3:
      *(void*)(pplVar7 + 1) = 0;
    }
    plVar5 = (int64_t *)(uint64_t)param_2;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((plVar3 != (int64_t *)0x0) && ((char)param_2 != '\0')) {
      FUN_01caec40();
      lVar1 = g_027e1e88;
      if (g_027e1e88 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == (int64_t *)0x0) {
        local_48 = (int64_t *)FUN_01acdea0();
        FUN_00e7c2a0();
        FUN_00d23310();
        plVar5 = local_48;
        pcVar4 = local_38;
        if (local_40[0] != '\0') {
          pcVar4 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01ace610();
        FUN_01acbed0();
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = (int64_t *)FUN_01acdea0();
        FUN_00e7c2a0();
        FUN_00d23310();
        plVar5 = local_48;
        pcVar4 = local_38;
        if (local_40[0] != '\0') {
          pcVar4 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01ace610();
        FUN_01acce90();
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (plVar3 == (int64_t *)0x0) goto LAB_01aced6c;
    uVar6 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
    FUN_00d50b20();
  }
  else {
LAB_01aced6c:
    uVar6 = 0;
  }
  FUN_00d50b20();
LAB_01aced76:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 01ad37a0
// ============================================================
// Function: FUN_01ad37a0
// Address: 01ad37a0
// Size: 1150 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01ad37a0(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  bool bVar8;
  float fVar9;
  uint32_t uVar10;
  int64_t *local_48;
  char local_40;
  float local_38;
  float local_34;
  
  if ((int64_t *)this_ptr[0x44] != (int64_t *)0x0) {
    if ((int)this_ptr[0x32] == -1000000) {
      (**(code **)(*(int64_t *)this_ptr[0x44] + 0x928))(0);
      FUN_01b2fee0(0);
      FUN_01b2fef0(0);
      FUN_01b2fea0();
    }
    else {
      FUN_01ad3cb0();
      plVar2 = local_48;
      if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = (float)FUN_01742280();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_34 = (float)FUN_01742280();
      plVar1 = (int64_t *)this_ptr[0x44];
      _exp2f((local_38 - local_34) * g_023941f4);
      (**(code **)(*plVar1 + 0x928))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_01742280();
      _exp2f(((fVar9 + g_02394248) - local_34) * g_023941f4);
      FUN_01b2fef0();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_01742280();
      _exp2f(((fVar9 + g_023908ec) - local_34) * g_023941f4);
      FUN_01b2fee0();
      FUN_01b2fea0();
      lVar3 = this_ptr[0x32];
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_01743090(local_38);
      if ((int)lVar3 == iVar5) {
        FUN_01b2fec0();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_01742280();
        _exp2f(((fVar9 + g_02394248) - local_34) * g_023941f4);
        FUN_01b2ff00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_01742280();
        _exp2f(((fVar9 + g_02394248) - local_34) * g_023941f4);
        FUN_01b2ff10();
      }
      else {
        FUN_01b2fec0();
      }
      uVar10 = FUN_01b2fe70();
      *(void*)(this_ptr + 0x50) = uVar10;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)this_ptr[0x44] + 0x998))();
  }
  if ((int)this_ptr[0x32] == -1000000) {
    bVar8 = false;
  }
  else {
    bVar8 = (int)this_ptr[0x32] != *(int *)((int64_t)this_ptr + 0x184);
  }
  pplVar7 = &local_48;
  (**(code **)(*this_ptr + 0x7b8))();
  plVar2 = local_48;
  FUN_00074a70();
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01ad3bb4;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_01ad3bb4:
  plVar2 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    if (bVar8) {
      (**(code **)(*plVar2 + 0x960))();
    }
    else {
      (**(code **)(*plVar2 + 0x968))();
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01acf890
// ============================================================
// Function: FUN_01acf890
// Address: 01acf890
// Size: 959 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01acf890(uint64_t param_1,uint64_t param_2)

{
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t local_78;
  char local_70;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  fVar4 = (float)((uint64_t)param_2 >> 0x20);
  fVar2 = (float)param_2;
  if (*arg1 != 0) {
    FUN_01e42030();
    if (local_38 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else {
      FUN_01e42030();
      FUN_01d8c6e0();
      bVar1 = local_48 != (int64_t *)0x0;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e42030();
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_38 == (int64_t *)0x0) {
      return;
    }
    this_ptr[0xe] = *arg1;
    if (bVar1) {
      (**(code **)(*this_ptr + 0x448))();
      FUN_01e56750();
      FUN_01e5eec0();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e56750();
      FUN_01f27fe0();
      FUN_01f2e7e0();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01e5c1a0();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x460))();
      FUN_01f27fe0();
      FUN_01e56750();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01f45250();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d8f0f0();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (int64_t *)0x0) {
        (**(code **)(*local_38 + 0x9b0))();
      }
      FUN_01e53c20();
      FUN_01e3f820();
      fVar3 = fVar2;
      fVar5 = fVar4;
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e3f820();
      if ((fVar5 < fVar4) || (fVar3 < fVar2)) {
        FUN_01e53c20();
        FUN_01e53c20();
        (**(code **)(*local_48 + 0x528))();
        (**(code **)(*local_38 + 0x4e8))();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b00();
      (**(code **)(*local_38 + 0x9a8))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ad2a70
// ============================================================
// Function: FUN_01ad2a70
// Address: 01ad2a70
// Size: 1100 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01ad2a70(uint64_t param_1)

{
  int64_t *this_ptr;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_30;
  char local_28;
  
  if ((char)this_ptr[0x5a] == '\0') {
    FUN_01f27fe0();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_01f27fe0();
      local_78 = 0;
      (**(code **)(this_ptr[0x2d] + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_80 = this_ptr + 0x2d;
      FUN_01f474f0();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    (**(code **)(*this_ptr + 0x9b8))(param_1,1);
  }
  (**(code **)(*this_ptr + 0x948))();
  FUN_00d403d0();
  FUN_00d50b00();
  local_100 = g_027e3b30;
  if (g_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  FUN_00d41040(&local_f0,&local_100);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_e0 = g_027f1430;
  if (g_027f1430 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_00d41040(&local_d0,&local_e0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_c0 = g_027e3b40;
  if (g_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d41040(&local_b0,&local_c0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_a0 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d41040(&local_90,&local_a0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_01a1d870();
  return;
}



// ============================================================
// 01ad3320
// ============================================================
// Function: FUN_01ad3320
// Address: 01ad3320
// Size: 525 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01ad3320(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar3;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  fVar3 = *(float *)(arg1 + 0x61);
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
    FUN_00d50b00();
    uVar4 = FUN_01a1da00();
    fVar3 = (float)uVar4 * g_02390438;
    auVar7._0_4_ = (uint)fVar3 & g_023945e0;
    auVar7._4_4_ = (uint)((uint64_t)uVar4 >> 0x20) & _UNK_023945e4;
    auVar7._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
    auVar7._12_4_ = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
    auVar8._4_12_ = SUB1612(auVar7 | ZEXT416(g_02394dc8),4);
    auVar8._0_4_ = SUB164(auVar7 | ZEXT416(g_02394dc8),0) + fVar3;
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    auVar5 = roundss(auVar5,auVar8,0xb);
    fVar3 = g_02392fd8;
    if (auVar5._0_4_ <= g_02392fd8) {
      fVar3 = auVar5._0_4_;
    }
    auVar5 = roundss(ZEXT816(0),
                     ZEXT416((uint)((float)(g_023945e0 & (uint)(fVar3 * g_0241f368) |
                                           g_02394dc8) + fVar3 * g_0241f368)),0xb);
    fVar3 = g_023908ec;
    if (auVar5._0_4_ <= g_023908ec) {
      fVar3 = auVar5._0_4_;
    }
    *(float *)(arg1 + 0x61) = fVar3;
    FUN_00d50b20();
    fVar3 = *(float *)(arg1 + 0x61);
  }
  if (fVar3 < g_02390d30) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  lVar2 = arg1[0x60];
  if (lVar2 != 0) goto LAB_01ad34fe;
  (**(code **)(*arg1 + 0x640))();
  (**(code **)(*local_40 + 0x370))();
  auVar5 = ZEXT416(g_023945e0 & (uint)*(float *)(arg1 + 0x61)) | g_023945f0;
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = auVar5._0_4_ + *(float *)(arg1 + 0x61);
  auVar5 = roundss(ZEXT816(0),auVar6,0xb);
  FUN_01d44d80(auVar5._0_8_);
  lVar2 = arg1[0x60];
  lVar1 = lVar2;
  if (lVar2 != local_30) {
    lVar1 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar1 = 0;
        goto LAB_01ad3474;
      }
      FUN_00d50b00();
      lVar2 = arg1[0x60];
      arg1[0x60] = local_30;
    }
    else {
      local_28 = '\0';
LAB_01ad3474:
      arg1[0x60] = lVar1;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar1 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = arg1[0x60];
LAB_01ad34fe:
  *(void*)(this_ptr + 1) = 0;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01ad0ca0
// ============================================================
// Function: FUN_01ad0ca0
// Address: 01ad0ca0
// Size: 4878 bytes
// Class: MUScalePanel
// String references:
//   "handleSelectNewScale"
//   "handleFinishEditing"
//   "handleSetTuningAnchor"
//   "handleSetIntervalCentForSelectedPitchIndex"
//   "handleToggleModeOffsetIsLocked"
//   "handleToggleCentDisplayMode"
//   "handleFilterSliderAction"
//   "handleToggleModeDegreeType"
//   "handlePlayCurrentScale"
//   "handleCancelCurrentScalePlayback"
//   "handleSetTuningIntervalAsDisplayReference"
//   "handleSetTuningIntervalAsTuningRoot"
//   "handleInsertTuningInterval"
//   "handleDeleteTuningInterval"
//   "handleStretchTuning"
//   "handleCreateNewScale"
//   "handleToggleIntervalMonitoring"
//   "handleSetModeTitlesType"
//   "handleSetPitchDisplayMode"
//   "handleSetWesternStandardPitchIndexOffsetForPitchIndexByAssignmentOffset"
//   ... +12 more
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01ad0ca0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  return;
}



// ============================================================
// 01ad07f0
// ============================================================
// Function: FUN_01ad07f0
// Address: 01ad07f0
// Size: 741 bytes
// Class: MUScalePanel
// String references:
//   "%@ %@"
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01ad07f0(void* param_1)

{
  void*puVar1;
  int64_t lVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t local_c0;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01768510();
  puVar1 = local_a8;
  if ((((local_a0 == '\0') && (local_a8 != (void*)0x0)) && (FUN_00d50b00(), local_a0 != '\0')
      ) && (local_a8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_38 = (int64_t)puVar1;
  plVar6 = (int64_t *)*arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = (int64_t *)*arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_01736c50();
  local_68 = g_026e3bc8;
  if (g_026e3bc8 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_58 = 0;
  local_50 = '\0';
  (**(code **)(*plVar6 + 0x3c8))(&local_68,uVar3,&local_58);
  lVar2 = local_38;
  local_c0 = local_38;
  FUN_00083ea0(2,&local_c0);
  FUN_00d8cb40();
  lVar5 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  local_a8 = (void*)&g_0253d630;
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_a8 = &g_024c5048;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ace610
// ============================================================
// Function: FUN_01ace610
// Address: 01ace610
// Size: 743 bytes
// Class: MUScalePanel
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


uint64_t FUN_01ace610(void* param_1)

{
  char cVar1;
  void *pvVar2;
  char unaff_SIL;
  uint64_t this_ptr;
  double dVar3;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar4 [16];
  int64_t local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_SIL == '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507970();
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508610();
    }
    if ((this_ptr >> 0x20 != 0) && (cVar1 = FUN_00e7c6b0(), cVar1 == '\0')) {
      FUN_00e7c2a0();
    }
    FUN_00e7bdc0();
    auVar4._0_8_ = FUN_00e7c860();
    auVar4._8_8_ = extraout_XMM0_Qb;
    auVar4 = roundsd(auVar4,auVar4,9);
    dVar3 = (double)FUN_00e7c860();
    if ((dVar3 != (double)(int)auVar4._0_8_) || (NAN(dVar3) || NAN((double)(int)auVar4._0_8_))) {
      if (((int)(this_ptr >> 0x20) == 0) || (cVar1 = FUN_00e7c6b0(), cVar1 != '\0')) {
        FUN_00e7c2a0();
        FUN_00e7b970();
      }
      else {
        FUN_00e7c2a0();
        FUN_00e7b970();
      }
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 01acf580
// ============================================================
// Function: FUN_01acf580
// Address: 01acf580
// Size: 679 bytes
// Class: MUScalePanel
// String references:
//   "handleCancel"
//   "handleOK"
//   "MUScalePanel"
// === MUScalePanel properties ===
//                   _scaleRulerView
//                   _cycleSizeField
//                   _degreesDistanceField
//                   _scaleNameField


void FUN_01acf580(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b35d0 = "handleOK";
      g_028b35d8 = &g_02737b20;
      g_028b35e0 = 0;
      g_028b35e8 = &g_027e30b8;
      g_028b35f0 = FUN_01ad0760;
      g_028b35f8 = 0x5c1;
      g_028b3600 = 0;
      ram_00000000028b3608 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b3618 = "handleCancel";
      g_028b3620 = &g_02737b20;
      g_028b3628 = 0;
      g_028b3630 = &g_027e30b8;
      g_028b3638 = FUN_01ad0760;
      g_028b3640 = 0x5c9;
      g_028b3648 = 0;
      ram_00000000028b3650 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

