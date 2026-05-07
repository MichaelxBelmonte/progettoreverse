// Function: FUN_002ec210
// Address: 002ec210
// Size: 1797 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
//   "MUMultiTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


uint64_t FUN_002ec210(uint64_t param_1,byte param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int64_t **pplVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  byte bVar9;
  int64_t *plVar10;
  int64_t lVar11;
  uint32_t uVar12;
  int64_t local_d0;
  char local_c8;
  int64_t local_a0;
  char local_98;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  uint32_t local_48;
  byte local_39;
  char local_38 [8];
  
  FUN_01f27fe0();
  uVar3 = (**(code **)(*local_68 + 0x450))();
  plVar10 = (int64_t *)(uint64_t)uVar3;
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar9 = (byte)uVar3;
  if ((bVar9 & param_2) == 0) goto LAB_002ec775;
  (**(code **)(*this_ptr + 0x9a0))();
  pplVar7 = &local_68;
  FUN_01eda0f0();
  plVar1 = local_68;
  if ((g_026fe4e0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d7a88 = FUN_00d4fe50();
    g_026d7a70 = "MUMultiTrackItem";
    g_026d7a78 = 0x60;
    g_026d7a80 = FUN_0006eae0;
    g_026d7a90 = 0;
    ram_00000000026d7a98 = 0;
    g_026d7aa0 = 0;
    g_026d7b18 = 0;
    ram_00000000026d7b20 = 0;
    g_026d7b28 = 0;
    g_026d7b2a = 1;
    g_026d7aa8 = 0;
    ram_00000000026d7ab0 = 0;
    g_026d7ab8 = 0;
    ram_00000000026d7ac0 = 0;
    g_026d7ac8 = 0;
    ram_00000000026d7ad0 = 0;
    g_026d7ad8 = 0;
    ram_00000000026d7ae0 = 0;
    g_026d7ae8 = 0;
    ram_00000000026d7af0 = 0;
    g_026d7af8 = 0;
    ram_00000000026d7b00 = 0;
    g_026d7b08 = 0;
    ram_00000000026d7b10 = 0;
    g_026d7b33 = 0;
    g_026d7b2b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_002ec2b5:
    pplVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_002ec2b5;
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
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_002ec775;
  FUN_01d3a560();
  plVar8 = local_68;
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    uVar3 = 0;
  }
  else {
    FUN_01d3a560();
    uVar3 = FUN_01d3b590();
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar3 = (uVar3 & 4) >> 2;
  }
  FUN_01d3a560();
  plVar8 = local_68;
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    uVar4 = 0;
  }
  else {
    FUN_01d3a560();
    uVar4 = FUN_01d3b590();
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar4 = (uVar4 & 2) >> 1;
  }
  cVar2 = FUN_01e42170();
  if (cVar2 == '\0') {
    (**(code **)(*(int64_t *)this_ptr[0x4b] + 0x610))();
    FUN_00d23310();
    plVar8 = local_68;
    pcVar6 = local_38;
    if (local_60[0] != '\0') {
      pcVar6 = local_60;
    }
    local_38[0] = local_60[0];
    *pcVar6 = '\0';
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar8 + 0x5d8))();
    FUN_0063f230();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      if ((g_02700970 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026d78f8 = FUN_0006e710();
        g_026d78e0 = "MDAudioTrackItem";
        g_026d78e8 = 0x70;
        g_026d78f0 = FUN_0006e6c0;
        g_026d7900 = 0;
        ram_00000000026d7908 = 0;
        g_026d7910 = 0;
        g_026d7988 = 0;
        ram_00000000026d7990 = 0;
        g_026d7998 = 0;
        g_026d799a = 1;
        g_026d7918 = 0;
        ram_00000000026d7920 = 0;
        g_026d7928 = 0;
        ram_00000000026d7930 = 0;
        g_026d7938 = 0;
        ram_00000000026d7940 = 0;
        g_026d7948 = 0;
        ram_00000000026d7950 = 0;
        g_026d7958 = 0;
        ram_00000000026d7960 = 0;
        g_026d7968 = 0;
        ram_00000000026d7970 = 0;
        g_026d7978 = 0;
        ram_00000000026d7980 = 0;
        g_026d79a3 = 0;
        g_026d799b = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar8 = plVar1;
      if (cVar2 == '\0') {
        plVar8 = g_02802688;
      }
      if (plVar8 != (int64_t *)0x0) {
        uVar12 = FUN_00075b90();
        plVar8 = local_68;
        if (local_60[0] == '\0') {
          if (local_68 != (int64_t *)0x0) {
            uVar12 = FUN_00d50b00();
          }
        }
        else {
          local_60[0] = '\0';
        }
        FUN_0024dae0(uVar12,uVar4);
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0021a630();
        FUN_01e42250();
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  else {
    FUN_01bc09c0();
    plVar8 = local_68;
    if (local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_002ec57c;
      }
    }
    else if (local_68 != (int64_t *)0x0) {
LAB_002ec57c:
      local_60[0] = '\0';
      local_68 = (int64_t *)0x0;
      local_58 = plVar8;
      local_48 = 0;
      local_50 = 0;
      local_39 = bVar9;
      if (0 < *(int *)((int64_t)plVar8 + 0xc)) {
        lVar11 = 0;
        do {
          local_68 = *(int64_t **)(plVar8[2] + lVar11 * 8);
          FUN_01bc0990();
          cVar2 = FUN_00d23d70();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            FUN_01bc1970(uVar4,uVar3,0);
          }
          lVar11 = lVar11 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar11);
          plVar10 = plVar1;
        } while ((int)lVar11 < *(int *)((int64_t)plVar8 + 0xc));
      }
      FUN_000840d0();
      FUN_00d50b20();
      plVar10 = (int64_t *)CONCAT71((int7)((uint64_t)plVar10 >> 8),local_39);
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_002ec775:
  return (uint64_t)plVar10 & 0xffffffff;
}

