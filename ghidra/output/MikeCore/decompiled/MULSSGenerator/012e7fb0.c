// Function: FUN_012e7fb0
// Address: 012e7fb0
// Size: 810 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012e812c) */
/* WARNING: Removing unreachable block (ram,0x012e8135) */
/* WARNING: Removing unreachable block (ram,0x012e8045) */
/* WARNING: Removing unreachable block (ram,0x012e804e) */
/* WARNING: Removing unreachable block (ram,0x012e80fa) */
/* WARNING: Removing unreachable block (ram,0x012e8103) */

void FUN_012e7fb0(pthread_key_t param_1)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong in_stack_ffffffffffffffc0;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x110) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    if (local_38 == '\0') {
      if (in_stack_ffffffffffffffc0 == 0) goto LAB_012e81b4;
      FUN_00d50b00();
    }
    else if (in_stack_ffffffffffffffc0 == 0) goto LAB_012e81b4;
    lVar4 = *(longlong *)(unaff_RSI + 0x110);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      lVar4 = *(longlong *)(unaff_RSI + 0x110);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0xa8);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eff0();
    if ((local_38 == '\0') && (in_stack_ffffffffffffffc0 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_38 = '\0';
    iVar1 = FUN_00d23d20();
    FUN_00d50b20();
    if (iVar1 < *(int *)(in_stack_ffffffffffffffc0 + 0xc)) {
      lVar3 = *(longlong *)(*(longlong *)(in_stack_ffffffffffffffc0 + 0x10) + (longlong)iVar1 * 8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    in_stack_ffffffffffffffc0 = unaff_RSI;
  }
LAB_012e81b4:
  if (*(longlong *)(unaff_RSI + 0x130) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    if ((local_38 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
      FUN_00d50b20();
    }
    if (in_stack_ffffffffffffffc0 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == '\0') {
        return;
      }
      if (in_stack_ffffffffffffffc0 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


