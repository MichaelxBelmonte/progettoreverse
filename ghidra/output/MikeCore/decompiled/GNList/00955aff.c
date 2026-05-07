// Function: FUN_00955aff
// Address: 00955aff
// Size: 3308 bytes
// Class: GNList
// String references:
//   "ILokTimeToPtimeConversionError"
//   "ComputerClockTurnedBack"
//   "LicenseDaemonNeedsUpdate"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Pac...
//   "You need to regenerate your PACE Eden License Data to match the current SDK"
//   "bool pace::eden::verifyAuth(pace::eden::thrift::pub::AuthChain &, pace::eden::thrift::pub::VerifyAu...
//   "The PaceEdenLicenseData has no product information for the given AuthChain"
//   "The License data is has a bad challenge/response blob that is needed to verify an auth"
//   "The given AuthChain is not from a location that is acceptable for the given PaceEdenLicenseData"
//   "The response returned by verifyAuth is not the expected response to the challenge."
//   "MasterTime for location %s//%X is ahead of the computer time."


/* WARNING: Removing unreachable block (ram,0x009563b9) */
/* WARNING: Removing unreachable block (ram,0x009563da) */
/* WARNING: Removing unreachable block (ram,0x009563c7) */
/* WARNING: Removing unreachable block (ram,0x00956381) */
/* WARNING: Removing unreachable block (ram,0x00955e0f) */
/* WARNING: Removing unreachable block (ram,0x00955e30) */
/* WARNING: Removing unreachable block (ram,0x00955e87) */
/* WARNING: Removing unreachable block (ram,0x00955e8d) */
/* WARNING: Removing unreachable block (ram,0x009563a6) */
/* WARNING: Removing unreachable block (ram,0x00956443) */
/* WARNING: Removing unreachable block (ram,0x00956061) */
/* WARNING: Removing unreachable block (ram,0x00956063) */
/* WARNING: Removing unreachable block (ram,0x0095606b) */
/* WARNING: Removing unreachable block (ram,0x00956073) */

bool FUN_00955aff(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  byte *pbVar2;
  ushort uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  longlong unaff_RSI;
  ulonglong uVar12;
  longlong unaff_RDI;
  ulong uVar13;
  longlong *plVar14;
  byte bVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong local_res8;
  longlong local_res10;
  longlong local_9b8;
  longlong local_9b0;
  undefined8 local_798;
  char local_756;
  char local_1b5;
  longlong local_1b0;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  char *pcStack_70;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x28) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  pbVar2 = (byte *)(param_1 + 0x40);
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (param_4 != 0) {
    lVar16 = *(longlong *)(param_4 + 8);
    for (lVar11 = *(longlong *)(param_4 + 0x10); lVar11 != lVar16; lVar11 = lVar11 + -0x90) {
      (*(code *)**(undefined8 **)(lVar11 + -0x90))();
    }
    *(longlong *)(param_4 + 0x10) = lVar16;
    lVar16 = *(longlong *)(param_4 + 0x20);
    for (lVar11 = *(longlong *)(param_4 + 0x28); lVar11 != lVar16; lVar11 = lVar11 + -0x60) {
      (*(code *)**(undefined8 **)(lVar11 + -0x60))();
    }
    *(longlong *)(param_4 + 0x28) = lVar16;
    lVar16 = *(longlong *)(param_4 + 0x38);
    for (lVar11 = *(longlong *)(param_4 + 0x40); lVar11 != lVar16; lVar11 = lVar11 + -0x58) {
      (*(code *)**(undefined8 **)(lVar11 + -0x58))();
    }
    *(longlong *)(param_4 + 0x40) = lVar16;
    lVar16 = *(longlong *)(param_4 + 0x50);
    for (lVar11 = *(longlong *)(param_4 + 0x58); lVar11 != lVar16; lVar11 = lVar11 + -0x88) {
      (*(code *)**(undefined8 **)(lVar11 + -0x88))();
    }
    *(longlong *)(param_4 + 0x58) = lVar16;
  }
  if (local_res8 != 0) {
    *(undefined2 *)(local_res8 + 0xd8) = 0;
  }
  FUN_00956db8();
  FUN_00952958();
  if (local_1b5 == '\0') {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar17 = FUN_00928ab0("bool pace::eden::verifyAuth(pace::eden::thrift::pub::AuthChain &, pace::eden::thrift::pub::VerifyAuthOptions &, const unsigned char *, pace::eden::thrift::pub::ErrorInfo &, const std::vector<uint32_t> *, pace::eden::thrift::pub::AuthStorage *, pace::eden::thrift::pub::ContentSymmetricKeys *, std::vector<pace::eden::thrift::pub::AuthSituation> *)"
                          ,0x84f);
    FUN_009cb75b(uVar17,uVar6);
  }
  if (local_9b8 != local_9b0) {
    do {
      if ((*(int *)(local_9b8 + 0x10) == *(int *)(*(longlong *)(unaff_RDI + 8) + 8)) &&
         ((iVar5 = *(int *)(*(longlong *)(unaff_RDI + 8) + 0xc), *(int *)(local_9b8 + 0x14) == iVar5
          || ((iVar5 == -1 && (*(char *)(local_9b8 + 0x18) != '\0')))))) goto LAB_00955d53;
      local_9b8 = local_9b8 + 0x448;
    } while (local_9b0 != local_9b8);
  }
  FUN_00925fd0();
  uVar6 = FUN_00926010();
  uVar17 = FUN_00928ab0("bool pace::eden::verifyAuth(pace::eden::thrift::pub::AuthChain &, pace::eden::thrift::pub::VerifyAuthOptions &, const unsigned char *, pace::eden::thrift::pub::ErrorInfo &, const std::vector<uint32_t> *, pace::eden::thrift::pub::AuthStorage *, pace::eden::thrift::pub::ContentSymmetricKeys *, std::vector<pace::eden::thrift::pub::AuthSituation> *)"
                        ,0x867);
  FUN_009cb75b(uVar17,uVar6);
  local_9b8 = 0;
LAB_00955d53:
  *(undefined1 *)(unaff_RSI + 8) = *(undefined1 *)(local_9b8 + 0x19);
  if (((*(ulonglong *)(unaff_RDI + 0x58) & 1) == 0) &&
     ((*(ulonglong *)(unaff_RDI + 0x1a0) & 1) == 0)) {
    if ((char)((byte)*(ulonglong *)(unaff_RDI + 0x1a0) | (byte)*(ulonglong *)(unaff_RDI + 0x58)) <
        '\0') {
      if ((*(char *)(local_9b8 + 0x443) != '\0') &&
         (*(longlong *)(local_9b8 + 0x1d8) != *(longlong *)(local_9b8 + 0x1d0))) {
        FUN_009532c0();
      }
    }
    else if ((*(char *)(local_9b8 + 0x441) != '\0') &&
            (*(longlong *)(local_9b8 + 0xb8) != *(longlong *)(local_9b8 + 0xb0))) {
      FUN_009532c0();
    }
  }
  else if ((*(char *)(local_9b8 + 0x442) != '\0') &&
          (*(longlong *)(local_9b8 + 0x148) != *(longlong *)(local_9b8 + 0x140))) {
    FUN_009532c0();
  }
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  FUN_00925fd0();
  uVar6 = FUN_00926010();
  uVar17 = FUN_00928ab0("bool pace::eden::verifyAuth(pace::eden::thrift::pub::AuthChain &, pace::eden::thrift::pub::VerifyAuthOptions &, const unsigned char *, pace::eden::thrift::pub::ErrorInfo &, const std::vector<uint32_t> *, pace::eden::thrift::pub::AuthStorage *, pace::eden::thrift::pub::ContentSymmetricKeys *, std::vector<pace::eden::thrift::pub::AuthSituation> *)"
                        ,0x8ab);
  FUN_009cb75b(uVar17,uVar6);
  pcStack_70 = (char *)0x0;
  if (((local_res8 == 0) || (*(char *)(local_9b8 + 0x444) == '\0')) ||
     (*(char *)(local_9b8 + 0x445) == '\0')) {
    plVar14 = (longlong *)0x0;
    lVar16 = 0;
  }
  else {
    plVar14 = (longlong *)0x0;
    lVar16 = 0;
    if (*(longlong *)(local_9b8 + 0x430) != *(longlong *)(local_9b8 + 0x428)) {
      plVar14 = (longlong *)(local_9b8 + 0x428);
      lVar16 = local_9b8 + 0x1f0;
    }
  }
  if ((*(longlong *)(unaff_RSI + 0x18) == 0) && (local_756 != '\0')) {
    *(undefined8 *)(unaff_RSI + 0x18) = local_798;
  }
  FUN_0095583c();
  uVar7 = FUN_0092e2c6(0,0,1);
  if ((*(ulonglong *)(unaff_RDI + 0x58) & uVar7) == 0) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    uVar17 = FUN_00928ab0("bool pace::eden::verifyAuth(pace::eden::thrift::pub::AuthChain &, pace::eden::thrift::pub::VerifyAuthOptions &, const unsigned char *, pace::eden::thrift::pub::ErrorInfo &, const std::vector<uint32_t> *, pace::eden::thrift::pub::AuthStorage *, pace::eden::thrift::pub::ContentSymmetricKeys *, std::vector<pace::eden::thrift::pub::AuthSituation> *)"
                          ,0x8ef);
    FUN_009cb75b(uVar17,uVar6);
  }
  FUN_00931d0c(param_3,unaff_RSI);
  if (local_98._8_8_ != local_98._0_8_) {
    FUN_00925fd0();
    uVar6 = FUN_00926010();
    pcStack_70 = 
    "bool pace::eden::verifyAuth(pace::eden::thrift::pub::AuthChain &, pace::eden::thrift::pub::VerifyAuthOptions &, const unsigned char *, pace::eden::thrift::pub::ErrorInfo &, const std::vector<uint32_t> *, pace::eden::thrift::pub::AuthStorage *, pace::eden::thrift::pub::ContentSymmetricKeys *, std::vector<pace::eden::thrift::pub::AuthSituation> *)"
    ;
    uVar17 = FUN_00928ab0("bool pace::eden::verifyAuth(pace::eden::thrift::pub::AuthChain &, pace::eden::thrift::pub::VerifyAuthOptions &, const unsigned char *, pace::eden::thrift::pub::ErrorInfo &, const std::vector<uint32_t> *, pace::eden::thrift::pub::AuthStorage *, pace::eden::thrift::pub::ContentSymmetricKeys *, std::vector<pace::eden::thrift::pub::AuthSituation> *)"
                          ,0x92a);
    FUN_009cb75b(uVar17,uVar6);
  }
  if ((*(byte *)(unaff_RDI + 0x28) & 1) == 0) {
    uVar7 = (ulonglong)(*(byte *)(unaff_RDI + 0x28) >> 1);
  }
  else {
    uVar7 = *(ulonglong *)(unaff_RDI + 0x30);
  }
  if (uVar7 != 0) {
    if ((*(byte *)(unaff_RDI + 0x40) & 1) == 0) {
      uVar7 = (ulonglong)(*(byte *)(unaff_RDI + 0x40) >> 1);
    }
    else {
      uVar7 = *(ulonglong *)(unaff_RDI + 0x48);
    }
    if (uVar7 != 0) {
      local_a8 = FUN_009f3f64();
      lVar11 = FUN_009585b8();
      if (local_a8 != lVar11) {
        local_a0 = FUN_009f3f64();
        lVar11 = FUN_009585b8();
        if (local_a0 != lVar11) {
          FUN_0094ca28(extraout_XMM0_Qa,&local_a8);
          pcStack_70 = (char *)(local_1b0 + -0x7ffffffffffffffe);
          iVar5 = FUN_0098c910();
          if (iVar5 == -1) {
            if (local_res10 == 0) {
              FUN_00925fd0();
              uVar6 = FUN_00926010();
              FUN_00983230();
              FUN_00983230();
              pcStack_70 = 
              "bool pace::eden::verifyAuth(pace::eden::thrift::pub::AuthChain &, pace::eden::thrift::pub::VerifyAuthOptions &, const unsigned char *, pace::eden::thrift::pub::ErrorInfo &, const std::vector<uint32_t> *, pace::eden::thrift::pub::AuthStorage *, pace::eden::thrift::pub::ContentSymmetricKeys *, std::vector<pace::eden::thrift::pub::AuthSituation> *)"
              ;
              uVar17 = FUN_00928ab0("bool pace::eden::verifyAuth(pace::eden::thrift::pub::AuthChain &, pace::eden::thrift::pub::VerifyAuthOptions &, const unsigned char *, pace::eden::thrift::pub::ErrorInfo &, const std::vector<uint32_t> *, pace::eden::thrift::pub::AuthStorage *, pace::eden::thrift::pub::ContentSymmetricKeys *, std::vector<pace::eden::thrift::pub::AuthSituation> *)"
                                    ,0x947);
              FUN_009cb75b(uVar17,uVar6);
            }
            else {
              FUN_00954838();
            }
          }
        }
      }
    }
  }
  if ((plVar14 != (longlong *)0x0) && (plVar14[1] != *plVar14)) {
    pcStack_70 = &DAT_0251b588;
    FUN_00952c7d();
    FUN_008d88a4();
    FUN_008d82b0();
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_b0 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*local_b0 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_98._0_8_ != 0) {
    local_98._8_8_ = local_98._0_8_;
    operator_delete(pcStack_70);
  }
  FUN_0091666a();
  if ((local_res10 == 0) || (*(int *)(param_1 + 8) == 0)) goto LAB_0095684f;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar7 = (ulonglong)(*(byte *)(param_1 + 0x10) >> 1);
  }
  else {
    uVar7 = *(ulonglong *)(param_1 + 0x18);
  }
  pcVar10 = (char *)&MACH_HEADER.flags;
  if (uVar7 == 0x18) {
    pcVar10 = "LicenseDaemonNeedsUpdate";
    param_4 = 0x18;
    iVar5 = std::string::compare(0x1fc6101,0xffffffff,(char *)&MACH_HEADER.flags,(ulong)lVar16);
    if (iVar5 == 0) {
LAB_009567d1:
      FUN_00954838();
      *(undefined4 *)(param_1 + 8) = 0;
      goto LAB_0095684f;
    }
  }
  if ((*pbVar2 & 1) == 0) {
    lVar11 = param_1 + 0x41;
    uVar7 = (ulonglong)(*pbVar2 >> 1);
  }
  else {
    uVar7 = *(ulonglong *)(param_1 + 0x48);
    lVar11 = *(longlong *)(param_1 + 0x50);
  }
  if (0x17 < (longlong)uVar7) {
    pcVar1 = (char *)(lVar11 + uVar7);
    do {
      if ((uVar7 - 0x17 == 0) ||
         (pcVar9 = _memchr(pcVar10,(int)(uVar7 - 0x17),(size_t)param_4), pcVar9 == (char *)0x0))
      break;
      auVar18[0] = -(*pcVar9 == DAT_023d4c90);
      auVar18[1] = -(pcVar9[1] == UNK_023d4c91);
      auVar18[2] = -(pcVar9[2] == UNK_023d4c92);
      auVar18[3] = -(pcVar9[3] == UNK_023d4c93);
      auVar18[4] = -(pcVar9[4] == UNK_023d4c94);
      auVar18[5] = -(pcVar9[5] == UNK_023d4c95);
      auVar18[6] = -(pcVar9[6] == UNK_023d4c96);
      auVar18[7] = -(pcVar9[7] == UNK_023d4c97);
      auVar18[8] = -(pcVar9[8] == UNK_023d4c98);
      auVar18[9] = -(pcVar9[9] == UNK_023d4c99);
      auVar18[10] = -(pcVar9[10] == UNK_023d4c9a);
      auVar18[0xb] = -(pcVar9[0xb] == UNK_023d4c9b);
      auVar18[0xc] = -(pcVar9[0xc] == UNK_023d4c9c);
      auVar18[0xd] = -(pcVar9[0xd] == UNK_023d4c9d);
      auVar18[0xe] = -(pcVar9[0xe] == UNK_023d4c9e);
      auVar18[0xf] = -(pcVar9[0xf] == UNK_023d4c9f);
      uVar6 = *(undefined8 *)(pcVar9 + 0x10);
      auVar22[0] = -((char)uVar6 == s_ct_client_socketCould_not_connec_023d4c20[0x60]);
      auVar22[1] = -((char)((ulonglong)uVar6 >> 8) ==
                    s_ct_client_socketCould_not_connec_023d4c20[0x61]);
      auVar22[2] = -((char)((ulonglong)uVar6 >> 0x10) ==
                    s_ct_client_socketCould_not_connec_023d4c20[0x62]);
      auVar22[3] = -((char)((ulonglong)uVar6 >> 0x18) ==
                    s_ct_client_socketCould_not_connec_023d4c20[99]);
      auVar22[4] = -((char)((ulonglong)uVar6 >> 0x20) ==
                    s_ct_client_socketCould_not_connec_023d4c20[100]);
      auVar22[5] = -((char)((ulonglong)uVar6 >> 0x28) ==
                    s_ct_client_socketCould_not_connec_023d4c20[0x65]);
      auVar22[6] = -((char)((ulonglong)uVar6 >> 0x30) ==
                    s_ct_client_socketCould_not_connec_023d4c20[0x66]);
      auVar22[7] = -((char)((ulonglong)uVar6 >> 0x38) ==
                    s_ct_client_socketCould_not_connec_023d4c20[0x67]);
      auVar22[8] = -(s_ct_client_socketCould_not_connec_023d4c20[0x68] == '\0');
      auVar22[9] = -(s_ct_client_socketCould_not_connec_023d4c20[0x69] == '\0');
      auVar22[10] = -(s_ct_client_socketCould_not_connec_023d4c20[0x6a] == '\0');
      auVar22[0xb] = -(s_ct_client_socketCould_not_connec_023d4c20[0x6b] == '\0');
      auVar22[0xc] = -(UNK_023d4c8c == '\0');
      auVar22[0xd] = -(UNK_023d4c8d == '\0');
      auVar22[0xe] = -(UNK_023d4c8e == '\0');
      auVar22[0xf] = -(UNK_023d4c8f == '\0');
      auVar22 = auVar22 & auVar18;
      uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
      pcVar10 = (char *)(ulonglong)uVar3;
      if (uVar3 == 0xffff) {
        if ((pcVar9 != pcVar1) && ((longlong)pcVar9 - lVar11 != -1)) goto LAB_009567d1;
        break;
      }
      uVar7 = (longlong)pcVar1 - (longlong)(pcVar9 + 1);
    } while (0x17 < (longlong)uVar7);
  }
  bVar15 = *(byte *)(param_1 + 0x10);
  uVar8 = (ulonglong)(bVar15 >> 1);
  uVar4 = CONCAT71((int7)((ulonglong)pcVar10 >> 8),bVar15);
  uVar7 = *(ulonglong *)(param_1 + 0x18);
  uVar12 = uVar7;
  if ((bVar15 & 1) == 0) {
    uVar12 = uVar8;
  }
  if (uVar12 == 0x17) {
    param_4 = 0x17;
    iVar5 = std::string::compare
                      (0x1fc60e9,0xffffffff,(char *)((longlong)&MACH_HEADER.sizeofcmds + 3),
                       (ulong)lVar16);
    if (iVar5 != 0) {
      uVar7 = *(ulonglong *)(param_1 + 0x18);
      uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(byte *)(param_1 + 0x10));
      uVar8 = (ulonglong)(*(byte *)(param_1 + 0x10) >> 1);
      goto LAB_00956533;
    }
LAB_00956819:
    FUN_00954838();
  }
  else {
LAB_00956533:
    pcVar10 = (char *)(uVar4 & 0xffffffffffffff01);
    if ((char)pcVar10 != '\0') {
      uVar8 = uVar7;
    }
    if (uVar8 == 0x1e) {
      pcVar10 = "ILokTimeToPtimeConversionError";
      param_4 = 0x1e;
      iVar5 = std::string::compare
                        (0x1fc6008,0xffffffff,(char *)((longlong)&MACH_HEADER.reserved + 2),
                         (ulong)lVar16);
      if (iVar5 == 0) goto LAB_00956819;
    }
    bVar15 = *pbVar2;
    if ((bVar15 & 1) == 0) {
      lVar11 = param_1 + 0x41;
      uVar7 = (ulonglong)(bVar15 >> 1);
    }
    else {
      uVar7 = *(ulonglong *)(param_1 + 0x48);
      lVar11 = *(longlong *)(param_1 + 0x50);
    }
    if (0x16 < (longlong)uVar7) {
      pcVar1 = (char *)(lVar11 + uVar7);
      do {
        if ((uVar7 - 0x16 == 0) ||
           (pcVar9 = _memchr(pcVar10,(int)(uVar7 - 0x16),(size_t)param_4), pcVar9 == (char *)0x0))
        break;
        auVar19[0] = -(*pcVar9 == DAT_023d4cb0);
        auVar19[1] = -(pcVar9[1] == UNK_023d4cb1);
        auVar19[2] = -(pcVar9[2] == UNK_023d4cb2);
        auVar19[3] = -(pcVar9[3] == UNK_023d4cb3);
        auVar19[4] = -(pcVar9[4] == UNK_023d4cb4);
        auVar19[5] = -(pcVar9[5] == UNK_023d4cb5);
        auVar19[6] = -(pcVar9[6] == UNK_023d4cb6);
        auVar19[7] = -(pcVar9[7] == UNK_023d4cb7);
        auVar19[8] = -(pcVar9[8] == UNK_023d4cb8);
        auVar19[9] = -(pcVar9[9] == UNK_023d4cb9);
        auVar19[10] = -(pcVar9[10] == UNK_023d4cba);
        auVar19[0xb] = -(pcVar9[0xb] == UNK_023d4cbb);
        auVar19[0xc] = -(pcVar9[0xc] == UNK_023d4cbc);
        auVar19[0xd] = -(pcVar9[0xd] == UNK_023d4cbd);
        auVar19[0xe] = -(pcVar9[0xe] == UNK_023d4cbe);
        auVar19[0xf] = -(pcVar9[0xf] == UNK_023d4cbf);
        auVar23[0] = -(pcVar9[7] == DAT_023d4ca0);
        auVar23[1] = -(pcVar9[8] == UNK_023d4ca1);
        auVar23[2] = -(pcVar9[9] == UNK_023d4ca2);
        auVar23[3] = -(pcVar9[10] == UNK_023d4ca3);
        auVar23[4] = -(pcVar9[0xb] == UNK_023d4ca4);
        auVar23[5] = -(pcVar9[0xc] == UNK_023d4ca5);
        auVar23[6] = -(pcVar9[0xd] == UNK_023d4ca6);
        auVar23[7] = -(pcVar9[0xe] == UNK_023d4ca7);
        auVar23[8] = -(pcVar9[0xf] == UNK_023d4ca8);
        auVar23[9] = -(pcVar9[0x10] == UNK_023d4ca9);
        auVar23[10] = -(pcVar9[0x11] == UNK_023d4caa);
        auVar23[0xb] = -(pcVar9[0x12] == UNK_023d4cab);
        auVar23[0xc] = -(pcVar9[0x13] == UNK_023d4cac);
        auVar23[0xd] = -(pcVar9[0x14] == UNK_023d4cad);
        auVar23[0xe] = -(pcVar9[0x15] == UNK_023d4cae);
        auVar23[0xf] = -(pcVar9[0x16] == UNK_023d4caf);
        auVar23 = auVar23 & auVar19;
        uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
        pcVar10 = (char *)(ulonglong)uVar3;
        if (uVar3 == 0xffff) {
          if ((pcVar9 != pcVar1) && ((longlong)pcVar9 - lVar11 != -1)) goto LAB_00956819;
          break;
        }
        uVar7 = (longlong)pcVar1 - (longlong)(pcVar9 + 1);
      } while (0x16 < (longlong)uVar7);
    }
    uVar13 = (ulong)lVar16;
    if ((bVar15 & 1) == 0) {
      lVar11 = param_1 + 0x41;
      uVar7 = (ulonglong)(bVar15 >> 1);
    }
    else {
      uVar7 = *(ulonglong *)(param_1 + 0x48);
      lVar11 = *(longlong *)(param_1 + 0x50);
    }
    if (0x1d < (longlong)uVar7) {
      pcVar1 = (char *)(lVar11 + uVar7);
      while( true ) {
        uVar13 = (ulong)lVar16;
        if (uVar7 - 0x1d == 0) break;
        pcVar9 = _memchr(pcVar10,(int)(uVar7 - 0x1d),(size_t)param_4);
        uVar13 = (ulong)lVar16;
        if (pcVar9 == (char *)0x0) break;
        auVar20[0] = -(*pcVar9 == DAT_023d4cd0);
        auVar20[1] = -(pcVar9[1] == UNK_023d4cd1);
        auVar20[2] = -(pcVar9[2] == UNK_023d4cd2);
        auVar20[3] = -(pcVar9[3] == UNK_023d4cd3);
        auVar20[4] = -(pcVar9[4] == UNK_023d4cd4);
        auVar20[5] = -(pcVar9[5] == UNK_023d4cd5);
        auVar20[6] = -(pcVar9[6] == UNK_023d4cd6);
        auVar20[7] = -(pcVar9[7] == UNK_023d4cd7);
        auVar20[8] = -(pcVar9[8] == UNK_023d4cd8);
        auVar20[9] = -(pcVar9[9] == UNK_023d4cd9);
        auVar20[10] = -(pcVar9[10] == UNK_023d4cda);
        auVar20[0xb] = -(pcVar9[0xb] == UNK_023d4cdb);
        auVar20[0xc] = -(pcVar9[0xc] == UNK_023d4cdc);
        auVar20[0xd] = -(pcVar9[0xd] == UNK_023d4cdd);
        auVar20[0xe] = -(pcVar9[0xe] == UNK_023d4cde);
        auVar20[0xf] = -(pcVar9[0xf] == UNK_023d4cdf);
        auVar24[0] = -(pcVar9[0xe] == DAT_023d4cc0);
        auVar24[1] = -(pcVar9[0xf] == UNK_023d4cc1);
        auVar24[2] = -(pcVar9[0x10] == UNK_023d4cc2);
        auVar24[3] = -(pcVar9[0x11] == UNK_023d4cc3);
        auVar24[4] = -(pcVar9[0x12] == UNK_023d4cc4);
        auVar24[5] = -(pcVar9[0x13] == UNK_023d4cc5);
        auVar24[6] = -(pcVar9[0x14] == UNK_023d4cc6);
        auVar24[7] = -(pcVar9[0x15] == UNK_023d4cc7);
        auVar24[8] = -(pcVar9[0x16] == UNK_023d4cc8);
        auVar24[9] = -(pcVar9[0x17] == UNK_023d4cc9);
        auVar24[10] = -(pcVar9[0x18] == UNK_023d4cca);
        auVar24[0xb] = -(pcVar9[0x19] == UNK_023d4ccb);
        auVar24[0xc] = -(pcVar9[0x1a] == UNK_023d4ccc);
        auVar24[0xd] = -(pcVar9[0x1b] == UNK_023d4ccd);
        auVar24[0xe] = -(pcVar9[0x1c] == UNK_023d4cce);
        auVar24[0xf] = -(pcVar9[0x1d] == UNK_023d4ccf);
        auVar24 = auVar24 & auVar20;
        uVar3 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
        pcVar10 = (char *)(ulonglong)uVar3;
        if (uVar3 == 0xffff) {
          if ((pcVar9 != pcVar1) && ((longlong)pcVar9 - lVar11 != -1)) goto LAB_00956819;
          break;
        }
        uVar7 = (longlong)pcVar1 - (longlong)(pcVar9 + 1);
        if ((longlong)uVar7 < 0x1e) break;
      }
    }
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      uVar7 = (ulonglong)(*(byte *)(param_1 + 0x10) >> 1);
    }
    else {
      uVar7 = *(ulonglong *)(param_1 + 0x18);
    }
    pcVar10 = (char *)&MACH_HEADER.flags;
    if (uVar7 == 0x18) {
      pcVar10 = "LicenseDaemonNeedsUpdate";
      param_4 = 0x18;
      iVar5 = std::string::compare(0x1fc6101,0xffffffff,(char *)&MACH_HEADER.flags,uVar13);
      if (iVar5 == 0) {
LAB_0095683e:
        FUN_00954838();
        goto LAB_0095684f;
      }
      bVar15 = *pbVar2;
    }
    if ((bVar15 & 1) == 0) {
      lVar16 = param_1 + 0x41;
      uVar7 = (ulonglong)(bVar15 >> 1);
    }
    else {
      uVar7 = *(ulonglong *)(param_1 + 0x48);
      lVar16 = *(longlong *)(param_1 + 0x50);
    }
    if (0x1c < (longlong)uVar7) {
      pcVar1 = (char *)(lVar16 + uVar7);
      do {
        if ((uVar7 - 0x1c == 0) ||
           (pcVar9 = _memchr(pcVar10,(int)(uVar7 - 0x1c),(size_t)param_4), pcVar9 == (char *)0x0))
        break;
        auVar21[0] = -(*pcVar9 == s_ct_client_socketCould_not_connec_023d4c20[0x50]);
        auVar21[1] = -(pcVar9[1] == s_ct_client_socketCould_not_connec_023d4c20[0x51]);
        auVar21[2] = -(pcVar9[2] == s_ct_client_socketCould_not_connec_023d4c20[0x52]);
        auVar21[3] = -(pcVar9[3] == s_ct_client_socketCould_not_connec_023d4c20[0x53]);
        auVar21[4] = -(pcVar9[4] == s_ct_client_socketCould_not_connec_023d4c20[0x54]);
        auVar21[5] = -(pcVar9[5] == s_ct_client_socketCould_not_connec_023d4c20[0x55]);
        auVar21[6] = -(pcVar9[6] == s_ct_client_socketCould_not_connec_023d4c20[0x56]);
        auVar21[7] = -(pcVar9[7] == s_ct_client_socketCould_not_connec_023d4c20[0x57]);
        auVar21[8] = -(pcVar9[8] == s_ct_client_socketCould_not_connec_023d4c20[0x58]);
        auVar21[9] = -(pcVar9[9] == s_ct_client_socketCould_not_connec_023d4c20[0x59]);
        auVar21[10] = -(pcVar9[10] == s_ct_client_socketCould_not_connec_023d4c20[0x5a]);
        auVar21[0xb] = -(pcVar9[0xb] == s_ct_client_socketCould_not_connec_023d4c20[0x5b]);
        auVar21[0xc] = -(pcVar9[0xc] == s_ct_client_socketCould_not_connec_023d4c20[0x5c]);
        auVar21[0xd] = -(pcVar9[0xd] == s_ct_client_socketCould_not_connec_023d4c20[0x5d]);
        auVar21[0xe] = -(pcVar9[0xe] == s_ct_client_socketCould_not_connec_023d4c20[0x5e]);
        auVar21[0xf] = -(pcVar9[0xf] == s_ct_client_socketCould_not_connec_023d4c20[0x5f]);
        auVar25[0] = -(pcVar9[0xd] == s_ct_client_socketCould_not_connec_023d4c20[0x40]);
        auVar25[1] = -(pcVar9[0xe] == s_ct_client_socketCould_not_connec_023d4c20[0x41]);
        auVar25[2] = -(pcVar9[0xf] == s_ct_client_socketCould_not_connec_023d4c20[0x42]);
        auVar25[3] = -(pcVar9[0x10] == s_ct_client_socketCould_not_connec_023d4c20[0x43]);
        auVar25[4] = -(pcVar9[0x11] == s_ct_client_socketCould_not_connec_023d4c20[0x44]);
        auVar25[5] = -(pcVar9[0x12] == s_ct_client_socketCould_not_connec_023d4c20[0x45]);
        auVar25[6] = -(pcVar9[0x13] == s_ct_client_socketCould_not_connec_023d4c20[0x46]);
        auVar25[7] = -(pcVar9[0x14] == s_ct_client_socketCould_not_connec_023d4c20[0x47]);
        auVar25[8] = -(pcVar9[0x15] == s_ct_client_socketCould_not_connec_023d4c20[0x48]);
        auVar25[9] = -(pcVar9[0x16] == s_ct_client_socketCould_not_connec_023d4c20[0x49]);
        auVar25[10] = -(pcVar9[0x17] == s_ct_client_socketCould_not_connec_023d4c20[0x4a]);
        auVar25[0xb] = -(pcVar9[0x18] == s_ct_client_socketCould_not_connec_023d4c20[0x4b]);
        auVar25[0xc] = -(pcVar9[0x19] == s_ct_client_socketCould_not_connec_023d4c20[0x4c]);
        auVar25[0xd] = -(pcVar9[0x1a] == s_ct_client_socketCould_not_connec_023d4c20[0x4d]);
        auVar25[0xe] = -(pcVar9[0x1b] == s_ct_client_socketCould_not_connec_023d4c20[0x4e]);
        auVar25[0xf] = -(pcVar9[0x1c] == s_ct_client_socketCould_not_connec_023d4c20[0x4f]);
        auVar25 = auVar25 & auVar21;
        uVar3 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar25[0xf] >> 7) << 0xf;
        pcVar10 = (char *)(ulonglong)uVar3;
        if (uVar3 == 0xffff) {
          if ((pcVar9 != pcVar1) && ((longlong)pcVar9 - lVar16 != -1)) goto LAB_0095683e;
          break;
        }
        uVar7 = (longlong)pcVar1 - (longlong)(pcVar9 + 1);
      } while (0x1c < (longlong)uVar7);
    }
  }
LAB_0095684f:
  return *(int *)(param_1 + 8) == 0;
}


