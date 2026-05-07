// Function: FUN_01c631e0
// Address: 01c631e0
// Size: 676 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01c6336a) */
/* WARNING: Removing unreachable block (ram,0x01c63373) */
/* WARNING: Removing unreachable block (ram,0x01c6346d) */
/* WARNING: Removing unreachable block (ram,0x01c6347a) */

undefined8 FUN_01c631e0(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((((*param_2 == 0) || (iVar3 = FUN_01d3a5a0(), iVar3 != 1)) ||
      (iVar3 = FUN_01d3b620(), iVar3 != 2)) || (iVar3 = FUN_01d3b630(), iVar3 != 1)) {
    uVar5 = 0;
    lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  }
  else {
    if (unaff_RDI != 0) {
      FUN_00d50b00();
      FUN_01c427d0();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_016cbba0();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016feca0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01c62c70();
    if (*(longlong *)(unaff_RDI + 0x188) != 0) {
      FUN_00d50b00();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c1150();
      FUN_00d50b20();
    }
    FUN_01c4df60();
    FUN_016bf0c0();
    *(undefined1 *)(unaff_RDI + 0x218) = 0;
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    FUN_01c429a0();
    FUN_00d50b20();
    uVar5 = 1;
    lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  }
  if (lVar2 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}


