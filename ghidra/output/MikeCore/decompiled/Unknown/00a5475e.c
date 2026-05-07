// Function: FUN_00a5475e
// Address: 00a5475e
// Size: 534 bytes
// Class: Unknown


longlong * FUN_00a5475e(void *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  
  if (DAT_028a0980 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      DAT_028a0978 = operator_new((ulong)param_1);
      param_1 = (void *)0x0;
      DAT_028a0978[2] = 0;
      DAT_028a0978[1] = 0;
      *DAT_028a0978 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  FUN_00a1a190();
  uVar3 = FUN_00a1a190();
  FUN_00a431c0(uVar3,DAT_02753f08);
  plVar1 = DAT_028a0978;
  if (*DAT_028a0978 != 0) {
    DAT_028a0978[1] = *DAT_028a0978;
    operator_delete(param_1);
    plVar1[2] = 0;
    plVar1[1] = 0;
    *plVar1 = 0;
  }
  *plVar1 = local_68;
  plVar1[1] = lStack_60;
  plVar1[2] = local_58;
  FUN_00a44720();
  return DAT_028a0978;
}


