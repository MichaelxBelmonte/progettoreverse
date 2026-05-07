// Function: FUN_009876e2
// Address: 009876e2
// Size: 1360 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "ILokExtensionPrivileges extension is missing"
//   "virtual void pace::Asn1ParserCert::GetILokExtensionPrivileges(CERT_ExtensionPrivilegesStruct &, std...
//   "ILokExtensionPrivileges extension integer is missing"
//   "ILokExtensionPrivileges extension required integer data is missing"
//   "ILokExtensionPrivileges have a bad cert level value"
//   "ILokExtensionPrivileges number of Participant IDs exceeds the maximum"
//   "ILokExtensionPrivileges number of Descendant Limits exceeds the maximum"
//   "ILokExtensionPrivileges missing ParticipantID and/or Descendant Limits data"
//   "Missing some additional ParticipantID data"


/* WARNING: Removing unreachable block (ram,0x00987c1a) */

void FUN_009876e2(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  char *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar10;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  
  uVar9 = 0;
  uVar10 = 0;
  if (param_2 != (longlong *)0x0) {
    uVar9 = FUN_00992e70();
    param_2[2] = 0;
    *param_2 = (longlong)(param_2 + 1);
    param_2[1] = 0;
  }
  (**(code **)(*unaff_RDI + 0x38))(uVar9,&DAT_023c8b78,param_3,param_4,uVar10);
  plVar2 = plStack_40;
  plVar3 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_38 = (longlong *)FUN_00925fd0();
    uVar10 = FUN_00926010();
    uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetILokExtensionPrivileges(CERT_ExtensionPrivilegesStruct &, std::set<uint32_t> *)"
                         ,0x4a9);
    FUN_009c720b(uVar9,uVar10);
  }
  (**(code **)(*plVar3 + 0x40))(2,1);
  plVar3 = local_48;
  local_38 = plStack_40;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_40 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetILokExtensionPrivileges(CERT_ExtensionPrivilegesStruct &, std::set<uint32_t> *)"
                         ,0x4ad);
    FUN_009c720b(uVar9,uVar10);
  }
  (**(code **)(*plVar3 + 0x30))();
  FUN_00925fd0();
  uVar10 = FUN_00926010();
  uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetILokExtensionPrivileges(CERT_ExtensionPrivilegesStruct &, std::set<uint32_t> *)"
                       ,0x4b2);
  FUN_009c720b(uVar9,uVar10);
  unaff_RSI[0x78] = '\0';
  unaff_RSI[0x79] = '\0';
  unaff_RSI[0x7a] = '\0';
  unaff_RSI[0x7b] = '\0';
  unaff_RSI[0x7c] = '\0';
  unaff_RSI[0x7d] = '\0';
  unaff_RSI[0x7e] = '\0';
  unaff_RSI[0x7f] = '\0';
  unaff_RSI[0x70] = '\0';
  unaff_RSI[0x71] = '\0';
  unaff_RSI[0x72] = '\0';
  unaff_RSI[0x73] = '\0';
  unaff_RSI[0x74] = '\0';
  unaff_RSI[0x75] = '\0';
  unaff_RSI[0x76] = '\0';
  unaff_RSI[0x77] = '\0';
  unaff_RSI[0x68] = '\0';
  unaff_RSI[0x69] = '\0';
  unaff_RSI[0x6a] = '\0';
  unaff_RSI[0x6b] = '\0';
  unaff_RSI[0x6c] = '\0';
  unaff_RSI[0x6d] = '\0';
  unaff_RSI[0x6e] = '\0';
  unaff_RSI[0x6f] = '\0';
  unaff_RSI[0x60] = '\0';
  unaff_RSI[0x61] = '\0';
  unaff_RSI[0x62] = '\0';
  unaff_RSI[99] = '\0';
  unaff_RSI[100] = '\0';
  unaff_RSI[0x65] = '\0';
  unaff_RSI[0x66] = '\0';
  unaff_RSI[0x67] = '\0';
  unaff_RSI[0x58] = '\0';
  unaff_RSI[0x59] = '\0';
  unaff_RSI[0x5a] = '\0';
  unaff_RSI[0x5b] = '\0';
  unaff_RSI[0x5c] = '\0';
  unaff_RSI[0x5d] = '\0';
  unaff_RSI[0x5e] = '\0';
  unaff_RSI[0x5f] = '\0';
  unaff_RSI[0x50] = '\0';
  unaff_RSI[0x51] = '\0';
  unaff_RSI[0x52] = '\0';
  unaff_RSI[0x53] = '\0';
  unaff_RSI[0x54] = '\0';
  unaff_RSI[0x55] = '\0';
  unaff_RSI[0x56] = '\0';
  unaff_RSI[0x57] = '\0';
  unaff_RSI[0x48] = '\0';
  unaff_RSI[0x49] = '\0';
  unaff_RSI[0x4a] = '\0';
  unaff_RSI[0x4b] = '\0';
  unaff_RSI[0x4c] = '\0';
  unaff_RSI[0x4d] = '\0';
  unaff_RSI[0x4e] = '\0';
  unaff_RSI[0x4f] = '\0';
  unaff_RSI[0x40] = '\0';
  unaff_RSI[0x41] = '\0';
  unaff_RSI[0x42] = '\0';
  unaff_RSI[0x43] = '\0';
  unaff_RSI[0x44] = '\0';
  unaff_RSI[0x45] = '\0';
  unaff_RSI[0x46] = '\0';
  unaff_RSI[0x47] = '\0';
  unaff_RSI[0x38] = '\0';
  unaff_RSI[0x39] = '\0';
  unaff_RSI[0x3a] = '\0';
  unaff_RSI[0x3b] = '\0';
  unaff_RSI[0x3c] = '\0';
  unaff_RSI[0x3d] = '\0';
  unaff_RSI[0x3e] = '\0';
  unaff_RSI[0x3f] = '\0';
  unaff_RSI[0x30] = '\0';
  unaff_RSI[0x31] = '\0';
  unaff_RSI[0x32] = '\0';
  unaff_RSI[0x33] = '\0';
  unaff_RSI[0x34] = '\0';
  unaff_RSI[0x35] = '\0';
  unaff_RSI[0x36] = '\0';
  unaff_RSI[0x37] = '\0';
  unaff_RSI[0x28] = '\0';
  unaff_RSI[0x29] = '\0';
  unaff_RSI[0x2a] = '\0';
  unaff_RSI[0x2b] = '\0';
  unaff_RSI[0x2c] = '\0';
  unaff_RSI[0x2d] = '\0';
  unaff_RSI[0x2e] = '\0';
  unaff_RSI[0x2f] = '\0';
  unaff_RSI[0x20] = '\0';
  unaff_RSI[0x21] = '\0';
  unaff_RSI[0x22] = '\0';
  unaff_RSI[0x23] = '\0';
  unaff_RSI[0x24] = '\0';
  unaff_RSI[0x25] = '\0';
  unaff_RSI[0x26] = '\0';
  unaff_RSI[0x27] = '\0';
  unaff_RSI[0x18] = '\0';
  unaff_RSI[0x19] = '\0';
  unaff_RSI[0x1a] = '\0';
  unaff_RSI[0x1b] = '\0';
  unaff_RSI[0x1c] = '\0';
  unaff_RSI[0x1d] = '\0';
  unaff_RSI[0x1e] = '\0';
  unaff_RSI[0x1f] = '\0';
  unaff_RSI[0x10] = '\0';
  unaff_RSI[0x11] = '\0';
  unaff_RSI[0x12] = '\0';
  unaff_RSI[0x13] = '\0';
  unaff_RSI[0x14] = '\0';
  unaff_RSI[0x15] = '\0';
  unaff_RSI[0x16] = '\0';
  unaff_RSI[0x17] = '\0';
  unaff_RSI[8] = '\0';
  unaff_RSI[9] = '\0';
  unaff_RSI[10] = '\0';
  unaff_RSI[0xb] = '\0';
  unaff_RSI[0xc] = '\0';
  unaff_RSI[0xd] = '\0';
  unaff_RSI[0xe] = '\0';
  unaff_RSI[0xf] = '\0';
  unaff_RSI[0] = '\0';
  unaff_RSI[1] = '\0';
  unaff_RSI[2] = '\0';
  unaff_RSI[3] = '\0';
  unaff_RSI[4] = '\0';
  unaff_RSI[5] = '\0';
  unaff_RSI[6] = '\0';
  unaff_RSI[7] = '\0';
  *unaff_RSI = (char)MACH_HEADER.magic;
  unaff_RSI[1] = MACH_HEADER.magic._1_1_;
  unaff_RSI[2] = MACH_HEADER.magic._2_1_;
  unaff_RSI[3] = MACH_HEADER.magic._3_1_;
  uVar9 = FUN_00982800();
  *(undefined4 *)(unaff_RSI + 4) = uVar9;
  uVar9 = FUN_00982800();
  *(undefined4 *)(unaff_RSI + 8) = uVar9;
  if (*unaff_RSI < '\x01') {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetILokExtensionPrivileges(CERT_ExtensionPrivilegesStruct &, std::set<uint32_t> *)"
                         ,0x4c9);
    FUN_009c720b(uVar9,uVar10);
  }
  bVar4 = unaff_RSI[2];
  if (8 < bVar4) {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetILokExtensionPrivileges(CERT_ExtensionPrivilegesStruct &, std::set<uint32_t> *)"
                         ,0x4ce);
    FUN_009c720b(uVar9,uVar10);
    bVar4 = unaff_RSI[2];
    if (8 < bVar4) {
      FUN_00925fd0();
      uVar10 = FUN_00926010();
      uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetILokExtensionPrivileges(CERT_ExtensionPrivilegesStruct &, std::set<uint32_t> *)"
                           ,0x4d4);
      FUN_009c720b(uVar9,uVar10);
      bVar4 = unaff_RSI[2];
    }
  }
  uVar8 = 0xfffffffffffffff4;
  if (0xfffffffffffffff4 < (ulonglong)bVar4 * 4 + (ulonglong)(byte)unaff_RSI[3] * 10) {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetILokExtensionPrivileges(CERT_ExtensionPrivilegesStruct &, std::set<uint32_t> *)"
                         ,0x4dd);
    FUN_009c720b(uVar9,uVar10);
    bVar4 = unaff_RSI[2];
  }
  lVar7 = 0xc;
  if (bVar4 != 0) {
    uVar6 = 0;
    do {
      uVar9 = FUN_00982800();
      *(undefined4 *)(unaff_RSI + uVar6 * 4 + 0xc) = uVar9;
      lVar7 = lVar7 + 4;
      uVar8 = uVar8 - 4;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (byte)unaff_RSI[2]);
  }
  if (unaff_RSI[3] != '\0') {
    uVar6 = 0;
    do {
      uVar9 = FUN_00982800();
      *(undefined4 *)(unaff_RSI + uVar6 * 4 + 0x2c) = uVar9;
      uVar9 = FUN_00982800();
      *(undefined4 *)(unaff_RSI + uVar6 * 4 + 0x4c) = uVar9;
      unaff_RSI[uVar6 + 0x6c] = *(char *)(lVar7 + 8);
      unaff_RSI[uVar6 + 0x74] = *(char *)(lVar7 + 9);
      uVar8 = uVar8 - 10;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 10;
    } while (uVar6 < (byte)unaff_RSI[3]);
  }
  if (3 < uVar8) {
    iVar5 = FUN_00982800();
    if (uVar8 - 4 < (ulonglong)(uint)(iVar5 * 4)) {
      FUN_00925fd0();
      uVar10 = FUN_00926010();
      uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::GetILokExtensionPrivileges(CERT_ExtensionPrivilegesStruct &, std::set<uint32_t> *)"
                           ,0x505);
      FUN_009c720b(uVar9,uVar10);
    }
    if (iVar5 != 0) {
      do {
        if (param_2 != (longlong *)0x0) {
          uVar9 = FUN_00982800();
          local_48 = (longlong *)CONCAT44(local_48._4_4_,uVar9);
          FUN_00980158(extraout_XMM0_Da,&local_48);
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    lVar7 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*local_38 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


