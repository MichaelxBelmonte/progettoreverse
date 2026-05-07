// ===================================================================
// MUScaleDetectionOptionsData — Complete reconstructed pseudocode
// 4 functions
// ===================================================================


// ============================================================
// 01b55820
// ============================================================
// Function: FUN_01b55820
// Address: 01b55820
// Size: 2607 bytes
// Class: MUScaleDetectionOptionsData

void FUN_01b55820(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  bool bVar9;
  int64_t **pplVar10;
  undefined7 uVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar12;
  int64_t *plVar14;
  uint32_t uVar15;
  uint64_t uVar16;
  float extraout_XMM0_Db;
  uint64_t local_160;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  uint32_t local_10c;
  int64_t local_108;
  char local_100;
  uint64_t local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  int local_8c;
  uint64_t local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_48;
  int64_t *local_38;
  int64_t *plVar13;
  
  if (((*arg1 != 0) && (iVar6 = FUN_01d3a5a0(), iVar6 == 1)) &&
     (iVar6 = FUN_01d3b630(this_ptr), iVar6 == 1)) {
    cVar5 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar5 == '\0') {
      return;
    }
    if ((char)this_ptr[0x49] != '\0') {
      FUN_01d11e80();
      return;
    }
    if (((this_ptr[0x48] != 0) && (cVar5 = FUN_01e05890(), cVar5 != '\0')) &&
       ((cVar5 = FUN_01e06f90(this_ptr), cVar5 != '\0' &&
        (iVar6 = FUN_01d3b620(this_ptr), iVar6 == 1)))) {
      FUN_01e07010(this_ptr);
      FUN_01d3abf0();
      uVar16 = FUN_01e466c0();
      (**(code **)(*this_ptr + 0x960))();
      lVar3 = local_108;
      local_a0 = 0;
      if (local_100 == '\0') {
        if (local_108 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_100 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = lVar3;
      FUN_00d8dab0();
      if (local_60 == (int64_t *)0x0) {
        local_10c = (uint32_t)CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
        local_98 = 0;
      }
      else if (local_58 == '\0') {
        uVar7 = FUN_00d50b00();
        local_10c = 0;
        local_98 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
      else {
        local_98 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
        local_58 = '\0';
        local_10c = 0;
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      local_8c = (int)(float)uVar16;
      bVar1 = false;
      local_48 = (int64_t *)0x0;
      local_68 = 0;
      bVar9 = false;
      local_160 = 0;
      local_f8 = 0;
      local_b0 = 0;
      plVar12 = (int64_t *)0x0;
      bVar4 = bVar1;
      plVar14 = (int64_t *)0x0;
LAB_01b55bd7:
      do {
        plVar13 = plVar14;
        bVar2 = bVar4;
        (**(code **)(*this_ptr + 0x658))();
        plVar14 = (int64_t *)*arg1;
        if (plVar14 == local_60) {
          if (((char)arg1[1] == '\0') && (local_60 != (int64_t *)0x0)) {
            if (local_58 == '\0') {
              FUN_00d50b00();
              goto LAB_01b55c60;
            }
            goto LAB_01b55c2a;
          }
        }
        else {
          lVar3 = arg1[1];
          if (local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)local_60;
            if (((char)lVar3 != '\0') && (plVar14 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01b55c60:
            *(void*)(arg1 + 1) = 1;
          }
          else {
            *arg1 = (int64_t)local_60;
            if (((char)lVar3 != '\0') && (plVar14 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01b55c2a:
            *(void*)(arg1 + 1) = 1;
            local_58 = '\0';
          }
        }
        if (*arg1 == 0) {
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01b56147:
          FUN_01e07010();
          if ((char)local_b0 != '\0') {
            (**(code **)(*this_ptr + 0xa50))();
          }
          if ((local_f8 & 1) != 0) {
            plVar14 = (int64_t *)this_ptr[0x48];
            local_b8 = 0;
            uVar15 = FUN_00d50b00();
            local_b8 = '\x01';
            local_c0 = this_ptr;
            (**(code **)(*plVar14 + 0x28))(uVar15,local_8c);
            if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (((char)local_68 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar2) && (plVar13 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar1) && (plVar12 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_10c != '\0' || local_60 == (int64_t *)0x0) {
            return;
          }
          FUN_00d50b20();
          return;
        }
        iVar6 = FUN_01d3a5a0();
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar6 == 6) goto LAB_01b56147;
        if ((local_f8 & 1) == 0) {
          plVar14 = (int64_t *)this_ptr[0x48];
          local_e8 = 0;
          uVar15 = FUN_00d50b00();
          local_e8 = '\x01';
          local_f0 = this_ptr;
          (**(code **)(*plVar14 + 0x20))(uVar15,local_8c);
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar14 = (int64_t *)this_ptr[0x48];
          local_d8 = 0;
          uVar15 = FUN_00d50b00();
          local_d8 = '\x01';
          local_e0 = this_ptr;
          uVar7 = (**(code **)(*plVar14 + 0x30))(uVar15,&local_e0);
          uVar11 = (undefined7)((uint64_t)plVar14 >> 8);
          if (local_60 == local_48) {
            if (((char)local_68 == '\0') && (local_60 != (int64_t *)0x0)) {
              plVar14 = local_48;
              if (local_58 != '\0') goto LAB_01b55d69;
              uVar8 = CONCAT71(uVar11,1);
              FUN_00d50b00();
            }
            else {
              uVar8 = local_68 & 0xffffffff;
            }
LAB_01b55dbb:
            if ((local_58 == '\0') || (local_60 == (int64_t *)0x0)) {
              local_68 = uVar8 & 0xffffffff;
            }
            else {
              FUN_00d50b20();
              local_68 = uVar8 & 0xffffffff;
            }
          }
          else {
            if (local_58 == '\0') {
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              uVar8 = CONCAT71(uVar11,1);
              if (((char)local_68 == '\0') || (local_48 == (int64_t *)0x0)) {
                local_48 = local_60;
              }
              else {
                FUN_00d50b20();
                local_48 = local_60;
              }
              goto LAB_01b55dbb;
            }
            plVar14 = local_60;
            if (((char)local_68 != '\0') && (local_48 != (int64_t *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
LAB_01b55d69:
            local_58 = '\0';
            local_68 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            local_48 = plVar14;
          }
          uVar8 = local_68;
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
          local_f8 = CONCAT71((int7)(uVar8 >> 8),1);
        }
        FUN_01d3abf0();
        FUN_01e466c0();
        plVar14 = (int64_t *)this_ptr[0x48];
        local_c8 = 0;
        FUN_00d50b00();
        local_c8 = '\x01';
        local_150 = local_60;
        local_148 = '\0';
        pplVar10 = &local_d0;
        local_d0 = this_ptr;
        (**(code **)(*plVar14 + 0x18))
                  (&local_150,pplVar10,local_8c,
                   (int)((float)((uint64_t)uVar16 >> 0x20) - extraout_XMM0_Db));
        if (local_60 == plVar12) {
          local_38 = plVar12;
          if ((!bVar1) && (local_60 != (int64_t *)0x0)) {
            if (local_58 != '\0') goto LAB_01b55ec1;
            bVar1 = true;
            FUN_00d50b00();
          }
LAB_01b55f0f:
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_38 = local_60;
              bVar1 = true;
            }
            else {
              local_38 = local_60;
              bVar1 = true;
            }
            goto LAB_01b55f0f;
          }
          local_38 = local_60;
          if ((bVar1) && (plVar12 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01b55ec1:
          local_58 = '\0';
          bVar1 = true;
        }
        if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar12 = local_38;
        bVar4 = bVar2;
        plVar14 = plVar13;
      } while (local_38 == (int64_t *)0x0);
      if (plVar13 != (int64_t *)0x0) {
        local_138 = '\0';
        local_140 = plVar13;
        cVar5 = (**(code **)(*local_38 + 0x50))();
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar5 != '\0') goto LAB_01b55bd7;
      }
      FUN_01e07010();
      local_128 = '\0';
      local_130 = local_38;
      (**(code **)(*this_ptr + 0x958))();
      if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e07010();
      if ((local_48 != (int64_t *)0x0) && ((local_160 & 1) != 0)) {
        (**(code **)(*local_48 + 0x3b8))();
      }
      uVar8 = (**(code **)(*this_ptr + 0xa38))();
      if ((char)uVar8 != '\0') {
        if (bVar9) {
          uVar8 = (**(code **)(*this_ptr + 0xa50))();
        }
        else {
          bVar9 = true;
          uVar8 = (**(code **)(*this_ptr + 0xa50))();
        }
      }
      if (local_48 != (int64_t *)0x0) {
        uVar8 = (**(code **)(*local_48 + 0x3c0))();
        local_160 = uVar8;
      }
      if (plVar13 == local_38) {
        local_b0 = CONCAT71((int7)((uint64_t)pplVar10 >> 8),1);
        if (bVar1) {
          if (!bVar2) {
            uVar7 = FUN_00d50b00();
            local_b0 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            bVar4 = true;
          }
        }
        else {
          bVar1 = false;
        }
      }
      else {
        if (bVar1) {
          uVar8 = FUN_00d50b00();
        }
        local_b0 = CONCAT71((int7)(uVar8 >> 8),1);
        bVar4 = bVar1;
        plVar14 = local_38;
        if ((bVar2) && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_01b55bd7;
    }
  }
  local_120 = *arg1;
  local_118 = '\0';
  FUN_01e0b690();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01b54370
// ============================================================
// Function: FUN_01b54370
// Address: 01b54370
// Size: 2009 bytes
// Class: MUScaleDetectionOptionsData
// String references:
//   "MUScaleDetectionOptionsData"

void FUN_01b54370(void*param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  int64_t lVar6;
  int64_t lVar7;
  char cVar8;
  int iVar9;
  uint32_t uVar10;
  void *pvVar11;
  void* pVar12;
  void*puVar13;
  int64_t this_ptr;
  float fVar14;
  float fVar15;
  
  lVar3 = g_027e4848;
  plVar1 = (int64_t *)*param_1;
  puVar13 = param_1;
  if (g_027e4848 != 0) {
    FUN_00d50b00();
  }
  pVar12 = (void*)puVar13;
  cVar8 = (**(code **)(*plVar1 + 0x50))();
  if (cVar8 == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = *(int64_t *)(this_ptr + 0xa8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      lVar3 = *(int64_t *)(this_ptr + 0xa8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01ab3680();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar3 = g_027e4850;
  plVar1 = (int64_t *)*param_1;
  if (g_027e4850 != 0) {
    FUN_00d50b00();
  }
  cVar8 = (**(code **)(*plVar1 + 0x50))();
  if (cVar8 == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = *(int64_t *)(this_ptr + 0xb0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      lVar3 = *(int64_t *)(this_ptr + 0xb0);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_01ab3680();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  plVar1 = (int64_t *)*param_2;
  if ((g_02738388 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    g_027382d8 = FUN_00e8b690();
    g_027382c0 = "MUScaleDetectionOptionsData";
    g_027382c8 = 0x48;
    pVar12 = 0x845ac0;
    g_027382d0 = FUN_00845ac0;
    g_027382e0 = 0;
    ram_00000000027382e8 = 0;
    g_027382f0 = 0;
    ram_00000000027382f8 = 0;
    g_02738300 = 0;
    ram_0000000002738308 = 0;
    g_02738310 = 0;
    ram_0000000002738318 = 0;
    g_02738320 = 0;
    ram_0000000002738328 = 0;
    g_02738330 = 0;
    ram_0000000002738338 = 0;
    g_02738340 = 0;
    ram_0000000002738348 = 0;
    g_02738350 = 0;
    ram_0000000002738358 = 0;
    g_02738360 = 0;
    ram_0000000002738368 = 0;
    g_02738370 = 0;
    ram_0000000002738378 = 0;
    g_02738380 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01b5454e:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_01b5454e;
  }
  lVar3 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 != '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (int64_t *)*param_3;
  FUN_00053ac0();
  if (plVar1 == (int64_t *)0x0) {
LAB_01b5459b:
    param_3 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_01b5459b;
  }
  lVar4 = *param_3;
  lVar6 = param_3[1];
  if (((char)lVar6 != '\0') && (lVar4 != 0)) {
    FUN_00d50b00();
  }
  lVar7 = g_027e1470;
  plVar1 = (int64_t *)*param_1;
  if (g_027e1470 != 0) {
    FUN_00d50b00();
  }
  cVar8 = (**(code **)(*plVar1 + 0x50))();
  if (cVar8 == '\0') {
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  else if (lVar3 == 0) {
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      iVar9 = FUN_00d45870();
      fVar14 = (float)_logf((float)iVar9 * g_02394204);
      pvVar11 = _pthread_getspecific(pVar12);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar9 = FUN_01b56dd0();
      fVar14 = fVar14 * g_02394208;
      fVar15 = (float)_logf((float)iVar9 * g_02394204);
      if (fVar15 * g_02394208 + g_0241b664 < fVar14) {
        pvVar11 = _pthread_getspecific(pVar12);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar9 = FUN_00d45870();
        fVar14 = (float)_logf((float)iVar9 * g_02394204);
        fVar14 = (float)_exp2f((fVar14 * g_02394208 + g_023908e0) * g_023941f4);
        FUN_01b56de0(fVar14 * g_023941f8);
      }
    }
  }
  lVar7 = g_027e1478;
  plVar1 = (int64_t *)*param_1;
  if (g_027e1478 != 0) {
    FUN_00d50b00();
  }
  cVar8 = (**(code **)(*plVar1 + 0x50))();
  if (cVar8 == '\0') {
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      bVar5 = true;
      goto LAB_01b54a6a;
    }
  }
  else {
    if (lVar3 == 0) {
      bVar5 = true;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01b54a6a;
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      iVar9 = FUN_00d45870();
      fVar14 = (float)_logf((float)iVar9 * g_02394204);
      pvVar11 = _pthread_getspecific(pVar12);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar9 = FUN_01b56d70();
      fVar14 = fVar14 * g_02394208;
      fVar15 = (float)_logf((float)iVar9 * g_02394204);
      if (fVar14 < fVar15 * g_02394208 + g_023908e0) {
        pvVar11 = _pthread_getspecific(pVar12);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar9 = FUN_00d45870();
        fVar14 = (float)_logf((float)iVar9 * g_02394204);
        fVar14 = (float)_exp2f((fVar14 * g_02394208 + g_0241b664) * g_023941f4);
        FUN_01b56d80(fVar14 * g_023941f8);
      }
    }
  }
  pvVar11 = _pthread_getspecific(pVar12);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b56e30();
  pvVar11 = _pthread_getspecific(pVar12);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_01b56d10();
  pvVar11 = _pthread_getspecific(pVar12);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar9 = FUN_01b56d70();
  fVar14 = (float)_logf((float)iVar9 * g_02394204);
  pvVar11 = _pthread_getspecific(pVar12);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar9 = FUN_01b56dd0();
  fVar14 = fVar14 * g_02394208;
  fVar15 = (float)_logf((float)iVar9 * g_02394204);
  FUN_01b17000((int)fVar14,uVar10,(int)(fVar15 * g_02394208));
  bVar5 = false;
LAB_01b54a6a:
  if (((char)lVar6 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0' && !bVar5) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00845c00
// ============================================================
// Function: FUN_00845c00
// Address: 00845c00
// Size: 1166 bytes
// Class: MUScaleDetectionOptionsData
// String references:
//   "MUScaleDetectionOptionsData"

void FUN_00845c00(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_02513f50;
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273837b == '\0') {
    FUN_008460c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273837b == '\0') {
    FUN_00846230();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273837b == '\0') {
    FUN_008463a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273837b == '\0') {
    FUN_00846510();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x45) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273837b == '\0') {
    FUN_00846680();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01b56960
// ============================================================
// Function: FUN_01b56960
// Address: 01b56960
// Size: 685 bytes
// Class: MUScaleDetectionOptionsData
// String references:
//   "MUScaleDetectionOptionsData"
//   "setIsCyclic"
//   "setIsNonCyclic"

void FUN_01b56960(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b4790 = "setIsCyclic";
      g_028b4798 = &g_027382c0;
      g_028b47a0 = 0;
      g_028b47a8 = &g_027e4860;
      g_028b47b0 = FUN_01b56e40;
      g_028b47b8 = FUN_01b56c30;
      g_028b47c0 = 0;
      ram_00000000028b47c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b47d8 = "setIsNonCyclic";
      g_028b47e0 = &g_027382c0;
      g_028b47e8 = 0;
      g_028b47f0 = &g_027e4860;
      g_028b47f8 = FUN_01b56e40;
      g_028b4800 = FUN_01b56cb0;
      g_028b4808 = 0;
      ram_00000000028b4810 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

