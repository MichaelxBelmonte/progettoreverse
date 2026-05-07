// Function: FUN_01b1bda0
// Address: 01b1bda0
// Size: 727 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01b1be84) */
/* WARNING: Removing unreachable block (ram,0x01b1be8d) */

ulonglong FUN_01b1bda0(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(unaff_RDI + 0x316) == '\0') || (*(char *)(unaff_RDI + 0x315) == '\0')) {
LAB_01b1be54:
    uVar6 = 0;
  }
  else {
    FUN_01ad3cb0();
    if (local_58 == '\0') {
      if (in_stack_ffffffffffffffa0 == 0) goto LAB_01b1be54;
      FUN_00d50b00();
      if (*(int *)(unaff_RDI + 400) == -1000000) goto LAB_01b1be02;
LAB_01b1be22:
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      if ((local_58 == '\0') && (in_stack_ffffffffffffffa0 != 0)) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_0174a9c0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01770ea0();
      if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != 0)) {
        FUN_00d50b20();
      }
      uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
      if (param_2 == '\0') {
        if (*(longlong *)(unaff_RDI + 0x1a0) == 0) {
          uVar6 = 0;
        }
        else {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736e30();
          lVar2 = *(longlong *)(unaff_RDI + 0x1a0);
          if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != 0)) {
            FUN_00d50b20();
          }
          uVar6 = CONCAT71(uVar7,lVar2 != in_stack_ffffffffffffffa0 && iVar3 != iVar4);
        }
      }
      else {
        FUN_00d50b00();
        *(int *)(unaff_RDI + 0x2fc) = *(int *)(unaff_RDI + 0x2fc) + 1;
        FUN_01b05670();
        FUN_01af6500();
        FUN_00d50b20();
        uVar6 = CONCAT71(uVar7,1);
      }
      if (in_stack_ffffffffffffffa0 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (in_stack_ffffffffffffffa0 == 0) goto LAB_01b1be54;
      if (*(int *)(unaff_RDI + 400) != -1000000) goto LAB_01b1be22;
LAB_01b1be02:
      uVar6 = 0;
    }
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}


