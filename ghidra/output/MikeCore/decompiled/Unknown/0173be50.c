// Function: FUN_0173be50
// Address: 0173be50
// Size: 502 bytes
// Class: Unknown


void FUN_0173be50(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  lVar2 = DAT_027e3bd8;
  if (DAT_027e3bd8 != 0) {
    FUN_00d50b00();
  }
  FUN_017c0610();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017aa5e0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0173b120();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
    lVar2 = *(longlong *)(local_80 + 0x58);
  }
  else {
    lVar2 = *(longlong *)
             (*(longlong *)(local_80 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8) + 0x58)
    ;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01737f00();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173bbf0();
  *unaff_RDI = local_80;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


