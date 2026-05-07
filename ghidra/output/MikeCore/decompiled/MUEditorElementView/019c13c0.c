// Function: FUN_019c13c0
// Address: 019c13c0
// Size: 558 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019c1530) */
/* WARNING: Removing unreachable block (ram,0x019c153d) */
/* WARNING: Removing unreachable block (ram,0x019c149d) */
/* WARNING: Removing unreachable block (ram,0x019c14a6) */
/* WARNING: Removing unreachable block (ram,0x019c15b1) */
/* WARNING: Removing unreachable block (ram,0x019c15ba) */
/* WARNING: Removing unreachable block (ram,0x019c13ff) */
/* WARNING: Removing unreachable block (ram,0x019c1408) */

void FUN_019c13c0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  
  (**(code **)(*unaff_RDI + 0xe20))();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00e7b500(DAT_023908c8,0);
  if (*(int *)(local_38 + 0xc) != 0) {
    FUN_01266770();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a280();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)((longlong)&dylib_command_00001288.cmd + *unaff_RDI))();
    if (cVar1 == '\0') {
      FUN_01266b80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012646c0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01266b80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01259520();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(&DAT_000015f8 + *unaff_RDI))();
  FUN_00d50b20();
  return;
}


