// Function: FUN_011f83a0
// Address: 011f83a0
// Size: 868 bytes
// Class: MUPulseAssignmentTarget

int64_t * FUN_011f83a0(int64_t param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  local_38 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar5 = local_38, lVar3 == 0)) {
    lVar5 = param_1;
  }
  local_40 = '\0';
  local_48 = 0;
  FUN_0124f820();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_50 = '\0';
  local_58 = 0;
  do {
    do {
      pvVar2 = _pthread_getspecific((void*)lVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_00e7bdb0();
      lVar5 = FUN_00e7bdb0();
      cVar1 = FUN_01252960(lVar5,uVar4,&local_58,&local_68);
      pVar6 = (void*)lVar5;
      if (cVar1 == '\0') {
        *this_ptr = local_38;
        *(void*)(this_ptr + 1) = 1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        return this_ptr;
      }
    } while (local_58 == 0);
    lVar5 = *(int64_t *)(arg1 + 0x78);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_68 = FUN_011f81d0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(arg1 + 0x78);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_60 = FUN_011f81d0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    FUN_00d51d20();
    lVar3 = local_48;
    cVar1 = local_50;
    lVar5 = local_58;
    if (local_58 == local_48) {
      if ((local_50 == '\0') && (local_48 != 0)) {
        if (local_40 != '\0') goto LAB_011f8611;
        FUN_00d50b00();
        goto LAB_011f8644;
      }
LAB_011f8648:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        local_58 = lVar3;
        if ((cVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_011f8644:
        local_50 = '\x01';
        goto LAB_011f8648;
      }
      local_58 = local_48;
      if ((local_50 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
LAB_011f8611:
      local_50 = '\x01';
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = local_58;
    local_40 = '\0';
    lVar5 = local_60;
    FUN_012502a0(local_60,local_68,0);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  } while( true );
}

