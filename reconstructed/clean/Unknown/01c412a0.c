// Function: FUN_01c412a0
// Address: 01c412a0
// Size: 668 bytes
// Class: Unknown
// String references:
//   "Untitled_%I"

void FUN_01c412a0(void* param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  void*puVar4;
  void*this_ptr;
  void*local_58;
  char local_50;
  void*local_48;
  uint32_t local_40;
  uint64_t local_38;
  
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
    if (local_48 == (void*)0x0) goto LAB_01c413db;
    bVar1 = true;
    if ((char)local_40 == '\0') {
      FUN_00d50b00();
      if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
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
    if (local_48 == (void*)0x0) {
LAB_01c413db:
      puVar4 = (void*)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if ((char)local_40 == '\0') {
        FUN_00d50b00();
        if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if (puVar4 == (void*)0x0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017cb550();
    puVar4 = local_48;
    if (local_48 != (void*)0x0) {
      if ((((char)local_40 == '\0') && (FUN_00d50b00(), (char)local_40 != '\0')) &&
         (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      goto LAB_01c4151b;
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = FUN_017cac30();
    local_40 = 1;
    local_48 = &g_024da828;
    FUN_00d8cb40(&g_024da828,&local_48);
    if (local_58 == (void*)0x0) {
      puVar4 = (void*)0x0;
    }
    else {
      bVar1 = true;
      puVar4 = local_58;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if (!bVar1) {
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
LAB_01c4151b:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

