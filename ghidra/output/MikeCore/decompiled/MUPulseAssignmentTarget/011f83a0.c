// Function: FUN_011f83a0
// Address: 011f83a0
// Size: 868 bytes
// Class: MUPulseAssignmentTarget


longlong * FUN_011f83a0(longlong param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  local_38 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
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
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_00e7bdb0();
      lVar5 = FUN_00e7bdb0();
      cVar1 = FUN_01252960(lVar5,uVar4,&local_58,&local_68);
      pVar6 = (pthread_key_t)lVar5;
      if (cVar1 == '\0') {
        *unaff_RDI = local_38;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        return unaff_RDI;
      }
    } while (local_58 == 0);
    lVar5 = *(longlong *)(unaff_RSI + 0x78);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_68 = FUN_011f81d0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RSI + 0x78);
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


