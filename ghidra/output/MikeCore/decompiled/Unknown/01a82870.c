// Function: FUN_01a82870
// Address: 01a82870
// Size: 832 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a82b72) */
/* WARNING: Removing unreachable block (ram,0x01a82b7f) */
/* WARNING: Removing unreachable block (ram,0x01a829c7) */
/* WARNING: Removing unreachable block (ram,0x01a829d0) */
/* WARNING: Removing unreachable block (ram,0x01a82a7f) */
/* WARNING: Removing unreachable block (ram,0x01a82b25) */
/* WARNING: Removing unreachable block (ram,0x01a82b32) */

void FUN_01a82870(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01a81c00();
  (**(code **)(*unaff_RSI + 0x928))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == local_50) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar1 = *param_2;
    if ((char)param_2[1] == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else {
    (**(code **)(*unaff_RSI + 0x928))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0126e7e0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *param_2;
    iVar2 = FUN_00d237a0();
    if (iVar2 == -1) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      FUN_01a81c00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126e7e0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar2 * 8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


