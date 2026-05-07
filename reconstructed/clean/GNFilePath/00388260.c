// Function: FUN_00388260
// Address: 00388260
// Size: 1472 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "GNList"

uint64_t FUN_00388260(void)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t **pplVar8;
  int64_t lVar9;
  bool bVar10;
  uint32_t uVar11;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  uint32_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01d384d0();
  lVar9 = g_027e92c0;
  if (g_027e92c0 != 0) {
    FUN_00d50b00();
  }
  lVar5 = FUN_01cac500();
  lVar1 = *(int64_t *)(this_ptr + 0xe8);
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 == lVar1) {
    return 0;
  }
  uVar11 = FUN_01d384d0();
  local_a0 = g_026fcec0;
  if (g_026fcec0 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_01cac990(uVar11,&local_a0);
  plVar7 = local_78;
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
  pplVar8 = (int64_t **)&g_02802688;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') {
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
      cVar2 = FUN_00e8da30();
      pplVar8 = &local_78;
      if (cVar2 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
    }
  }
  plVar7 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_50 = plVar7;
  if (plVar7 != (int64_t *)0x0) {
    local_70 = '\0';
    local_78 = (int64_t *)0x0;
    local_58 = 0;
    local_60 = 0;
    local_68 = plVar7;
    if (*(int *)((int64_t)plVar7 + 0xc) < 1) {
      FUN_00115910();
    }
    else {
      lVar9 = 0;
      bVar10 = false;
      do {
        plVar7 = *(int64_t **)(local_50[2] + lVar9 * 8);
        local_78 = plVar7;
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*plVar7 + 0x4c0))();
        if (cVar2 != '\0') {
          (**(code **)(*plVar7 + 0x4c8))();
          if (plVar7 != local_40) {
            plVar7 = local_40;
            if (local_38 != '\0') {
              FUN_00d50b20();
              goto LAB_00388500;
            }
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_00388500:
        FUN_0037c170();
        local_38 = '\0';
        local_40 = plVar7;
        cVar2 = FUN_00d23d70();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*plVar7 + 0x3a0))();
          cVar3 = '\x01';
          if (cVar2 == '\0') {
            local_48 = plVar7;
            FUN_01c0e5e0();
            (**(code **)(*local_48 + 0x370))();
            plVar7 = local_90;
            if (local_88 == '\0') {
              if (local_90 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_88 = '\0';
            }
            local_80 = plVar7;
            local_40 = plVar7;
            local_38 = '\0';
            cVar3 = FUN_00d23d70();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar7 = local_48;
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          cVar3 = '\0';
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          bVar10 = true;
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar9);
      } while ((int)lVar9 < *(int *)((int64_t)local_50 + 0xc));
      FUN_00115910();
      uVar6 = 2;
      if (bVar10) goto joined_r0x0038869c;
    }
  }
  uVar6 = 0;
joined_r0x0038869c:
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar6;
}

