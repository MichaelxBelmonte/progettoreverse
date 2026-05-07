// Function: FUN_00ac7560
// Address: 00ac7560
// Size: 2039 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac7560(char *param_1,int *param_2,size_t param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  ssize_t sVar4;
  int iVar5;
  int iVar6;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  int extraout_var_04;
  int extraout_var_05;
  int extraout_var_06;
  int extraout_var_07;
  int extraout_var_08;
  int extraout_var_09;
  int extraout_var_10;
  int extraout_var_11;
  int extraout_var_12;
  int extraout_var_13;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *unaff_RDI;
  undefined4 uVar11;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  unaff_RDI[2] = 0;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
  sVar4 = _readlink(param_1,(char *)&segment_command_000003d8.fileoff,param_3);
  if (extraout_var < 0) {
LAB_00ac7a82:
    uVar9 = (ulong)param_1;
    piVar7 = ___error();
    iVar5 = *piVar7;
    if (param_2 == (int *)0x0) {
      ___cxa_allocate_exception();
      puVar8 = operator_new(uVar9);
      *(undefined8 *)((longlong)puVar8 + 0x17) = 0x6b6e696c6d79735f;
      puVar8[2] = 0x5f646165723a3a6d;
      puVar8[1] = 0x6574737973656c69;
      *puVar8 = 0x663a3a74736f6f62;
      *(undefined1 *)((longlong)puVar8 + 0x1f) = 0;
      if ((DAT_02754570 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      uVar2 = (**(code **)(DAT_02754560 + 0x30))();
      uVar11 = FUN_00ac4640((ulonglong)CONCAT14(uVar2,iVar5));
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar11,FUN_00ac46f0);
    }
    if ((DAT_02754570 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      DAT_02754568 = 0x8fafd21e25c5e09b;
      DAT_02754560 = &DAT_02520080;
      ___cxa_guard_release();
    }
    *param_2 = iVar5;
    uVar2 = (**(code **)(DAT_02754560 + 0x30))();
  }
  else {
    if (CONCAT44(extraout_var,sVar4) < 0x400) {
      FUN_00ac90e0();
      if (param_2 != (int *)0x0) {
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 0;
        if ((DAT_02754570 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          DAT_02754568 = 0x8fafd21e25c5e09b;
          DAT_02754560 = &DAT_02520080;
          ___cxa_guard_release();
        }
        *(undefined ***)(param_2 + 2) = &DAT_02754560;
      }
      goto LAB_00ac761a;
    }
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,(char *)&section_000007e0.addr,param_3);
    if (extraout_var_00 < 0) {
LAB_00ac7a7a:
      operator_delete__(param_1);
      goto LAB_00ac7a82;
    }
    if (CONCAT44(extraout_var_00,sVar4) < 0x800) {
LAB_00ac7675:
      FUN_00ac90e0();
      if (param_2 != (int *)0x0) {
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 0;
        if ((DAT_02754570 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          DAT_02754568 = 0x8fafd21e25c5e09b;
          param_1 = &DAT_02520080;
          DAT_02754560 = &DAT_02520080;
          ___cxa_guard_release();
        }
        *(undefined ***)(param_2 + 2) = &DAT_02754560;
      }
      operator_delete__(param_1);
      goto LAB_00ac761a;
    }
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,(char *)&dylib_command_00000ff0.dylib.current_version,param_3);
    if (extraout_var_01 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_01,sVar4) < 0x1000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,"",param_3);
    if (extraout_var_02 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_02,sVar4) < 0x2000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,&DAT_00004000,param_3);
    if (extraout_var_03 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_03,sVar4) < 0x4000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,&DAT_00008000,param_3);
    if (extraout_var_04 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_04,sVar4) < 0x8000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,(char *)0x10000,param_3);
    if (extraout_var_05 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_05,sVar4) < 0x10000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,(char *)0x20000,param_3);
    if (extraout_var_06 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_06,sVar4) < 0x20000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,(char *)0x40000,param_3);
    if (extraout_var_07 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_07,sVar4) < 0x40000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,&DAT_00080000,param_3);
    if (extraout_var_08 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_08,sVar4) < 0x80000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,&LAB_00100000,param_3);
    if (extraout_var_09 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_09,sVar4) < 0x100000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,&DAT_00200000,param_3);
    if (extraout_var_10 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_10,sVar4) < 0x200000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,"",param_3);
    if (extraout_var_11 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_11,sVar4) < 0x400000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,&LAB_00800000,param_3);
    if (extraout_var_12 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_12,sVar4) < 0x800000) goto LAB_00ac7675;
    operator_delete__(param_1);
    operator_new__((ulong)param_1);
    sVar4 = _readlink(param_1,&DAT_01000000,param_3);
    if (extraout_var_13 < 0) goto LAB_00ac7a7a;
    if (CONCAT44(extraout_var_13,sVar4) < 0x1000000) goto LAB_00ac7675;
    operator_delete__(param_1);
    uVar9 = (ulong)param_1;
    if (param_2 == (int *)0x0) {
      ___cxa_allocate_exception();
      puVar8 = operator_new(uVar9);
      *(undefined8 *)((longlong)puVar8 + 0x17) = 0x6b6e696c6d79735f;
      puVar8[2] = 0x5f646165723a3a6d;
      puVar8[1] = 0x6574737973656c69;
      *puVar8 = 0x663a3a74736f6f62;
      *(undefined1 *)((longlong)puVar8 + 0x1f) = 0;
      if ((DAT_02754570 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      cVar3 = (**(code **)(DAT_02754560 + 0x30))();
      uVar10 = 0x3f;
      if (cVar3 != '\0') {
        uVar10 = 0x10000003f;
      }
      uVar11 = FUN_00ac4640(uVar10);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar11,FUN_00ac46f0);
    }
    if ((DAT_02754570 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      DAT_02754568 = 0x8fafd21e25c5e09b;
      DAT_02754560 = &DAT_02520080;
      ___cxa_guard_release();
    }
    *param_2 = 0x3f;
    uVar2 = (**(code **)(DAT_02754560 + 0x30))();
  }
  *(undefined1 *)(param_2 + 1) = uVar2;
  *(undefined ***)(param_2 + 2) = &DAT_02754560;
LAB_00ac761a:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


