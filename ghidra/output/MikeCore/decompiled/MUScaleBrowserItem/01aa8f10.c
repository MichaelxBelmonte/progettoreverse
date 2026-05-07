// Function: FUN_01aa8f10
// Address: 01aa8f10
// Size: 550 bytes
// Class: MUScaleBrowserItem


void FUN_01aa8f10(pthread_key_t param_1)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38 [8];
  char local_30 [8];
  
  if (*(longlong *)(unaff_RSI + 0x20) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_00d23310();
      pcVar3 = local_30;
      if (local_38[0] != '\0') {
        pcVar3 = local_38;
      }
      local_30[0] = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((local_30[0] == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


