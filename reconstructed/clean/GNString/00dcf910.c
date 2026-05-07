// Function: FUN_00dcf910
// Address: 00dcf910
// Size: 801 bytes
// Class: GNString
// String references:
//   "Connect aborted"
//   "Temporarily unable to connect: %s"
//   "Unable to connect: %s"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00dcf910(int param_1,ushort param_2,socklen_t param_3,void *param_4)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void*puVar6;
  int *piVar7;
  int64_t this_ptr;
  bool bVar8;
  uint local_118 [8];
  socklen_t *psVar9;
  uint64_t local_98;
  uint32_t local_90;
  void*local_88;
  uint32_t local_80;
  uint64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  uint32_t local_40;
  int local_3c;
  uint8_t local_37;
  ushort local_36;
  uint32_t local_34;
  int64_t local_28;
  
  local_28 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_3c = 1;
  if (*(int *)(this_ptr + 0x14) == -1) {
    uVar2 = FUN_00dce9e0();
    *(void*)(this_ptr + 0x14) = uVar2;
  }
  uVar3 = _fcntl(param_1,0);
  _fcntl(param_1,uVar3 | 4);
  local_37 = 2;
  puVar6 = (void*)FUN_00dbc500();
  local_34 = *puVar6;
  local_36 = param_2 << 8 | param_2 >> 8;
  iVar4 = _connect(param_1,(sockaddr *)&MACH_HEADER.ncmds,param_3);
  bVar8 = true;
  if (-1 < iVar4) goto LAB_00dcfa91;
  piVar7 = ___error();
  if (*piVar7 != 0x24) {
    bVar8 = false;
    goto LAB_00dcfa91;
  }
  local_98 = 10;
  local_90 = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  local_118[3] = 0;
  local_118[4] = 0;
  local_118[5] = 0;
  local_118[6] = 0;
  local_118[7] = 0;
  psVar9 = (socklen_t *)0x0;
  iVar4 = *(int *)(this_ptr + 0x14);
  if (PTR____darwin_check_fd_set_overflow_024a9880 == (void*)0x0) {
LAB_00dcfa29:
    local_118[(uint64_t)(int64_t)iVar4 >> 5] =
         local_118[(uint64_t)(int64_t)iVar4 >> 5] | 1 << ((byte)iVar4 & 0x1f);
  }
  else {
    iVar5 = ___darwin_check_fd_set_overflow(0,0);
    if (iVar5 != 0) goto LAB_00dcfa29;
  }
  bVar8 = false;
  param_1 = 0;
  iVar4 = _select_1050(0,local_118,&local_98);
  if (0 < iVar4) {
    local_40 = 4;
    param_1 = (int)&local_3c;
    _getsockopt(param_1,0x1007,(int)&local_40,param_4,psVar9);
    bVar8 = local_3c == 0;
  }
LAB_00dcfa91:
  uVar3 = _fcntl(param_1,0);
  _fcntl(param_1,uVar3 & 0xfffffffb);
  lVar1 = g_02783cb8;
  if (*(char *)(this_ptr + 0x32) != '\0') {
    if (g_02783cb8 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar1;
    local_68 = '\x01';
    FUN_00cc7b40();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if (bVar8) {
    *(void*)(this_ptr + 0x31) = 1;
  }
  else {
    _close(param_1);
    *(void*)(this_ptr + 0x14) = 0xffffffff;
    piVar7 = ___error();
    lVar1 = g_02783e38;
    if ((*piVar7 - 0x32U < 0x10) && ((0xcc03U >> (*piVar7 - 0x32U & 0x1f) & 1) != 0)) {
      if (g_02783e38 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar1;
      local_58 = '\x01';
      ___error();
      local_78 = FUN_00e7dfe0();
      local_80 = 1;
      local_88 = &g_026ba3d0;
      FUN_00cc7b40(&g_026ba3d0,&local_88);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = g_02783ca0;
    if (g_02783ca0 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    ___error();
    local_78 = FUN_00e7dfe0();
    local_80 = 1;
    local_88 = &g_026ba3d0;
    FUN_00cc7b40(&g_026ba3d0,&local_88);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_28) {
    return;
  }
                      ___stack_chk_fail();
}

