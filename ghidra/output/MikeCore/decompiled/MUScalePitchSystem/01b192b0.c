// Function: FUN_01b192b0
// Address: 01b192b0
// Size: 608 bytes
// Class: MUScalePitchSystem


undefined4 FUN_01b192b0(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong in_stack_ffffffffffffffa8;
  char local_50;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(unaff_RDI + 0x315) == '\0') || (*(char *)(unaff_RDI + 0x316) == '\0')) {
LAB_01b193dc:
    uVar2 = 0;
  }
  else {
    FUN_01ad3cb0();
    if (local_50 == '\0') {
      if (in_stack_ffffffffffffffa8 == 0) goto LAB_01b193dc;
      FUN_00d50b00();
      if (param_2 != '\0') goto LAB_01b19317;
LAB_01b193ab:
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_017732e0();
      if ((local_50 != '\0') && (in_stack_ffffffffffffffa8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (in_stack_ffffffffffffffa8 == 0) goto LAB_01b193dc;
      if (param_2 == '\0') goto LAB_01b193ab;
LAB_01b19317:
      FUN_00d50b00();
      *(int *)(unaff_RDI + 0x2fc) = *(int *)(unaff_RDI + 0x2fc) + 1;
      FUN_01ad6350();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01773460();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_01ad71a0();
      FUN_01b03750();
      FUN_01ad37a0();
      FUN_01ad6540();
      FUN_01af6500();
      FUN_00d50b20();
      uVar2 = 0x2802501;
    }
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}


