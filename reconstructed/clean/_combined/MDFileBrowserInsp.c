// ===================================================================
// MDFileBrowserInsp — Complete reconstructed pseudocode
// 7 functions
// ===================================================================

// Registered properties (1):
//   MDFileBrowserInspectorMode _mode


// ============================================================
// 00373de0
// ============================================================
// Function: FUN_00373de0
// Address: 00373de0
// Size: 3195 bytes
// Class: MDFileBrowserInsp
// === MDFileBrowserInsp properties ===
//   MDFileBrowserInspectorMode _mode


void FUN_00373de0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t **pplVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar1 = (int64_t *)(this_ptr + 0x28);
  if (*(int64_t *)(this_ptr + 0x28) == 0) {
    if (*(int64_t **)(this_ptr + 0x18) == (int64_t *)0x0) {
LAB_00373e4b:
      plVar7 = (int64_t *)0x0;
    }
    else {
      (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x370))();
      plVar7 = local_40;
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) goto LAB_00373e4b;
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    local_c0 = 0;
    lVar2 = *(int64_t *)(this_ptr + 0x18);
    local_d0 = plVar7;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_c8 = lVar2;
    cVar3 = FUN_00b80190();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_017a52b0();
      cVar3 = (**(code **)(*local_40 + 0x50))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        FUN_01552cd0();
        cVar3 = (**(code **)(*local_40 + 0x50))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') goto LAB_003745b0;
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_025f02c0;
        plVar7 = (int64_t *)&g_025f0658;
        puVar4[2] = &g_025f0658;
        puVar4[3] = 0;
        *(void*)(puVar4 + 4) = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        uVar10 = (*g_025f02d8)();
        local_90 = 0;
        local_98 = *(int64_t *)(this_ptr + 0x18);
        if (local_98 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_90 = '\x01';
        FUN_015ab850(uVar10,&local_98);
        plVar6 = *(int64_t **)(this_ptr + 0x20);
        plVar8 = plVar6;
        if (plVar6 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) {
              plVar8 = (int64_t *)0x0;
              goto LAB_00374178;
            }
            FUN_00d50b00();
            plVar7 = *(int64_t **)(this_ptr + 0x20);
            *(int64_t **)(this_ptr + 0x20) = local_40;
            plVar8 = local_40;
          }
          else {
            local_38 = '\0';
            plVar8 = local_40;
LAB_00374178:
            *(int64_t **)(this_ptr + 0x20) = plVar8;
            plVar7 = plVar6;
          }
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar8 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        param_1 = (void*)plVar7;
        if (*(int64_t *)(this_ptr + 0x20) != 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313ad0();
          plVar6 = (int64_t *)*plVar1;
          if (plVar6 != local_40) {
            plVar7 = plVar6;
            if (local_38 == '\0') {
              if (local_40 == (int64_t *)0x0) {
                plVar6 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar6 = local_40;
                plVar7 = (int64_t *)*plVar1;
              }
            }
            else {
              local_38 = '\0';
              plVar6 = local_40;
            }
            *plVar1 = (int64_t)plVar6;
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar6 = local_40;
            }
          }
          param_1 = (void*)plVar7;
          if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_003745b0;
      }
      local_a0 = 0;
      lVar2 = *(int64_t *)(this_ptr + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      local_a8 = lVar2;
      uVar10 = FUN_017a57b0();
      plVar7 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_017a7c70(uVar10,&local_50);
        plVar6 = *(int64_t **)(this_ptr + 0x20);
        plVar8 = plVar6;
        if (plVar6 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) {
              plVar8 = (int64_t *)0x0;
              goto LAB_00374058;
            }
            FUN_00d50b00();
            plVar6 = *(int64_t **)(this_ptr + 0x20);
            *(int64_t **)(this_ptr + 0x20) = local_40;
            plVar8 = local_40;
          }
          else {
            local_38 = '\0';
            plVar8 = local_40;
LAB_00374058:
            *(int64_t **)(this_ptr + 0x20) = plVar8;
          }
          param_1 = (void*)plVar6;
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar8 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (*(int64_t *)(this_ptr + 0x20) != 0) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        plVar6 = (int64_t *)*plVar1;
        plVar8 = plVar6;
        if (plVar6 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) {
              plVar8 = (int64_t *)0x0;
              goto LAB_0037443b;
            }
            FUN_00d50b00();
            plVar6 = (int64_t *)*plVar1;
            *plVar1 = (int64_t)local_40;
            plVar8 = local_40;
          }
          else {
            local_38 = '\0';
            plVar8 = local_40;
LAB_0037443b:
            *plVar1 = (int64_t)plVar8;
          }
          param_1 = (void*)plVar6;
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar8 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_b0 = 0;
      lVar2 = *(int64_t *)(this_ptr + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_b8 = lVar2;
      uVar10 = FUN_00b810f0();
      local_68 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if (local_68 != (int64_t *)0x0) {
        FUN_012ca6e0(uVar10,0);
        plVar7 = (int64_t *)*plVar1;
        plVar6 = plVar7;
        if (plVar7 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) {
              plVar6 = (int64_t *)0x0;
              goto LAB_00373f47;
            }
            FUN_00d50b00();
            plVar7 = (int64_t *)*plVar1;
            *plVar1 = (int64_t)local_40;
            plVar6 = local_40;
          }
          else {
            local_38 = '\0';
            plVar6 = local_40;
LAB_00373f47:
            *plVar1 = (int64_t)plVar6;
          }
          param_1 = (void*)plVar7;
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar6 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cbe00();
        local_60 = local_50;
        local_58 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_58 = '\x01';
        FUN_012e6a70();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
LAB_003745b0:
    if (*plVar1 != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = 0;
      lVar2 = *(int64_t *)(this_ptr + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_110 = (int64_t *)0x0;
      local_108 = '\0';
      local_100 = (int64_t *)0x0;
      local_f8 = '\0';
      pplVar9 = &local_100;
      local_88 = lVar2;
      FUN_012cc0c0(pplVar9,&local_110,1,0);
      param_1 = (void*)pplVar9;
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        (**(code **)(*local_100 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
        (**(code **)(*local_110 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      plVar7 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7900();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_00039550();
      (**(code **)(*plVar7 + 0x18))();
      lVar2 = *(int64_t *)(this_ptr + 0x30);
      *(int64_t **)(this_ptr + 0x30) = plVar7;
      if (lVar2 != 0) {
        FUN_00d50b20();
        plVar7 = *(int64_t **)(this_ptr + 0x30);
      }
      local_70 = 0;
      lVar2 = *plVar1;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_78 = lVar2;
      (**(code **)(*plVar7 + 0x3a0))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      local_e8 = '\0';
      local_f0 = (int64_t *)0x0;
      FUN_00cb1fa0();
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        (**(code **)(*local_f0 + 0x10))();
        FUN_00d50b20();
      }
    }
    if (local_d0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (*plVar1 == 0) goto LAB_00374990;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2610();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar1 = *(int64_t **)(*(int64_t *)(this_ptr + 0x38) + 0x150);
  uVar10 = g_02390124;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x930))();
    uVar10 = FUN_00aea630();
  }
  FUN_012a4680(uVar10);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
LAB_00374990:
  FUN_00375250();
  return;
}



// ============================================================
// 003726c0
// ============================================================
// Function: FUN_003726c0
// Address: 003726c0
// Size: 1948 bytes
// Class: MDFileBrowserInsp
// === MDFileBrowserInsp properties ===
//   MDFileBrowserInspectorMode _mode


void FUN_003726c0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  float fVar10;
  float fVar11;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  fVar10 = (float)param_2;
  FUN_01c33af0();
  pplVar6 = &local_40;
  (**(code **)(*this_ptr + 0xae0))();
  plVar5 = local_40;
  FUN_0038aac0();
  if (plVar5 == (int64_t *)0x0) {
LAB_0037274e:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0037274e;
  }
  plVar5 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) goto LAB_00372d22;
  pplVar6 = &local_40;
  FUN_01c19440();
  plVar5 = local_40;
  FUN_0038ad10();
  if (plVar5 == (int64_t *)0x0) {
LAB_003727cb:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_003727cb;
  }
  plVar5 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    bVar2 = false;
    plVar5 = (int64_t *)0x0;
  }
  else {
    FUN_01c19c80();
    FUN_01c19d80();
    if (*(int *)(local_130 + 0xc) == 0) {
      cVar4 = '\0';
    }
    else {
      FUN_01c19c80();
      FUN_01c19d80();
      local_38 = '\0';
      local_40 = plVar5;
      cVar4 = FUN_00d23d70();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        cVar4 = '\0';
      }
      else {
        FUN_01c0b7c0();
        plVar5 = local_40;
        FUN_01c0a900();
        local_60 = local_80;
        local_58 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_58 = '\x01';
        cVar4 = (**(code **)(*plVar5 + 0x50))();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02703f90;
    if (cVar4 == '\0') {
      bVar2 = false;
      plVar5 = (int64_t *)0x0;
    }
    else {
      if (g_02703f90 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      plVar5 = local_40;
      if (local_40 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        bVar2 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar2 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar5 != (int64_t *)0x0) {
    if (this_ptr[0x40] == 0) {
      uVar7 = FUN_01e3f820();
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(plVar5 + 0x27) = 0;
      plVar5[0x2e] = 0;
      *(void*)(plVar5 + 0x2f) = 0;
      plVar5[0x30] = 0;
      *(void*)(plVar5 + 0x31) = 0;
      plVar5[0x28] = 0;
      plVar5[0x29] = 0;
      *(void*)(plVar5 + 0x2a) = 0;
      plVar5[0x2b] = 0;
      plVar5[0x2c] = 0;
      *(void*)((int64_t)plVar5 + 0x165) = 0;
      *(void*)((int64_t)plVar5 + 0x18c) = 0;
      *(void*)((int64_t)plVar5 + 0x194) = 0;
      *(void*)((int64_t)plVar5 + 0x199) = 0;
      plVar5[0x35] = 0;
      plVar5[0x36] = 0;
      plVar5[0x37] = 0;
      plVar5[0x38] = 0;
      *plVar5 = (int64_t)&g_02677e10;
      plVar5[2] = (int64_t)&g_026788e8;
      plVar5[0x39] = (int64_t)&g_02678928;
      *(void*)((int64_t)plVar5 + 500) = 0;
      *(void*)(plVar5 + 0x3f) = 0;
      plVar5[0x43] = 0;
      plVar5[0x3c] = 0;
      plVar5[0x3d] = 0;
      plVar5[0x3a] = 0;
      plVar5[0x3b] = 0;
      *(void*)(plVar5 + 0x3e) = 0;
      *(void*)((int64_t)plVar5 + 0x1fc) = 0;
      *(void*)((int64_t)plVar5 + 0x204) = 0;
      *(void*)((int64_t)plVar5 + 0x20c) = 0;
      (*g_02677e28)();
      lVar1 = this_ptr[0x40];
      this_ptr[0x40] = (int64_t)plVar5;
      if (lVar1 != 0) {
        FUN_00d50b20();
        plVar5 = (int64_t *)this_ptr[0x40];
      }
      auVar8._0_4_ = fVar10 - fVar11;
      auVar8._4_4_ = fVar11 - fVar11;
      auVar8._8_4_ = in_XMM1_Dc - in_XMM1_Dd;
      auVar8._12_4_ = in_XMM1_Dd - in_XMM1_Dd;
      auVar9._8_8_ = extraout_XMM0_Qb;
      auVar9._0_8_ = uVar7;
      auVar9 = blendps(auVar8,auVar9,2);
      (**(code **)(*plVar5 + 0x4d0))(auVar9._0_8_);
      FUN_01cef490();
      (**(code **)(*(int64_t *)this_ptr[0x40] + 0x558))();
      FUN_01cef3b0();
      FUN_01e3b6a0();
      lVar1 = g_02725a10;
      plVar5 = (int64_t *)this_ptr[0x40];
      if (g_02725a10 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0xa10))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_02703fa0;
      plVar5 = (int64_t *)this_ptr[0x40];
      if (g_02703fa0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_02703fa8;
      if (g_02703fa8 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar3;
      local_98 = '\x01';
      local_90 = 0;
      local_88 = '\0';
      FUN_00d31230(&local_90,&local_a0);
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      (**(code **)(*plVar5 + 0x6a8))();
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      local_68 = 0;
      lVar1 = this_ptr[0x40];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      local_70 = lVar1;
      (**(code **)(*this_ptr + 0x450))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if (!bVar2) {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_00372d22:
  if (((int64_t *)this_ptr[0x40] != (int64_t *)0x0) &&
     ((**(code **)(*(int64_t *)this_ptr[0x40] + 0x478))(), this_ptr[0x40] != 0)) {
    this_ptr[0x40] = 0;
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00375aa0
// ============================================================
// Function: FUN_00375aa0
// Address: 00375aa0
// Size: 5507 bytes
// Class: MDFileBrowserInsp
// String references:
//   "onLocaleChanged"
//   "onPreferencesChanged"
//   "handleRevealInBrowserViewAction"
//   "handleSetBrowserInspectorModeAction"
//   "handleUpdateQueryQualifierAction"
//   "handleToggleShowColumns"
//   "handleToggleShowPlaybackButtons"
//   "handleToggleShowIcons"
//   "handleToggleShowPreview"
//   "handleBrowserSelection"
//   "handleBrowserDoubleClick"
//   "handleSelectSourcePath"
//   "handleDelete"
//   "handleSetPrelistenVolume"
//   "handleTogglePrelistenPlayback"
//   "MDFileBrowserInsp"
// === MDFileBrowserInsp properties ===
//   MDFileBrowserInspectorMode _mode


void FUN_00375aa0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02807ae0 = "handleRevealInBrowserViewAction";
      g_02807ae8 = &g_0271b2e0;
      g_02807af0 = 0;
      g_02807af8 = &g_02704598;
      g_02807b00 = FUN_0038af40;
      g_02807b08 = 0x6a9;
      g_02807b10 = 0;
      ram_0000000002807b18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807b28 = "handleSetBrowserInspectorModeAction";
      g_02807b30 = &g_0271b2e0;
      g_02807b38 = 0;
      g_02807b40 = &g_02704598;
      g_02807b48 = FUN_0038af40;
      g_02807b50 = 0x6b1;
      g_02807b58 = 0;
      ram_0000000002807b60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807b70 = "handleUpdateQueryQualifierAction";
      g_02807b78 = &g_0271b2e0;
      g_02807b80 = 0;
      g_02807b88 = &g_02704598;
      g_02807b90 = FUN_0038af40;
      g_02807b98 = 0x6b9;
      g_02807ba0 = 0;
      ram_0000000002807ba8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807bb8 = "handleToggleShowColumns";
      g_02807bc0 = &g_0271b2e0;
      g_02807bc8 = 0;
      g_02807bd0 = &g_02704598;
      g_02807bd8 = FUN_0038af40;
      g_02807be0 = 0x6c1;
      g_02807be8 = 0;
      ram_0000000002807bf0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807c00 = "handleToggleShowPlaybackButtons";
      g_02807c08 = &g_0271b2e0;
      g_02807c10 = 0;
      g_02807c18 = &g_02704598;
      g_02807c20 = FUN_0038af40;
      g_02807c28 = 0x6c9;
      g_02807c30 = 0;
      ram_0000000002807c38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807c48 = "handleToggleShowIcons";
      g_02807c50 = &g_0271b2e0;
      g_02807c58 = 0;
      g_02807c60 = &g_02704598;
      g_02807c68 = FUN_0038af40;
      g_02807c70 = 0x6d1;
      g_02807c78 = 0;
      ram_0000000002807c80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807c90 = "handleToggleShowPreview";
      g_02807c98 = &g_0271b2e0;
      g_02807ca0 = 0;
      g_02807ca8 = &g_02704598;
      g_02807cb0 = FUN_0038af40;
      g_02807cb8 = 0x6d9;
      g_02807cc0 = 0;
      ram_0000000002807cc8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807cd8 = "handleBrowserSelection";
      g_02807ce0 = &g_0271b2e0;
      g_02807ce8 = 0;
      g_02807cf0 = &g_02704598;
      g_02807cf8 = FUN_0038af40;
      g_02807d00 = 0x6e1;
      g_02807d08 = 0;
      ram_0000000002807d10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807d20 = "handleBrowserDoubleClick";
      g_02807d28 = &g_0271b2e0;
      g_02807d30 = 0;
      g_02807d38 = &g_02704598;
      g_02807d40 = FUN_0038af40;
      g_02807d48 = 0x6e9;
      g_02807d50 = 0;
      ram_0000000002807d58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807d68 = "handleSelectSourcePath";
      g_02807d70 = &g_0271b2e0;
      g_02807d78 = 0;
      g_02807d80 = &g_02704598;
      g_02807d88 = FUN_0038af40;
      g_02807d90 = 0x6f1;
      g_02807d98 = 0;
      ram_0000000002807da0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807db0 = "handleDelete";
      g_02807db8 = &g_0271b2e0;
      g_02807dc0 = 0;
      g_02807dc8 = &g_02704598;
      g_02807dd0 = FUN_0038af40;
      g_02807dd8 = 0x6f9;
      g_02807de0 = 0;
      ram_0000000002807de8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807df8 = "handleSetPrelistenVolume";
      g_02807e00 = &g_0271b2e0;
      g_02807e08 = 0;
      g_02807e10 = &g_02704598;
      g_02807e18 = FUN_0038af40;
      g_02807e20 = 0x701;
      g_02807e28 = 0;
      ram_0000000002807e30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807e40 = "handleTogglePrelistenPlayback";
      g_02807e48 = &g_0271b2e0;
      g_02807e50 = 0;
      g_02807e58 = &g_02704598;
      g_02807e60 = FUN_0038af40;
      g_02807e68 = 0x709;
      g_02807e70 = 0;
      ram_0000000002807e78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807e88 = "onLocaleChanged";
      g_02807e90 = &g_0271b2e0;
      g_02807e98 = 0;
      g_02807ea0 = &g_0270459c;
      g_02807ea8 = FUN_0038afd0;
      g_02807eb0 = FUN_0037ab30;
      g_02807eb8 = 0;
      ram_0000000002807ec0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807ed0 = "onPreferencesChanged";
      g_02807ed8 = &g_0271b2e0;
      g_02807ee0 = 0;
      g_02807ee8 = &g_0270459c;
      g_02807ef0 = FUN_0038afd0;
      g_02807ef8 = FUN_0037a800;
      g_02807f00 = 0;
      ram_0000000002807f08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00371b30
// ============================================================
// Function: FUN_00371b30
// Address: 00371b30
// Size: 653 bytes
// Class: MDFileBrowserInsp
// String references:
//   "MDFileBrowserInsp"
// === MDFileBrowserInsp properties ===
//   MDFileBrowserInspectorMode _mode


void FUN_00371b30(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar6;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  (**(code **)(*arg1 + 0xad8))();
  pplVar5 = &local_38;
  FUN_01c259e0();
  plVar1 = local_38;
  if ((g_02704150 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0271b2f8 = FUN_00018750();
    g_0271b2e0 = "MDFileBrowserInsp";
    g_0271b2e8 = 0x170;
    g_0271b2f0 = FUN_0038a3b0;
    g_0271b300 = 0;
    ram_000000000271b308 = 0;
    g_0271b310 = 0;
    g_0271b388 = 0;
    ram_000000000271b390 = 0;
    g_0271b398 = 0;
    g_0271b39a = 1;
    g_0271b318 = 0;
    ram_000000000271b320 = 0;
    g_0271b328 = 0;
    ram_000000000271b330 = 0;
    g_0271b338 = 0;
    ram_000000000271b340 = 0;
    g_0271b348 = 0;
    ram_000000000271b350 = 0;
    g_0271b358 = 0;
    ram_000000000271b360 = 0;
    g_0271b368 = 0;
    ram_000000000271b370 = 0;
    g_0271b378 = 0;
    ram_000000000271b380 = 0;
    g_0271b3a3 = 0;
    g_0271b39b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_00371b98:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00371b98;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0xae0))();
  plVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x00371cf3;
    }
    FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar1 == (int64_t *)0x0) || (plVar2 == (int64_t *)0x0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (plVar2 == (int64_t *)0x0) goto joined_r0x00371cf3;
  }
  else {
    uVar6 = (**(code **)(*plVar2 + 0x388))();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        uVar6 = FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    (**(code **)(*plVar1 + 0x6a0))(uVar6,&local_48);
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
joined_r0x00371cf3:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00375250
// ============================================================
// Function: FUN_00375250
// Address: 00375250
// Size: 539 bytes
// Class: MDFileBrowserInsp
// === MDFileBrowserInsp properties ===
//   MDFileBrowserInspectorMode _mode


void FUN_00375250(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x28) != 0) {
    cVar5 = (**(code **)(**(int64_t **)(*(int64_t *)(this_ptr + 0x38) + 0xd8) + 0x5e8))();
    if (cVar5 != '\0') {
      plVar1 = *(int64_t **)(*(int64_t *)(this_ptr + 0x38) + 0xd8);
      FUN_0141cb10();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      (**(code **)(*plVar1 + 0x690))();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(*(int64_t *)(this_ptr + 0x38) + 0xd8) + 0x698))();
    lVar2 = *(int64_t *)(this_ptr + 0x28);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_012d1940();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(*(int64_t *)(this_ptr + 0x38) + 0xd8);
    lVar2 = *(int64_t *)(this_ptr + 0x28);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_0141c4c0(0);
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*plVar1 + 0x690))();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x18);
    lVar3 = *(int64_t *)(this_ptr + 0x38);
    lVar4 = *(int64_t *)(lVar3 + 0xe0);
    if (lVar4 != lVar2) {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(lVar3 + 0xe0) = lVar2;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(*(int64_t *)(this_ptr + 0x38) + 0xd8) + 0x6a8))();
  }
  return;
}



// ============================================================
// 005ca0e0
// ============================================================
// Function: FUN_005ca0e0
// Address: 005ca0e0
// Size: 1125 bytes
// Class: MDFileBrowserInsp
// String references:
//   "MDFileBrowserInsp"
//   "MUBrowserViewDelegate"
// === MDFileBrowserInsp properties ===
//   MDFileBrowserInspectorMode _mode


void FUN_005ca0e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a2970();
  this_ptr[0x1a] = &g_02667b80;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024eb6e8;
  this_ptr[0x1a] = &g_024ebe28;
  FUN_005ca7a0();
  FUN_005caad0();
  FUN_005cad90();
  FUN_005cb0c0();
  FUN_005cb3f0();
  FUN_005cb720();
  FUN_005cba50();
  *(void*)(this_ptr + 0x22) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271b39b == '\0') {
    FUN_005cbd80();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x114) = 0;
  // [STATIC_INIT: property registration]
  if (g_0271b39b == '\0') {
    FUN_005cbfe0();
    FUN_00e87980();
  }
  FUN_005cc170();
  FUN_005cc4a0();
  FUN_005cc7d0();
  FUN_005ccb00();
  FUN_005cce30();
  FUN_005cd0f0();
  FUN_005cd420();
  FUN_005cd6e0();
  FUN_005cda10();
  FUN_005cdd40();
  FUN_005ce070();
  return;
}



// ============================================================
// 005cbd80
// ============================================================
// Function: FUN_005cbd80
// Address: 005cbd80
// Size: 560 bytes
// Class: MDFileBrowserInsp
// String references:
//   "_mode"
//   "MDFileBrowserInsp"
//   "MDFileBrowserInspectorMode"
// === MDFileBrowserInsp properties ===
//   MDFileBrowserInspectorMode _mode


void* FUN_005cbd80(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0271b5c8 = "_mode";
      g_0271b5d0 = &g_0271b2e0;
      g_0271b5d8 = 0;
      g_0271b5e0 = 0x6500;
      g_0271b5e8 = "MDFileBrowserInspectorMode";
      g_0271b5f0 = &g_0271b648;
      g_0271b5f8 = 0;
      ram_000000000271b600 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0271b5c8;
}

