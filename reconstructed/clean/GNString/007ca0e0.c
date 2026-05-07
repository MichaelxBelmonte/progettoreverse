// Function: FUN_007ca0e0
// Address: 007ca0e0
// Size: 2927 bytes
// Class: GNString
// String references:
//   "%I %%"
//   "%I %% - %I %%"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_007ca0e0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void *pvVar8;
  void* pVar9;
  int64_t this_ptr;
  int64_t lVar10;
  int64_t lVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  float local_dc;
  void*local_d8;
  char local_d0;
  void*local_c8;
  char local_c0;
  void*local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  float local_84;
  void*local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  uint64_t local_60;
  void*local_58;
  uint local_50;
  int local_4c;
  void*local_48;
  uint local_40;
  int local_3c;
  int local_38;
  
  FUN_00364b20();
  local_80 = local_48;
  bVar13 = local_48 == (void*)0x0;
  if (bVar13) {
    bVar3 = false;
    local_80 = (void*)0x0;
  }
  else {
    if ((char)local_40 == '\0') {
      FUN_00d50b00();
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(int *)(local_80 + 0xc) != 0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x998))();
      (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x998))();
      (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x998))();
      (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x918))();
      *(void*)(this_ptr + 0xb0) = 0x7fc000007fc00000;
      uVar12 = *(uint *)(local_80 + 0xc);
      if ((int)uVar12 < 1) {
        local_74 = 0.0;
        local_60 = 0;
        lVar10 = 0;
        local_6c = 0.0;
        local_84 = 0.0;
        local_70 = g_02390124;
        local_64 = g_02390124;
        local_68 = 0.0;
      }
      else {
        lVar11 = (uint64_t)uVar12 + 1;
        uVar12 = uVar12 - 1;
        local_68 = 0.0;
        lVar10 = 0;
        local_64 = g_02390124;
        local_84 = 0.0;
        local_6c = 0.0;
        local_70 = g_02390124;
        local_74 = 0.0;
        local_60 = 0;
        do {
          while( true ) {
            lVar6 = *(int64_t *)(local_80 + 0x10);
            lVar1 = *(int64_t *)(lVar6 + (uint64_t)uVar12 * 8);
            pVar9 = uVar12;
            if (lVar10 == lVar1) {
              if (((char)local_60 == '\0') && (lVar10 != 0)) {
                local_60 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                lVar6 = FUN_00d50b00();
              }
              if (((char)local_60 == '\0') || (lVar10 == 0)) {
                local_60 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
                lVar10 = lVar1;
              }
              else {
                uVar7 = FUN_00d50b20();
                local_60 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
                lVar10 = lVar1;
              }
            }
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            if (local_48 != (void*)0x0) break;
LAB_007ca210:
            FUN_00d23620();
LAB_007ca21c:
            lVar11 = lVar11 + -1;
            uVar12 = uVar12 - 1;
            if (lVar11 < 2) goto LAB_007ca67e;
          }
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_01263cf0();
          if (cVar4 != '\0') {
            if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_007ca210;
          }
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_01263ef0();
          if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') goto LAB_007ca210;
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_78 = (float)FUN_0152de10();
          if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_dc = (float)FUN_0125eba0();
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar8 = _pthread_getspecific(pVar9);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0152e210();
          cVar5 = '\x01';
          if (cVar4 == '\0') {
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar5 = FUN_0152e940();
            if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          fVar16 = local_78;
          if (local_70 <= local_78) {
            fVar16 = local_70;
          }
          local_74 = local_74 + local_78;
          fVar17 = local_78;
          if (local_78 <= local_6c) {
            fVar17 = local_6c;
          }
          fVar14 = 0.0;
          if (0.0 <= local_dc) {
            fVar14 = local_dc;
          }
          fVar15 = g_02390124;
          if (fVar14 <= g_02390124) {
            fVar15 = fVar14;
          }
          fVar15 = g_02390124 - fVar15;
          fVar14 = fVar15;
          if (local_64 <= fVar15) {
            fVar14 = local_64;
          }
          local_84 = local_84 + fVar15;
          if (fVar15 <= local_68) {
            fVar15 = local_68;
          }
          local_70 = fVar16;
          local_68 = fVar15;
          local_64 = fVar14;
          if (cVar5 != '\0') {
            local_78 = fVar17;
            (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x998))();
            local_6c = local_78;
            goto LAB_007ca21c;
          }
          lVar11 = lVar11 + -1;
          uVar12 = uVar12 - 1;
          local_6c = fVar17;
        } while (1 < lVar11);
LAB_007ca67e:
        uVar12 = *(uint *)(local_80 + 0xc);
      }
      local_74 = local_74 / (float)(int)uVar12;
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x928))(local_74);
      plVar2 = *(int64_t **)(this_ptr + 0x98);
      if ((local_70 != local_6c) || (NAN(local_70) || NAN(local_6c))) {
        local_3c = (int)(local_70 * g_023908e0);
        local_38 = (int)(local_6c * g_023908e0);
        local_40 = 2;
        local_48 = &g_024c3df0;
        FUN_00d8cb40(local_38,&local_48);
        local_c8 = local_58;
        local_c0 = 0;
        if ((char)local_50 == '\0') {
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
        }
        local_c0 = '\x01';
        (**(code **)(*plVar2 + 0x968))();
        if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_4c = (int)(local_74 * g_023908e0);
        local_50 = 1;
        local_58 = &g_024cc6f0;
        FUN_00d8cb40(&g_024cc6f0,&local_58);
        local_d8 = local_48;
        local_d0 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_d0 = '\x01';
        (**(code **)(*plVar2 + 0x968))();
        if ((local_d0 != '\0') && (local_d8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      fVar16 = 0.0;
      if (0.0 <= local_84 / (float)*(int *)(local_80 + 0xc)) {
        fVar16 = local_84 / (float)*(int *)(local_80 + 0xc);
      }
      local_78 = g_02390124;
      if (fVar16 <= g_02390124) {
        local_78 = fVar16;
      }
      (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x928))();
      plVar2 = *(int64_t **)(this_ptr + 0xa0);
      if ((local_64 != local_68) || (NAN(local_64) || NAN(local_68))) {
        local_3c = (int)(local_64 * g_023908e0);
        local_38 = (int)(local_68 * g_023908e0);
        local_40 = 2;
        local_48 = &g_024c3df0;
        FUN_00d8cb40(local_38,&local_48);
        local_a8 = local_58;
        local_a0 = 0;
        if ((char)local_50 == '\0') {
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
        }
        local_a0 = '\x01';
        (**(code **)(*plVar2 + 0x968))();
        if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_4c = (int)(local_78 * g_023908e0);
        local_50 = 1;
        local_58 = &g_024cc6f0;
        FUN_00d8cb40(&g_024cc6f0,&local_58);
        local_b8 = local_48;
        local_b0 = 0;
        if ((char)local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = local_40 & 0xffffff00;
        }
        local_b0 = '\x01';
        (**(code **)(*plVar2 + 0x968))();
        if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x998))();
      (**(code **)(**(int64_t **)(this_ptr + 0xb8) + 0x998))();
      (**(code **)(**(int64_t **)(this_ptr + 0xb8) + 0x918))();
      lVar11 = g_0272f190;
      plVar2 = *(int64_t **)(this_ptr + 0xb8);
      if (g_0272f190 != 0) {
        FUN_00d50b00();
      }
      lVar6 = g_0272f198;
      if (g_0272f198 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar6;
      local_f8 = '\x01';
      local_f0 = 0;
      local_e8 = '\0';
      FUN_00d31230(&local_f0,&local_100);
      local_98 = local_48;
      local_90 = 0;
      if ((char)local_40 == '\0') {
        if (local_48 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = local_40 & 0xffffff00;
      }
      local_90 = '\x01';
      (**(code **)(*plVar2 + 0x958))();
      if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      bVar3 = true;
      bVar13 = false;
      if (((char)local_60 != '\0') && (bVar13 = false, lVar10 != 0)) {
        FUN_00d50b20();
        bVar13 = false;
      }
      goto LAB_007cac49;
    }
    bVar3 = true;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x998))();
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x998))();
LAB_007cac49:
  if ((bVar3) && (!bVar13)) {
    FUN_00d50b20();
  }
  return;
}

