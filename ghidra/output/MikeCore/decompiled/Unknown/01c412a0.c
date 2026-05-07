// Function: FUN_01c412a0
// Address: 01c412a0
// Size: 668 bytes
// Class: Unknown
// String references:
//   "Untitled_%I"


/* WARNING: Removing unreachable block (ram,0x01c41502) */
/* WARNING: Removing unreachable block (ram,0x01c4150f) */

void FUN_01c412a0(pthread_key_t param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined8 *unaff_RDI;
  undefined *local_58;
  char local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_017d1ec0();
  if (cVar2 == '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017cb7f0();
    puVar4 = local_48;
    if (local_48 == (undefined *)0x0) goto LAB_01c413db;
    bVar1 = true;
    if ((char)local_40 == '\0') {
      FUN_00d50b00();
      if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017cc6c0();
    puVar4 = local_48;
    if (local_48 == (undefined *)0x0) {
LAB_01c413db:
      puVar4 = (undefined *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if ((char)local_40 == '\0') {
        FUN_00d50b00();
        if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if (puVar4 == (undefined *)0x0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017cb550();
    puVar4 = local_48;
    if (local_48 != (undefined *)0x0) {
      if ((((char)local_40 == '\0') && (FUN_00d50b00(), (char)local_40 != '\0')) &&
         (local_48 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto LAB_01c4151b;
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = FUN_017cac30();
    local_40 = 1;
    local_48 = &DAT_024da828;
    FUN_00d8cb40(&DAT_024da828,&local_48);
    if (local_58 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      bVar1 = true;
      puVar4 = local_58;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (!bVar1) {
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
LAB_01c4151b:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


