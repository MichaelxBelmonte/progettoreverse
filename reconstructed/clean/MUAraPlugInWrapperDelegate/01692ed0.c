// Function: FUN_01692ed0
// Address: 01692ed0
// Size: 1245 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"
// === MUAraPlugInWrapperDelegate properties ===
//                   _cacheWarmUpDoWarmUp
//                   _cacheWarmUpLastStartTime
//                   _hostPlaybackParamsLastStartTime
//                   _cachedLastStartTimeRanges


void FUN_01692ed0(void)

{
  int64_t *plVar1;
  char cVar2;
  char *pcVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  if (this_ptr[0x13] != 0) {
    if (this_ptr[6] != 0) {
      (**(code **)(*this_ptr + 0x5f0))();
    }
    cVar2 = FUN_016ae5f0();
    if (cVar2 != '\0') {
      while( true ) {
        lVar4 = this_ptr[0x15];
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        iVar5 = *(int *)(lVar4 + 0xc);
        FUN_00d50b20();
        if (iVar5 == 0) break;
        FUN_00d50b00();
        lVar4 = this_ptr[0x15];
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00d23340();
        local_38[0] = local_58[0];
        pcVar3 = local_58;
        if (local_58[0] == '\0') {
          pcVar3 = local_38;
        }
        *pcVar3 = '\0';
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        FUN_0168eed0();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    if (*(int *)(this_ptr[0x17] + 0xc) != 0) {
      do {
        FUN_00d23340();
        local_38[0] = local_58[0];
        pcVar3 = local_58;
        if (local_58[0] == '\0') {
          pcVar3 = local_38;
        }
        *pcVar3 = '\0';
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        FUN_016908b0();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      } while (*(int *)(this_ptr[0x17] + 0xc) != 0);
    }
    if (this_ptr[0x15] != 0) {
      local_58[0] = '\0';
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      local_50 = this_ptr[0x15];
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            iVar5 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        plVar1 = (int64_t *)this_ptr[5];
        if ((g_02723560 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_02723548 = "MUAraPlugInWrapperDelegate";
          g_02723558 = 0;
          g_02723550 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (int64_t *)0x0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          lVar4 = FUN_00e86120();
        }
        (**(code **)(*(int64_t *)((int64_t)plVar1 + lVar4) + 0x30))();
      }
      FUN_00277f20();
    }
    FUN_00d216c0();
    if (this_ptr[0x16] != 0) {
      local_58[0] = '\0';
      local_48 = 0xffffffff;
      local_40 = 0;
      iVar5 = 0;
      local_50 = this_ptr[0x16];
      while( true ) {
        if (iVar5 != 0) {
          if (iVar5 < 1) {
            iVar5 = -iVar5;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar5);
            FUN_00d23690();
            local_40 = local_40 + iVar5;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        plVar1 = (int64_t *)this_ptr[5];
        if ((g_02723560 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_02723548 = "MUAraPlugInWrapperDelegate";
          g_02723558 = 0;
          g_02723550 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (int64_t *)0x0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          lVar4 = FUN_00e86120();
        }
        (**(code **)(*(int64_t *)((int64_t)plVar1 + lVar4) + 0x40))();
        iVar5 = local_48._4_4_;
      }
      FUN_00277f20();
    }
    FUN_00d216c0();
    FUN_00d50b00();
    FUN_016897c0();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00e83070();
  }
  FUN_00bd1510();
  return;
}

