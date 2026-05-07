// Function: FUN_01246e50
// Address: 01246e50
// Size: 6034 bytes
// Class: Unknown

void FUN_01246e50(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t **pplVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  int64_t *arg1;
  void*this_ptr;
  int64_t *unaff_R12;
  undefined7 uVar13;
  int64_t *plVar14;
  int64_t *unaff_R15;
  uint64_t uVar15;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int local_a4;
  int64_t *local_a0;
  char local_98;
  uint64_t local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  plVar11 = (int64_t *)*param_2;
  if (plVar11 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_98 = 0;
  cVar3 = *(char *)(param_2 + 1);
  if (cVar3 != '\0') {
    FUN_00d50b00();
  }
  local_a0 = plVar11;
  local_98 = cVar3;
  FUN_01407af0();
  FUN_0177f010();
  local_108 = local_88;
  local_100 = 0;
  if (local_80 == '\0') {
    if (local_88 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_100 = '\x01';
  pplVar10 = &local_108;
  FUN_0140f410(pplVar10,&local_a0);
  plVar11 = local_78;
  pVar9 = (void*)pplVar10;
  if (local_70 == '\0') {
    if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) {
LAB_01246fd6:
    local_a4 = 0;
  }
  else {
    local_a4 = FUN_00d45870();
    FUN_00d50b20();
    if (local_a4 == -0x80000000) goto LAB_01246fd6;
  }
  if (arg1[3] != 0) {
    unaff_R15 = &g_02802558;
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar8 = arg1[2];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_01738be0();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (iVar5 != local_a4) {
      FUN_0173b7c0();
      unaff_R12 = local_78;
      if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (arg1[2] == 0) {
        FUN_0176f970();
        if (local_70 == '\0') {
          if (local_78 == (int64_t *)0x0) {
            local_40 = (int64_t *)0x0;
          }
          else {
            local_40 = local_78;
            FUN_00d50b00();
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_40 = local_78;
        }
      }
      else {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
        local_78 = local_50;
        local_70 = 0;
        local_40 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_70 = '\0';
          if (local_48 != '\0') {
            local_70 = '\0';
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = '\0';
          local_70 = '\0';
        }
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b720();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      local_f8 = local_78;
      local_f0 = 0;
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_f0 = '\x01';
      FUN_0173b680();
      if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0174e010();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      local_e8 = local_50;
      local_e0 = 0;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_e0 = '\x01';
      (**(code **)(*arg1 + 0x388))();
      plVar11 = local_78;
      if (local_70 == '\0') {
        if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d99300();
        FUN_00d95590();
        local_d8 = local_88;
        local_d0 = 0;
        if (local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_d0 = '\x01';
        FUN_00d91bc0();
        plVar11 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d99300();
        FUN_00d95590();
        local_c8 = local_88;
        local_c0 = 0;
        if (local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_c0 = '\x01';
        FUN_00d91bc0();
        unaff_R15 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar3 = (**(code **)(*unaff_R15 + 0x50))();
        if (cVar3 != '\0') {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d51d20();
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar11 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (unaff_R12 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto joined_r0x012485b0;
        }
        FUN_00d50b20();
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (unaff_R12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d95590();
  local_b8 = local_50;
  local_b0 = 0;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_b0 = '\x01';
  pVar9 = 6;
  FUN_00d97d10(6,&local_b8);
  plVar14 = local_78;
  cVar3 = local_98;
  plVar11 = local_a0;
  if (local_a0 == local_78) {
    if ((local_98 != '\0') || (local_78 == (int64_t *)0x0)) goto LAB_012477c7;
    if (local_70 == '\0') {
      FUN_00d50b00();
      goto LAB_012477c0;
    }
LAB_01247751:
    local_98 = '\x01';
    local_70 = '\0';
  }
  else {
    unaff_R15 = (int64_t *)CONCAT71((int7)((uint64_t)unaff_R15 >> 8),local_98);
    if (local_70 != '\0') {
      local_a0 = local_78;
      if ((local_98 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01247751;
    }
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_a0 = plVar14;
    if ((cVar3 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_012477c0:
    local_98 = '\x01';
LAB_012477c7:
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar5 = FUN_00d8c7a0();
  plVar11 = local_a0;
  lVar8 = g_027be638;
  if (iVar5 == 0) {
LAB_0124791b:
    FUN_0173be50();
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    plVar11 = local_78;
    if (local_78 == (int64_t *)0x0) {
      plVar11 = (int64_t *)0x0;
      uVar6 = 0;
joined_r0x012479cf:
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar13 = (undefined7)((uint64_t)unaff_R12 >> 8);
      if (local_70 == '\0') {
        FUN_00d50b00();
        uVar6 = (uint)CONCAT71(uVar13,1);
        goto joined_r0x012479cf;
      }
      local_70 = '\0';
      uVar6 = (uint)CONCAT71(uVar13,1);
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027be638 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar11 + 0x50))();
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      FUN_017281b0();
      FUN_00d99300();
      plVar11 = local_88;
      if (local_80 == '\0') {
        if (local_88 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_78 = plVar11;
      local_70 = '\0';
      cVar4 = FUN_00d23d70();
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') goto LAB_0124791b;
    plVar11 = (int64_t *)0x0;
    uVar6 = 0;
  }
  plVar14 = local_a0;
  lVar8 = g_027be640;
  if (g_027be640 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar14 + 0x50))();
  cVar4 = '\x01';
  if (cVar3 == '\0') {
    FUN_01728850();
    FUN_00d99300();
    plVar14 = local_88;
    if (local_80 == '\0') {
      if (local_88 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_78 = plVar14;
    local_70 = '\0';
    cVar4 = FUN_00d23d70();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    uVar15 = (uint64_t)uVar6;
  }
  else {
    FUN_0173c130();
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    plVar14 = local_78;
    cVar3 = (char)uVar6;
    uVar13 = (undefined7)((uint64_t)unaff_R15 >> 8);
    if (local_78 == plVar11) {
      plVar14 = plVar11;
      if ((cVar3 == '\0') && (local_78 != (int64_t *)0x0)) {
        if (local_70 != '\0') goto LAB_01247be7;
        uVar15 = CONCAT71(uVar13,1);
        FUN_00d50b00();
      }
      else {
        uVar15 = (uint64_t)uVar6;
      }
LAB_01247d1a:
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar15 = CONCAT71(uVar13,1);
        if ((cVar3 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01247d1a;
      }
      if ((cVar3 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01247be7:
      local_70 = '\0';
      uVar15 = CONCAT71(uVar13,1);
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = plVar14;
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar11 == (int64_t *)0x0) {
    FUN_00d99300();
    plVar14 = local_78;
    cVar3 = local_98;
    plVar11 = local_a0;
    if (local_a0 == local_78) {
      if ((local_98 != '\0') || (local_78 == (int64_t *)0x0)) goto LAB_01247dfb;
      if (local_70 == '\0') {
        FUN_00d50b00();
        goto LAB_01247df4;
      }
LAB_01247dbb:
      local_98 = '\x01';
    }
    else {
      if (local_70 != '\0') {
        local_a0 = local_78;
        if ((local_98 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01247dbb;
      }
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_a0 = plVar14;
      if ((cVar3 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01247df4:
      local_98 = '\x01';
LAB_01247dfb:
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar8 = arg1[2];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    FUN_01243e50();
    plVar11 = local_78;
    if (local_78 == (int64_t *)0x0) {
      plVar11 = (int64_t *)0x0;
    }
    else {
      uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
      if (local_70 == '\0') {
        FUN_00d50b00();
      }
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (plVar11 == (int64_t *)0x0) {
      FUN_016ab300();
      FUN_016ac650();
      plVar11 = local_78;
      if (local_70 == '\0') {
        if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        local_70 = '\0';
        local_78 = (int64_t *)0x0;
        local_68 = plVar11;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_60._4_4_ = 0;
        plVar14 = (int64_t *)0x0;
        while( true ) {
          if (local_60._4_4_ != 0) {
            if (local_60._4_4_ < 1) {
              iVar5 = -local_60._4_4_;
            }
            else {
              iVar5 = (int)local_60 - local_60._4_4_;
              local_60 = CONCAT44(local_60._4_4_,iVar5);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar5 = 0;
            }
            local_60 = CONCAT44(iVar5,(int)local_60);
          }
          lVar8 = (int64_t)(int)local_60;
          iVar5 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          if (*(int *)((int64_t)local_68 + 0xc) <= iVar5) break;
          local_78 = *(int64_t **)(local_68[2] + 8 + lVar8 * 8);
          FUN_00d99300();
          plVar1 = local_50;
          if (((local_48 == '\0') && (local_50 != (int64_t *)0x0)) &&
             ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (int64_t *)0x0)))) {
            FUN_00d50b20();
          }
          cVar3 = FUN_00d90eb0();
          uVar12 = CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
          if (cVar3 == '\0') {
            uVar6 = FUN_00d90870();
            uVar12 = (uint64_t)uVar6;
          }
          if ((char)uVar12 == '\0') {
            plVar11 = (int64_t *)(uVar15 & 0xffffffff);
          }
          else {
            local_90 = uVar15;
            local_40 = plVar14;
            FUN_016ab300();
            FUN_016ac710();
            plVar2 = local_50;
            if (local_48 == '\0') {
              if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
                 (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48 = '\0';
            }
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            lVar8 = arg1[2];
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            FUN_01243e50();
            plVar14 = local_50;
            uVar13 = (undefined7)(uVar12 >> 8);
            if (local_50 == local_40) {
              plVar14 = local_40;
              if (((char)local_90 == '\0') && (local_50 != (int64_t *)0x0)) {
                plVar11 = (int64_t *)CONCAT71(uVar13,1);
                if (local_48 == '\0') {
                  FUN_00d50b00();
                  plVar14 = local_40;
                }
              }
              else if ((local_48 == '\0') || (local_50 == (int64_t *)0x0)) {
                plVar11 = (int64_t *)(local_90 & 0xffffffff);
              }
              else {
                FUN_00d50b20();
                plVar11 = (int64_t *)(local_90 & 0xffffffff);
                plVar14 = local_40;
              }
            }
            else if (local_48 == '\0') {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              plVar11 = (int64_t *)CONCAT71(uVar13,1);
              if ((char)local_90 != '\0') {
                if (local_40 == (int64_t *)0x0) goto LAB_012484dd;
                FUN_00d50b20();
              }
            }
            else {
              plVar11 = (int64_t *)CONCAT71(uVar13,1);
              if (((char)local_90 == '\0') || (local_40 == (int64_t *)0x0)) {
LAB_012484dd:
                plVar11 = (int64_t *)CONCAT71(uVar13,1);
              }
              else {
                FUN_00d50b20();
              }
            }
            local_40 = plVar14;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            plVar14 = local_40;
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          uVar15 = (uint64_t)plVar11 & 0xffffffff;
        }
        plVar11 = local_68;
        FUN_00018280();
        pVar9 = (void*)plVar11;
        FUN_00d50b20();
        if (plVar14 != (int64_t *)0x0) goto LAB_01247eb2;
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x012485b0;
    }
  }
LAB_01247eb2:
  local_90 = uVar15;
  FUN_0173b7c0();
  plVar11 = local_78;
  if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (arg1[2] == 0) {
    FUN_0176f970();
    plVar14 = local_78;
    if (local_70 == '\0') {
      if (local_78 == (int64_t *)0x0) {
        plVar14 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    plVar14 = local_50;
    local_70 = 0;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_78 = plVar14;
      local_70 = '\0';
      if (local_48 != '\0') {
        local_70 = '\0';
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_78 = local_50;
      local_48 = '\0';
      local_70 = '\0';
    }
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b720();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b680();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0174e010();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  uVar15 = local_90;
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar14 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)uVar15 != '\0') {
    FUN_00d50b20();
  }
joined_r0x012485b0:
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

