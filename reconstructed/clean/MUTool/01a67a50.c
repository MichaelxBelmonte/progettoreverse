// Function: FUN_01a67a50
// Address: 01a67a50
// Size: 2277 bytes
// Class: MUTool

void* FUN_01a67a50(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int iVar4;
  int64_t *plVar5;
  char cVar6;
  void *pvVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  undefined7 uVar10;
  void* pVar11;
  uint64_t *puVar12;
  void*puVar13;
  int64_t *plVar14;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar15;
  uint64_t local_e0;
  int64_t *local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  uint64_t local_a0;
  int64_t *local_98;
  int64_t *local_90;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  uint32_t local_48;
  uint64_t local_40;
  char local_38 [8];
  
  FUN_01a66e80();
  plVar15 = local_78;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012521f0(param_2,0,&local_a0,&local_98);
  plVar5 = local_58;
  puVar12 = &local_50;
  local_68._0_1_ = (char)local_50;
  puVar8 = &local_68;
  if ((char)local_50 != '\0') {
    puVar8 = puVar12;
  }
  *(void*)puVar8 = 0;
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar11 = (void*)puVar12;
  if (((char)local_68 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (plVar15 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  local_58 = param_2;
  FUN_00e7b970();
  local_d0 = local_58;
  local_58 = local_98;
  FUN_00e7b970();
  local_c8 = local_58;
  local_58 = (int64_t *)((uint64_t)local_58 & 0xffffffff00000000);
  if (local_d0._4_4_ != 0) {
    cVar6 = FUN_00e7c650();
    if (cVar6 != '\0') {
      iVar4 = local_c8._4_4_;
      goto joined_r0x01a67bdd;
    }
LAB_01a67c5f:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_01a68317;
  }
  iVar4 = (int)((uint64_t)local_c8 >> 0x20);
joined_r0x01a67bdd:
  if (iVar4 != 0) {
    local_78 = (int64_t *)((uint64_t)local_78 & 0xffffffff00000000);
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01a67c5f;
  }
  local_70 = '\0';
  local_78 = (int64_t *)0x0;
  local_e0 = local_a0;
  local_d8 = local_98;
  FUN_01a66e80();
  plVar15 = local_58;
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar13 = &local_e0;
  uVar9 = FUN_01253c10(puVar13,&local_78,&local_d8,0);
  pVar11 = (void*)puVar13;
  if (((char)local_50 != '\0') && (plVar15 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (local_78 == (int64_t *)0x0) {
    uVar9 = FUN_00d51d20();
    plVar14 = local_58;
    cVar6 = local_70;
    plVar15 = local_78;
    if (local_78 == local_58) {
      if ((local_70 != '\0') || (local_58 == (int64_t *)0x0)) goto LAB_01a67d35;
      if ((char)local_50 == '\0') {
        uVar9 = FUN_00d50b00();
        goto LAB_01a67d31;
      }
LAB_01a67cfe:
      local_70 = '\x01';
    }
    else {
      if ((char)local_50 != '\0') {
        local_78 = local_58;
        if ((local_70 != '\0') && (plVar15 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        goto LAB_01a67cfe;
      }
      if (local_58 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_78 = plVar14;
      if ((cVar6 != '\0') && (plVar15 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_01a67d31:
      local_70 = '\x01';
LAB_01a67d35:
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (local_78 != (int64_t *)0x0) goto LAB_01a67d56;
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
LAB_01a67d56:
    if ((char)arg1[0x36] == '\0') {
      local_40 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      FUN_00d50b00();
      plVar15 = plVar5;
    }
    else {
      FUN_01715620();
      pVar11 = 2;
      local_50 = 0x400000002;
      local_58 = (int64_t *)&g_02636b10;
      local_48 = 7;
      FUN_017163f0(0x400000002,&local_58);
      plVar15 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_68);
      if ((((local_60 == '\0') && (plVar15 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_60 != '\0')) && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
        FUN_00d50b20();
      }
      local_90 = plVar15;
      FUN_00d51d20();
      plVar15 = local_58;
      if (((char)local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01715d40();
      local_c0 = plVar15;
      local_b8 = '\0';
      cVar6 = (**(code **)(*plVar5 + 0x50))();
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar14 = local_90;
      if (cVar6 == '\0') {
        local_b0 = local_90;
        local_a8 = '\0';
        uVar9 = (**(code **)(*plVar5 + 0x50))();
        cVar6 = (char)uVar9;
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        plVar14 = local_90;
        uVar10 = (undefined7)((uint64_t)uVar9 >> 8);
        if (cVar6 == '\0') {
          if (local_90 == (int64_t *)0x0) {
            local_40 = 0;
            plVar1 = (int64_t *)0x0;
          }
          else {
            local_40 = CONCAT71(uVar10,1);
            FUN_00d50b00();
            plVar1 = plVar14;
          }
          goto joined_r0x01a682ad;
        }
        if (plVar15 != (int64_t *)0x0) {
          local_40 = CONCAT71(uVar10,1);
          FUN_00d50b00();
          goto LAB_01a67fa1;
        }
        plVar15 = (int64_t *)0x0;
        local_40 = 0;
      }
      else {
        FUN_01715620();
        pVar11 = 2;
        local_50 = 0x300000002;
        local_58 = (int64_t *)&g_02636b10;
        local_48 = 6;
        FUN_017163f0(0x300000002,&local_58);
        plVar1 = (int64_t *)CONCAT71(local_68._1_7_,(char)local_68);
        if (plVar1 == (int64_t *)0x0) {
          local_40 = 0;
        }
        else {
          local_40 = CONCAT71(local_68._1_7_,1);
          if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
             (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
            FUN_00d50b20();
          }
        }
joined_r0x01a682ad:
        bVar3 = plVar15 != (int64_t *)0x0;
        plVar15 = plVar1;
        if (bVar3) {
LAB_01a67fa1:
          FUN_00d50b20();
        }
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*arg1 + 0xa48))();
    FUN_01a66e80();
    lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = local_50 & 0xffffffffffffff00;
    plVar14 = param_2;
    local_58 = plVar5;
    FUN_012502a0(param_2,local_a0,(char)arg1[0x36]);
    pVar11 = (void*)plVar14;
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    FUN_01a66e80();
    lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = local_50 & 0xffffffffffffff00;
    local_58 = plVar15;
    FUN_012502a0(local_98,param_2,(char)arg1[0x36]);
    pVar11 = (void*)local_98;
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0xa50))();
    if ((char)arg1[0x40] == '\0') {
      *(void*)(this_ptr + 1) = 0;
      if (((char)local_40 == '\0') && (plVar15 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      *this_ptr = plVar15;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_01a68710();
      FUN_01a68710();
      FUN_01a66e80();
      lVar2 = CONCAT71(local_68._1_7_,(char)local_68);
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012521f0(param_2,0,0,0);
      plVar5 = local_58;
      puVar12 = &local_50;
      if ((char)local_50 == '\0') {
        puVar12 = (uint64_t *)local_38;
      }
      local_38[0] = (char)local_50;
      *(void*)puVar12 = 0;
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar15 == plVar5) {
        plVar14 = plVar15;
        if (((char)local_40 == '\0') && (plVar15 != (int64_t *)0x0)) {
          cVar6 = '\x01';
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        else {
          cVar6 = (char)local_40;
          if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b20();
            cVar6 = (char)local_40;
          }
        }
      }
      else {
        plVar14 = plVar5;
        if (local_38[0] == '\0') {
          if (plVar5 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          cVar6 = '\x01';
          if (((char)local_40 != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          cVar6 = '\x01';
          if (((char)local_40 != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_60 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if ((cVar6 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a68317:
  FUN_00d50b20();
  return this_ptr;
}

