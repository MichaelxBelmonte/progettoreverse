// Function: FUN_01f132a0
// Address: 01f132a0
// Size: 911 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "addObject:"
//   "fileURLWithPath:isDirectory:"

void FUN_01f132a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  char cVar2;
  uint8_t uVar3;
  void*puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t **pplVar10;
  int iVar11;
  int64_t *arg1;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_58;
  uint8_t local_50;
  void*local_48;
  uint64_t local_40;
  int local_38;
  
  if (*arg1 != 0) {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    if ((void*)*arg1 != (void*)0x0) {
      local_50 = 0;
      local_58 = (int64_t *)0x0;
      local_48 = (void*)*arg1;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_40._4_4_ = 0;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar11 = -local_40._4_4_;
          }
          else {
            iVar11 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar11);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar11 = 0;
          }
          local_40 = CONCAT44(iVar11,(int)local_40);
        }
        lVar5 = (int64_t)(int)local_40;
        iVar11 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        if (*(int *)((int64_t)local_48 + 0xc) <= iVar11) break;
        plVar1 = *(int64_t **)(local_48[2] + 8 + lVar5 * 8);
        local_58 = plVar1;
        if ((g_026fde10 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
          g_026d1818 = FUN_00d4fe50();
          g_026d1800 = "GNFilePath";
          g_026d1808 = 0x40;
          g_026d1810 = FUN_00041050;
          g_026d1820 = 0;
          ram_00000000026d1828 = 0;
          g_026d1830 = 0;
          ram_00000000026d1838 = 0;
          g_026d1840 = 0;
          ram_00000000026d1848 = 0;
          g_026d1850 = 0;
          ram_00000000026d1858 = 0;
          g_026d1860 = 0;
          ram_00000000026d1868 = 0;
          g_026d1870 = 0;
          ram_00000000026d1878 = 0;
          g_026d1880 = 0;
          ram_00000000026d1888 = 0;
          g_026d1890 = 0;
          ram_00000000026d1898 = 0;
          g_026d18a0 = 0;
          ram_00000000026d18a8 = 0;
          g_026d18b0 = 0;
          ram_00000000026d18b8 = 0;
          g_026d18c0 = 0;
          ___cxa_guard_release();
        }
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar10 = &local_58;
          if (cVar2 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar10 != (int64_t *)0x0) {
          FUN_00d21140();
        }
      }
      FUN_00083b20();
    }
    if (*(int *)((int64_t)puVar4 + 0xc) != 0) {
      _objc_alloc();
      uVar6 = (*PTR__objc_msgSend_024a9998)();
      uVar7 = (*PTR__objc_msgSend_024a9998)();
      local_50 = 0;
      local_58 = (int64_t *)0x0;
      local_38 = 0;
      local_40 = 0;
      local_48 = puVar4;
      if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
        lVar5 = 0;
        do {
          plVar1 = *(int64_t **)(puVar4[2] + lVar5 * 8);
          local_58 = plVar1;
          uVar8 = FUN_00e1d020();
          uVar3 = (**(code **)(*plVar1 + 0x3a0))();
          lVar9 = (*PTR__objc_msgSend_024a9998)(uVar3,uVar8,param_3,param_4,uVar6);
          if (lVar9 != 0) {
            (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,lVar9);
          }
          lVar5 = lVar5 + 1;
          local_40 = CONCAT44(local_40._4_4_,(int)lVar5);
        } while ((int)lVar5 < *(int *)((int64_t)puVar4 + 0xc));
      }
      FUN_00115910();
      lVar5 = (*PTR__objc_msgSend_024a9998)();
      if (lVar5 != 0) {
        (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_00,uVar7);
      }
      (*PTR__objc_release_024a99a0)();
    }
    FUN_00d50b20();
  }
  return;
}

