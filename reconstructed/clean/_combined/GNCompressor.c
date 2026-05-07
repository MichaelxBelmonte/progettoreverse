// ===================================================================
// GNCompressor — Complete reconstructed pseudocode
// 7 functions
// ===================================================================

// Registered properties (8):
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


// ============================================================
// 00df3b00
// ============================================================
// Function: FUN_00df3b00
// Address: 00df3b00
// Size: 1491 bytes
// Class: GNCompressor
// String references:
//   " ("
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


void* FUN_00df3b00(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  void*puVar5;
  char *pcVar6;
  int64_t **pplVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  uint64_t local_c0;
  uint32_t local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025795a8;
  (*g_025795c0)();
  local_50 = puVar5;
  FUN_00d4ffd0();
  local_b0 = local_d8;
  local_a8 = 0;
  if (local_d0 == '\0') {
    if (local_d8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d0 = '\0';
  }
  local_a8 = '\x01';
  FUN_00d8dbf0();
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d4efa0();
  FUN_00c84c80();
  local_a0 = local_48;
  local_98 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_98 = '\x01';
  FUN_01e33cd0();
  plVar2 = local_d8;
  if (local_d0 == '\0') {
    if (((local_d8 != (int64_t *)0x0) && (FUN_00d50b00(), local_d0 != '\0')) &&
       (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d0 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_d0 = '\0';
    local_d8 = (int64_t *)0x0;
    local_c8 = plVar2;
    local_b8 = 0;
    local_c0 = 0;
    if (0 < *(int *)((int64_t)plVar2 + 0xc)) {
      lVar8 = 0;
      do {
        plVar1 = *(int64_t **)(plVar2[2] + lVar8 * 8);
        local_d8 = plVar1;
        FUN_00d8db40();
        FUN_00d74120();
        local_90 = local_48;
        local_88 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_88 = '\x01';
        FUN_00d8dbf0();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d8db40();
        FUN_00d74120();
        local_80 = local_60;
        local_78 = 0;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_78 = '\x01';
        (**(code **)(*arg1 + 0x88))();
        plVar3 = local_48;
        local_38[0] = local_40[0];
        pcVar6 = local_40;
        if (local_40[0] == '\0') {
          pcVar6 = local_38;
        }
        *pcVar6 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar3 + 400))();
        local_70 = local_48;
        local_68 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_68 = '\x01';
        FUN_00d8dbf0();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_000274b0();
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar7 = &local_d8;
          if (cVar4 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar7 != (int64_t *)0x0) {
          FUN_00c77cd0();
          FUN_00c7b3d0();
          plVar1 = local_48;
          if (local_40[0] == '\0') {
            if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
               (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d8db40();
            FUN_00d8dbf0();
            FUN_00d8db40();
            FUN_00d50b20();
          }
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
        local_c0 = CONCAT44(local_c0._4_4_,(int)lVar8);
      } while ((int)lVar8 < *(int *)((int64_t)plVar2 + 0xc));
    }
    FUN_00d74c70();
    puVar5 = local_50;
  }
  FUN_00d8c7d0();
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00df3030
// ============================================================
// Function: FUN_00df3030
// Address: 00df3030
// Size: 902 bytes
// Class: GNCompressor
// String references:
//   "GNCompressor"
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


void FUN_00df3030(uint32_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t *arg1;
  void*this_ptr;
  bool bVar8;
  uint32_t uVar9;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if ((g_028a87f8 == (int64_t *)0x0) || (g_028a8801 == '\0')) {
    FUN_00e8cb50();
    if (g_028a87f8 == (int64_t *)0x0) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar6 + 0x18))();
      if (g_028a87f8 == plVar6) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar8 = g_028a87f8 != (int64_t *)0x0;
        g_028a87f8 = plVar6;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (g_028a8800 == '\0') {
        g_028a8800 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028a8801 = '\x01';
      param_1 = FUN_00e8cb70();
    }
    else {
      g_028a8801 = '\x01';
      param_1 = FUN_00e8cb70();
    }
  }
  local_80 = *arg1;
  local_78 = '\0';
  FUN_00df35a0(param_1,&local_80);
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
LAB_00df315b:
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  local_70 = *arg1;
  local_68 = '\0';
  FUN_00c80cd0();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) goto LAB_00df315b;
  FUN_00c811e0();
  plVar6 = local_40;
  if ((g_02775ad0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d7568 = FUN_00d4fe50();
    g_026d7550 = "GNCompressor";
    g_026d7558 = 0x10;
    g_026d7560 = FUN_00068b20;
    g_026d7570 = 0;
    ram_00000000026d7578 = 0;
    g_026d7580 = 0;
    ram_00000000026d7588 = 0;
    g_026d7590 = 0;
    ram_00000000026d7598 = 0;
    g_026d75a0 = 0;
    ram_00000000026d75a8 = 0;
    g_026d75b0 = 0;
    ram_00000000026d75b8 = 0;
    g_026d75c0 = 0;
    ram_00000000026d75c8 = 0;
    g_026d75d0 = 0;
    ram_00000000026d75d8 = 0;
    g_026d75e0 = 0;
    ram_00000000026d75e8 = 0;
    g_026d75f0 = 0;
    ram_00000000026d75f8 = 0;
    g_026d7600 = 0;
    ram_00000000026d7608 = 0;
    g_026d7610 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    pplVar7 = &local_40;
    if (cVar4 != '\0') goto LAB_00df3222;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_00df3222:
  plVar6 = *pplVar7;
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
  }
  else if (*(char *)(pplVar7 + 1) == '\0') {
    FUN_00d50b00();
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    uVar9 = (**(code **)(*plVar6 + 0x18))();
    local_58 = '\0';
    local_50 = *arg1;
    local_48 = '\0';
    local_60 = plVar6;
    FUN_00df3650(uVar9,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}



// ============================================================
// 00df54b0
// ============================================================
// Function: FUN_00df54b0
// Address: 00df54b0
// Size: 1201 bytes
// Class: GNCompressor
// String references:
//   "Cannot open %@."
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


void FUN_00df54b0(char *param_1,int param_2)

{
  int64_t lVar1;
  int iVar2;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (unaff_ESI == 1) {
    (**(code **)(*this_ptr + 0x3b0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00cde020();
    iVar2 = _open(param_1,0x1e4);
    *(int *)(this_ptr + 3) = iVar2;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02784870;
    if ((int)this_ptr[3] == -1) {
      if (g_02784870 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x3b0))();
      (**(code **)(*local_48 + 0x388))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (unaff_ESI == 6) {
    (**(code **)(*this_ptr + 0x3b0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00cde020();
    iVar2 = _open(param_1,param_2);
    *(int *)(this_ptr + 3) = iVar2;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02784870;
    if ((int)this_ptr[3] == -1) {
      if (g_02784870 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x3b0))();
      (**(code **)(*local_48 + 0x388))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (unaff_ESI == 2) {
    (**(code **)(*this_ptr + 0x3b0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00cde020();
    iVar2 = _open(param_1,param_2);
    *(int *)(this_ptr + 3) = iVar2;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02784870;
    if ((int)this_ptr[3] == -1) {
      if (g_02784870 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x3b0))();
      (**(code **)(*local_48 + 0x388))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 00df5d40
// ============================================================
// Function: FUN_00df5d40
// Address: 00df5d40
// Size: 634 bytes
// Class: GNCompressor
// String references:
//   "file '%@' not open while writeBytes"
//   "writeBytes failed on file '%@', not all bytes written"
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


void FUN_00df5d40(int param_1,int param_2,size_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  ssize_t sVar3;
  void**ppuVar4;
  int64_t *this_ptr;
  void*local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_02784870;
  if ((int)this_ptr[3] == -1) {
    if (g_02784870 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x3b0))();
    (**(code **)(*local_40 + 0x368))();
    local_60 = local_50;
    local_68 = 1;
    local_70 = &g_024c5048;
    local_58 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    ppuVar4 = &local_70;
    FUN_00cc7c70(ppuVar4,"file \'%@\' not open while writeBytes");
    param_1 = (int)ppuVar4;
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  sVar3 = _write(param_1,(void *)(int64_t)param_2,param_3);
  lVar1 = g_02784870;
  if (sVar3 != param_2) {
    if (g_02784870 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x3b0))();
    (**(code **)(*local_40 + 0x368))();
    lVar2 = local_50;
    local_68 = 1;
    local_70 = &g_024c5048;
    local_58 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_00cc7c70(&local_70,"writeBytes failed on file \'%@\', not all bytes written");
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00df6180
// ============================================================
// Function: FUN_00df6180
// Address: 00df6180
// Size: 648 bytes
// Class: GNCompressor
// String references:
//   "file '%@' not open while readBytes"
//   "readBytes failed on file '%@'"
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


ssize_t FUN_00df6180(int param_1,int param_2,size_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  ssize_t sVar3;
  void**ppuVar4;
  int64_t *this_ptr;
  void*local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_02784870;
  if ((int)this_ptr[3] == -1) {
    if (g_02784870 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x3b0))();
    (**(code **)(*local_40 + 0x368))();
    local_60 = local_50;
    local_68 = 1;
    local_70 = &g_024c5048;
    local_58 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    ppuVar4 = &local_70;
    FUN_00cc7c70(ppuVar4,"file \'%@\' not open while readBytes");
    param_1 = (int)ppuVar4;
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  sVar3 = _read(param_1,(void *)(int64_t)param_2,param_3);
  lVar1 = g_02784870;
  if (sVar3 == -1) {
    if (g_02784870 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x3b0))();
    (**(code **)(*local_40 + 0x368))();
    lVar2 = local_50;
    local_68 = 1;
    local_70 = &g_024c5048;
    local_58 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_00cc7c70(&local_70,"readBytes failed on file \'%@\'");
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return sVar3;
}



// ============================================================
// 00df3740
// ============================================================
// Function: FUN_00df3740
// Address: 00df3740
// Size: 513 bytes
// Class: GNCompressor
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


void FUN_00df3740(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t local_b0;
  void*local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_00d4efa0();
  FUN_00c7e7b0();
  puVar2 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027847f8;
  lVar3 = *param_2;
  if (lVar3 == 0) {
    local_88 = puVar2;
    local_80 = '\0';
    local_78 = *arg1;
    local_70 = '\0';
    FUN_00e972c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8 = puVar2;
    local_a0 = '\0';
    local_98 = *arg1;
    local_90 = '\0';
    if (g_027847f8 != 0) {
      FUN_00d50b00();
      lVar3 = *param_2;
    }
    local_38 = lVar1;
    local_b0 = lVar3;
    FUN_00083ea0(2,&local_b0);
    FUN_00e972c0();
    local_68 = (void*)&g_0253d630;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00df4a00
// ============================================================
// Function: FUN_00df4a00
// Address: 00df4a00
// Size: 525 bytes
// Class: GNCompressor
// String references:
//   "BZh"
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


void FUN_00df4a00(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  uint uVar6;
  void*puVar7;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t local_48;
  char local_40;
  void*local_38;
  
  iVar5 = *(int *)(*param_2 + 0x18);
  iVar3 = FUN_00e7dde0();
  uVar4 = extraout_XMM0_Da;
  if (iVar3 <= iVar5) {
    uVar4 = FUN_00e7dde0();
    iVar5 = FUN_00e7de00(extraout_XMM0_Da_00,uVar4);
    uVar4 = extraout_XMM0_Da_01;
    if (iVar5 == 0) {
      FUN_00e9eb80(0,0);
      (*0x0)(*(void*)(*param_2 + 0x10),*(void*)(*param_2 + 0x18));
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      local_38 = puVar7;
      do {
        uVar6 = FUN_00e9ecb0();
        if ((uVar6 & 0xfffffffb) == 0) {
          FUN_00c92190(extraout_XMM0_Da_02,0);
        }
      } while (uVar6 == 0);
      FUN_00e9fd30();
      *this_ptr = local_38;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
  }
  lVar1 = g_02784840;
  if (g_02784840 != 0) {
    uVar4 = FUN_00d50b00();
  }
  lVar2 = g_02784848;
  if (g_02784848 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  FUN_00df3740(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

