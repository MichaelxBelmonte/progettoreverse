// Function: FUN_00ac86a0
// Address: 00ac86a0
// Size: 2100 bytes
// Class: OsSignatureMac
// String references:
//   "boost::filesystem::current_path"

void FUN_00ac86a0(dword *param_1,uint64_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  uint8_t uVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  void*puVar8;
  ulong uVar9;
  size_t sVar10;
  void*arg1;
  void*this_ptr;
  uint64_t uVar11;
  uint32_t uVar12;
  dword *local_440;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  this_ptr[2] = 0;
  this_ptr[1] = 0;
  *this_ptr = 0;
  pcVar6 = _getcwd((char *)param_1,(size_t)param_2);
  if (pcVar6 == (char *)0x0) {
    piVar7 = ___error();
    sVar10 = (size_t)param_2;
    if ((*piVar7 != 0x22) && (*piVar7 != 0)) {
      FUN_00ac48d0();
      goto LAB_00ac872d;
    }
    if (arg1 == (void*)0x0) {
      operator_new__((ulong)param_1);
      pcVar6 = _getcwd((char *)param_1,sVar10);
      param_1 = &MACH_HEADER.cpusubtype;
      local_440 = &MACH_HEADER.cpusubtype;
      if (pcVar6 == (char *)0x0) {
        piVar7 = ___error();
        if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
          operator_delete__(param_1);
          operator_new__((ulong)param_1);
          pcVar6 = _getcwd((char *)param_1,sVar10);
          if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
          piVar7 = ___error();
          if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
            operator_delete__(param_1);
            operator_new__((ulong)param_1);
            pcVar6 = _getcwd((char *)param_1,sVar10);
            if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
            piVar7 = ___error();
            if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
              operator_delete__(param_1);
              operator_new__((ulong)param_1);
              pcVar6 = _getcwd((char *)param_1,sVar10);
              if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
              piVar7 = ___error();
              if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                operator_delete__(param_1);
                operator_new__((ulong)param_1);
                pcVar6 = _getcwd((char *)param_1,sVar10);
                if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                piVar7 = ___error();
                if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                  operator_delete__(param_1);
                  operator_new__((ulong)param_1);
                  pcVar6 = _getcwd((char *)param_1,sVar10);
                  if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                  piVar7 = ___error();
                  if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                    operator_delete__(param_1);
                    operator_new__((ulong)param_1);
                    pcVar6 = _getcwd((char *)param_1,sVar10);
                    if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                    piVar7 = ___error();
                    if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                      operator_delete__(param_1);
                      operator_new__((ulong)param_1);
                      pcVar6 = _getcwd((char *)param_1,sVar10);
                      if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                      piVar7 = ___error();
                      if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                        operator_delete__(param_1);
                        operator_new__((ulong)param_1);
                        pcVar6 = _getcwd((char *)param_1,sVar10);
                        if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                        piVar7 = ___error();
                        if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                          operator_delete__(param_1);
                          operator_new__((ulong)param_1);
                          pcVar6 = _getcwd((char *)param_1,sVar10);
                          if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                          piVar7 = ___error();
                          if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                            operator_delete__(param_1);
                            operator_new__((ulong)param_1);
                            pcVar6 = _getcwd((char *)param_1,sVar10);
                            if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                            piVar7 = ___error();
                            if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                              operator_delete__(param_1);
                              operator_new__((ulong)param_1);
                              pcVar6 = _getcwd((char *)param_1,sVar10);
                              if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                              piVar7 = ___error();
                              if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                                operator_delete__(param_1);
                                operator_new__((ulong)param_1);
                                pcVar6 = _getcwd((char *)param_1,sVar10);
                                if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                                piVar7 = ___error();
                                if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                                  operator_delete__(param_1);
                                  operator_new__((ulong)param_1);
                                  pcVar6 = _getcwd((char *)param_1,sVar10);
                                  if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                                  piVar7 = ___error();
                                  if ((*piVar7 == 0x22) || (*piVar7 == 0)) {
                                    operator_delete__(param_1);
                                    operator_new__((ulong)param_1);
                                    pcVar6 = _getcwd((char *)param_1,sVar10);
                                    if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
                                    piVar7 = ___error();
                                    if ((*piVar7 == 0) || (*piVar7 == 0x22)) {
                                      operator_delete__(param_1);
                                      uVar9 = (ulong)param_1;
                                      ___cxa_allocate_exception();
                                      puVar8 = operator_new(uVar9);
                                      *(void*)((int64_t)puVar8 + 0x17) = 0x687461705f746e65;
                                      puVar8[2] = 0x65727275633a3a6d;
                                      puVar8[1] = 0x6574737973656c69;
                                      *puVar8 = 0x663a3a74736f6f62;
                                      *(void*)((int64_t)puVar8 + 0x1f) = 0;
                                      // [STATIC_INIT: property registration]
                                      bVar4 = (**(code **)(g_02754560 + 0x30))();
                                      uVar12 = FUN_00ac4440(&g_02754560,
                                                            (uint64_t)bVar4 << 0x20 | 0x3f);
                                                          ___cxa_throw(uVar12,FUN_00ac46f0);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_00ac8cc1:
        FUN_00ac48d0();
      }
      else {
LAB_00ac88a7:
        std::string::assign((char *)param_1);
        if (arg1 != (void*)0x0) {
          *arg1 = 0;
          *(void*)(arg1 + 1) = 0;
          // [STATIC_INIT: property registration]
          *(void***)local_440 = &g_02754560;
          param_1 = local_440;
        }
      }
      operator_delete__(param_1);
      goto LAB_00ac872d;
    }
    *arg1 = 0;
    *(void*)(arg1 + 1) = 0;
    // [STATIC_INIT: property registration]
    local_440 = arg1 + 2;
    *(void***)(arg1 + 2) = &g_02754560;
    uVar11 = 0x400;
    do {
      operator_new__((ulong)param_1);
      pcVar6 = _getcwd((char *)param_1,(size_t)param_2);
      if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
      piVar7 = ___error();
      if ((*piVar7 != 0x22) && (*piVar7 != 0)) goto LAB_00ac8cc1;
      *arg1 = 0;
      *(void*)(arg1 + 1) = 0;
      // [STATIC_INIT: property registration]
      param_1 = (dword *)&g_02754560;
      *(void***)local_440 = &g_02754560;
      operator_delete__(&g_02754560);
      bVar2 = uVar11 < 0x800001;
      uVar11 = uVar11 * 2;
    } while (bVar2);
    // [STATIC_INIT: property registration]
    *arg1 = 0x3f;
    uVar3 = (**(code **)(g_02754560 + 0x30))();
    *(void*)(arg1 + 1) = uVar3;
  }
  else {
    std::string::assign((char *)param_1);
    if (arg1 == (void*)0x0) goto LAB_00ac872d;
    *arg1 = 0;
    *(void*)(arg1 + 1) = 0;
    // [STATIC_INIT: property registration]
  }
  *(void***)(arg1 + 2) = &g_02754560;
LAB_00ac872d:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return;
  }
                      ___stack_chk_fail();
}

