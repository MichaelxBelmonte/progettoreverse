// Function: FUN_00656960
// Address: 00656960
// Size: 1229 bytes
// Class: MUMultiTrackView


/* WARNING: Removing unreachable block (ram,0x00656a7f) */
/* WARNING: Removing unreachable block (ram,0x00656a8b) */
/* WARNING: Removing unreachable block (ram,0x00656c1d) */
/* WARNING: Removing unreachable block (ram,0x00656c29) */

void FUN_00656960(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  pthread_key_t pVar5;
  longlong *unaff_RSI;
  longlong lVar6;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d610();
  lVar6 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = lVar6;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c1150();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d960();
  if (lVar6 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    lVar1 = local_40;
    if (((local_38 == '\0') && (local_40 != 0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e8 = local_48;
    local_e0 = '\0';
    local_d8 = *unaff_RSI;
    local_d0 = '\0';
    uVar3 = FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    local_c0 = '\0';
    local_c8 = 0;
    pVar5 = (pthread_key_t)&local_d8;
    FUN_01516650(0,&local_e8,uVar3,uVar4);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = lVar1;
    local_b0 = '\0';
    local_a8 = local_48;
    local_a0 = '\0';
    local_98 = *unaff_RSI;
    local_90 = '\0';
    uVar3 = FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    local_80 = '\0';
    local_88 = 0;
    FUN_01516720(0,&local_a8,uVar3,uVar4);
    lVar6 = local_48;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  local_78 = DAT_027ebe30;
  if (DAT_027ebe30 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_68 = *unaff_RSI;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d40470(&local_58,&local_68,3,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}


