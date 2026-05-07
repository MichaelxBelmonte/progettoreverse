// Function: FUN_009a4112
// Address: 009a4112
// Size: 10773 bytes
// Class: Unknown
// String references:
//   "IlokUsbException"
//   "%s::%s Exception in the result packet. DebugMsg = %s"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Bad result frame size = %d "
//   "[%d] UTILS_CRC32 error checking the CRC of the result frame"
//   "There are no pending iLok2 commands; so no result packet cannot be processed"
//   "virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &...
//   "The result packet's SerialNumber (0x%X) does not match the SerialNumber (0x%X) expected by ILok2Com...
//   "Result packet ConnectionID does not match that of the ILok2Commander"
//   "Wrong iLok interface version (%d) in the result packet.  Expected version 2"
//   "Result packet is out of sequence with next queued command"
//   "Result packet (seq# %d) is for a command already removed from the command queue (seq# %d)"
//   "Result packet (seq# %d) is for a command not queued (seq# %d) yet"
//   "Unexpectedly did not find the queued command frame corresponding the result packet"
//   "ILok2 result frame stalled, meaning the connection was lost, although the iLok2 is still connected....
//   "The sequence number in the result frame (%d) and in the packet target (%d) don't match "
//   "The result frame's previous sequence number (%d) is too low.  It should be >= %d"
//   "The result frame's previous sequence number is too high"
//   "ILok2 CommandID (0x%X) returned firmware error (%d) in the result frame"
//   "For the extra result data, the size (%d) in the result frame does not match the vector size (%d)"
//   ... +39 more

int FUN_009a4112(uint *param_1,uint32_t param_2,uint **param_3,void*param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint *puVar7;
  char cVar8;
  char *pcVar9;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  size_t sVar11;
  uint **ppuVar12;
  ulong uVar13;
  uint *local_c20;
  code *local_c18;
  code *local_c10;
  uint local_c08;
  uint local_c04;
  uint **local_c00;
  uint local_bf4;
  uint local_bf0;
  uint local_bec;
  void*local_be8;
  uint64_t local_be0;
  uint8_t local_bc8 [8];
  uint **local_bc0;
  uint local_bb4;
  uint **local_bb0;
  code *local_ba8;
  code *local_ba0;
  uint *local_2f8 [72];
  uint8_t local_b8 [4];
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a4;
  uint local_a0;
  uint32_t uStack_9c;
  uint local_98;
  uint32_t uStack_94;
  uint local_90;
  uint32_t uStack_8c;
  uint local_88;
  uint32_t uStack_84;
  uint16_t local_80;
  uint16_t uStack_7e;
  uint32_t uStack_7c;
  uint64_t local_78;
  uint64_t local_70;
  int64_t local_68;
  uint **local_60;
  uint8_t local_58 [8];
  int64_t local_50;
  int64_t local_48;
  uint64_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (param_1 != (uint *)0x0) {
    *param_1 = 0xffffffff;
  }
  local_bb4 = *(int *)(arg1 + 0x100) - *(int *)(arg1 + 0xf8);
  local_bc8._4_4_ = *(int *)(arg1 + 0x118) - *(int *)(arg1 + 0x110);
  ppuVar12 = param_3;
  local_be8 = param_4;
  if (this_ptr[3] == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,0x102d);
    FUN_009c720b();
  }
  local_bc0 = param_3;
  if ((this_ptr[0x7d] != 0) && (*(int64_t *)(arg1 + 0x10) != this_ptr[0x7d])) {
    FUN_00925fd0();
    local_c00 = (uint **)CONCAT44(local_c00._4_4_,param_2);
    FUN_00926010();
    local_2f8[0] = *(uint **)(arg1 + 0x10);
    local_bb0 = local_2f8;
    local_ba8 = FUN_009ada80;
    local_ba0 = FUN_0094f614;
    FUN_00983230();
    local_ba8 = FUN_009ada80;
    local_ba0 = FUN_0094f614;
    local_bb0 = (uint **)(this_ptr + 0x7d);
    FUN_00983230();
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,0x1038);
    param_2 = local_c00._0_4_;
    FUN_009c720b();
  }
  if (*(int *)(arg1 + 0x18) != *(int *)((int64_t)this_ptr + 0x404)) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,0x103d);
    FUN_009c720b();
  }
  if (*(int *)(arg1 + 0x20) != 2) {
    FUN_00925fd0();
    FUN_00926010();
    local_bb0 = local_2f8;
    local_2f8[0] = (uint *)CONCAT44(local_2f8[0]._4_4_,*(void*)(arg1 + 0x20));
    local_ba8 = FUN_009595d8;
    local_ba0 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,"stem/Library/Frameworks/AppKit.framework/Versions/C/AppKit");
    FUN_009c720b();
  }
  sVar11 = (size_t)ppuVar12;
  uVar13 = (ulong)param_4;
  lVar1 = this_ptr[2];
  lVar2 = *(int64_t *)(lVar1 + 0x10);
  local_70 = *(int64_t *)(lVar1 + 0x18);
  local_40 = *(int64_t *)(lVar1 + 0x48);
  local_48 = *(int64_t *)(lVar1 + 0x40);
  local_50 = *(int64_t *)(lVar1 + 0x38);
  local_58 = *(uint8_t (*) [8])(lVar1 + 0x30);
  local_60 = *(uint ***)(lVar1 + 0x28);
  local_68 = *(int64_t *)(lVar1 + 0x20);
  local_78._4_4_ = (uint)((uint64_t)lVar2 >> 0x20);
  local_bf0 = local_78._4_4_ & 0x7fffffff;
  local_bc8._0_4_ = *(uint *)(arg1 + 0x1c);
  local_78 = lVar2;
  if ((char)param_2 == '\0') {
    if ((uint)local_bc8._0_4_ < local_bf0) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)local_bc8;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      local_bb0 = (uint **)&local_bf0;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,"t.framework/Versions/C/AppKit");
      FUN_009c720b();
    }
    if (*(uint *)(this_ptr + 0x83) <= (uint)local_bc8._0_4_) {
      local_c00 = (uint **)(this_ptr + 0x83);
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)local_bc8;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      local_bb0 = local_c00;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,"ework/Versions/C/AppKit");
      FUN_009c720b();
    }
    sVar11 = (size_t)ppuVar12;
    uVar13 = (ulong)param_4;
    if (local_bf0 != local_bc8._0_4_) {
      plVar10 = (int64_t *)this_ptr[2];
      do {
        lVar1 = *plVar10;
        *(int64_t *)(lVar1 + 8) = plVar10[1];
        plVar10 = (int64_t *)plVar10[1];
        *plVar10 = lVar1;
        this_ptr[3] = this_ptr[3] + -1;
        operator_delete(plVar10);
        if (this_ptr[3] == 0) {
          FUN_00925fd0();
          FUN_00926010();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,"ions/C/AppKit");
          FUN_009c720b();
        }
        sVar11 = (size_t)ppuVar12;
        uVar13 = (ulong)param_4;
        plVar10 = (int64_t *)this_ptr[2];
        lVar1 = plVar10[2];
        local_70 = plVar10[3];
        local_40 = plVar10[9];
        local_48 = plVar10[8];
        local_50 = plVar10[7];
        local_58 = (uint8_t  [8])plVar10[6];
        local_60 = (uint **)plVar10[5];
        local_68 = plVar10[4];
        local_78._4_4_ = (uint)((uint64_t)lVar1 >> 0x20);
        local_bf0 = local_78._4_4_ & 0x7fffffff;
        local_78 = lVar1;
      } while (local_bf0 != local_bc8._0_4_);
    }
  }
  else if (local_bc8._0_4_ != local_bf0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,"eworks/AppKit.framework/Versions/C/AppKit");
    FUN_009c720b();
  }
  plVar10 = (int64_t *)this_ptr[2];
  lVar1 = *plVar10;
  *(int64_t *)(lVar1 + 8) = plVar10[1];
  pcVar9 = (char *)plVar10[1];
  *(int64_t *)pcVar9 = lVar1;
  this_ptr[3] = this_ptr[3] + -1;
  operator_delete(pcVar9);
  if (*(char *)(arg1 + 0x161) != '\0') {
    if ((*(byte *)(arg1 + 0x40) & 1) == 0) {
      uVar6 = (uint64_t)(*(byte *)(arg1 + 0x40) >> 1);
    }
    else {
      uVar6 = *(uint64_t *)(arg1 + 0x48);
    }
    if (uVar6 == 0x10) {
      sVar11 = 0x10;
      iVar3 = std::string::compare(0x1fca7cd,0xffffffff,(char *)&MACH_HEADER.ncmds,uVar13);
      if (iVar3 == 0) {
        if (*(int *)(arg1 + 0x98) == 0x21) {
          sVar11 = 0x1f;
          (**(code **)(*this_ptr + 0x260))(0,0x2a9f3eff);
          FUN_00925fd0();
          FUN_00926010();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,0x1093);
          FUN_009c720b();
        }
        FUN_00925fd0();
        FUN_00926010();
        FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                     ,0x1097);
        FUN_009c6d8b();
      }
    }
    FUN_00925fd0();
    local_c00 = (uint **)FUN_00926010();
    local_ba8 = FUN_009b6370;
    local_ba0 = FUN_0094ef70;
    local_bb0 = (uint **)(arg1 + 0x40);
    FUN_00983230();
    local_bb0 = (uint **)(arg1 + 0x80);
    local_ba8 = FUN_009b6370;
    local_ba0 = FUN_0094ef70;
    FUN_00983230();
    local_bb0 = (uint **)(arg1 + 0xb8);
    local_ba8 = FUN_009b6370;
    local_ba0 = FUN_0094ef70;
    FUN_00983230();
    pcVar9 = 
    "virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
    ;
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,"Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices")
    ;
    FUN_009c720b();
  }
  if (3 < (local_bb4 << 0x1c | local_bb4 - 0x10 >> 4)) {
    FUN_00925fd0();
    FUN_00926010();
    local_bb0 = (uint **)&local_bb4;
    local_ba8 = FUN_009595d8;
    local_ba0 = &LAB_009977a0;
    FUN_00983230();
    pcVar9 = 
    "virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
    ;
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,"works/ApplicationServices.framework/Versions/A/ApplicationServices");
    FUN_009c720b();
  }
  uVar4 = local_bb4;
  _memcpy(pcVar9,(void *)(uint64_t)local_bb4,sVar11);
  local_be0._4_4_ = (int)local_70;
  if ((uVar4 != 0x10) && ((int)local_70 == 6)) {
    local_bb0 = local_60;
    (**(code **)(*this_ptr + 0x290))();
  }
  FUN_0098ce6c(0,1,this_ptr + 0x8a);
  FUN_0098d718();
  local_be0._0_4_ = FUN_0097420a(local_b8);
  local_c04 = local_b4 & 0x7fffffff;
  if ((uint)local_be0 != 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_bb0 = (uint **)&local_be0;
    local_ba8 = FUN_009595d8;
    local_ba0 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,"dation");
    FUN_009c720b();
  }
  if (local_c04 != local_bc8._0_4_) {
    FUN_00925fd0();
    FUN_00926010();
    local_bb0 = (uint **)&local_c04;
    local_ba8 = FUN_009595d8;
    local_ba0 = &LAB_009977a0;
    FUN_00983230();
    local_bb0 = (uint **)local_bc8;
    local_ba8 = FUN_009595d8;
    local_ba0 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,"");
    FUN_009c720b();
  }
  uVar5 = 0;
  if (local_be0._4_4_ == 0x10) {
LAB_009a4ba2:
    *(void*)((int64_t)this_ptr + 0x3fc) = uVar5;
  }
  else if (*(int *)((int64_t)this_ptr + 0x3fc) == 1) {
    *(void*)((int64_t)this_ptr + 0x3fc) = 0;
    uVar5 = 1;
    FUN_0098ef68();
    goto LAB_009a4ba2;
  }
  if ((*(uint *)((int64_t)this_ptr + 0x404) & 0xf) == 0xf) {
    local_bec = 0;
    *(void*)((int64_t)this_ptr + 0x414) = 0;
  }
  else {
    local_bec = local_b0;
  }
  if (param_1 != (uint *)0x0) {
    *param_1 = local_bec;
  }
  if (local_bec < *(uint *)((int64_t)this_ptr + 0x414)) {
    FUN_00925fd0();
    FUN_00926010();
    local_bb0 = (uint **)&local_bec;
    local_ba8 = FUN_009595d8;
    local_ba0 = &LAB_009977a0;
    FUN_00983230();
    local_ba8 = FUN_009595d8;
    local_ba0 = &LAB_009977a0;
    local_bb0 = (uint **)((int64_t)this_ptr + 0x414);
    FUN_00983230();
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,"rameworks/CoreGraphics.framework/Versions/A/CoreGraphics");
    FUN_009c720b();
  }
  if ((uint)local_bc8._0_4_ < local_bec) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,"orks/CoreGraphics.framework/Versions/A/CoreGraphics");
    FUN_009c720b();
  }
  *(uint *)((int64_t)this_ptr + 0x414) = local_bec + 1;
  local_be0._0_4_ = local_ac ^ local_70._4_4_;
  if ((uint)local_be0 != 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_bb0 = (uint **)((int64_t)&local_be0 + 4);
    local_ba8 = FUN_009595d8;
    local_ba0 = &LAB_009977a0;
    FUN_00983230();
    local_bb0 = (uint **)&local_be0;
    local_ba8 = FUN_009595d8;
    local_ba0 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                 ,"ework/Versions/A/CoreGraphics");
    local_bb0 = (uint **)CONCAT44(local_bb0._4_4_,(uint)local_be0);
    FUN_009c04cc();
  }
  if (local_be0._4_4_ == -0x7fffffe3) {
LAB_009a4e7d:
    uVar5 = local_bc8._4_4_;
    if (local_bc8._4_4_ == 0) goto LAB_009a4fb5;
    if (((local_bc8._4_4_ & 3) != 0) || (uVar4 = FUN_0098da94(), (uint)uVar5 % uVar4 != 0)) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)(local_bc8 + 4);
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      uVar5 = FUN_0098da94();
      local_bb0 = &local_c20;
      local_c20 = (uint *)CONCAT44(local_c20._4_4_,uVar5);
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,0x122a);
      FUN_009c720b();
    }
    FUN_009a6d58();
    if (local_be0._4_4_ != 0x29) {
      FUN_0098d41a();
      if ((local_be0._4_4_ != -0x7fffffe3) &&
         (local_be0._0_4_ = FUN_0097420a(0,1), (uint)local_be0 != 0)) {
        FUN_00925fd0();
        FUN_00926010();
        local_bb0 = (uint **)&local_be0;
        local_ba8 = FUN_009595d8;
        local_ba0 = &LAB_009977a0;
        FUN_00983230();
        FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                     ,"eworks/CoreServices.framework/Versions/A/CoreServices");
        FUN_009c720b();
      }
      if (*(int *)((int64_t)this_ptr + 0x3fc) == 1) {
        *(void*)((int64_t)this_ptr + 0x3fc) = 0;
        FUN_0098ee68();
        *(void*)((int64_t)this_ptr + 0x3fc) = 1;
      }
      goto LAB_009a50d5;
    }
switchD_009a51ad_caseD_3:
    (**(code **)(*this_ptr + 0x2b8))(&local_78,local_bb4,local_b8,local_bc0);
    goto LAB_009a6abd;
  }
  if ((local_be0._4_4_ != 0x29) || (local_bc8._4_4_ != 0)) {
    if (local_bc8._4_4_ != local_a4) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = &local_c20;
      local_c20 = (uint *)CONCAT44(local_c20._4_4_,local_a4);
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      local_bb0 = (uint **)(local_bc8 + 4);
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,"ics");
      FUN_009c720b();
    }
    goto LAB_009a4e7d;
  }
LAB_009a4fb5:
  local_be8[1] = *local_be8;
LAB_009a50d5:
  ppuVar12 = local_bc0;
  if (0x29 < local_be0._4_4_) {
    if (local_be0._4_4_ < 0x30) {
      if (local_be0._4_4_ != 0x2a) {
        if (local_be0._4_4_ != 0x2e) goto switchD_009a51ad_caseD_3;
        if (local_bb4 < 0x40) {
          FUN_00925fd0();
          FUN_00926010();
          local_bb0 = (uint **)&local_bb4;
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,&g_00001464);
          FUN_009c720b();
        }
        local_bc0[4] = (uint *)CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
        local_bc0[3] = (uint *)CONCAT44(uStack_84,local_88);
        local_bc0[2] = (uint *)CONCAT44(uStack_8c,local_90);
        local_bc0[1] = (uint *)CONCAT44(uStack_94,local_98);
        *local_bc0 = (uint *)CONCAT44(uStack_9c,local_a0);
        FUN_009af70c();
        local_bf4 = FUN_009afe36();
        if (((local_40._1_1_ < local_bf4) && (*(uint *)((int64_t)this_ptr + 0x3f4) != 5)) &&
           (*(uint *)((int64_t)this_ptr + 0x3f4) < 0xd)) {
          FUN_00925fd0();
          FUN_00926010();
          local_c20 = &local_c08;
          local_c08 = (uint)local_40._1_1_;
          local_c18 = FUN_009595d8;
          local_c10 = &LAB_009977a0;
          FUN_00983230();
          local_c20 = &local_bf4;
          local_c18 = FUN_009595d8;
          local_c10 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,&g_00001480);
          FUN_009c720b();
        }
        goto LAB_009a6ab1;
      }
      if (local_bb4 < 0x20) {
        FUN_00925fd0();
        FUN_00926010();
        local_bb0 = (uint **)&local_bb4;
        local_ba8 = FUN_009595d8;
        local_ba0 = &LAB_009977a0;
        FUN_00983230();
        FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                     ,&g_000014a8);
        FUN_009c720b();
      }
    }
    else {
      if (local_be0._4_4_ == 0x30) {
        if (local_bb4 < 0x40) {
          FUN_00925fd0();
          FUN_00926010();
          local_bb0 = (uint **)&local_bb4;
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,&g_0000148a);
          FUN_009c720b();
        }
        goto LAB_009a5727;
      }
      if (local_be0._4_4_ == 0x38) {
        if (local_bb4 < 0x20) {
          FUN_00925fd0();
          FUN_00926010();
          local_bb0 = (uint **)&local_bb4;
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,&g_00001412);
          FUN_009c720b();
        }
        *(uint *)ppuVar12 = local_a0;
        if ((local_a0 != 0) && ((uint)local_40 != local_a0)) {
          FUN_00925fd0();
          FUN_00926010();
          local_bb0 = &local_c20;
          local_c20 = (uint *)CONCAT44(local_c20._4_4_,(uint)local_40);
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          local_bb0 = local_bc0;
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,&g_00001422);
          FUN_009c720b();
        }
        goto LAB_009a6abd;
      }
      if (local_be0._4_4_ != 0x3c) goto switchD_009a51ad_caseD_3;
      if (local_bb4 < 0x20) {
        FUN_00925fd0();
        FUN_00926010();
        local_bb0 = (uint **)&local_bb4;
        local_ba8 = FUN_009595d8;
        local_ba0 = &LAB_009977a0;
        FUN_00983230();
        FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                     ,&g_0000142d);
        FUN_009c720b();
      }
    }
LAB_009a5696:
    *ppuVar12 = (uint *)CONCAT44(uStack_9c,local_a0);
    goto LAB_009a6abd;
  }
  switch(local_be0._4_4_) {
  case 1:
    if (local_bb4 < 0x40) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,"ervices");
      FUN_009c720b();
    }
    local_bc0[4] = (uint *)CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
    local_bc0[3] = (uint *)CONCAT44(uStack_84,local_88);
    local_bc0[2] = (uint *)CONCAT44(uStack_8c,local_90);
    local_bc0[1] = (uint *)CONCAT44(uStack_94,local_98);
    *local_bc0 = (uint *)CONCAT44(uStack_9c,local_a0);
    (**(code **)(*this_ptr + 0x278))(local_bc0,arg1,local_be8);
    break;
  case 2:
    if (local_bb4 < 0x20) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,"");
      FUN_009c720b();
    }
    *(void*)local_bc0 = (uint8_t)local_a0;
    (**(code **)(*this_ptr + 0x280))(local_be8);
    break;
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    goto switchD_009a51ad_caseD_3;
  case 5:
    if (local_bb4 < 0x30) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,0x1294);
      FUN_009c720b();
    }
    goto LAB_009a638c;
  case 0xf:
    if (local_bb4 < 0x20) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,0x12fe);
      FUN_009c720b();
    }
    puVar7 = (uint *)CONCAT44(uStack_9c,local_a0);
    *local_bc0 = puVar7;
    if (*(int *)((int64_t)this_ptr + 0x3fc) == 2) {
      *(void*)((int64_t)this_ptr + 0x3fc) = 0;
      FUN_0098ef68(local_bc0,8);
      *(void*)((int64_t)this_ptr + 0x3fc) = 2;
      puVar7 = (uint *)(uint64_t)*(uint *)local_bc0;
    }
    if (((uint)puVar7 < (uint)local_58._0_4_) ||
       (((uint)puVar7 == local_58._0_4_ &&
        (*(uint *)((int64_t)local_bc0 + 4) < (uint)local_58._4_4_)))) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = local_bc0;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      local_bb0 = (uint **)((int64_t)local_bc0 + 4);
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      local_bb0 = (uint **)local_58;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      local_bb0 = (uint **)(local_58 + 4);
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,"n.framework/Versions/C/Foundation");
      FUN_009c720b();
    }
    break;
  case 0x10:
    if (local_bb4 < 0x40) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,"rk/Versions/C/Foundation");
      FUN_009c720b();
    }
    local_bc0[4] = (uint *)CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
    local_bc0[3] = (uint *)CONCAT44(uStack_84,local_88);
    local_bc0[2] = (uint *)CONCAT44(uStack_8c,local_90);
    local_bc0[1] = (uint *)CONCAT44(uStack_94,local_98);
    *local_bc0 = (uint *)CONCAT44(uStack_9c,local_a0);
    (**(code **)(*this_ptr + 0x288))(local_be8);
    break;
  case 0x15:
    if (local_bb4 < 0x40) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,"work/Versions/A/ImageIO");
      FUN_009c720b();
    }
    local_bc0[3] = (uint *)CONCAT44(uStack_84,local_88);
    local_bc0[2] = (uint *)CONCAT44(uStack_8c,local_90);
    local_bc0[1] = (uint *)CONCAT44(uStack_94,local_98);
    *local_bc0 = (uint *)CONCAT44(uStack_9c,local_a0);
    (**(code **)(*this_ptr + 0x2a0))();
    break;
  case 0x16:
    if (local_bb4 < 0x20) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,"mageIO");
      FUN_009c720b();
    }
    *(uint *)ppuVar12 = local_a0;
    break;
  case 0x17:
    if (local_bb4 < 0x30) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,0x13a9);
      FUN_009c720b();
    }
    goto LAB_009a5735;
  case 0x18:
    if (local_bb4 < 0x40) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,"b/libobjc.A.dylib");
      FUN_009c720b();
    }
LAB_009a5727:
    *(uint *)(ppuVar12 + 4) = CONCAT22(uStack_7e,local_80);
    goto LAB_009a572d;
  case 0x19:
    if (local_bb4 < 0x30) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,"b");
      FUN_009c720b();
    }
LAB_009a638c:
    *(uint *)(ppuVar12 + 2) = local_90;
LAB_009a5740:
    puVar7 = (uint *)CONCAT44(uStack_9c,local_a0);
    ppuVar12[1] = (uint *)CONCAT44(uStack_94,local_98);
LAB_009a5752:
    *ppuVar12 = puVar7;
    break;
  case 0x1a:
    if (local_bb4 < 0x20) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,0x13e0);
      FUN_009c720b();
    }
    *local_bc0 = (uint *)CONCAT44(uStack_9c,local_a0);
    FUN_009af70c();
    local_bf4 = FUN_009afe36();
    if (local_40._3_1_ < local_bf4) {
      if (*(uint *)((int64_t)this_ptr + 0x3f4) == 5) {
        if ((int)this_ptr[0x7f] == 0) {
LAB_009a6965:
          FUN_00925fd0();
          FUN_00926010();
          local_c20 = &local_c08;
          local_c08 = (uint)local_40._3_1_;
          local_c18 = FUN_009595d8;
          local_c10 = &LAB_009977a0;
          FUN_00983230();
          local_c20 = &local_bf4;
          local_c18 = FUN_009595d8;
          local_c10 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,0x1400);
          FUN_009c720b();
        }
      }
      else if (*(uint *)((int64_t)this_ptr + 0x3f4) < 0xd) goto LAB_009a6965;
    }
    if (((char)local_40 == '\0') != (*(char *)((int64_t)local_bc0 + 4) == '\0')) {
      FUN_00925fd0();
      FUN_00926010();
      local_c20 = (uint *)&local_40;
      local_c18 = FUN_0094fb68;
      local_c10 = FUN_0094fb6e;
      FUN_00983230();
      local_c20 = (uint *)((int64_t)local_bc0 + 4);
      local_c18 = FUN_0094fb68;
      local_c10 = FUN_0094fb6e;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,&g_00001408);
      FUN_009c720b();
    }
LAB_009a6ab1:
    FUN_009af9a6();
    break;
  case 0x1b:
    if (local_bb4 < 0x40) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,&g_00001441);
      FUN_009c720b();
    }
    local_bc0[3] = (uint *)CONCAT44(uStack_84,local_88);
    local_bc0[2] = (uint *)CONCAT44(uStack_8c,local_90);
    local_bc0[1] = (uint *)CONCAT44(uStack_94,local_98);
    *local_bc0 = (uint *)CONCAT44(uStack_9c,local_a0);
    (**(code **)(*this_ptr + 0x2a0))();
    break;
  case 0x1c:
    if (local_bb4 < 0x40) {
      FUN_00925fd0();
      FUN_00926010();
      local_bb0 = (uint **)&local_bb4;
      local_ba8 = FUN_009595d8;
      local_ba0 = &LAB_009977a0;
      FUN_00983230();
      FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                   ,&g_00001452);
      FUN_009c720b();
    }
    local_bc0[3] = (uint *)CONCAT44(uStack_84,local_88);
    local_bc0[2] = (uint *)CONCAT44(uStack_8c,local_90);
    local_bc0[1] = (uint *)CONCAT44(uStack_94,local_98);
    *local_bc0 = (uint *)CONCAT44(uStack_9c,local_a0);
    (**(code **)(*this_ptr + 0x2a0))();
    break;
  default:
    switch(local_be0._4_4_) {
    case -0x7fffffcf:
      if (local_bb4 < 0x40) {
        FUN_00925fd0();
        FUN_00926010();
        local_bb0 = (uint **)&local_bb4;
        local_ba8 = FUN_009595d8;
        local_ba0 = &LAB_009977a0;
        FUN_00983230();
        FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                     ,&g_000014b5);
        FUN_009c720b();
      }
      ppuVar12[4] = (uint *)CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
      break;
    case -0x7fffffce:
      if (local_bb4 < 0x40) {
        FUN_00925fd0();
        FUN_00926010();
        local_bb0 = (uint **)&local_bb4;
        local_ba8 = FUN_009595d8;
        local_ba0 = &LAB_009977a0;
        FUN_00983230();
        FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                     ,&g_000014d7);
        FUN_009c720b();
      }
      break;
    case -0x7fffffcd:
      if (local_bb4 < 0x40) {
        FUN_00925fd0();
        FUN_00926010();
        local_bb0 = (uint **)&local_bb4;
        local_ba8 = FUN_009595d8;
        local_ba0 = &LAB_009977a0;
        FUN_00983230();
        FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                     ,&g_000014f5);
        FUN_009c720b();
      }
      *(void*)(ppuVar12 + 4) = local_80;
      break;
    case -0x7fffffcc:
      if (local_bb4 < 0x40) {
        FUN_00925fd0();
        FUN_00926010();
        local_bb0 = (uint **)&local_bb4;
        local_ba8 = FUN_009595d8;
        local_ba0 = &LAB_009977a0;
        FUN_00983230();
        FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                     ,&g_00001525);
        FUN_009c720b();
      }
      break;
    case -0x7fffffcb:
      if (local_bb4 < 0x30) {
        FUN_00925fd0();
        FUN_00926010();
        local_bb0 = (uint **)&local_bb4;
        local_ba8 = FUN_009595d8;
        local_ba0 = &LAB_009977a0;
        FUN_00983230();
        FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                     ,&g_00001543);
        FUN_009c720b();
      }
      *(uint *)(ppuVar12 + 1) = local_98;
      puVar7 = (uint *)CONCAT44(uStack_9c,local_a0);
      goto LAB_009a5752;
    case -0x7fffffca:
      if (local_bb4 < 0x20) {
        FUN_00925fd0();
        FUN_00926010();
        local_bb0 = (uint **)&local_bb4;
        local_ba8 = FUN_009595d8;
        local_ba0 = &LAB_009977a0;
        FUN_00983230();
        FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                     ,&g_00001557);
        FUN_009c720b();
      }
      goto LAB_009a5696;
    default:
      switch(local_be0._4_4_) {
      case -0x7ffffff2:
        *(void*)((int64_t)this_ptr + 0x431) = 0;
        if (local_bb4 < 0x40) {
          FUN_00925fd0();
          FUN_00926010();
          local_bb0 = (uint **)&local_bb4;
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,"ry/Frameworks/CoreText.framework/Versions/A/CoreText");
          FUN_009c720b();
        }
        *(uint *)(ppuVar12 + 3) = local_88;
        ppuVar12[2] = (uint *)CONCAT44(uStack_8c,local_90);
        puVar7 = (uint *)CONCAT44(uStack_9c,local_a0);
        ppuVar12[1] = (uint *)CONCAT44(uStack_94,local_98);
        *ppuVar12 = puVar7;
        if (local_a0 == 0xffffffff) {
          uVar4 = 0xffffffff;
          cVar8 = local_58[0];
        }
        else {
          if (0x12ff < *(uint *)((int64_t)ppuVar12 + 0xc) - 0x101) {
            FUN_00925fd0();
            FUN_00926010();
            local_bb0 = (uint **)((int64_t)ppuVar12 + 0xc);
            local_ba8 = FUN_009595d8;
            local_ba0 = &LAB_009977a0;
            FUN_00983230();
            FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                         ,"rk/Versions/A/CoreText");
            FUN_009c720b();
            puVar7 = (uint *)(uint64_t)*(uint *)ppuVar12;
          }
          uVar4 = (uint)puVar7;
          cVar8 = local_58[0];
          if (((local_58[0] != '\0') && (uVar4 != 0xffffffff)) &&
             ((local_58[1] == '\0' || (*(uint *)((int64_t)ppuVar12 + 4) != local_58._4_4_)))) {
            if (local_bc8._4_4_ == 0) {
              FUN_00925fd0();
              FUN_00926010();
              FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                           ,"");
              FUN_009c720b();
            }
            break;
          }
        }
        if (local_bc8._4_4_ != 0) {
          FUN_00925fd0();
          FUN_00926010();
          local_bb0 = (uint **)(local_bc8 + 4);
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,0x12eb);
          FUN_009c720b();
          cVar8 = local_58[0];
          uVar4 = *(uint *)ppuVar12;
        }
        if ((cVar8 != '\0') && (uVar4 != 0xffffffff)) {
          *(void*)((int64_t)this_ptr + 0x431) = 1;
        }
        break;
      default:
        goto switchD_009a51ad_caseD_3;
      case -0x7fffffef:
        if (local_bb4 < 0x40) {
          FUN_00925fd0();
          FUN_00926010();
          local_bb0 = (uint **)&local_bb4;
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,"C/Foundation");
          FUN_009c720b();
        }
        local_bc0[4] = (uint *)CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
        local_bc0[3] = (uint *)CONCAT44(uStack_84,local_88);
        local_bc0[2] = (uint *)CONCAT44(uStack_8c,local_90);
        local_bc0[1] = (uint *)CONCAT44(uStack_94,local_98);
        *local_bc0 = (uint *)CONCAT44(uStack_9c,local_a0);
        (**(code **)(*this_ptr + 0x2a0))();
        if (0x1f < *(uint *)(local_bc0 + 4)) {
          FUN_00925fd0();
          FUN_00926010();
          local_bb0 = local_bc0 + 4;
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          local_bb0 = &local_c20;
          local_c20 = (uint *)CONCAT44(local_c20._4_4_,0x1f);
          local_ba8 = FUN_009cac80;
          local_ba0 = FUN_009cefa0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,0x134c);
          FUN_009c720b();
        }
        break;
      case -0x7fffffee:
        if (local_bb4 < 0x40) {
          FUN_00925fd0();
          FUN_00926010();
          local_bb0 = (uint **)&local_bb4;
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,0x1355);
          FUN_009c720b();
        }
        local_bc0[3] = (uint *)CONCAT44(uStack_84,local_88);
        local_bc0[2] = (uint *)CONCAT44(uStack_8c,local_90);
        local_bc0[1] = (uint *)CONCAT44(uStack_94,local_98);
        *local_bc0 = (uint *)CONCAT44(uStack_9c,local_a0);
        (**(code **)(*this_ptr + 0x2a0))();
        break;
      case -0x7fffffed:
        if (local_bb4 < 0x40) {
          FUN_00925fd0();
          FUN_00926010();
          local_bb0 = (uint **)&local_bb4;
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,"m/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO");
          FUN_009c720b();
        }
        local_bc0[3] = (uint *)CONCAT44(uStack_84,local_88);
        local_bc0[2] = (uint *)CONCAT44(uStack_8c,local_90);
        local_bc0[1] = (uint *)CONCAT44(uStack_94,local_98);
        *local_bc0 = (uint *)CONCAT44(uStack_9c,local_a0);
        (**(code **)(*this_ptr + 0x2a0))();
        break;
      case -0x7fffffec:
        if (local_bb4 < 0x40) {
          FUN_00925fd0();
          FUN_00926010();
          local_bb0 = (uint **)&local_bb4;
          local_ba8 = FUN_009595d8;
          local_ba0 = &LAB_009977a0;
          FUN_00983230();
          FUN_00928ab0("virtual uint32_t pace::ILok2Commander::ProcessResult(const pace::eden::thrift::ilok::ResultPacket &, bool, uint32_t *, pace::ILok2ResultPayLoadStruct &, vector<uint8_t> &)"
                       ,"rks/ImageIO.framework/Versions/A/ImageIO");
          FUN_009c720b();
        }
        local_bc0[3] = (uint *)CONCAT44(uStack_84,local_88);
        local_bc0[2] = (uint *)CONCAT44(uStack_8c,local_90);
        local_bc0[1] = (uint *)CONCAT44(uStack_94,local_98);
        *local_bc0 = (uint *)CONCAT44(uStack_9c,local_a0);
        (**(code **)(*this_ptr + 0x2a0))();
      }
      goto LAB_009a6abd;
    }
LAB_009a572d:
    ppuVar12[3] = (uint *)CONCAT44(uStack_84,local_88);
LAB_009a5735:
    ppuVar12[2] = (uint *)CONCAT44(uStack_8c,local_90);
    goto LAB_009a5740;
  }
LAB_009a6abd:
  iVar3 = local_be0._4_4_;
  if (((char)this_ptr[0x85] != '\0') && (local_bf0 <= *(uint *)((int64_t)this_ptr + 0x41c))) {
    *(void*)(this_ptr + 0x85) = 0;
    *(void*)((int64_t)this_ptr + 0x41c) = 0xffffffff;
  }
  FUN_0098ce7c();
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return iVar3;
  }
                      ___stack_chk_fail();
}

