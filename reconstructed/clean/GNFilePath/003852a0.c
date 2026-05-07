// Function: FUN_003852a0
// Address: 003852a0
// Size: 897 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "GNList"

uint64_t FUN_003852a0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t this_ptr;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  int64_t *local_70;
  char local_68;
  uint32_t local_5c;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int local_40;
  uint64_t local_3c;
  
  local_5c = param_2;
  (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x3f8))();
  plVar1 = local_58;
  if ((g_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026cd478 = FUN_00d4fe50();
    g_026cd460 = "GNList";
    g_026cd468 = 0x20;
    g_026cd470 = FUN_00018210;
    g_026cd480 = 0;
    ram_00000000026cd488 = 0;
    g_026cd490 = 0;
    g_026cd508 = 0;
    ram_00000000026cd510 = 0;
    g_026cd518 = 0;
    g_026cd51a = 6;
    g_026cd498 = 0;
    ram_00000000026cd4a0 = 0;
    g_026cd4a8 = 0;
    ram_00000000026cd4b0 = 0;
    g_026cd4b8 = 0;
    ram_00000000026cd4c0 = 0;
    g_026cd4c8 = 0;
    ram_00000000026cd4d0 = 0;
    g_026cd4d8 = 0;
    ram_00000000026cd4e0 = 0;
    g_026cd4e8 = 0;
    ram_00000000026cd4f0 = 0;
    g_026cd4f8 = 0;
    ram_00000000026cd500 = 0;
    g_026cd523 = 0;
    g_026cd51b = 0;
    ___cxa_guard_release();
  }
  pplVar7 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if ((g_026fde10 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
      cVar3 = FUN_00e8da30();
      pplVar7 = &local_58;
      if (cVar3 == '\0') {
        pplVar7 = (int64_t **)&g_02802688;
      }
    }
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0037c170();
  plVar2 = local_58;
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((plVar1 != (int64_t *)0x0) && (*(int *)((int64_t)plVar1 + 0xc) != 0)) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_3c = 0;
    lVar6 = 0;
    local_48 = plVar1;
LAB_003853cc:
    local_40 = (int)lVar6;
    if (local_40 < *(int *)((int64_t)plVar1 + 0xc)) goto code_r0x003853d6;
    FUN_00115910();
    uVar5 = CONCAT71((int7)((uint64_t)&local_70 >> 8),1);
    if ((char)local_5c != '\0') {
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      local_3c = 0;
      local_48 = plVar1;
      for (lVar6 = 0; local_40 = (int)lVar6, local_40 < *(int *)((int64_t)plVar1 + 0xc);
          lVar6 = lVar6 + 1) {
        local_58 = *(int64_t **)(plVar1[2] + lVar6 * 8);
        FUN_0037b970();
      }
      FUN_00115910();
      if (plVar2 == (int64_t *)0x0) goto LAB_00385484;
      goto LAB_0038547c;
    }
    goto LAB_00385477;
  }
LAB_00385474:
  uVar5 = 0;
LAB_00385477:
  if (plVar2 != (int64_t *)0x0) {
LAB_0038547c:
    FUN_00d50b20();
  }
LAB_00385484:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
code_r0x003853d6:
  local_70 = *(int64_t **)(plVar1[2] + lVar6 * 8);
  local_68 = '\0';
  local_58 = local_70;
  cVar3 = FUN_00d23d70();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = lVar6 + 1;
  if (cVar3 == '\0') goto LAB_0038546b;
  goto LAB_003853cc;
LAB_0038546b:
  FUN_00115910();
  goto LAB_00385474;
}

