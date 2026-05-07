// Function: FUN_0037ebb0
// Address: 0037ebb0
// Size: 1076 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"

void FUN_0037ebb0(void)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int iVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  uint32_t uVar8;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  void*local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01c219e0();
  plVar7 = local_78;
  if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  uVar8 = (*g_02572370)();
  if ((plVar7 != (int64_t *)0x0) && (*(int *)((int64_t)plVar7 + 0xc) != 0)) {
    local_70 = '\0';
    local_78 = (int64_t *)0x0;
    local_48 = plVar7;
    local_68 = plVar7;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_50 = puVar3;
    while( true ) {
      lVar4 = (int64_t)(int)local_60;
      iVar6 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar6);
      if (*(int *)((int64_t)local_68 + 0xc) <= iVar6) break;
      local_78 = *(int64_t **)(local_68[2] + 8 + lVar4 * 8);
      (**(code **)(*local_78 + 0x388))();
      plVar7 = local_40;
      if ((g_026fde10 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_40;
        if (cVar2 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      plVar7 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar5 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      cVar2 = (**(code **)(*plVar7 + 0x398))();
      if (cVar2 != '\0') {
        FUN_00b810f0();
        plVar7 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if (plVar7 != (int64_t *)0x0) {
          local_38 = '\0';
          local_40 = plVar7;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar6 = -local_60._4_4_;
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar6 = 0;
        }
        local_60 = CONCAT44(iVar6,(int)local_60);
      }
    }
    uVar8 = FUN_0038d420();
    puVar3 = local_50;
    plVar7 = local_48;
  }
  plVar1 = *(int64_t **)(this_ptr + 0x108);
  if (plVar1 != (int64_t *)0x0) {
    local_98 = 0;
    local_90 = '\0';
    FUN_002ccab0(uVar8,&local_98);
    local_88 = local_78;
    local_80 = 0;
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar1 + 0x978))();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

