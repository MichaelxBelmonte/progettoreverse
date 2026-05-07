// Function: FUN_00939176
// Address: 00939176
// Size: 2125 bytes
// Class: Unknown
// String references:
//   "storageId"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "2011-05-04T11:44:00Z"
//   "Bad LsTimeLimitPtr (0x%16X)"
//   "static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromLicenseDbToPublic(l...
//   "relativeTimePeriod"
//   "relativeTimeStart"
//   "relativeTimeStop"
//   "periodStartDate"
//   "periodStopDate"


undefined8 FUN_00939176(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  string *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *pcVar12;
  string *psVar13;
  string *unaff_RSI;
  undefined8 unaff_RDI;
  undefined *local_160;
  undefined4 local_158;
  longlong local_150;
  string *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  ulonglong local_120;
  ulonglong local_118;
  undefined8 local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  byte local_c0;
  byte local_a8;
  ulonglong local_a0;
  string *local_88;
  string *local_80;
  ulonglong local_60;
  longlong local_48;
  
  local_160 = (undefined *)0x7ffffffffffffffe;
  FUN_00953fa0(param_1,&local_160);
  local_88 = (string *)0xfffffffe;
  local_160 = (undefined *)0x7ffffffffffffffe;
  psVar4 = (string *)&local_160;
  FUN_00953fa0();
  local_160 = &DAT_0251c0d8;
  local_158 = 0;
  local_150 = 0;
  local_148 = (string *)0x0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  pcVar11 = (char *)unaff_RSI;
  if (*(longlong *)unaff_RSI == 0) {
    FUN_00925fd0();
    psVar4 = (string *)FUN_00926010();
    local_80 = (string *)FUN_0094fb8e;
    FUN_00983230();
    pcVar11 = 
    "static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromLicenseDbToPublic(license_services::LsTimeLimitPtr, const boost::posix_time::ptime &, int32_t)"
    ;
    FUN_00928ab0("static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromLicenseDbToPublic(license_services::LsTimeLimitPtr, const boost::posix_time::ptime &, int32_t)"
                 ,&DAT_00001c65);
    FUN_009bd14b();
    local_88 = unaff_RSI;
  }
  std::string::assign(pcVar11);
  std::string::operator=((string *)pcVar11,psVar4);
  FUN_00a609be();
  pcVar12 = "storageId";
  FUN_009bafbc();
  lVar5 = FUN_00a609be();
  local_158 = *(undefined4 *)(lVar5 + 0xd0);
  (**(code **)(**(longlong **)unaff_RSI + 0x48))();
  std::string::string((string *)pcVar11,(string *)pcVar12);
  if (((ulonglong)local_88 & 1) == 0) {
    local_80 = (string *)((ulonglong)local_88 >> 1 & 0x7f);
  }
  psVar4 = local_148 + -local_150;
  if (psVar4 < local_80) {
    FUN_0088d550();
  }
  else if (local_80 < psVar4) {
    psVar4 = local_80 + local_150;
    local_148 = psVar4;
  }
  _memcpy(psVar4,local_80,param_3);
  FUN_008df080();
  FUN_00a609be();
  FUN_009bafbc();
  lVar5 = FUN_00a609be();
  uVar1 = *(uint *)(lVar5 + 0x98);
  uVar10 = (ulonglong)uVar1;
  FUN_00a609be();
  pcVar11 = "relativeTimeStart";
  FUN_009bafbc();
  FUN_00a609be();
  std::string::string(psVar4,(string *)pcVar11);
  FUN_00a609be();
  pcVar11 = "relativeTimeStop";
  FUN_009bafbc();
  FUN_00a609be();
  std::string::string(psVar4,(string *)pcVar11);
  if (uVar1 == 0) {
    uVar9 = 0;
  }
  else {
    psVar4 = (string *)CONCAT71((int7)((ulonglong)psVar4 >> 8),1);
    if ((local_a8 & 1) == 0) {
      local_a0 = (ulonglong)(local_a8 >> 1);
    }
    uVar9 = CONCAT71((int7)((ulonglong)local_80 >> 8),local_a0 != 0);
  }
  FUN_00a609be();
  pcVar11 = "periodStartDate";
  FUN_009bafbc();
  FUN_00a609be();
  std::string::operator=(psVar4,(string *)pcVar11);
  FUN_00a609be();
  pcVar11 = "periodStopDate";
  FUN_009bafbc();
  FUN_00a609be();
  std::string::operator=(psVar4,(string *)pcVar11);
  lVar5 = FUN_009f3f64();
  lVar6 = FUN_009f3f64();
  lVar7 = FUN_009585b8();
  if (lVar5 != lVar7) {
    psVar4 = (string *)CONCAT71((int7)((ulonglong)psVar4 >> 8),1);
    uVar8 = local_118;
    if ((local_120 & 1) == 0) {
      uVar8 = local_120 >> 1 & 0x7f;
    }
    if ((uVar8 == 0) || (lVar5 = FUN_009585b8(), lVar6 != lVar5)) {
      psVar4 = (string *)(uVar9 & 0xffffffff ^ 1);
      if ((uVar1 != 0 & (byte)psVar4) != 0) {
        local_e0._0_4_ = CONCAT22(1,(ushort)local_e0);
        psVar4 = (string *)CONCAT71((int7)((uVar9 & 0xffffffff) >> 8),1);
        uVar9 = local_118;
        if ((local_120 & 1) == 0) {
          uVar9 = local_120 >> 1 & 0x7f;
        }
        bVar2 = false;
        local_108 = uVar10;
        if (uVar9 != 0) {
          FUN_0094ca28(psVar4,param_2);
          iVar3 = FUN_0098c910();
          if (iVar3 == -1) {
            local_108 = 0;
          }
        }
        goto LAB_0093961f;
      }
      local_e0._0_3_ = (uint3)(ushort)local_e0;
      if ((char)uVar9 == '\0') {
LAB_0093987e:
        FUN_0094ca28();
        psVar4 = (string *)CONCAT71((int7)((ulonglong)psVar4 >> 8),1);
        uVar10 = local_118;
        if ((local_120 & 1) == 0) {
          uVar10 = local_120 >> 1 & 0x7f;
        }
        if (uVar10 == 0) {
          local_108 = 0x7fffffffffffffff;
          iVar3 = FUN_0098c910();
          if (iVar3 == -1) {
            local_e0._0_4_ = (uint)(uint3)local_e0;
          }
          else {
            local_e0._0_4_ = CONCAT13(1,(uint3)local_e0);
          }
        }
        else {
          FUN_0094ca28(psVar4,param_2);
          iVar3 = FUN_0098c910();
          if (iVar3 == -1) {
            local_e0._0_4_ = (uint)(uint3)local_e0;
            local_108 = 0;
          }
          else {
            iVar3 = FUN_0098c910();
            if (iVar3 == -1) {
              FUN_0094ca28();
              local_d0 = 0;
              FUN_009f3a8b();
              local_e0._0_4_ = (uint)(uint3)local_e0;
            }
            else {
              FUN_009f3a8b();
              local_e0._0_4_ = CONCAT13(local_60 != 0,(uint3)local_e0);
            }
            local_108 = local_60;
            if ((longlong)local_60 < 0) {
              local_108 = 0x7fffffffffffffff;
            }
          }
        }
        bVar2 = false;
      }
      else {
        local_48 = FUN_009f3f64();
        lVar5 = FUN_009f3f64();
        lVar6 = FUN_009585b8();
        if ((local_48 == lVar6) || (lVar6 = FUN_009585b8(), lVar5 == lVar6)) {
          FUN_008e8e5c();
        }
        else {
          psVar13 = (string *)&local_48;
          FUN_0094ca28();
          iVar3 = FUN_0098c910();
          if (iVar3 == -1) {
            FUN_008e8e5c();
          }
          else {
            FUN_009f3a8b();
            if (local_60 == uVar10) {
              psVar4 = (string *)CONCAT71((int7)((ulonglong)psVar4 >> 8),1);
              uVar10 = local_118;
              if ((local_120 & 1) == 0) {
                uVar10 = local_120 >> 1 & 0x7f;
              }
              if (uVar10 != 0) {
                psVar13 = (string *)&local_48;
                FUN_0094ca28();
                iVar3 = FUN_0098c910();
                if (iVar3 == -1) {
                  FUN_008e8e5c();
                  goto LAB_0093970c;
                }
              }
              std::string::operator=(psVar4,psVar13);
              std::string::operator=(psVar4,psVar13);
              goto LAB_0093987e;
            }
            FUN_008e8e5c();
          }
        }
LAB_0093970c:
        bVar2 = true;
      }
      goto LAB_0093961f;
    }
  }
  bVar2 = true;
  FUN_008e8e5c();
LAB_0093961f:
  if ((local_c0 & 1) != 0) {
    operator_delete(psVar4);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(psVar4);
  }
  if (!bVar2) {
    FUN_008e8e5c();
  }
  if (((ulonglong)local_88 & 1) != 0) {
    operator_delete(psVar4);
  }
  FUN_008e844a();
  FUN_008e844a();
  return unaff_RDI;
}


