// Function: FUN_00ac59d0
// Address: 00ac59d0
// Size: 1444 bytes
// Class: Unknown

void FUN_00ac59d0(string *param_1,string *param_2)

{
  uint64_t uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int extraout_var;
  uint64_t uVar7;
  int *piVar8;
  char *pcVar9;
  uint *puVar10;
  void *pvVar11;
  int extraout_var_00;
  void*puVar12;
  ulong uVar13;
  int iVar14;
  uint64_t uVar15;
  void*arg1;
  void*this_ptr;
  uint64_t uVar16;
  uint32_t uVar17;
  uint64_t local_88;
  uint64_t uStack_80;
  char *local_78;
  string *local_68;
  uint64_t local_58 [3];
  string *local_38;
  
  if (arg1 != (void*)0x0) {
    *(void*)arg1 = 0;
    *(void*)((int64_t)arg1 + 4) = 0;
    if ((g_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_02754568 = 0x8fafd21e25c5e09b;
      param_1 = (string *)&g_02520080;
      g_02754560 = &g_02520080;
      ___cxa_guard_release();
    }
    arg1[1] = &g_02754560;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (char *)0x0;
  if ((g_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02754568 = 0x8fafd21e25c5e09b;
    param_1 = (string *)&g_02520080;
    g_02754560 = &g_02520080;
    ___cxa_guard_release();
  }
  piVar8 = (int *)*this_ptr;
  local_68 = (string *)&g_02754560;
  local_38 = (string *)&g_02520080;
  do {
    local_58[0] = 0;
    piVar6 = ___error();
    *piVar6 = 0;
    _sysconf((int)param_1);
    if (-1 < extraout_var) {
      if (*(int64_t *)(piVar8 + 0xe) == 0) {
        if (g_028a0b98 == '\0') {
          iVar4 = ___cxa_guard_acquire();
          iVar14 = (int)param_2;
          if (iVar4 != 0) {
            piVar6 = ___error();
            *piVar6 = 0;
            lVar5 = _pathconf((char *)param_1,iVar14);
            param_1 = (string *)&segment_command_000003d8.fileoff;
            if (&segment_command_000003d8.fileoff < (string *)CONCAT44(extraout_var_00,lVar5)) {
              param_1 = (string *)CONCAT44(extraout_var_00,lVar5);
            }
            if (extraout_var_00 < 0) {
              param_1 = (string *)&segment_command_000003d8.fileoff;
            }
            if (param_1 + 1 < &segment_command_000003d8.fileoff) {
              param_1 = (string *)((int64_t)&segment_command_000003d8.vmsize + 7);
            }
            g_028a0b90 = param_1;
            ___cxa_guard_release();
          }
        }
        pvVar11 = _malloc((size_t)param_1);
        *(void **)(piVar8 + 0xe) = pvVar11;
        if (pvVar11 == (void *)0x0) {
          uVar7 = 0xc;
          goto LAB_00ac5d3c;
        }
        ___bzero();
      }
      param_2 = (string *)local_58;
      uVar3 = _readdir_r_INODE64();
      uVar7 = (uint64_t)uVar3;
      if (uVar3 == 0) goto LAB_00ac5ab1;
LAB_00ac5d3c:
      if ((g_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_02754568 = 0x8fafd21e25c5e09b;
        g_02754560 = &g_02520080;
        ___cxa_guard_release();
        param_1 = local_38;
      }
      bVar2 = (**(code **)(g_02754560 + 0x30))();
      uVar15 = (uint64_t)bVar2;
      uVar16 = 0;
LAB_00ac5d63:
      uVar13 = (ulong)param_1;
      piVar8 = (int *)*this_ptr;
      *this_ptr = 0;
      FUN_00aca780();
      if (arg1 == (void*)0x0) {
        ___cxa_allocate_exception();
        puVar12 = operator_new(uVar13);
        puVar12[5] = 0x2b726f7461726570;
        puVar12[4] = 0x6f3a3a726f746172;
        puVar12[3] = 0x6574695f79726f74;
        puVar12[2] = 0x63657269643a3a6d;
        puVar12[1] = 0x6574737973656c69;
        *puVar12 = 0x663a3a74736f6f62;
        *(void*)(puVar12 + 6) = 0x2b;
        uVar17 = FUN_00ac4640(uVar7 & 0xffffffff | (uVar15 & 0xff) << 0x20 | uVar16,local_58,
                              local_68);
                            ___cxa_throw(uVar17,FUN_00ac46f0);
      }
      param_1 = (string *)(uVar7 & 0xffffffff | (uVar15 & 0xff) << 0x20 | uVar16);
      *arg1 = param_1;
      arg1[1] = local_68;
      if ((local_58[0] & 1) != 0) {
        operator_delete(param_1);
      }
      if (piVar8 == (int *)0x0) goto LAB_00ac5cfe;
      LOCK();
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 != 1) goto LAB_00ac5cfe;
      FUN_00ac5050();
LAB_00ac5ce6:
      if ((*(byte *)(piVar8 + 2) & 1) != 0) {
        operator_delete(param_1);
      }
      goto LAB_00ac5cf9;
    }
    piVar8 = ___error();
    *piVar8 = 0;
    local_58[0] = _readdir_INODE64();
    if (local_58[0] == 0) {
      puVar10 = (uint *)___error();
      uVar7 = (uint64_t)*puVar10;
      if (*puVar10 != 0) goto LAB_00ac5d3c;
LAB_00ac5ab1:
      if (local_58[0] != 0) goto LAB_00ac5afc;
      uVar7 = FUN_00ac5050();
      if ((int)uVar7 != 0) {
        uVar15 = uVar7 >> 0x20;
        uVar16 = uVar7 & 0xffffff0000000000;
        local_68 = param_2;
        goto LAB_00ac5d63;
      }
    }
    else {
LAB_00ac5afc:
      std::string::assign((char *)param_1);
      if ((g_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_02754568 = 0x8fafd21e25c5e09b;
        g_02754560 = &g_02520080;
        param_1 = local_38;
        ___cxa_guard_release();
      }
    }
    piVar8 = (int *)*this_ptr;
    if (*(int64_t *)(piVar8 + 0xc) == 0) {
      *this_ptr = 0;
      if (piVar8 != (int *)0x0) {
        LOCK();
        iVar4 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FUN_00ac5050();
          goto LAB_00ac5ce6;
        }
      }
      goto LAB_00ac5cfe;
    }
    pcVar9 = (char *)((int64_t)&local_88 + 1);
    if ((local_88 & 1) != 0) {
      pcVar9 = local_78;
    }
    if (*pcVar9 != '.') break;
    bVar2 = pcVar9[1];
    param_1 = (string *)(uint64_t)bVar2;
  } while ((bVar2 == 0) || ((bVar2 == 0x2e && (pcVar9[2] == '\0'))));
  std::string::string(param_1,param_2);
  FUN_00ac9e60();
  FUN_00ac9740();
  uVar1 = _UNK_023d4ec8;
  *(void*)(piVar8 + 8) = g_023d4ec0;
  *(void*)(piVar8 + 10) = uVar1;
  if ((local_58[0] & 1) != 0) {
LAB_00ac5cf9:
    operator_delete(param_1);
  }
LAB_00ac5cfe:
  if ((local_88 & 1) != 0) {
    operator_delete(param_1);
  }
  return;
}

