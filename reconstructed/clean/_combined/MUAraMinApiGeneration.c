// ===================================================================
// MUAraMinApiGeneration — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 016acf90
// ============================================================
// Function: FUN_016acf90
// Address: 016acf90
// Size: 2524 bytes
// Class: MUAraMinApiGeneration
// String references:
//   "config != NULL"
//   "config->structSize >= ARA::kARAInterfaceConfigurationMinSize"
//   "config->desiredApiGeneration >= MUAraMinApiGeneration"
//   "config->desiredApiGeneration <= MUAraMaxApiGeneration"
//   "config->desiredApiGeneration >= ARA::kARAAPIGeneration_2_0_Final"
//   "(_apiGeneration == kAraNotInitialized) && \"initializeARAWithConfiguration() called more than once\...
//   "%d"

void FUN_016acf90(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  int64_t lVar7;
  void*puVar8;
  void *pvVar9;
  uint64_t uVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  uint64_t *this_ptr;
  bool bVar14;
  bool bVar15;
  int64_t local_e8;
  char local_e0;
  int64_t *local_80;
  uint local_78;
  int local_74;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  
  FUN_00e87d20();
  FUN_00da7190();
  if (this_ptr == (uint64_t *)0x0) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else if (*this_ptr < 0x14) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    g_02802f60 = *(void**)((int64_t)this_ptr + 0xc);
    iVar12 = (int)this_ptr[1];
    if (iVar12 < 2) {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)(iVar12,"config->desiredApiGeneration >= MUAraMinApiGeneration");
      }
    }
    else if (iVar12 < 7) {
      lVar7 = FUN_00bce6e0();
      lVar3 = g_027cb140;
      if ((lVar7 == 0) || (3 < (int)this_ptr[1])) {
        if (g_027cb0f0 == -1) {
          g_027cb0f0 = (int)this_ptr[1];
          if (g_027cb0f0 < 1) {
            if (g_027cb140 != 0) {
              FUN_00d50b00();
            }
            FUN_00e7e120();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            local_78 = 1;
            local_80 = &g_024cc6f0;
            local_74 = g_027cb0f0;
            FUN_00d8cb40(&g_024cc6f0,&local_80);
            lVar3 = local_60;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            lVar7 = g_027cb140;
            if (g_027cb140 != 0) {
              FUN_00d50b00();
            }
            FUN_00e7e120();
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00e36840();
          FUN_00e36330();
          FUN_00e36990();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (g_028ad8c0 == (void*)0x0) {
            puVar8 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar8 = &g_02572358;
            (*g_02572370)();
            if (g_028ad8c0 == puVar8) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
              bVar14 = g_028ad8c0 != (void*)0x0;
              g_028ad8c0 = puVar8;
              if (bVar14) {
                FUN_00d50b20();
              }
            }
            if (g_028ad8c8 == '\0') {
              g_028ad8c8 = '\x01';
              FUN_00e8cb90();
            }
            if (!bVar15) {
              FUN_00d50b20();
            }
          }
          if (g_028ad890 == 0) {
            FUN_0141b540();
            lVar3 = local_60;
            if ((((local_58 == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d894f0();
            lVar7 = g_028ad890;
            if (g_028ad890 != local_60) {
              if (local_58 == '\0') {
                if (local_60 == 0) {
                  lVar7 = 0;
                }
                else {
                  FUN_00d50b00();
                  lVar7 = local_60;
                }
              }
              else {
                local_58 = '\0';
                lVar7 = local_60;
              }
              bVar15 = g_028ad890 != 0;
              g_028ad890 = lVar7;
              if (bVar15) {
                FUN_00d50b20();
                lVar7 = local_60;
              }
            }
            if ((lVar7 != 0) && (g_028ad898 == '\0')) {
              g_028ad898 = '\x01';
              FUN_00e8cb90();
              lVar7 = local_60;
            }
            if ((local_58 != '\0') && (lVar7 != 0)) {
              FUN_00d50b20();
            }
            FUN_016be370();
            lVar7 = g_028ad8a0;
            if (g_028ad8a0 != local_60) {
              if (local_58 == '\0') {
                if (local_60 == 0) {
                  lVar7 = 0;
                }
                else {
                  FUN_00d50b00();
                  lVar7 = local_60;
                }
              }
              else {
                local_58 = '\0';
                lVar7 = local_60;
              }
              bVar15 = g_028ad8a0 != 0;
              g_028ad8a0 = lVar7;
              if (bVar15) {
                FUN_00d50b20();
                lVar7 = local_60;
              }
            }
            if ((lVar7 != 0) && (g_028ad8a8 == '\0')) {
              g_028ad8a8 = '\x01';
              FUN_00e8cb90();
              lVar7 = local_60;
            }
            if ((local_58 != '\0') && (lVar7 != 0)) {
              FUN_00d50b20();
            }
            FUN_00c8e710();
            lVar7 = local_60;
            if ((((local_58 == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != 0)) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            lVar2 = g_028ad8b0;
            if ((g_028ad8b0 != lVar7) && (g_028ad8b0 = lVar7, lVar2 != 0)) {
              FUN_00d50b20();
            }
            if (lVar7 != 0) {
              if (g_028ad8b8 == '\0') {
                g_028ad8b8 = '\x01';
                FUN_00e8cb90();
              }
              if (lVar7 != 0 && lVar2 == lVar7) {
                FUN_00d50b20();
              }
            }
            local_58 = '\0';
            local_60 = 0;
            local_50 = lVar3;
            local_48 = 0xffffffff;
            local_40 = 0;
            iVar12 = 0;
            while( true ) {
              iVar13 = 0;
              if (iVar12 != 0) {
                if (iVar12 < 1) {
                  iVar13 = -iVar12;
                }
                else {
                  local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar12);
                  FUN_00d23690();
                  local_40 = local_40 + iVar12;
                  iVar13 = 0;
                }
                local_48 = CONCAT44(iVar13,(int)local_48);
              }
              lVar7 = (int64_t)(int)local_48;
              iVar12 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar12);
              if (*(int *)(local_50 + 0xc) <= iVar12) break;
              pvVar11 = *(void **)(local_50 + 0x10);
              local_60 = *(int64_t *)((int64_t)pvVar11 + lVar7 * 8 + 8);
              pvVar9 = _pthread_getspecific((void*)pvVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar6 = FUN_0141baa0();
              iVar12 = iVar13;
              if (cVar6 == '\0') {
                pvVar9 = _pthread_getspecific((void*)pvVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0141b660();
                plVar4 = local_80;
                FUN_0141ae30();
                plVar5 = local_70;
                if (local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_68 = '\0';
                }
                cVar6 = (**(code **)(*plVar4 + 0x50))();
                iVar12 = 0;
                if (cVar6 == '\0') {
                  iVar12 = *(int *)(g_028ad8b0 + 0x18) / 0x18;
                }
                if (plVar5 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar9 = _pthread_getspecific((void*)pvVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0141b660();
                plVar4 = local_70;
                if (local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_80 = plVar4;
                local_78 = local_78 & 0xffffff00;
                FUN_00d23370();
                if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar4 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar9 = _pthread_getspecific((void*)pvVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0141b690();
                FUN_00d8cf90();
                plVar4 = local_70;
                if (local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_80 = plVar4;
                local_78 = local_78 & 0xffffff00;
                FUN_00d23370();
                if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar4 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_e0 != '\0') && (local_e8 != 0)) {
                  FUN_00d50b20();
                }
                uVar10 = FUN_00d8b910();
                lVar7 = g_028ad8b0;
                uVar1 = *(void*)
                         (*(int64_t *)(*(int64_t *)(g_028ad8a0 + 0x10) + (int64_t)iVar12 * 8) +
                         0x10);
                iVar13 = *(int *)(g_028ad8b0 + 0x18);
                FUN_00c8e340();
                lVar2 = (int64_t)iVar12 * 0x18;
                lVar7 = *(int64_t *)(lVar7 + 0x10);
                _memmove(pvVar11,(void *)(int64_t)(iVar13 - (int)lVar2),param_3);
                *(void*)(lVar7 + lVar2) = 0x18;
                *(void*)(lVar7 + 8 + lVar2) = uVar10;
                *(void*)(lVar7 + 0x10 + lVar2) = uVar1;
                iVar12 = local_48._4_4_;
              }
            }
            FUN_002a08f0();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(iVar12,"config->desiredApiGeneration <= MUAraMaxApiGeneration");
    }
  }
  FUN_00da71b0();
  return;
}

