// Function: FUN_002e4d80
// Address: 002e4d80
// Size: 1798 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void*
FUN_002e4d80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  char *pcVar6;
  void* pVar7;
  int64_t **pplVar8;
  int iVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  void*this_ptr;
  int64_t *plVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_e8;
  char local_e0;
  int64_t *plVar14;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_b0;
  char local_a8 [8];
  int64_t *local_a0;
  uint64_t local_98;
  int local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70 [8];
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  char local_50 [8];
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  plVar1 = local_b0;
  local_50[0] = local_a8[0];
  pcVar6 = local_50;
  if (local_a8[0] != '\0') {
    pcVar6 = local_a8;
  }
  *pcVar6 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_002e5475;
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  plVar11 = local_b0;
  pcVar6 = local_a8;
  if (local_a8[0] == '\0') {
    pcVar6 = local_48;
  }
  local_48[0] = local_a8[0];
  *pcVar6 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_38[0] = '\0';
  uVar13 = FUN_01beead0();
  plVar14 = local_b0;
  if (local_a8[0] == '\0') {
    if (local_b0 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
      if ((local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      goto LAB_002e4f7f;
    }
  }
  else if (local_b0 != (int64_t *)0x0) {
LAB_002e4f7f:
    local_88 = plVar11;
    local_a8[0] = '\0';
    local_b0 = (int64_t *)0x0;
    local_a0 = plVar14;
    local_98 = 0xffffffff;
    local_90 = 0;
    plVar10 = (int64_t *)0x0;
    plVar11 = (int64_t *)0x0;
    iVar9 = 0;
    while( true ) {
      if (iVar9 != 0) {
        if (iVar9 < 1) {
          iVar9 = -iVar9;
        }
        else {
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 - iVar9);
          uVar13 = FUN_00d23690(uVar13,iVar9,param_3,param_4,plVar14);
          local_90 = local_90 + iVar9;
          iVar9 = 0;
        }
        local_98 = CONCAT44(iVar9,(int)local_98);
      }
      lVar5 = (int64_t)(int)local_98;
      iVar9 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar9);
      if (*(int *)((int64_t)local_a0 + 0xc) <= iVar9) break;
      plVar12 = *(int64_t **)(local_a0[2] + 8 + lVar5 * 8);
      local_b0 = plVar12;
      if ((g_02700970 == '\0') &&
         (iVar9 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_00, iVar9 != 0)) {
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
        uVar13 = ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_b0;
        uVar13 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar12 = *pplVar8;
      if (*pplVar8 == plVar11) {
        plVar12 = plVar11;
      }
      if (plVar12 == (int64_t *)0x0) {
        if (plVar10 != (int64_t *)0x0) {
          if (local_38[0] != '\0') {
            uVar13 = FUN_00d50b20();
          }
          local_38[0] = '\0';
        }
        plVar10 = (int64_t *)0x0;
      }
      else {
        uVar13 = FUN_00075b90();
        plVar11 = local_78;
        if (plVar10 == local_78) {
          plVar11 = plVar10;
          if (((local_38[0] == '\0') && (plVar10 != (int64_t *)0x0)) && (local_70[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_002e5125;
          }
        }
        else {
          if (local_70[0] == '\0') {
            if (plVar10 != (int64_t *)0x0 && local_38[0] != '\0') {
              uVar13 = FUN_00d50b20();
            }
            pcVar6 = local_38;
          }
          else {
            if (plVar10 != (int64_t *)0x0 && local_38[0] != '\0') {
              uVar13 = FUN_00d50b20();
            }
            local_38[0] = '\x01';
            plVar10 = plVar11;
LAB_002e5125:
            local_38[0] = '\x01';
            pcVar6 = local_70;
            plVar11 = plVar10;
          }
          *pcVar6 = '\0';
          plVar10 = plVar11;
          plVar11 = local_78;
        }
        if ((local_70[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      if ((plVar10 == plVar1) || (plVar10 == local_88)) {
        uVar13 = FUN_01bc0650();
        plVar11 = local_78;
        local_40[0] = local_70[0];
        pcVar6 = local_70;
        if (local_70[0] == '\0') {
          pcVar6 = local_40;
        }
        *pcVar6 = '\0';
        if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          uVar13 = (**(code **)(*plVar11 + 0x4a0))();
          plVar11 = local_78;
          if (local_70[0] == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_002e520c;
            }
          }
          else if (local_78 != (int64_t *)0x0) {
LAB_002e520c:
            local_70[0] = '\0';
            local_78 = (int64_t *)0x0;
            local_80 = plVar11;
            local_68 = plVar11;
            local_60 = 0xffffffff;
            local_58 = 0;
            local_60._4_4_ = 0;
            while( true ) {
              if (local_60._4_4_ != 0) {
                if (local_60._4_4_ < 1) {
                  iVar9 = -local_60._4_4_;
                }
                else {
                  iVar9 = (int)local_60 - local_60._4_4_;
                  local_60 = CONCAT44(local_60._4_4_,iVar9);
                  FUN_00d23690();
                  local_58 = local_58 + local_60._4_4_;
                  iVar9 = 0;
                }
                local_60 = CONCAT44(iVar9,(int)local_60);
              }
              lVar5 = (int64_t)(int)local_60;
              iVar9 = (int)local_60 + 1;
              local_60 = CONCAT44(local_60._4_4_,iVar9);
              if (*(int *)((int64_t)local_68 + 0xc) <= iVar9) break;
              local_78 = *(int64_t **)(local_68[2] + 8 + lVar5 * 8);
              FUN_01bc84c0();
              (**(code **)(*local_e8 + 0x398))();
              if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (local_d0 == plVar1) {
                local_d0 = local_78;
                local_c8 = '\0';
                FUN_00d21140();
              }
            }
            FUN_000a9680();
            uVar13 = FUN_00d50b20();
          }
          if (local_40[0] != '\0') {
            uVar13 = FUN_00d50b20();
          }
        }
      }
      plVar11 = plVar12;
      iVar9 = local_98._4_4_;
    }
    FUN_002e0650();
    FUN_00d50b20();
    plVar11 = local_88;
    if ((local_38[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_48[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_002e5475:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if ((local_50[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

