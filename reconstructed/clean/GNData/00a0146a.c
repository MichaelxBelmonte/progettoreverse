// Function: FUN_00a0146a
// Address: 00a0146a
// Size: 1675 bytes
// Class: GNData
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/VerifiedBinary...
//   "The thrift header sanity check failed."
//   "virtual uint32_t pace::VerifiedBinaryProtocol::readStructBegin_virt(std::string &)"
//   "The current version = %ld; minimum version found in the header = %ld"
//   "Checksum failure. The computed checksum = %ld; the header checksum = %ld"
//   "The expected thrift data ID = 0x%X; the header data ID = 0x%X"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


uint64_t FUN_00a0146a(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void *pvVar5;
  uint uVar6;
  uint64_t uVar7;
  void*puVar8;
  void*puVar9;
  ulong uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  char *arg1;
  uint uVar16;
  int64_t this_ptr;
  size_t sVar17;
  uint64_t uVar18;
  uint64_t extraout_XMM0_Qa;
  uint32_t local_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint64_t local_78 [5];
  uint local_4c;
  uint64_t *local_48;
  code *local_40;
  void*local_38;
  
  if (*(int *)(this_ptr + 0x68) == 1) {
    *(int64_t *)(this_ptr + 0x70) = *(int64_t *)(this_ptr + 0x70) + 1;
  }
  else if (*(int *)(this_ptr + 0x68) == 0) {
    plVar4 = *(int64_t **)(this_ptr + 0x88);
    *(void*)(this_ptr + 0x80) = 0;
    *(void*)(this_ptr + 0x88) = 0;
    if (plVar4 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    local_88 = (uint8_t  [8])0x0;
    uStack_80 = 0;
    local_98 = (uint8_t  [8])0x0;
    uStack_90 = 0;
    FUN_00a01b42();
    local_98 = (uint8_t  [8])0x0;
    uStack_90 = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    local_88 = (uint8_t  [8])0x0;
    uStack_80 = 0;
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    uVar10 = 0x1ff3d5d;
    uVar18 = FUN_00928ab0("virtual uint32_t pace::VerifiedBinaryProtocol::readStructBegin_virt(std::string &)"
                          ,0x1db);
    FUN_009cbbdb(uVar18,uVar7);
    if (1 < (uint)local_88._4_4_) {
      FUN_00925fd0();
      uVar7 = FUN_00926010();
      local_48 = (uint64_t *)&g_023d0400;
      local_40 = FUN_009595d8;
      local_38 = &LAB_009977a0;
      FUN_00983230();
      local_48 = (uint64_t *)(local_88 + 4);
      local_40 = FUN_009595d8;
      local_38 = &LAB_009977a0;
      FUN_00983230();
      uVar10 = 0x1ff3d5d;
      uVar18 = FUN_00928ab0("virtual uint32_t pace::VerifiedBinaryProtocol::readStructBegin_virt(std::string &)"
                            ,0x1e0);
      FUN_009cbbdb(uVar18,uVar7);
    }
    puVar8 = operator_new(uVar10);
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    *puVar8 = &g_0252c2f0;
    uVar10 = 1;
    sVar17 = 0;
    FUN_00a14fd8(1,uStack_90 & 0xffffffff);
    puVar9 = operator_new(uVar10);
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = &g_0251fb50;
    puVar9[3] = puVar8;
    *(void**)(this_ptr + 0x50) = puVar8;
    plVar4 = *(int64_t **)(this_ptr + 0x58);
    *(void**)(this_ptr + 0x58) = puVar9;
    if (plVar4 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar4 = *(int64_t **)(this_ptr + 0x50);
    puVar9 = (void*)plVar4[3];
    puVar8 = puVar9 + 8;
    if ((void*)plVar4[4] < puVar8) {
      (**(code **)(*plVar4 + 0x80))(puVar8,0x40);
    }
    else {
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      plVar4[3] = (int64_t)puVar8;
    }
    iVar14 = (int)uStack_90 + -0x40;
    uVar7 = FUN_00ad9ff0();
    FUN_00a01b42(uVar7,iVar14);
    FUN_00ada2d0();
    uVar6 = 0x80000000;
    pcVar12 = (char *)((int64_t)&MACH_HEADER.magic + 1);
    uVar16 = 0xffffffff;
    do {
      uVar11 = (uint)pcVar12;
      uVar13 = uVar6 | uVar11;
      uVar15 = uVar13;
      if ((uVar13 & uVar16) != uVar11) {
        uVar15 = 0;
      }
      if ((uVar13 & uVar16) == uVar6) {
        uVar15 = uVar13;
      }
      uVar16 = uVar16 ^ uVar15;
      uVar6 = uVar6 >> 1;
      pcVar12 = (char *)(uint64_t)(uVar11 * 2);
    } while (uVar11 * 2 < uVar6);
    local_4c = FUN_0094f87e(pcVar12,uStack_90 & 0xffffffff);
    local_4c = ~local_4c;
    if (local_98._4_4_ != local_4c) {
      FUN_00925fd0();
      uVar7 = FUN_00926010();
      local_48 = (uint64_t *)&local_4c;
      local_40 = FUN_009595d8;
      local_38 = &LAB_009977a0;
      FUN_00983230();
      local_48 = (uint64_t *)(local_98 + 4);
      local_40 = FUN_009595d8;
      local_38 = &LAB_009977a0;
      FUN_00983230();
      pcVar12 = "virtual uint32_t pace::VerifiedBinaryProtocol::readStructBegin_virt(std::string &)"
      ;
      uVar18 = FUN_00928ab0("virtual uint32_t pace::VerifiedBinaryProtocol::readStructBegin_virt(std::string &)"
                            ,0x201);
      FUN_009cbbdb(uVar18,uVar7);
    }
    if ((*(int *)(this_ptr + 0x60) != 0) && ((int)local_78[0] != *(int *)(this_ptr + 0x60))) {
      FUN_00925fd0();
      uVar7 = FUN_00926010();
      local_40 = FUN_009595d8;
      local_38 = &LAB_009977a0;
      local_48 = (uint64_t *)(this_ptr + 0x60);
      FUN_00983230();
      local_48 = local_78;
      local_40 = FUN_009595d8;
      local_38 = &LAB_009977a0;
      FUN_00983230();
      pcVar12 = "virtual uint32_t pace::VerifiedBinaryProtocol::readStructBegin_virt(std::string &)"
      ;
      uVar18 = FUN_00928ab0("virtual uint32_t pace::VerifiedBinaryProtocol::readStructBegin_virt(std::string &)"
                            ,0x209);
      FUN_009cbbdb(uVar18,uVar7);
    }
    if (uStack_80._4_4_ != 0) {
      FUN_00a01d40();
      puVar8 = operator_new((ulong)pcVar12);
      uVar7 = FUN_009f3f64();
      *puVar8 = uVar7;
      FUN_00a01fc2(extraout_XMM0_Qa,0);
      plVar4 = *(int64_t **)(this_ptr + 0x88);
      *(void*)(this_ptr + 0x80) = local_c8;
      *(void*)(this_ptr + 0x84) = uStack_c4;
      *(void*)(this_ptr + 0x88) = uStack_c0;
      *(void*)(this_ptr + 0x8c) = uStack_bc;
      if (plVar4 != (int64_t *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      if (((uint64_t)local_48 & 1) != 0) {
        operator_delete(pcVar12);
      }
    }
    plVar4 = *(int64_t **)(this_ptr + 0x58);
    if (plVar4 == (int64_t *)0x0) {
      FUN_00a01188();
    }
    else {
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
      FUN_00a01188();
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    pvVar5 = (void *)(local_78[0] >> 0x20);
    operator_new__((ulong)pcVar12);
    plVar4 = *(int64_t **)(this_ptr + 0x50);
    uVar2 = plVar4[1] + (int64_t)pvVar5;
    if ((uint64_t)plVar4[2] < uVar2) {
      (**(code **)(*plVar4 + 0x78))();
    }
    else {
      _memcpy(pcVar12,pvVar5,sVar17);
      plVar4[1] = uVar2;
    }
    operator_delete__(pcVar12);
    *(int64_t *)(this_ptr + 0x70) = *(int64_t *)(this_ptr + 0x70) + 1;
    *(void*)(this_ptr + 0x68) = 1;
  }
  std::string::assign(arg1);
  return 0;
}

