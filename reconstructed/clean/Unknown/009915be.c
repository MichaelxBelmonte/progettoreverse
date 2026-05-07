// Function: FUN_009915be
// Address: 009915be
// Size: 799 bytes
// Class: Unknown
// String references:
//   "The size (%d) of the certificate is out of the valid range"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/ILokCert.cpp"
//   "virtual void pace::ILokCert::AddCertificate(const uint32_t, uint32_t &, const vector<uint8_t> &)"
//   "The size (%d) of the cert chain would be too large after adding the new certificate (size %d)."
//   "Bad cert chain size: header size (must be %d) = %d, content size = %d"

void FUN_009915be(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *this_ptr;
  uint32_t local_7c;
  uint64_t local_78;
  uint64_t local_70;
  uint *local_68;
  code *local_60;
  code *local_58;
  int64_t *local_50;
  uint local_48 [2];
  int64_t local_40;
  uint local_34;
  
  local_78 = param_2;
  if ((char)this_ptr[1] == '\0') {
    local_68 = (uint *)CONCAT44(local_68._4_4_,0x8240);
    FUN_009ad770();
    this_ptr[0x36] = this_ptr[2];
    this_ptr[0x37] = this_ptr[3];
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (0x3ff < (lVar2 - lVar1) - 0x101U) {
    FUN_00925fd0();
    FUN_00926010();
    local_40 = param_1[1] - *param_1;
    local_68 = (uint *)&local_40;
    local_60 = FUN_00ac1940;
    local_58 = FUN_009baee0;
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILokCert::AddCertificate(const uint32_t, uint32_t &, const vector<uint8_t> &)"
                 ,0x88);
    FUN_009c720b();
    lVar1 = *param_1;
    lVar2 = param_1[1];
  }
  plVar3 = this_ptr + 2;
  local_34 = ((int)lVar2 + ((int)this_ptr[3] - (int)this_ptr[2])) - (int)lVar1;
  local_50 = plVar3;
  if (0x1400 < local_34) {
    FUN_00925fd0();
    FUN_00926010();
    local_68 = &local_34;
    local_60 = FUN_009595d8;
    local_58 = &LAB_009977a0;
    FUN_00983230();
    local_40 = param_1[1] - *param_1;
    local_68 = (uint *)&local_40;
    local_60 = FUN_00ac1940;
    local_58 = FUN_009baee0;
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILokCert::AddCertificate(const uint32_t, uint32_t &, const vector<uint8_t> &)"
                 ,0x91);
    plVar3 = local_50;
    FUN_009c720b();
  }
  local_48[0] = FUN_0096e139();
  if (((0x1400 < local_48[0] + 4) || (0x1400 < local_48[0])) || ((uint)local_40 != 4)) {
    FUN_00925fd0();
    local_70 = FUN_00926010();
    local_68 = &local_7c;
    local_7c = 4;
    local_60 = FUN_009cac80;
    local_58 = FUN_009cefa0;
    FUN_00983230();
    local_60 = FUN_009595d8;
    local_58 = &LAB_009977a0;
    local_68 = (uint *)&local_40;
    FUN_00983230();
    local_68 = local_48;
    local_60 = FUN_009595d8;
    local_58 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILokCert::AddCertificate(const uint32_t, uint32_t &, const vector<uint8_t> &)"
                 ,0x9d);
    plVar3 = local_50;
    FUN_009c720b();
  }
  FUN_0099eca0(param_1[1],*param_1);
  local_34 = local_34 - 4;
  *(char *)(this_ptr[2] + 2) = (char)(local_34 >> 8);
  *(void*)(this_ptr[2] + 3) = (uint8_t)local_34;
  (**(code **)(*this_ptr + 0x70))(plVar3,local_78);
  return;
}

