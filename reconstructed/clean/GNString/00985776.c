// Function: FUN_00985776
// Address: 00985776
// Size: 4327 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "Sequence containing the PKStandard is missing"
//   "Public Key PKStandard is missing"
//   "Unsupported PKStandard found in certificate"
//   "Public Key Value is missing"
//   "Main Public Key %d is missing"
//   "virtual void pace::Asn1ParserCert::SetEccPublicKey(uint32_t, uint32_t, const BIG_PublicKeyECC_Struc...
//   "Aux key #%d must be populated before Aux key #%d"
//   "Extensions are missing"
//   "[%d] BIG_BigNumberToBytes error - Setting the X-coordinate in Asn1ParserCert::SetEccPublicKey"
//   "[%d] BIG_BigNumberToBytes error - Setting the Y-coordinate in Asn1ParserCert::SetEccPublicKey"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00985776(uint64_t param_1,uint32_t param_2)

{
  code *pcVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  code *pcVar6;
  code *pcVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  void *pvVar10;
  ulong uVar11;
  uint64_t uVar12;
  char *pcVar13;
  int unaff_ESI;
  uint64_t uVar14;
  int64_t *this_ptr;
  code *pcVar15;
  uint uVar16;
  uint32_t uVar17;
  int local_e4;
  code *local_e0;
  code *local_d8;
  uint32_t local_cc;
  void*local_c8;
  void*puStack_c0;
  uint64_t local_b8;
  int local_ac;
  code *local_a8;
  int local_9c;
  code *pcStack_98;
  code *pcStack_90;
  void*local_88;
  code *local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  int64_t *local_58;
  code *local_50;
  int64_t *local_48;
  int64_t *local_40;
  uint64_t local_38;
  
  local_c8 = (void*)0x0;
  puStack_c0 = (void*)0x0;
  local_b8 = 0;
  local_cc = param_2;
  local_9c = unaff_ESI;
  local_38 = param_1;
  uVar17 = (**(code **)(*this_ptr + 0x40))(0,unaff_ESI);
  uVar11 = (ulong)param_1;
  local_78 = pcStack_98;
  local_50 = pcStack_90;
  if ((unaff_ESI == 0) && (pcStack_98 == 0x0)) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    pcStack_98 = &local_9c;
    pcStack_90 = FUN_009595d8;
    local_88 = &LAB_009977a0;
    FUN_00983230();
    uVar11 = 0x1fc81e1;
    uVar17 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEccPublicKey(uint32_t, uint32_t, const BIG_PublicKeyECC_Struct &)"
                          ,0x330);
    uVar17 = FUN_009c720b(uVar17,uVar4);
  }
  if (local_78 == 0x0) {
    if (local_9c != 1) {
      (**(code **)(*this_ptr + 0x40))(uVar17,local_9c + -1);
      pcVar15 = pcStack_90;
      pcVar7 = pcStack_98;
      uVar17 = 0;
      pcStack_98 = 0x0;
      pcStack_90 = 0x0;
      if (local_50 != 0x0) {
        LOCK();
        pcVar6 = local_50 + 8;
        lVar3 = *(int64_t *)pcVar6;
        *(int64_t *)pcVar6 = *(int64_t *)pcVar6 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*(int64_t *)local_50 + 0x10))();
          uVar17 = std::__shared_weak_count::__release_weak();
        }
      }
      if (pcStack_90 != 0x0) {
        LOCK();
        pcVar6 = pcStack_90 + 8;
        lVar3 = *(int64_t *)pcVar6;
        *(int64_t *)pcVar6 = *(int64_t *)pcVar6 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*(int64_t *)pcStack_90 + 0x10))();
          uVar17 = std::__shared_weak_count::__release_weak();
        }
      }
      if (pcVar7 == 0x0) {
        FUN_00925fd0();
        local_78 = pcVar15;
        uVar4 = FUN_00926010();
        local_e4 = local_9c + -1;
        pcStack_98 = &local_e4;
        pcStack_90 = FUN_009595d8;
        local_88 = &LAB_009977a0;
        FUN_00983230();
        pcStack_98 = &local_9c;
        pcStack_90 = FUN_009595d8;
        local_88 = &LAB_009977a0;
        FUN_00983230();
        uVar11 = 0x1fc81e1;
        uVar17 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEccPublicKey(uint32_t, uint32_t, const BIG_PublicKeyECC_Struct &)"
                              ,0x342);
        uVar17 = FUN_009c720b(uVar17,uVar4);
        local_50 = local_78;
      }
      else {
        local_50 = pcVar15;
      }
    }
    uVar17 = (**(code **)(*this_ptr + 0x20))(uVar17,&g_023cd01f);
    pcVar7 = pcStack_98;
    local_80 = pcStack_90;
    if (pcStack_98 == 0x0) {
      FUN_00925fd0();
      uVar4 = FUN_00926010();
      uVar11 = 0x1fc81e1;
      uVar17 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEccPublicKey(uint32_t, uint32_t, const BIG_PublicKeyECC_Struct &)"
                            ,0x347);
      uVar17 = FUN_009c720b(uVar17,uVar4);
    }
    local_78 = pcVar7;
    (**(code **)(*this_ptr + 0x38))(uVar17,&g_023c8b96);
    local_68 = pcStack_90;
    if (pcStack_98 == 0x0) {
      plVar9 = operator_new(uVar11);
      FUN_0098106a();
      plVar8 = operator_new(uVar11);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = (int64_t)&g_02520f98;
      plVar8[3] = (int64_t)plVar9;
      *(void*)(plVar9 + 1) = 0x30;
      local_58 = plVar8;
      plVar5 = operator_new(uVar11);
      local_40 = plVar8;
      FUN_00981a28();
      local_48 = operator_new(uVar11);
      local_70 = (local_48 + 1);
      local_48[2] = 0;
      local_48[1] = 0;
      uVar11 = 0x2520fe8;
      *local_48 = (int64_t)&g_02520fe8;
      local_48[3] = (int64_t)plVar5;
      *(void*)(plVar5 + 1) = 6;
      (**(code **)(*plVar5 + 0x58))(&g_02520fe8,g_023c8b96);
      plVar8 = local_48;
      LOCK();
      local_48[1] = local_48[1] + 1;
      UNLOCK();
      (**(code **)(*plVar9 + 0x10))();
      if (plVar8 != (int64_t *)0x0) {
        LOCK();
        plVar5 = plVar8 + 1;
        lVar3 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar8 = operator_new(uVar11);
      FUN_0098106a();
      pcVar7 = operator_new(uVar11);
      *(int64_t *)(pcVar7 + 0x10) = 0;
      *(int64_t *)(pcVar7 + 8) = 0;
      *(void**)pcVar7 = &g_02520f98;
      *(int64_t **)(pcVar7 + 0x18) = plVar8;
      if (local_68 != 0x0) {
        LOCK();
        pcVar15 = local_68 + 8;
        lVar3 = *(int64_t *)pcVar15;
        *(int64_t *)pcVar15 = *(int64_t *)pcVar15 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*(int64_t *)local_68 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      *(void*)(plVar8 + 1) = 4;
      LOCK();
      *(int64_t *)(pcVar7 + 8) = *(int64_t *)(pcVar7 + 8) + 1;
      UNLOCK();
      (**(code **)(*plVar9 + 0x10))();
      if (pcVar7 != 0x0) {
        LOCK();
        pcVar15 = pcVar7 + 8;
        lVar3 = *(int64_t *)pcVar15;
        *(int64_t *)pcVar15 = *(int64_t *)pcVar15 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*(int64_t *)pcVar7 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar9 = local_40;
      local_68 = pcVar7;
      local_a8 = operator_new(uVar11);
      FUN_0098106a();
      pcVar6 = operator_new(uVar11);
      *(int64_t *)(pcVar6 + 0x10) = 0;
      *(int64_t *)(pcVar6 + 8) = 0;
      *(void**)pcVar6 = &g_02520f98;
      *(code **)(pcVar6 + 0x18) = local_a8;
      local_a8[8] = (code)0x30;
      LOCK();
      *(int64_t *)(pcVar6 + 8) = *(int64_t *)(pcVar6 + 8) + 1;
      UNLOCK();
      local_60 = pcVar6;
      (**(code **)(*plVar8 + 0x10))();
      pcVar15 = local_80;
      if (pcVar6 != 0x0) {
        LOCK();
        pcVar1 = pcVar6 + 8;
        lVar3 = *(int64_t *)pcVar1;
        *(int64_t *)pcVar1 = *(int64_t *)pcVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*(int64_t *)pcVar6 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
      (**(code **)(*(int64_t *)local_78 + 0x10))();
      if (plVar9 != (int64_t *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar3 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar8 = local_58 + 1;
      LOCK();
      lVar3 = *(int64_t *)local_70;
      *(int64_t *)local_70 = *(int64_t *)local_70 + -1;
      UNLOCK();
      pcVar6 = local_70;
      if (lVar3 == 0) {
        local_78 = pcVar7;
        (**(code **)(*local_48 + 0x10))();
        std::__shared_weak_count::__release_weak();
        pcVar7 = local_78;
      }
      uVar11 = (ulong)pcVar6;
      LOCK();
      lVar3 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    else {
      uVar11 = 0x30;
      (**(code **)(*(int64_t *)pcStack_98 + 0x40))(0x30,1);
      local_a8 = pcStack_98;
      local_60 = pcStack_90;
      pcVar15 = local_80;
      pcVar7 = local_68;
    }
    local_68 = pcVar7;
    local_70 = 0x0;
    local_58 = (int64_t *)0x0;
    local_48 = (int64_t *)0x0;
    local_78 = operator_new(uVar11);
    FUN_0098106a();
    pcVar7 = operator_new(uVar11);
    *(int64_t *)(pcVar7 + 0x10) = 0;
    *(int64_t *)(pcVar7 + 8) = 0;
    *(void**)pcVar7 = &g_02520f98;
    *(code **)(pcVar7 + 0x18) = local_78;
    if (local_50 != 0x0) {
      LOCK();
      pcVar6 = local_50 + 8;
      lVar3 = *(int64_t *)pcVar6;
      *(int64_t *)pcVar6 = *(int64_t *)pcVar6 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*(int64_t *)local_50 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    local_78[8] = (code)0x30;
    local_70 = 0x0;
    local_58 = (int64_t *)0x0;
    local_48 = (int64_t *)0x0;
    local_50 = pcVar7;
    plVar8 = operator_new(uVar11);
    FUN_0098106a();
    plVar9 = operator_new(uVar11);
    uVar11 = 0;
    plVar9[2] = 0;
    plVar9[1] = 0;
    *plVar9 = (int64_t)&g_02520f98;
    plVar9[3] = (int64_t)plVar8;
    *(void*)(plVar8 + 1) = 0x30;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    local_70 = plVar9;
    (**(code **)(*(int64_t *)local_78 + 0x10))();
    if (plVar9 != (int64_t *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar3 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    local_58 = (int64_t *)0x0;
    local_48 = (int64_t *)0x0;
    local_50 = pcVar7;
    pvVar10 = operator_new(uVar11);
    FUN_00981a28();
    plVar9 = operator_new(uVar11);
    uVar11 = 0;
    plVar9[2] = 0;
    plVar9[1] = 0;
    *plVar9 = (int64_t)&g_02520fe8;
    plVar9[3] = (int64_t)pvVar10;
    *(void*)((int64_t)pvVar10 + 8) = 6;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    local_58 = plVar9;
    (**(code **)(*plVar8 + 0x10))();
    if (plVar9 != (int64_t *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar3 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    local_48 = (int64_t *)0x0;
    local_50 = pcVar7;
    pvVar10 = operator_new(uVar11);
    FUN_00981a28();
    plVar9 = operator_new(uVar11);
    uVar11 = 0;
    plVar9[2] = 0;
    plVar9[1] = 0;
    *plVar9 = (int64_t)&g_02520fe8;
    plVar9[3] = (int64_t)pvVar10;
    *(void*)((int64_t)pvVar10 + 8) = 6;
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
    local_48 = plVar9;
    (**(code **)(*plVar8 + 0x10))();
    if (plVar9 != (int64_t *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar3 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    local_50 = pcVar7;
    pvVar10 = operator_new(uVar11);
    FUN_00981a28();
    plVar8 = operator_new(uVar11);
    plVar8[2] = 0;
    plVar8[1] = 0;
    *plVar8 = (int64_t)&g_02520fe8;
    plVar8[3] = (int64_t)pvVar10;
    *(void*)((int64_t)pvVar10 + 8) = 3;
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
    (**(code **)(*(int64_t *)local_78 + 0x10))();
    if (plVar8 != (int64_t *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar3 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    pcVar6 = local_70;
    plVar9 = local_48;
    plVar5 = local_58;
    if (pcVar15 != 0x0) {
      LOCK();
      pcVar1 = pcVar15 + 8;
      lVar3 = *(int64_t *)pcVar1;
      *(int64_t *)pcVar1 = *(int64_t *)pcVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*(int64_t *)pcVar15 + 0x10))();
        std::__shared_weak_count::__release_weak();
        pcVar6 = local_70;
        plVar9 = local_48;
        plVar5 = local_58;
      }
    }
  }
  else {
    local_68 = 0x0;
    local_a8 = 0x0;
    local_60 = 0x0;
    plVar8 = (int64_t *)0x0;
    pcVar6 = (int64_t *)0x0;
    plVar9 = (int64_t *)0x0;
    plVar5 = (int64_t *)0x0;
    pcVar7 = local_50;
  }
  local_50 = pcVar7;
  local_80 = plVar8;
  (**(code **)(*(int64_t *)local_78 + 0x40))(0x30,1);
  pcVar7 = pcStack_98;
  local_70 = pcStack_90;
  pcStack_98 = 0x0;
  pcStack_90 = 0x0;
  if (pcVar6 != 0x0) {
    LOCK();
    plVar8 = (int64_t *)((int64_t)pcVar6 + 8);
    lVar3 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)pcVar6 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (pcStack_90 != 0x0) {
    LOCK();
    plVar8 = (int64_t *)((int64_t)pcStack_90 + 8);
    lVar3 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)pcStack_90 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (pcVar7 == 0x0) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar17 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEccPublicKey(uint32_t, uint32_t, const BIG_PublicKeyECC_Struct &)"
                          ,0x3b0);
    FUN_009c720b(uVar17,uVar4);
  }
  (**(code **)(*(int64_t *)pcVar7 + 0x40))(6,1);
  pcVar15 = pcStack_98;
  local_58 = (int64_t *)pcStack_90;
  uVar17 = 0;
  pcStack_98 = 0x0;
  pcStack_90 = 0x0;
  if (plVar5 != (int64_t *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar3 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))();
      uVar17 = std::__shared_weak_count::__release_weak();
    }
  }
  if (pcStack_90 != 0x0) {
    LOCK();
    plVar8 = (int64_t *)((int64_t)pcStack_90 + 8);
    lVar3 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)pcStack_90 + 0x10))();
      uVar17 = std::__shared_weak_count::__release_weak();
    }
  }
  if (pcVar15 == 0x0) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar17 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEccPublicKey(uint32_t, uint32_t, const BIG_PublicKeyECC_Struct &)"
                          ,0x3b4);
    uVar17 = FUN_009c720b(uVar17,uVar4);
  }
  plVar8 = local_58;
  local_40 = (int64_t *)local_80;
  local_48 = plVar9;
  (**(code **)(*(int64_t *)pcVar15 + 0x58))(uVar17,g_023c8b50);
  (**(code **)(*(int64_t *)pcVar7 + 0x40))(6,2);
  pcVar15 = local_80;
  pcVar7 = pcStack_98;
  local_48 = (int64_t *)pcStack_90;
  pcStack_98 = 0x0;
  pcStack_90 = 0x0;
  if (plVar9 != (int64_t *)0x0) {
    LOCK();
    plVar5 = plVar9 + 1;
    lVar3 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (pcStack_90 != 0x0) {
    LOCK();
    plVar9 = (int64_t *)((int64_t)pcStack_90 + 8);
    lVar3 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)pcStack_90 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  switch(local_cc) {
  case 0:
    local_40 = (int64_t *)pcVar15;
    uVar16 = 0x14;
    (**(code **)(*(int64_t *)pcVar7 + 0x58))(&switchD_00986349::switchdataD_00986ed4,g_023c8e40);
    break;
  case 1:
    local_40 = (int64_t *)pcVar15;
    uVar16 = 0x18;
    (**(code **)(*(int64_t *)pcVar7 + 0x58))(&switchD_00986349::switchdataD_00986ed4,g_023c8e46);
    break;
  case 2:
    local_40 = (int64_t *)pcVar15;
    uVar16 = 0x1c;
    (**(code **)(*(int64_t *)pcVar7 + 0x58))(&switchD_00986349::switchdataD_00986ed4,g_023c8e4f);
    break;
  case 3:
    local_40 = (int64_t *)pcVar15;
    uVar16 = 0x20;
    (**(code **)(*(int64_t *)pcVar7 + 0x58))(&switchD_00986349::switchdataD_00986ed4,g_023c8e55);
    break;
  default:
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar17 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEccPublicKey(uint32_t, uint32_t, const BIG_PublicKeyECC_Struct &)"
                          ,0x3dc);
    uVar16 = 0;
    FUN_009c720b(uVar17,uVar4);
  }
  (**(code **)(*(int64_t *)local_78 + 0x40))(3,1);
  pcVar7 = pcStack_98;
  local_40 = (int64_t *)pcStack_90;
  pcStack_98 = 0x0;
  pcStack_90 = 0x0;
  if (local_80 != 0x0) {
    LOCK();
    plVar9 = (int64_t *)((int64_t)local_80 + 8);
    lVar3 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)local_80 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (pcStack_90 != 0x0) {
    LOCK();
    pcVar15 = pcStack_90 + 8;
    lVar3 = *(int64_t *)pcVar15;
    *(int64_t *)pcVar15 = *(int64_t *)pcVar15 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)pcStack_90 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (pcVar7 == 0x0) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar17 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEccPublicKey(uint32_t, uint32_t, const BIG_PublicKeyECC_Struct &)"
                          ,0x3e2);
    FUN_009c720b(uVar17,uVar4);
  }
  uVar14 = (uint64_t)(uVar16 * 2 | 2);
  pcStack_98 = ((uint64_t)pcStack_98 & 0xffffffffffffff00);
  uVar12 = (int64_t)puStack_c0 - (int64_t)local_c8;
  if (uVar12 < uVar14) {
    FUN_009542b4(uVar12,&pcStack_98);
  }
  else if (uVar14 < uVar12) {
    puStack_c0 = local_c8 + uVar14;
  }
  *local_c8 = 0;
  local_c8[1] = 4;
  local_ac = FUN_0096db7a(0,local_c8 + 2);
  if (local_ac != 0) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    pcStack_98 = &local_ac;
    pcStack_90 = FUN_009595d8;
    local_88 = &LAB_009977a0;
    FUN_00983230();
    uVar17 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEccPublicKey(uint32_t, uint32_t, const BIG_PublicKeyECC_Struct &)"
                          ,0x3f0);
    FUN_009c720b(uVar17,uVar4);
  }
  pcVar13 = (char *)0x0;
  local_ac = FUN_0096db7a(0,local_c8 + (uVar16 | 2));
  if (local_ac != 0) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    pcStack_98 = &local_ac;
    pcStack_90 = FUN_009595d8;
    local_88 = &LAB_009977a0;
    FUN_00983230();
    pcVar13 = 
    "virtual void pace::Asn1ParserCert::SetEccPublicKey(uint32_t, uint32_t, const BIG_PublicKeyECC_Struct &)"
    ;
    uVar17 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetEccPublicKey(uint32_t, uint32_t, const BIG_PublicKeyECC_Struct &)"
                          ,0x3f9);
    FUN_009c720b(uVar17,uVar4);
  }
  (**(code **)(*(int64_t *)pcVar7 + 0x48))();
  plVar5 = local_40;
  plVar9 = local_48;
  if (local_a8 != 0x0) {
    local_e0 = local_78;
    local_d8 = local_50;
    if (local_50 != 0x0) {
      LOCK();
      *(int64_t *)(local_50 + 8) = *(int64_t *)(local_50 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*(int64_t *)local_a8 + 0x10))();
    if (local_d8 != 0x0) {
      LOCK();
      pcVar7 = local_d8 + 8;
      lVar3 = *(int64_t *)pcVar7;
      *(int64_t *)pcVar7 = *(int64_t *)pcVar7 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*(int64_t *)local_d8 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (plVar5 != (int64_t *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar9 != (int64_t *)0x0) {
    LOCK();
    plVar5 = plVar9 + 1;
    lVar3 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar8 != (int64_t *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar3 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_70 != 0x0) {
    LOCK();
    pcVar7 = local_70 + 8;
    lVar3 = *(int64_t *)pcVar7;
    *(int64_t *)pcVar7 = *(int64_t *)pcVar7 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)local_70 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_50 != 0x0) {
    LOCK();
    pcVar7 = local_50 + 8;
    lVar3 = *(int64_t *)pcVar7;
    *(int64_t *)pcVar7 = *(int64_t *)pcVar7 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)local_50 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_60 != 0x0) {
    LOCK();
    pcVar7 = local_60 + 8;
    lVar3 = *(int64_t *)pcVar7;
    *(int64_t *)pcVar7 = *(int64_t *)pcVar7 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)local_60 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != 0x0) {
    LOCK();
    pcVar7 = local_68 + 8;
    lVar3 = *(int64_t *)pcVar7;
    *(int64_t *)pcVar7 = *(int64_t *)pcVar7 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*(int64_t *)local_68 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_c8 != (void*)0x0) {
    puStack_c0 = local_c8;
    operator_delete(pcVar13);
  }
  return;
}

