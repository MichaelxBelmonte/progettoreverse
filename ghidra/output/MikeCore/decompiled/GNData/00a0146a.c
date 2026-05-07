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


/* WARNING: Removing unreachable block (ram,0x00a01554) */
/* WARNING: Removing unreachable block (ram,0x00a01544) */
/* WARNING: Removing unreachable block (ram,0x00a0154d) */
/* WARNING: Removing unreachable block (ram,0x00a0155e) */
/* WARNING: Removing unreachable block (ram,0x00a01568) */

undefined8 FUN_00a0146a(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  char *unaff_RSI;
  uint uVar16;
  longlong unaff_RDI;
  size_t sVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qa;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_98 [8];
  ulonglong uStack_90;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  ulonglong local_78 [5];
  uint local_4c;
  ulonglong *local_48;
  code *local_40;
  undefined1 *local_38;
  
  if (*(int *)(unaff_RDI + 0x68) == 1) {
    *(longlong *)(unaff_RDI + 0x70) = *(longlong *)(unaff_RDI + 0x70) + 1;
  }
  else if (*(int *)(unaff_RDI + 0x68) == 0) {
    plVar4 = *(longlong **)(unaff_RDI + 0x88);
    *(undefined8 *)(unaff_RDI + 0x80) = 0;
    *(undefined8 *)(unaff_RDI + 0x88) = 0;
    if (plVar4 != (longlong *)0x0) {
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
    local_88 = (undefined1  [8])0x0;
    uStack_80 = 0;
    local_98 = (undefined1  [8])0x0;
    uStack_90 = 0;
    FUN_00a01b42();
    local_98 = (undefined1  [8])0x0;
    uStack_90 = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    local_88 = (undefined1  [8])0x0;
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
      local_48 = (ulonglong *)&DAT_023d0400;
      local_40 = FUN_009595d8;
      local_38 = &LAB_009977a0;
      FUN_00983230();
      local_48 = (ulonglong *)(local_88 + 4);
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
    *puVar8 = &DAT_0252c2f0;
    uVar10 = 1;
    sVar17 = 0;
    FUN_00a14fd8(1,uStack_90 & 0xffffffff);
    puVar9 = operator_new(uVar10);
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = &DAT_0251fb50;
    puVar9[3] = puVar8;
    *(undefined8 **)(unaff_RDI + 0x50) = puVar8;
    plVar4 = *(longlong **)(unaff_RDI + 0x58);
    *(undefined8 **)(unaff_RDI + 0x58) = puVar9;
    if (plVar4 != (longlong *)0x0) {
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
    plVar4 = *(longlong **)(unaff_RDI + 0x50);
    puVar9 = (undefined8 *)plVar4[3];
    puVar8 = puVar9 + 8;
    if ((undefined8 *)plVar4[4] < puVar8) {
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
      plVar4[3] = (longlong)puVar8;
    }
    iVar14 = (int)uStack_90 + -0x40;
    uVar7 = FUN_00ad9ff0();
    FUN_00a01b42(uVar7,iVar14);
    FUN_00ada2d0();
    uVar6 = 0x80000000;
    pcVar12 = (char *)((longlong)&MACH_HEADER.magic + 1);
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
      pcVar12 = (char *)(ulonglong)(uVar11 * 2);
    } while (uVar11 * 2 < uVar6);
    local_4c = FUN_0094f87e(pcVar12,uStack_90 & 0xffffffff);
    local_4c = ~local_4c;
    if (local_98._4_4_ != local_4c) {
      FUN_00925fd0();
      uVar7 = FUN_00926010();
      local_48 = (ulonglong *)&local_4c;
      local_40 = FUN_009595d8;
      local_38 = &LAB_009977a0;
      FUN_00983230();
      local_48 = (ulonglong *)(local_98 + 4);
      local_40 = FUN_009595d8;
      local_38 = &LAB_009977a0;
      FUN_00983230();
      pcVar12 = "virtual uint32_t pace::VerifiedBinaryProtocol::readStructBegin_virt(std::string &)"
      ;
      uVar18 = FUN_00928ab0("virtual uint32_t pace::VerifiedBinaryProtocol::readStructBegin_virt(std::string &)"
                            ,0x201);
      FUN_009cbbdb(uVar18,uVar7);
    }
    if ((*(int *)(unaff_RDI + 0x60) != 0) && ((int)local_78[0] != *(int *)(unaff_RDI + 0x60))) {
      FUN_00925fd0();
      uVar7 = FUN_00926010();
      local_40 = FUN_009595d8;
      local_38 = &LAB_009977a0;
      local_48 = (ulonglong *)(unaff_RDI + 0x60);
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
      plVar4 = *(longlong **)(unaff_RDI + 0x88);
      *(undefined4 *)(unaff_RDI + 0x80) = local_c8;
      *(undefined4 *)(unaff_RDI + 0x84) = uStack_c4;
      *(undefined4 *)(unaff_RDI + 0x88) = uStack_c0;
      *(undefined4 *)(unaff_RDI + 0x8c) = uStack_bc;
      if (plVar4 != (longlong *)0x0) {
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
      if (((ulonglong)local_48 & 1) != 0) {
        operator_delete(pcVar12);
      }
    }
    plVar4 = *(longlong **)(unaff_RDI + 0x58);
    if (plVar4 == (longlong *)0x0) {
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
    plVar4 = *(longlong **)(unaff_RDI + 0x50);
    uVar2 = plVar4[1] + (longlong)pvVar5;
    if ((ulonglong)plVar4[2] < uVar2) {
      (**(code **)(*plVar4 + 0x78))();
    }
    else {
      _memcpy(pcVar12,pvVar5,sVar17);
      plVar4[1] = uVar2;
    }
    operator_delete__(pcVar12);
    *(longlong *)(unaff_RDI + 0x70) = *(longlong *)(unaff_RDI + 0x70) + 1;
    *(undefined4 *)(unaff_RDI + 0x68) = 1;
  }
  std::string::assign(unaff_RSI);
  return 0;
}


