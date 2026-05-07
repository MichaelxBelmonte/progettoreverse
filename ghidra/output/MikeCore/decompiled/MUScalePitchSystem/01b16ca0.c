// Function: FUN_01b16ca0
// Address: 01b16ca0
// Size: 615 bytes
// Class: MUScalePitchSystem


ulonglong FUN_01b16ca0(pthread_key_t param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong unaff_RDI;
  undefined8 unaff_R15;
  float fVar7;
  longlong local_70;
  char local_68;
  longlong *in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar3 = *(longlong *)PTR____stack_chk_guard_024a9898;
  cVar1 = *(char *)(unaff_RDI + 0x315);
  if (cVar1 == '\0') goto LAB_01b16ee0;
  FUN_01ad3cb0();
  if (local_58 == '\0') {
    if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b16ee0;
    FUN_00d50b00();
    if (in_stack_ffffffffffffffa0 != (longlong *)0x0) goto LAB_01b16d0e;
LAB_01b16d9f:
    if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b16ee0;
  }
  else {
    if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b16d9f;
LAB_01b16d0e:
    if ((param_2 == '\0') || (*(longlong *)(unaff_RDI + 0x220) == 0)) goto LAB_01b16d9f;
    FUN_00d50b00();
    *(int *)(unaff_RDI + 0x2fc) = *(int *)(unaff_RDI + 0x2fc) + 1;
    if (*(int *)(unaff_RDI + 0x184) != *(int *)(unaff_RDI + 400)) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = *(undefined4 *)(unaff_RDI + 400);
      (**(code **)(**(longlong **)(unaff_RDI + 0x220) + 0x930))();
      fVar7 = (float)_logf();
      cVar4 = FUN_017766f0(fVar7 * DAT_02394208,uVar2);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_01ad6540();
        FUN_01b07460();
        FUN_01b06a50();
        pvVar5 = _pthread_getspecific(param_1);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          in_stack_ffffffffffffffa0 =
               (longlong *)in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*in_stack_ffffffffffffffa0 + 0x3a0))();
        FUN_01aada00();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01af6500();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b16ee0:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar3) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulonglong)unaff_R15 >> 8),cVar1) & 0xffffffff;
}


