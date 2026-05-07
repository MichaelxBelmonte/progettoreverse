// Function: FUN_00ac86a0
// Address: 00ac86a0
// Size: 2100 bytes
// Class: OsSignatureMac
// String references:
//   "boost::filesystem::current_path"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac86a0(dword *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  size_t sVar10;
  undefined4 *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar11;
  undefined4 uVar12;
  dword *local_440;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  unaff_RDI[2] = 0;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  pcVar6 = _getcwd((char *)param_1,(size_t)param_2);
  if (pcVar6 == (char *)0x0) {
    piVar7 = ___error();
    sVar10 = (size_t)param_2;
    if ((*piVar7 != 0x22) && (*piVar7 != 0)) {
      FUN_00ac48d0();
      goto LAB_00ac872d;
    }
    if (unaff_RSI == (undefined4 *)0x0) {
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
                                      *(undefined8 *)((longlong)puVar8 + 0x17) = 0x687461705f746e65;
                                      puVar8[2] = 0x65727275633a3a6d;
                                      puVar8[1] = 0x6574737973656c69;
                                      *puVar8 = 0x663a3a74736f6f62;
                                      *(undefined1 *)((longlong)puVar8 + 0x1f) = 0;
                                      if (DAT_02754570 == '\0') {
                                        iVar5 = ___cxa_guard_acquire();
                                        if (iVar5 != 0) {
                                          DAT_02754568 = 0x8fafd21e25c5e09b;
                                          DAT_02754560 = &DAT_02520080;
                                          ___cxa_guard_release();
                                        }
                                      }
                                      bVar4 = (**(code **)(DAT_02754560 + 0x30))();
                                      uVar12 = FUN_00ac4440(&DAT_02754560,
                                                            (ulonglong)bVar4 << 0x20 | 0x3f);
                    /* WARNING: Subroutine does not return */
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
        if (unaff_RSI != (undefined4 *)0x0) {
          *unaff_RSI = 0;
          *(undefined1 *)(unaff_RSI + 1) = 0;
          if (DAT_02754570 == '\0') {
            iVar5 = ___cxa_guard_acquire();
            if (iVar5 != 0) {
              DAT_02754568 = 0x8fafd21e25c5e09b;
              DAT_02754560 = &DAT_02520080;
              ___cxa_guard_release();
            }
          }
          *(undefined ***)local_440 = &DAT_02754560;
          param_1 = local_440;
        }
      }
      operator_delete__(param_1);
      goto LAB_00ac872d;
    }
    *unaff_RSI = 0;
    *(undefined1 *)(unaff_RSI + 1) = 0;
    if (DAT_02754570 == '\0') {
      iVar5 = ___cxa_guard_acquire();
      if (iVar5 != 0) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        param_1 = (dword *)&DAT_02520080;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
    }
    local_440 = unaff_RSI + 2;
    *(undefined ***)(unaff_RSI + 2) = &DAT_02754560;
    uVar11 = 0x400;
    do {
      operator_new__((ulong)param_1);
      pcVar6 = _getcwd((char *)param_1,(size_t)param_2);
      if (pcVar6 != (char *)0x0) goto LAB_00ac88a7;
      piVar7 = ___error();
      if ((*piVar7 != 0x22) && (*piVar7 != 0)) goto LAB_00ac8cc1;
      *unaff_RSI = 0;
      *(undefined1 *)(unaff_RSI + 1) = 0;
      if (DAT_02754570 == '\0') {
        iVar5 = ___cxa_guard_acquire();
        if (iVar5 != 0) {
          DAT_02754568 = 0x8fafd21e25c5e09b;
          DAT_02754560 = &DAT_02520080;
          ___cxa_guard_release();
        }
      }
      param_1 = (dword *)&DAT_02754560;
      *(undefined ***)local_440 = &DAT_02754560;
      operator_delete__(&DAT_02754560);
      bVar2 = uVar11 < 0x800001;
      uVar11 = uVar11 * 2;
    } while (bVar2);
    if (DAT_02754570 == '\0') {
      iVar5 = ___cxa_guard_acquire();
      if (iVar5 != 0) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
    }
    *unaff_RSI = 0x3f;
    uVar3 = (**(code **)(DAT_02754560 + 0x30))();
    *(undefined1 *)(unaff_RSI + 1) = uVar3;
  }
  else {
    std::string::assign((char *)param_1);
    if (unaff_RSI == (undefined4 *)0x0) goto LAB_00ac872d;
    *unaff_RSI = 0;
    *(undefined1 *)(unaff_RSI + 1) = 0;
    if (DAT_02754570 == '\0') {
      iVar5 = ___cxa_guard_acquire();
      if (iVar5 != 0) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
    }
  }
  *(undefined ***)(unaff_RSI + 2) = &DAT_02754560;
LAB_00ac872d:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


