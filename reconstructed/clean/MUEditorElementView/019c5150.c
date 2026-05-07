// Function: FUN_019c5150
// Address: 019c5150
// Size: 1690 bytes
// Class: MUEditorElementView

int64_t * FUN_019c5150(void)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00243390();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_01271180();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if (local_78 != 0) {
    if (0 < *(int *)(local_78 + 0xc)) {
      uVar3 = 0;
      do {
        uVar4 = (uint64_t)uVar3;
        FUN_01266770();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        while( true ) {
          pvVar2 = _pthread_getspecific((void*)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012640f0();
          if (local_40 == 0) {
            cVar1 = '\0';
          }
          else {
            pvVar2 = _pthread_getspecific((void*)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012640f0();
            pvVar2 = _pthread_getspecific((void*)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01263cf0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') break;
          pvVar2 = _pthread_getspecific((void*)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012640f0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
        }
        FUN_01266b80();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        while( true ) {
          pvVar2 = _pthread_getspecific((void*)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012641c0();
          if (local_40 == 0) {
            cVar1 = '\0';
          }
          else {
            pvVar2 = _pthread_getspecific((void*)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012641c0();
            pvVar2 = _pthread_getspecific((void*)uVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01263cf0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') break;
          pvVar2 = _pthread_getspecific((void*)uVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012641c0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(local_78 + 0xc));
    }
    FUN_01a02020();
    FUN_00d50b20();
  }
  *this_ptr = local_78;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

