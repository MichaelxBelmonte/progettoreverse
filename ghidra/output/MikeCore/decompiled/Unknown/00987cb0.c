// Function: FUN_00987cb0
// Address: 00987cb0
// Size: 1116 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Asn1ParserCert...
//   "ILokExtensionPrivileges extension is missing"
//   "ILokExtensionPrivileges extension integer is missing"
//   "ILokExtensionPrivileges have a bad cert level value"
//   "ILokExtensionPrivileges number of Participant IDs exceeds the maximum"
//   "ILokExtensionPrivileges number of Descendant Limits exceeds the maximum"
//   "virtual void pace::Asn1ParserCert::SetILokExtensionPrivileges(const CERT_ExtensionPrivilegesStruct ...


/* WARNING: Removing unreachable block (ram,0x00987f44) */
/* WARNING: Removing unreachable block (ram,0x00987e7c) */
/* WARNING: Removing unreachable block (ram,0x00987e8e) */
/* WARNING: Removing unreachable block (ram,0x009880f4) */

void FUN_00987cb0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char *unaff_RSI;
  longlong *unaff_RDI;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *local_58;
  longlong *plStack_50;
  
  uVar9 = 0;
  uVar10 = 0;
  if (*unaff_RSI < '\x01') {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetILokExtensionPrivileges(const CERT_ExtensionPrivilegesStruct &, const std::set<uint32_t> *)"
                         ,0x52a);
    uVar9 = FUN_009c720b(uVar9,uVar4);
  }
  if (8 < (byte)unaff_RSI[2]) {
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetILokExtensionPrivileges(const CERT_ExtensionPrivilegesStruct &, const std::set<uint32_t> *)"
                         ,0x52f);
    uVar9 = FUN_009c720b(uVar9,uVar4);
    if (8 < (byte)unaff_RSI[2]) {
      FUN_00925fd0();
      uVar4 = FUN_00926010();
      uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetILokExtensionPrivileges(const CERT_ExtensionPrivilegesStruct &, const std::set<uint32_t> *)"
                           ,0x535);
      uVar9 = FUN_009c720b(uVar9,uVar4);
    }
  }
  (**(code **)(*unaff_RDI + 0x38))(uVar9,&DAT_023c8b78,param_3,param_4,uVar10);
  if (local_58 == (longlong *)0x0) {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetILokExtensionPrivileges(const CERT_ExtensionPrivilegesStruct &, const std::set<uint32_t> *)"
                         ,0x539);
    FUN_009c720b(uVar9,uVar10);
  }
  (**(code **)(*local_58 + 0x40))(2,1);
  uVar9 = 0;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_50 + 0x10))();
      uVar9 = std::__shared_weak_count::__release_weak();
    }
  }
  if (local_58 == (longlong *)0x0) {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    uVar9 = FUN_00928ab0("virtual void pace::Asn1ParserCert::SetILokExtensionPrivileges(const CERT_ExtensionPrivilegesStruct &, const std::set<uint32_t> *)"
                         ,0x53d);
    uVar9 = FUN_009c720b(uVar9,uVar10);
  }
  lVar5 = (ulonglong)(byte)unaff_RSI[3] * 10 + 0xc + (ulonglong)(byte)unaff_RSI[2] * 4;
  if ((param_2 == (undefined8 *)0x0) || (iVar8 = (int)param_2[2], iVar8 == 0)) {
    iVar8 = 0;
  }
  else {
    lVar5 = lVar5 + (ulonglong)(iVar8 * 4 + 4);
  }
  if (lVar5 != 0) {
    uVar9 = FUN_00958ec0();
  }
  MACH_HEADER.magic._0_1_ = *unaff_RSI;
  MACH_HEADER.magic._1_1_ = unaff_RSI[1];
  MACH_HEADER.magic._2_1_ = unaff_RSI[2];
  MACH_HEADER.magic._3_1_ = unaff_RSI[3];
  uVar9 = FUN_0098283e(uVar9,4);
  uVar9 = FUN_0098283e(uVar9,4);
  lVar5 = 0xc;
  if (unaff_RSI[2] != '\0') {
    uVar7 = 0;
    do {
      uVar9 = FUN_0098283e(uVar9,4);
      lVar5 = lVar5 + 4;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (byte)unaff_RSI[2]);
  }
  if (unaff_RSI[3] != '\0') {
    uVar7 = 0;
    do {
      uVar9 = FUN_0098283e(uVar9,4);
      uVar9 = FUN_0098283e(uVar9,4);
      *(char *)(lVar5 + 8) = unaff_RSI[uVar7 + 0x6c];
      *(char *)(lVar5 + 9) = unaff_RSI[uVar7 + 0x74];
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 10;
    } while (uVar7 < (byte)unaff_RSI[3]);
  }
  if (iVar8 != 0) {
    uVar9 = FUN_0098283e(uVar9,4);
    puVar6 = (undefined8 *)*param_2;
    while (puVar3 = puVar6, puVar3 != param_2 + 1) {
      uVar9 = FUN_0098283e(uVar9,4);
      puVar2 = (undefined8 *)puVar3[1];
      if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)puVar3[2];
        if (*(undefined8 **)puVar3[2] != puVar3) {
          do {
            puVar3 = (undefined8 *)puVar3[2];
            puVar6 = (undefined8 *)puVar3[2];
          } while (*(undefined8 **)puVar3[2] != puVar3);
        }
      }
      else {
        do {
          puVar6 = puVar2;
          puVar2 = (undefined8 *)*puVar6;
        } while (puVar2 != (undefined8 *)0x0);
      }
    }
  }
  (**(code **)(*local_58 + 0x48))();
  (**(code **)(*unaff_RDI + 0x198))();
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_50 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


